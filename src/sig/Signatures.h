#ifndef _signatures_h
#define _signatures_h

#include <map>
#include <string>
#include "../sdk/CBasePlayerController.h"

typedef void (*ClientPrint)(CBasePlayerController *, int, const char *, const char *, const char *, const char *, const char *);

class Signatures
{
private:
    std::map<std::string, void *> signatures;

public:
    void LoadSignatures();

    template <typename T>
    T FetchSignature(std::string name)
    {
        if (!this->Exists(name))
            return nullptr;

        return reinterpret_cast<T>(this->signatures.at(name));
    }

    void *FetchRawSignature(std::string name)
    {
        if (!this->Exists(name))
            return nullptr;

        return this->signatures.at(name);
    }

    bool Exists(std::string name);
};

extern Signatures *g_Signatures;

#endif