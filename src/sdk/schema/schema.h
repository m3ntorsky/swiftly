#ifndef _schema_h
#define _schema_h

#include <stdint.h>

#include "../../memory/signatures/Signatures.h"
#include "../interfaces/cschemasystem.h"

class CBaseEntity;
void SetStateChanged(uintptr_t entityPtr, std::string className, std::string fieldName, int extraOffset);

constexpr uint32_t val_32_const = 0x811c9dc5;
constexpr uint32_t prime_32_const = 0x1000193;
constexpr uint64_t val_64_const = 0xcbf29ce484222325;
constexpr uint64_t prime_64_const = 0x100000001b3;

inline constexpr uint32_t hash_32_fnv1a_const(const char* const str, const uint32_t value = val_32_const) noexcept
{
    return (str[0] == '\0') ? value : hash_32_fnv1a_const(&str[1], (value ^ uint32_t(str[0])) * prime_32_const);
}

inline constexpr uint64_t hash_64_fnv1a_const(const char* const str, const uint64_t value = val_64_const) noexcept
{
    return (str[0] == '\0') ? value : hash_64_fnv1a_const(&str[1], (value ^ uint64_t(str[0])) * prime_64_const);
}

namespace sch
{
    int32_t FindChainOffset(const char* className);
    
    int32_t GetOffset(const char* className, const char* memberName);
    int32_t GetOffset(uint64_t path);
    
    bool IsNetworked(const char* className, const char* memberName);
    bool IsNetworked(uint64_t path);

    bool IsStruct(const char* cName);
    bool IsClassLoaded(const char* cName);
};

#define SCHEMA_FIELD_OFFSET(type, varName, extra_offset)                                                                                                          \
    class varName##_prop                                                                                                                                          \
    {                                                                                                                                                             \
    public:                                                                                                                                                       \
        std::add_lvalue_reference_t<type> Get()                                                                                                                   \
        {                                                                                                                                                         \
            static const auto m_key =                                                                                                                             \
                sch::GetOffset(ThisClassName, #varName);                                                                                                          \
                                                                                                                                                                  \
            static const size_t offset = offsetof(ThisClass, varName);                                                                                            \
            ThisClass *pThisClass = (ThisClass *)((byte *)this - offset);                                                                                         \
                                                                                                                                                                  \
            return *reinterpret_cast<std::add_pointer_t<type>>(                                                                                                   \
                (uintptr_t)(pThisClass) + m_key + extra_offset);                                                                                           \
        }                                                                                                                                                         \
        void Set(type val)                                                                                                                                        \
        {                                                                                                                                                         \
            static const auto m_key =                                                                                                                             \
                sch::GetOffset(ThisClassName, #varName);                                                                                                          \
                                                                                                                                                                  \
            static const size_t offset = offsetof(ThisClass, varName);                                                                                            \
            ThisClass *pThisClass = (ThisClass *)((byte *)this - offset);                                                                                         \
                                                                                                                                                                  \
            SetStateChanged((uintptr_t)pThisClass, ThisClassName, #varName, extra_offset);                                                              \
            *reinterpret_cast<std::add_pointer_t<type>>((uintptr_t)(pThisClass) + m_key + extra_offset) = val;                                             \
        }                                                                                                                                                         \
        void StateUpdate()                                                                                                                                        \
        {                                                                                                                                                         \
            static const size_t offset = offsetof(ThisClass, varName);                                                                                            \
            ThisClass *pThisClass = (ThisClass *)((byte *)this - offset);                                                                                         \
                                                                                                                                                                  \
            SetStateChanged((uintptr_t)pThisClass, ThisClassName, #varName, extra_offset);                                                              \
        }                                                                                                                                                         \
        operator std::add_lvalue_reference_t<type>() { return Get(); }                                                                                            \
        std::add_lvalue_reference_t<type> operator()() { return Get(); }                                                                                          \
        std::add_lvalue_reference_t<type> operator->() { return Get(); }                                                                                          \
        void operator()(type val) { Set(val); }                                                                                                                   \
        void operator=(type val) { Set(val); }                                                                                                                    \
    } varName;

#define SCHEMA_FIELD_POINTER_OFFSET(type, varName, extra_offset)                       \
    class varName##_prop                                                               \
    {                                                                                  \
    public:                                                                            \
        type *Get()                                                                    \
        {                                                                              \
            static const auto m_key =                                                  \
                sch::GetOffset(ThisClassName, #varName);                               \
                                                                                       \
            static const size_t offset = offsetof(ThisClass, varName);                 \
            ThisClass *pThisClass = (ThisClass *)((byte *)this - offset);              \
                                                                                       \
            return reinterpret_cast<std::add_pointer_t<type>>(                         \
                (uintptr_t)(pThisClass) + m_key + extra_offset);                \
        }                                                                              \
        operator type *() { return Get(); }                                            \
        type *operator()() { return Get(); }                                           \
        type *operator->() { return Get(); }                                           \
    } varName;

#define DECLARE_SCHEMA_CLASS_BASE(className)                 \
    typedef className ThisClass;                             \
    static constexpr const char *ThisClassName = #className;

#endif