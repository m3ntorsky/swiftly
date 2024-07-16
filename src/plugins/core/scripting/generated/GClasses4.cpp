#include "classes.h"

#include "../../../../sdk/entity/CBaseEntity.h"
#include "../../../../sdk/entity/CBaseModelEntity.h"

GFeBuildTaperedCapsuleRigid_t::GFeBuildTaperedCapsuleRigid_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeBuildTaperedCapsuleRigid_t::GFeBuildTaperedCapsuleRigid_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GFeBuildTaperedCapsuleRigid_t::GetPriority() const {
    return GetSchemaValue<int32_t>(m_ptr, "FeBuildTaperedCapsuleRigid_t", "m_nPriority");
}
void GFeBuildTaperedCapsuleRigid_t::SetPriority(int32_t value) {
    SetSchemaValue(m_ptr, "FeBuildTaperedCapsuleRigid_t", "m_nPriority", true, value);
}
uint32_t GFeBuildTaperedCapsuleRigid_t::GetVertexMapHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeBuildTaperedCapsuleRigid_t", "m_nVertexMapHash");
}
void GFeBuildTaperedCapsuleRigid_t::SetVertexMapHash(uint32_t value) {
    SetSchemaValue(m_ptr, "FeBuildTaperedCapsuleRigid_t", "m_nVertexMapHash", true, value);
}
void* GFeBuildTaperedCapsuleRigid_t::GetPtr() {
    return m_ptr;
}
std::string GFeBuildTaperedCapsuleRigid_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeBuildTaperedCapsuleRigid_t::IsValid() {
    return (m_ptr != nullptr);
}
GFeTaperedCapsuleRigid_t GFeBuildTaperedCapsuleRigid_t::GetParent() const {
    GFeTaperedCapsuleRigid_t value(m_ptr);
    return value;
}
void GFeBuildTaperedCapsuleRigid_t::SetParent(GFeTaperedCapsuleRigid_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassFeBuildTaperedCapsuleRigid_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeBuildTaperedCapsuleRigid_t>("FeBuildTaperedCapsuleRigid_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Priority", &GFeBuildTaperedCapsuleRigid_t::GetPriority, &GFeBuildTaperedCapsuleRigid_t::SetPriority)
        .addProperty("VertexMapHash", &GFeBuildTaperedCapsuleRigid_t::GetVertexMapHash, &GFeBuildTaperedCapsuleRigid_t::SetVertexMapHash)
        .addProperty("Parent", &GFeBuildTaperedCapsuleRigid_t::GetParent, &GFeBuildTaperedCapsuleRigid_t::SetParent)
        .addFunction("ToPtr", &GFeBuildTaperedCapsuleRigid_t::ToPtr)
        .addFunction("IsValid", &GFeBuildTaperedCapsuleRigid_t::IsValid)
        .endClass();
}
GCStateUpdateData::GCStateUpdateData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCStateUpdateData::GCStateUpdateData(void *ptr) {
    m_ptr = ptr;
}
std::string GCStateUpdateData::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CStateUpdateData", "m_name").Get();
}
void GCStateUpdateData::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CStateUpdateData", "m_name", false, CUtlString(value.c_str()));
}
GAnimScriptHandle GCStateUpdateData::GetScript() const {
    GAnimScriptHandle value(GetSchemaPtr(m_ptr, "CStateUpdateData", "m_hScript"));
    return value;
}
void GCStateUpdateData::SetScript(GAnimScriptHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Script' is not possible.\n");
}
std::vector<int32> GCStateUpdateData::GetTransitionIndices() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "CStateUpdateData", "m_transitionIndices"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCStateUpdateData::SetTransitionIndices(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "CStateUpdateData", "m_transitionIndices", false, value);
}
std::vector<GCStateActionUpdater> GCStateUpdateData::GetActions() const {
    CUtlVector<GCStateActionUpdater>* vec = GetSchemaValue<CUtlVector<GCStateActionUpdater>*>(m_ptr, "CStateUpdateData", "m_actions"); std::vector<GCStateActionUpdater> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCStateUpdateData::SetActions(std::vector<GCStateActionUpdater> value) {
    SetSchemaValueCUtlVector<GCStateActionUpdater>(m_ptr, "CStateUpdateData", "m_actions", false, value);
}
GAnimStateID GCStateUpdateData::GetStateID() const {
    GAnimStateID value(GetSchemaPtr(m_ptr, "CStateUpdateData", "m_stateID"));
    return value;
}
void GCStateUpdateData::SetStateID(GAnimStateID value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'StateID' is not possible.\n");
}
void* GCStateUpdateData::GetPtr() {
    return m_ptr;
}
std::string GCStateUpdateData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCStateUpdateData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCStateUpdateData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCStateUpdateData>("CStateUpdateData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCStateUpdateData::GetName, &GCStateUpdateData::SetName)
        .addProperty("Script", &GCStateUpdateData::GetScript, &GCStateUpdateData::SetScript)
        .addProperty("TransitionIndices", &GCStateUpdateData::GetTransitionIndices, &GCStateUpdateData::SetTransitionIndices)
        .addProperty("Actions", &GCStateUpdateData::GetActions, &GCStateUpdateData::SetActions)
        .addProperty("StateID", &GCStateUpdateData::GetStateID, &GCStateUpdateData::SetStateID)
        .addFunction("ToPtr", &GCStateUpdateData::ToPtr)
        .addFunction("IsValid", &GCStateUpdateData::IsValid)
        .endClass();
}
GCPhysSurfaceProperties::GCPhysSurfaceProperties(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCPhysSurfaceProperties::GCPhysSurfaceProperties(void *ptr) {
    m_ptr = ptr;
}
std::string GCPhysSurfaceProperties::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CPhysSurfaceProperties", "m_name").Get();
}
void GCPhysSurfaceProperties::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CPhysSurfaceProperties", "m_name", false, CUtlString(value.c_str()));
}
uint32_t GCPhysSurfaceProperties::GetNameHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CPhysSurfaceProperties", "m_nameHash");
}
void GCPhysSurfaceProperties::SetNameHash(uint32_t value) {
    SetSchemaValue(m_ptr, "CPhysSurfaceProperties", "m_nameHash", false, value);
}
uint32_t GCPhysSurfaceProperties::GetBaseNameHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CPhysSurfaceProperties", "m_baseNameHash");
}
void GCPhysSurfaceProperties::SetBaseNameHash(uint32_t value) {
    SetSchemaValue(m_ptr, "CPhysSurfaceProperties", "m_baseNameHash", false, value);
}
bool GCPhysSurfaceProperties::GetHidden() const {
    return GetSchemaValue<bool>(m_ptr, "CPhysSurfaceProperties", "m_bHidden");
}
void GCPhysSurfaceProperties::SetHidden(bool value) {
    SetSchemaValue(m_ptr, "CPhysSurfaceProperties", "m_bHidden", false, value);
}
std::string GCPhysSurfaceProperties::GetDescription() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CPhysSurfaceProperties", "m_description").Get();
}
void GCPhysSurfaceProperties::SetDescription(std::string value) {
    SetSchemaValue(m_ptr, "CPhysSurfaceProperties", "m_description", false, CUtlString(value.c_str()));
}
GCPhysSurfacePropertiesPhysics GCPhysSurfaceProperties::GetPhysics() const {
    GCPhysSurfacePropertiesPhysics value(GetSchemaPtr(m_ptr, "CPhysSurfaceProperties", "m_physics"));
    return value;
}
void GCPhysSurfaceProperties::SetPhysics(GCPhysSurfacePropertiesPhysics value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Physics' is not possible.\n");
}
GCPhysSurfacePropertiesSoundNames GCPhysSurfaceProperties::GetAudioSounds() const {
    GCPhysSurfacePropertiesSoundNames value(GetSchemaPtr(m_ptr, "CPhysSurfaceProperties", "m_audioSounds"));
    return value;
}
void GCPhysSurfaceProperties::SetAudioSounds(GCPhysSurfacePropertiesSoundNames value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'AudioSounds' is not possible.\n");
}
GCPhysSurfacePropertiesAudio GCPhysSurfaceProperties::GetAudioParams() const {
    GCPhysSurfacePropertiesAudio value(GetSchemaPtr(m_ptr, "CPhysSurfaceProperties", "m_audioParams"));
    return value;
}
void GCPhysSurfaceProperties::SetAudioParams(GCPhysSurfacePropertiesAudio value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'AudioParams' is not possible.\n");
}
void* GCPhysSurfaceProperties::GetPtr() {
    return m_ptr;
}
std::string GCPhysSurfaceProperties::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCPhysSurfaceProperties::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCPhysSurfaceProperties(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCPhysSurfaceProperties>("CPhysSurfaceProperties")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCPhysSurfaceProperties::GetName, &GCPhysSurfaceProperties::SetName)
        .addProperty("NameHash", &GCPhysSurfaceProperties::GetNameHash, &GCPhysSurfaceProperties::SetNameHash)
        .addProperty("BaseNameHash", &GCPhysSurfaceProperties::GetBaseNameHash, &GCPhysSurfaceProperties::SetBaseNameHash)
        .addProperty("Hidden", &GCPhysSurfaceProperties::GetHidden, &GCPhysSurfaceProperties::SetHidden)
        .addProperty("Description", &GCPhysSurfaceProperties::GetDescription, &GCPhysSurfaceProperties::SetDescription)
        .addProperty("Physics", &GCPhysSurfaceProperties::GetPhysics, &GCPhysSurfaceProperties::SetPhysics)
        .addProperty("AudioSounds", &GCPhysSurfaceProperties::GetAudioSounds, &GCPhysSurfaceProperties::SetAudioSounds)
        .addProperty("AudioParams", &GCPhysSurfaceProperties::GetAudioParams, &GCPhysSurfaceProperties::SetAudioParams)
        .addFunction("ToPtr", &GCPhysSurfaceProperties::ToPtr)
        .addFunction("IsValid", &GCPhysSurfaceProperties::IsValid)
        .endClass();
}
GCMotionSearchNode::GCMotionSearchNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionSearchNode::GCMotionSearchNode(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCMotionSearchNode*> GCMotionSearchNode::GetChildren() const {
    CUtlVector<GCMotionSearchNode*>* vec = GetSchemaValue<CUtlVector<GCMotionSearchNode*>*>(m_ptr, "CMotionSearchNode", "m_children"); std::vector<GCMotionSearchNode*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionSearchNode::SetChildren(std::vector<GCMotionSearchNode*> value) {
    SetSchemaValueCUtlVector<GCMotionSearchNode*>(m_ptr, "CMotionSearchNode", "m_children", false, value);
}
GCVectorQuantizer GCMotionSearchNode::GetQuantizer() const {
    GCVectorQuantizer value(GetSchemaPtr(m_ptr, "CMotionSearchNode", "m_quantizer"));
    return value;
}
void GCMotionSearchNode::SetQuantizer(GCVectorQuantizer value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Quantizer' is not possible.\n");
}
std::vector<int32> GCMotionSearchNode::GetSelectableSamples() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "CMotionSearchNode", "m_selectableSamples"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionSearchNode::SetSelectableSamples(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "CMotionSearchNode", "m_selectableSamples", false, value);
}
void* GCMotionSearchNode::GetPtr() {
    return m_ptr;
}
std::string GCMotionSearchNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionSearchNode::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMotionSearchNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionSearchNode>("CMotionSearchNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Children", &GCMotionSearchNode::GetChildren, &GCMotionSearchNode::SetChildren)
        .addProperty("Quantizer", &GCMotionSearchNode::GetQuantizer, &GCMotionSearchNode::SetQuantizer)
        .addProperty("SelectableSamples", &GCMotionSearchNode::GetSelectableSamples, &GCMotionSearchNode::SetSelectableSamples)
        .addFunction("ToPtr", &GCMotionSearchNode::ToPtr)
        .addFunction("IsValid", &GCMotionSearchNode::IsValid)
        .endClass();
}
GVMixVocoderDesc_t::GVMixVocoderDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixVocoderDesc_t::GVMixVocoderDesc_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GVMixVocoderDesc_t::GetBandCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "VMixVocoderDesc_t", "m_nBandCount");
}
void GVMixVocoderDesc_t::SetBandCount(int32_t value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_nBandCount", true, value);
}
float GVMixVocoderDesc_t::GetBandwidth() const {
    return GetSchemaValue<float>(m_ptr, "VMixVocoderDesc_t", "m_flBandwidth");
}
void GVMixVocoderDesc_t::SetBandwidth(float value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_flBandwidth", true, value);
}
float GVMixVocoderDesc_t::GetFldBModGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixVocoderDesc_t", "m_fldBModGain");
}
void GVMixVocoderDesc_t::SetFldBModGain(float value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_fldBModGain", true, value);
}
float GVMixVocoderDesc_t::GetFreqRangeStart() const {
    return GetSchemaValue<float>(m_ptr, "VMixVocoderDesc_t", "m_flFreqRangeStart");
}
void GVMixVocoderDesc_t::SetFreqRangeStart(float value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_flFreqRangeStart", true, value);
}
float GVMixVocoderDesc_t::GetFreqRangeEnd() const {
    return GetSchemaValue<float>(m_ptr, "VMixVocoderDesc_t", "m_flFreqRangeEnd");
}
void GVMixVocoderDesc_t::SetFreqRangeEnd(float value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_flFreqRangeEnd", true, value);
}
float GVMixVocoderDesc_t::GetFldBUnvoicedGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixVocoderDesc_t", "m_fldBUnvoicedGain");
}
void GVMixVocoderDesc_t::SetFldBUnvoicedGain(float value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_fldBUnvoicedGain", true, value);
}
float GVMixVocoderDesc_t::GetAttackTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixVocoderDesc_t", "m_flAttackTimeMS");
}
void GVMixVocoderDesc_t::SetAttackTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_flAttackTimeMS", true, value);
}
float GVMixVocoderDesc_t::GetReleaseTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixVocoderDesc_t", "m_flReleaseTimeMS");
}
void GVMixVocoderDesc_t::SetReleaseTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_flReleaseTimeMS", true, value);
}
int32_t GVMixVocoderDesc_t::GetDebugBand() const {
    return GetSchemaValue<int32_t>(m_ptr, "VMixVocoderDesc_t", "m_nDebugBand");
}
void GVMixVocoderDesc_t::SetDebugBand(int32_t value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_nDebugBand", true, value);
}
bool GVMixVocoderDesc_t::GetPeakMode() const {
    return GetSchemaValue<bool>(m_ptr, "VMixVocoderDesc_t", "m_bPeakMode");
}
void GVMixVocoderDesc_t::SetPeakMode(bool value) {
    SetSchemaValue(m_ptr, "VMixVocoderDesc_t", "m_bPeakMode", true, value);
}
void* GVMixVocoderDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixVocoderDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixVocoderDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixVocoderDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixVocoderDesc_t>("VMixVocoderDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BandCount", &GVMixVocoderDesc_t::GetBandCount, &GVMixVocoderDesc_t::SetBandCount)
        .addProperty("Bandwidth", &GVMixVocoderDesc_t::GetBandwidth, &GVMixVocoderDesc_t::SetBandwidth)
        .addProperty("FldBModGain", &GVMixVocoderDesc_t::GetFldBModGain, &GVMixVocoderDesc_t::SetFldBModGain)
        .addProperty("FreqRangeStart", &GVMixVocoderDesc_t::GetFreqRangeStart, &GVMixVocoderDesc_t::SetFreqRangeStart)
        .addProperty("FreqRangeEnd", &GVMixVocoderDesc_t::GetFreqRangeEnd, &GVMixVocoderDesc_t::SetFreqRangeEnd)
        .addProperty("FldBUnvoicedGain", &GVMixVocoderDesc_t::GetFldBUnvoicedGain, &GVMixVocoderDesc_t::SetFldBUnvoicedGain)
        .addProperty("AttackTimeMS", &GVMixVocoderDesc_t::GetAttackTimeMS, &GVMixVocoderDesc_t::SetAttackTimeMS)
        .addProperty("ReleaseTimeMS", &GVMixVocoderDesc_t::GetReleaseTimeMS, &GVMixVocoderDesc_t::SetReleaseTimeMS)
        .addProperty("DebugBand", &GVMixVocoderDesc_t::GetDebugBand, &GVMixVocoderDesc_t::SetDebugBand)
        .addProperty("PeakMode", &GVMixVocoderDesc_t::GetPeakMode, &GVMixVocoderDesc_t::SetPeakMode)
        .addFunction("ToPtr", &GVMixVocoderDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixVocoderDesc_t::IsValid)
        .endClass();
}
GCAnimScriptManager::GCAnimScriptManager(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimScriptManager::GCAnimScriptManager(void *ptr) {
    m_ptr = ptr;
}
std::vector<GScriptInfo_t> GCAnimScriptManager::GetScriptInfo() const {
    CUtlVector<GScriptInfo_t>* vec = GetSchemaValue<CUtlVector<GScriptInfo_t>*>(m_ptr, "CAnimScriptManager", "m_scriptInfo"); std::vector<GScriptInfo_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimScriptManager::SetScriptInfo(std::vector<GScriptInfo_t> value) {
    SetSchemaValueCUtlVector<GScriptInfo_t>(m_ptr, "CAnimScriptManager", "m_scriptInfo", false, value);
}
void* GCAnimScriptManager::GetPtr() {
    return m_ptr;
}
std::string GCAnimScriptManager::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimScriptManager::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimScriptManager(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimScriptManager>("CAnimScriptManager")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ScriptInfo", &GCAnimScriptManager::GetScriptInfo, &GCAnimScriptManager::SetScriptInfo)
        .addFunction("ToPtr", &GCAnimScriptManager::ToPtr)
        .addFunction("IsValid", &GCAnimScriptManager::IsValid)
        .endClass();
}
GCAnimationGraphVisualizerLine::GCAnimationGraphVisualizerLine(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimationGraphVisualizerLine::GCAnimationGraphVisualizerLine(void *ptr) {
    m_ptr = ptr;
}
Vector GCAnimationGraphVisualizerLine::GetWsPositionStart() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimationGraphVisualizerLine", "m_vWsPositionStart");
}
void GCAnimationGraphVisualizerLine::SetWsPositionStart(Vector value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerLine", "m_vWsPositionStart", false, value);
}
Vector GCAnimationGraphVisualizerLine::GetWsPositionEnd() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimationGraphVisualizerLine", "m_vWsPositionEnd");
}
void GCAnimationGraphVisualizerLine::SetWsPositionEnd(Vector value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerLine", "m_vWsPositionEnd", false, value);
}
Color GCAnimationGraphVisualizerLine::GetColor() const {
    return GetSchemaValue<Color>(m_ptr, "CAnimationGraphVisualizerLine", "m_Color");
}
void GCAnimationGraphVisualizerLine::SetColor(Color value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerLine", "m_Color", false, value);
}
void* GCAnimationGraphVisualizerLine::GetPtr() {
    return m_ptr;
}
std::string GCAnimationGraphVisualizerLine::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimationGraphVisualizerLine::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimationGraphVisualizerPrimitiveBase GCAnimationGraphVisualizerLine::GetParent() const {
    GCAnimationGraphVisualizerPrimitiveBase value(m_ptr);
    return value;
}
void GCAnimationGraphVisualizerLine::SetParent(GCAnimationGraphVisualizerPrimitiveBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCAnimationGraphVisualizerLine(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimationGraphVisualizerLine>("CAnimationGraphVisualizerLine")
        .addConstructor<void (*)(std::string)>()
        .addProperty("WsPositionStart", &GCAnimationGraphVisualizerLine::GetWsPositionStart, &GCAnimationGraphVisualizerLine::SetWsPositionStart)
        .addProperty("WsPositionEnd", &GCAnimationGraphVisualizerLine::GetWsPositionEnd, &GCAnimationGraphVisualizerLine::SetWsPositionEnd)
        .addProperty("Color", &GCAnimationGraphVisualizerLine::GetColor, &GCAnimationGraphVisualizerLine::SetColor)
        .addProperty("Parent", &GCAnimationGraphVisualizerLine::GetParent, &GCAnimationGraphVisualizerLine::SetParent)
        .addFunction("ToPtr", &GCAnimationGraphVisualizerLine::ToPtr)
        .addFunction("IsValid", &GCAnimationGraphVisualizerLine::IsValid)
        .endClass();
}
GCFootTrajectory::GCFootTrajectory(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootTrajectory::GCFootTrajectory(void *ptr) {
    m_ptr = ptr;
}
Vector GCFootTrajectory::GetOffset() const {
    return GetSchemaValue<Vector>(m_ptr, "CFootTrajectory", "m_vOffset");
}
void GCFootTrajectory::SetOffset(Vector value) {
    SetSchemaValue(m_ptr, "CFootTrajectory", "m_vOffset", false, value);
}
float GCFootTrajectory::GetRotationOffset() const {
    return GetSchemaValue<float>(m_ptr, "CFootTrajectory", "m_flRotationOffset");
}
void GCFootTrajectory::SetRotationOffset(float value) {
    SetSchemaValue(m_ptr, "CFootTrajectory", "m_flRotationOffset", false, value);
}
float GCFootTrajectory::GetProgression() const {
    return GetSchemaValue<float>(m_ptr, "CFootTrajectory", "m_flProgression");
}
void GCFootTrajectory::SetProgression(float value) {
    SetSchemaValue(m_ptr, "CFootTrajectory", "m_flProgression", false, value);
}
void* GCFootTrajectory::GetPtr() {
    return m_ptr;
}
std::string GCFootTrajectory::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootTrajectory::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFootTrajectory(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootTrajectory>("CFootTrajectory")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Offset", &GCFootTrajectory::GetOffset, &GCFootTrajectory::SetOffset)
        .addProperty("RotationOffset", &GCFootTrajectory::GetRotationOffset, &GCFootTrajectory::SetRotationOffset)
        .addProperty("Progression", &GCFootTrajectory::GetProgression, &GCFootTrajectory::SetProgression)
        .addFunction("ToPtr", &GCFootTrajectory::ToPtr)
        .addFunction("IsValid", &GCFootTrajectory::IsValid)
        .endClass();
}
GVMixModDelayDesc_t::GVMixModDelayDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixModDelayDesc_t::GVMixModDelayDesc_t(void *ptr) {
    m_ptr = ptr;
}
GVMixFilterDesc_t GVMixModDelayDesc_t::GetFeedbackFilter() const {
    GVMixFilterDesc_t value(GetSchemaPtr(m_ptr, "VMixModDelayDesc_t", "m_feedbackFilter"));
    return value;
}
void GVMixModDelayDesc_t::SetFeedbackFilter(GVMixFilterDesc_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FeedbackFilter' is not possible.\n");
}
bool GVMixModDelayDesc_t::GetPhaseInvert() const {
    return GetSchemaValue<bool>(m_ptr, "VMixModDelayDesc_t", "m_bPhaseInvert");
}
void GVMixModDelayDesc_t::SetPhaseInvert(bool value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_bPhaseInvert", true, value);
}
float GVMixModDelayDesc_t::GetGlideTime() const {
    return GetSchemaValue<float>(m_ptr, "VMixModDelayDesc_t", "m_flGlideTime");
}
void GVMixModDelayDesc_t::SetGlideTime(float value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_flGlideTime", true, value);
}
float GVMixModDelayDesc_t::GetDelay() const {
    return GetSchemaValue<float>(m_ptr, "VMixModDelayDesc_t", "m_flDelay");
}
void GVMixModDelayDesc_t::SetDelay(float value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_flDelay", true, value);
}
float GVMixModDelayDesc_t::GetOutputGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixModDelayDesc_t", "m_flOutputGain");
}
void GVMixModDelayDesc_t::SetOutputGain(float value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_flOutputGain", true, value);
}
float GVMixModDelayDesc_t::GetFeedbackGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixModDelayDesc_t", "m_flFeedbackGain");
}
void GVMixModDelayDesc_t::SetFeedbackGain(float value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_flFeedbackGain", true, value);
}
float GVMixModDelayDesc_t::GetModRate() const {
    return GetSchemaValue<float>(m_ptr, "VMixModDelayDesc_t", "m_flModRate");
}
void GVMixModDelayDesc_t::SetModRate(float value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_flModRate", true, value);
}
float GVMixModDelayDesc_t::GetModDepth() const {
    return GetSchemaValue<float>(m_ptr, "VMixModDelayDesc_t", "m_flModDepth");
}
void GVMixModDelayDesc_t::SetModDepth(float value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_flModDepth", true, value);
}
bool GVMixModDelayDesc_t::GetApplyAntialiasing() const {
    return GetSchemaValue<bool>(m_ptr, "VMixModDelayDesc_t", "m_bApplyAntialiasing");
}
void GVMixModDelayDesc_t::SetApplyAntialiasing(bool value) {
    SetSchemaValue(m_ptr, "VMixModDelayDesc_t", "m_bApplyAntialiasing", true, value);
}
void* GVMixModDelayDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixModDelayDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixModDelayDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixModDelayDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixModDelayDesc_t>("VMixModDelayDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FeedbackFilter", &GVMixModDelayDesc_t::GetFeedbackFilter, &GVMixModDelayDesc_t::SetFeedbackFilter)
        .addProperty("PhaseInvert", &GVMixModDelayDesc_t::GetPhaseInvert, &GVMixModDelayDesc_t::SetPhaseInvert)
        .addProperty("GlideTime", &GVMixModDelayDesc_t::GetGlideTime, &GVMixModDelayDesc_t::SetGlideTime)
        .addProperty("Delay", &GVMixModDelayDesc_t::GetDelay, &GVMixModDelayDesc_t::SetDelay)
        .addProperty("OutputGain", &GVMixModDelayDesc_t::GetOutputGain, &GVMixModDelayDesc_t::SetOutputGain)
        .addProperty("FeedbackGain", &GVMixModDelayDesc_t::GetFeedbackGain, &GVMixModDelayDesc_t::SetFeedbackGain)
        .addProperty("ModRate", &GVMixModDelayDesc_t::GetModRate, &GVMixModDelayDesc_t::SetModRate)
        .addProperty("ModDepth", &GVMixModDelayDesc_t::GetModDepth, &GVMixModDelayDesc_t::SetModDepth)
        .addProperty("ApplyAntialiasing", &GVMixModDelayDesc_t::GetApplyAntialiasing, &GVMixModDelayDesc_t::SetApplyAntialiasing)
        .addFunction("ToPtr", &GVMixModDelayDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixModDelayDesc_t::IsValid)
        .endClass();
}
GCHitBox::GCHitBox(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCHitBox::GCHitBox(void *ptr) {
    m_ptr = ptr;
}
std::string GCHitBox::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CHitBox", "m_name").Get();
}
void GCHitBox::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_name", false, CUtlString(value.c_str()));
}
std::string GCHitBox::GetSurfaceProperty() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CHitBox", "m_sSurfaceProperty").Get();
}
void GCHitBox::SetSurfaceProperty(std::string value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_sSurfaceProperty", false, CUtlString(value.c_str()));
}
std::string GCHitBox::GetBoneName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CHitBox", "m_sBoneName").Get();
}
void GCHitBox::SetBoneName(std::string value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_sBoneName", false, CUtlString(value.c_str()));
}
Vector GCHitBox::GetMinBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "CHitBox", "m_vMinBounds");
}
void GCHitBox::SetMinBounds(Vector value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_vMinBounds", false, value);
}
Vector GCHitBox::GetMaxBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "CHitBox", "m_vMaxBounds");
}
void GCHitBox::SetMaxBounds(Vector value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_vMaxBounds", false, value);
}
float GCHitBox::GetShapeRadius() const {
    return GetSchemaValue<float>(m_ptr, "CHitBox", "m_flShapeRadius");
}
void GCHitBox::SetShapeRadius(float value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_flShapeRadius", false, value);
}
uint32_t GCHitBox::GetBoneNameHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CHitBox", "m_nBoneNameHash");
}
void GCHitBox::SetBoneNameHash(uint32_t value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_nBoneNameHash", false, value);
}
int32_t GCHitBox::GetGroupId() const {
    return GetSchemaValue<int32_t>(m_ptr, "CHitBox", "m_nGroupId");
}
void GCHitBox::SetGroupId(int32_t value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_nGroupId", false, value);
}
uint8_t GCHitBox::GetShapeType() const {
    return GetSchemaValue<uint8_t>(m_ptr, "CHitBox", "m_nShapeType");
}
void GCHitBox::SetShapeType(uint8_t value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_nShapeType", false, value);
}
bool GCHitBox::GetTranslationOnly() const {
    return GetSchemaValue<bool>(m_ptr, "CHitBox", "m_bTranslationOnly");
}
void GCHitBox::SetTranslationOnly(bool value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_bTranslationOnly", false, value);
}
uint32_t GCHitBox::GetCRC() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CHitBox", "m_CRC");
}
void GCHitBox::SetCRC(uint32_t value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_CRC", false, value);
}
Color GCHitBox::GetCRenderColor() const {
    return GetSchemaValue<Color>(m_ptr, "CHitBox", "m_cRenderColor");
}
void GCHitBox::SetCRenderColor(Color value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_cRenderColor", false, value);
}
uint16_t GCHitBox::GetHitBoxIndex() const {
    return GetSchemaValue<uint16_t>(m_ptr, "CHitBox", "m_nHitBoxIndex");
}
void GCHitBox::SetHitBoxIndex(uint16_t value) {
    SetSchemaValue(m_ptr, "CHitBox", "m_nHitBoxIndex", false, value);
}
void* GCHitBox::GetPtr() {
    return m_ptr;
}
std::string GCHitBox::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCHitBox::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCHitBox(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCHitBox>("CHitBox")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCHitBox::GetName, &GCHitBox::SetName)
        .addProperty("SurfaceProperty", &GCHitBox::GetSurfaceProperty, &GCHitBox::SetSurfaceProperty)
        .addProperty("BoneName", &GCHitBox::GetBoneName, &GCHitBox::SetBoneName)
        .addProperty("MinBounds", &GCHitBox::GetMinBounds, &GCHitBox::SetMinBounds)
        .addProperty("MaxBounds", &GCHitBox::GetMaxBounds, &GCHitBox::SetMaxBounds)
        .addProperty("ShapeRadius", &GCHitBox::GetShapeRadius, &GCHitBox::SetShapeRadius)
        .addProperty("BoneNameHash", &GCHitBox::GetBoneNameHash, &GCHitBox::SetBoneNameHash)
        .addProperty("GroupId", &GCHitBox::GetGroupId, &GCHitBox::SetGroupId)
        .addProperty("ShapeType", &GCHitBox::GetShapeType, &GCHitBox::SetShapeType)
        .addProperty("TranslationOnly", &GCHitBox::GetTranslationOnly, &GCHitBox::SetTranslationOnly)
        .addProperty("CRC", &GCHitBox::GetCRC, &GCHitBox::SetCRC)
        .addProperty("CRenderColor", &GCHitBox::GetCRenderColor, &GCHitBox::SetCRenderColor)
        .addProperty("HitBoxIndex", &GCHitBox::GetHitBoxIndex, &GCHitBox::SetHitBoxIndex)
        .addFunction("ToPtr", &GCHitBox::ToPtr)
        .addFunction("IsValid", &GCHitBox::IsValid)
        .endClass();
}
GCTestDomainDerived_Cursor::GCTestDomainDerived_Cursor(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCTestDomainDerived_Cursor::GCTestDomainDerived_Cursor(void *ptr) {
    m_ptr = ptr;
}
int32_t GCTestDomainDerived_Cursor::GetCursorValueA() const {
    return GetSchemaValue<int32_t>(m_ptr, "CTestDomainDerived_Cursor", "m_nCursorValueA");
}
void GCTestDomainDerived_Cursor::SetCursorValueA(int32_t value) {
    SetSchemaValue(m_ptr, "CTestDomainDerived_Cursor", "m_nCursorValueA", false, value);
}
int32_t GCTestDomainDerived_Cursor::GetCursorValueB() const {
    return GetSchemaValue<int32_t>(m_ptr, "CTestDomainDerived_Cursor", "m_nCursorValueB");
}
void GCTestDomainDerived_Cursor::SetCursorValueB(int32_t value) {
    SetSchemaValue(m_ptr, "CTestDomainDerived_Cursor", "m_nCursorValueB", false, value);
}
void* GCTestDomainDerived_Cursor::GetPtr() {
    return m_ptr;
}
std::string GCTestDomainDerived_Cursor::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCTestDomainDerived_Cursor::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCTestDomainDerived_Cursor(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCTestDomainDerived_Cursor>("CTestDomainDerived_Cursor")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CursorValueA", &GCTestDomainDerived_Cursor::GetCursorValueA, &GCTestDomainDerived_Cursor::SetCursorValueA)
        .addProperty("CursorValueB", &GCTestDomainDerived_Cursor::GetCursorValueB, &GCTestDomainDerived_Cursor::SetCursorValueB)
        .addFunction("ToPtr", &GCTestDomainDerived_Cursor::ToPtr)
        .addFunction("IsValid", &GCTestDomainDerived_Cursor::IsValid)
        .endClass();
}
GCAudioMorphData::GCAudioMorphData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAudioMorphData::GCAudioMorphData(void *ptr) {
    m_ptr = ptr;
}
std::vector<float32> GCAudioMorphData::GetTimes() const {
    CUtlVector<float32>* vec = GetSchemaValue<CUtlVector<float32>*>(m_ptr, "CAudioMorphData", "m_times"); std::vector<float32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAudioMorphData::SetTimes(std::vector<float32> value) {
    SetSchemaValueCUtlVector<float32>(m_ptr, "CAudioMorphData", "m_times", false, value);
}
std::vector<uint32> GCAudioMorphData::GetNameHashCodes() const {
    CUtlVector<uint32>* vec = GetSchemaValue<CUtlVector<uint32>*>(m_ptr, "CAudioMorphData", "m_nameHashCodes"); std::vector<uint32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAudioMorphData::SetNameHashCodes(std::vector<uint32> value) {
    SetSchemaValueCUtlVector<uint32>(m_ptr, "CAudioMorphData", "m_nameHashCodes", false, value);
}
std::vector<CUtlString> GCAudioMorphData::GetNameStrings() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "CAudioMorphData", "m_nameStrings"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAudioMorphData::SetNameStrings(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "CAudioMorphData", "m_nameStrings", false, value);
}
float GCAudioMorphData::GetEaseIn() const {
    return GetSchemaValue<float>(m_ptr, "CAudioMorphData", "m_flEaseIn");
}
void GCAudioMorphData::SetEaseIn(float value) {
    SetSchemaValue(m_ptr, "CAudioMorphData", "m_flEaseIn", false, value);
}
float GCAudioMorphData::GetEaseOut() const {
    return GetSchemaValue<float>(m_ptr, "CAudioMorphData", "m_flEaseOut");
}
void GCAudioMorphData::SetEaseOut(float value) {
    SetSchemaValue(m_ptr, "CAudioMorphData", "m_flEaseOut", false, value);
}
void* GCAudioMorphData::GetPtr() {
    return m_ptr;
}
std::string GCAudioMorphData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAudioMorphData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAudioMorphData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAudioMorphData>("CAudioMorphData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Times", &GCAudioMorphData::GetTimes, &GCAudioMorphData::SetTimes)
        .addProperty("NameHashCodes", &GCAudioMorphData::GetNameHashCodes, &GCAudioMorphData::SetNameHashCodes)
        .addProperty("NameStrings", &GCAudioMorphData::GetNameStrings, &GCAudioMorphData::SetNameStrings)
        .addProperty("EaseIn", &GCAudioMorphData::GetEaseIn, &GCAudioMorphData::SetEaseIn)
        .addProperty("EaseOut", &GCAudioMorphData::GetEaseOut, &GCAudioMorphData::SetEaseOut)
        .addFunction("ToPtr", &GCAudioMorphData::ToPtr)
        .addFunction("IsValid", &GCAudioMorphData::IsValid)
        .endClass();
}
GCSeqIKLock::GCSeqIKLock(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSeqIKLock::GCSeqIKLock(void *ptr) {
    m_ptr = ptr;
}
float GCSeqIKLock::GetPosWeight() const {
    return GetSchemaValue<float>(m_ptr, "CSeqIKLock", "m_flPosWeight");
}
void GCSeqIKLock::SetPosWeight(float value) {
    SetSchemaValue(m_ptr, "CSeqIKLock", "m_flPosWeight", false, value);
}
float GCSeqIKLock::GetAngleWeight() const {
    return GetSchemaValue<float>(m_ptr, "CSeqIKLock", "m_flAngleWeight");
}
void GCSeqIKLock::SetAngleWeight(float value) {
    SetSchemaValue(m_ptr, "CSeqIKLock", "m_flAngleWeight", false, value);
}
int16_t GCSeqIKLock::GetLocalBone() const {
    return GetSchemaValue<int16_t>(m_ptr, "CSeqIKLock", "m_nLocalBone");
}
void GCSeqIKLock::SetLocalBone(int16_t value) {
    SetSchemaValue(m_ptr, "CSeqIKLock", "m_nLocalBone", false, value);
}
bool GCSeqIKLock::GetBonesOrientedAlongPositiveX() const {
    return GetSchemaValue<bool>(m_ptr, "CSeqIKLock", "m_bBonesOrientedAlongPositiveX");
}
void GCSeqIKLock::SetBonesOrientedAlongPositiveX(bool value) {
    SetSchemaValue(m_ptr, "CSeqIKLock", "m_bBonesOrientedAlongPositiveX", false, value);
}
void* GCSeqIKLock::GetPtr() {
    return m_ptr;
}
std::string GCSeqIKLock::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSeqIKLock::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSeqIKLock(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSeqIKLock>("CSeqIKLock")
        .addConstructor<void (*)(std::string)>()
        .addProperty("PosWeight", &GCSeqIKLock::GetPosWeight, &GCSeqIKLock::SetPosWeight)
        .addProperty("AngleWeight", &GCSeqIKLock::GetAngleWeight, &GCSeqIKLock::SetAngleWeight)
        .addProperty("LocalBone", &GCSeqIKLock::GetLocalBone, &GCSeqIKLock::SetLocalBone)
        .addProperty("BonesOrientedAlongPositiveX", &GCSeqIKLock::GetBonesOrientedAlongPositiveX, &GCSeqIKLock::SetBonesOrientedAlongPositiveX)
        .addFunction("ToPtr", &GCSeqIKLock::ToPtr)
        .addFunction("IsValid", &GCSeqIKLock::IsValid)
        .endClass();
}
GFeQuad_t::GFeQuad_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeQuad_t::GFeQuad_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<uint16_t> GFeQuad_t::GetNode() const {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeQuad_t", "nNode"); std::vector<uint16_t> ret; for(int i = 0; i < 4; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeQuad_t::SetNode(std::vector<uint16_t> value) {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeQuad_t", "nNode"); for(int i = 0; i < 4; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeQuad_t", "nNode", true, outValue);
}
float GFeQuad_t::GetSlack() const {
    return GetSchemaValue<float>(m_ptr, "FeQuad_t", "flSlack");
}
void GFeQuad_t::SetSlack(float value) {
    SetSchemaValue(m_ptr, "FeQuad_t", "flSlack", true, value);
}
std::vector<Vector4D> GFeQuad_t::GetShape() const {
    Vector4D* outValue = GetSchemaValue<Vector4D*>(m_ptr, "FeQuad_t", "vShape"); std::vector<Vector4D> ret; for(int i = 0; i < 4; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeQuad_t::SetShape(std::vector<Vector4D> value) {
    Vector4D* outValue = GetSchemaValue<Vector4D*>(m_ptr, "FeQuad_t", "vShape"); for(int i = 0; i < 4; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeQuad_t", "vShape", true, outValue);
}
void* GFeQuad_t::GetPtr() {
    return m_ptr;
}
std::string GFeQuad_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeQuad_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeQuad_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeQuad_t>("FeQuad_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Node", &GFeQuad_t::GetNode, &GFeQuad_t::SetNode)
        .addProperty("Slack", &GFeQuad_t::GetSlack, &GFeQuad_t::SetSlack)
        .addProperty("Shape", &GFeQuad_t::GetShape, &GFeQuad_t::SetShape)
        .addFunction("ToPtr", &GFeQuad_t::ToPtr)
        .addFunction("IsValid", &GFeQuad_t::IsValid)
        .endClass();
}
GCSosGroupMatchPattern::GCSosGroupMatchPattern(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSosGroupMatchPattern::GCSosGroupMatchPattern(void *ptr) {
    m_ptr = ptr;
}
std::string GCSosGroupMatchPattern::GetMatchSoundEventName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CSosGroupMatchPattern", "m_matchSoundEventName").Get();
}
void GCSosGroupMatchPattern::SetMatchSoundEventName(std::string value) {
    SetSchemaValue(m_ptr, "CSosGroupMatchPattern", "m_matchSoundEventName", false, CUtlString(value.c_str()));
}
std::string GCSosGroupMatchPattern::GetMatchSoundEventSubString() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CSosGroupMatchPattern", "m_matchSoundEventSubString").Get();
}
void GCSosGroupMatchPattern::SetMatchSoundEventSubString(std::string value) {
    SetSchemaValue(m_ptr, "CSosGroupMatchPattern", "m_matchSoundEventSubString", false, CUtlString(value.c_str()));
}
float GCSosGroupMatchPattern::GetEntIndex() const {
    return GetSchemaValue<float>(m_ptr, "CSosGroupMatchPattern", "m_flEntIndex");
}
void GCSosGroupMatchPattern::SetEntIndex(float value) {
    SetSchemaValue(m_ptr, "CSosGroupMatchPattern", "m_flEntIndex", false, value);
}
float GCSosGroupMatchPattern::GetOpvar() const {
    return GetSchemaValue<float>(m_ptr, "CSosGroupMatchPattern", "m_flOpvar");
}
void GCSosGroupMatchPattern::SetOpvar(float value) {
    SetSchemaValue(m_ptr, "CSosGroupMatchPattern", "m_flOpvar", false, value);
}
std::string GCSosGroupMatchPattern::GetOpvarString() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CSosGroupMatchPattern", "m_opvarString").Get();
}
void GCSosGroupMatchPattern::SetOpvarString(std::string value) {
    SetSchemaValue(m_ptr, "CSosGroupMatchPattern", "m_opvarString", false, CUtlString(value.c_str()));
}
void* GCSosGroupMatchPattern::GetPtr() {
    return m_ptr;
}
std::string GCSosGroupMatchPattern::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSosGroupMatchPattern::IsValid() {
    return (m_ptr != nullptr);
}
GCSosGroupBranchPattern GCSosGroupMatchPattern::GetParent() const {
    GCSosGroupBranchPattern value(m_ptr);
    return value;
}
void GCSosGroupMatchPattern::SetParent(GCSosGroupBranchPattern value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSosGroupMatchPattern(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSosGroupMatchPattern>("CSosGroupMatchPattern")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MatchSoundEventName", &GCSosGroupMatchPattern::GetMatchSoundEventName, &GCSosGroupMatchPattern::SetMatchSoundEventName)
        .addProperty("MatchSoundEventSubString", &GCSosGroupMatchPattern::GetMatchSoundEventSubString, &GCSosGroupMatchPattern::SetMatchSoundEventSubString)
        .addProperty("EntIndex", &GCSosGroupMatchPattern::GetEntIndex, &GCSosGroupMatchPattern::SetEntIndex)
        .addProperty("Opvar", &GCSosGroupMatchPattern::GetOpvar, &GCSosGroupMatchPattern::SetOpvar)
        .addProperty("OpvarString", &GCSosGroupMatchPattern::GetOpvarString, &GCSosGroupMatchPattern::SetOpvarString)
        .addProperty("Parent", &GCSosGroupMatchPattern::GetParent, &GCSosGroupMatchPattern::SetParent)
        .addFunction("ToPtr", &GCSosGroupMatchPattern::ToPtr)
        .addFunction("IsValid", &GCSosGroupMatchPattern::IsValid)
        .endClass();
}
GCSSDSEndFrameViewInfo::GCSSDSEndFrameViewInfo(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSSDSEndFrameViewInfo::GCSSDSEndFrameViewInfo(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCSSDSEndFrameViewInfo::GetViewId() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CSSDSEndFrameViewInfo", "m_nViewId");
}
void GCSSDSEndFrameViewInfo::SetViewId(uint64_t value) {
    SetSchemaValue(m_ptr, "CSSDSEndFrameViewInfo", "m_nViewId", false, value);
}
std::string GCSSDSEndFrameViewInfo::GetViewName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CSSDSEndFrameViewInfo", "m_ViewName").Get();
}
void GCSSDSEndFrameViewInfo::SetViewName(std::string value) {
    SetSchemaValue(m_ptr, "CSSDSEndFrameViewInfo", "m_ViewName", false, CUtlString(value.c_str()));
}
void* GCSSDSEndFrameViewInfo::GetPtr() {
    return m_ptr;
}
std::string GCSSDSEndFrameViewInfo::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSSDSEndFrameViewInfo::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSSDSEndFrameViewInfo(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSSDSEndFrameViewInfo>("CSSDSEndFrameViewInfo")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ViewId", &GCSSDSEndFrameViewInfo::GetViewId, &GCSSDSEndFrameViewInfo::SetViewId)
        .addProperty("ViewName", &GCSSDSEndFrameViewInfo::GetViewName, &GCSSDSEndFrameViewInfo::SetViewName)
        .addFunction("ToPtr", &GCSSDSEndFrameViewInfo::ToPtr)
        .addFunction("IsValid", &GCSSDSEndFrameViewInfo::IsValid)
        .endClass();
}
GCNmExternalGraphNode::GCNmExternalGraphNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmExternalGraphNode::GCNmExternalGraphNode(void *ptr) {
    m_ptr = ptr;
}
void* GCNmExternalGraphNode::GetPtr() {
    return m_ptr;
}
std::string GCNmExternalGraphNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmExternalGraphNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmPoseNode GCNmExternalGraphNode::GetParent() const {
    GCNmPoseNode value(m_ptr);
    return value;
}
void GCNmExternalGraphNode::SetParent(GCNmPoseNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmExternalGraphNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmExternalGraphNode>("CNmExternalGraphNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCNmExternalGraphNode::GetParent, &GCNmExternalGraphNode::SetParent)
        .addFunction("ToPtr", &GCNmExternalGraphNode::ToPtr)
        .addFunction("IsValid", &GCNmExternalGraphNode::IsValid)
        .endClass();
}
GCMoverUpdateNode::GCMoverUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMoverUpdateNode::GCMoverUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GCAnimInputDamping GCMoverUpdateNode::GetDamping() const {
    GCAnimInputDamping value(GetSchemaPtr(m_ptr, "CMoverUpdateNode", "m_damping"));
    return value;
}
void GCMoverUpdateNode::SetDamping(GCAnimInputDamping value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Damping' is not possible.\n");
}
uint64_t GCMoverUpdateNode::GetFacingTarget() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CMoverUpdateNode", "m_facingTarget");
}
void GCMoverUpdateNode::SetFacingTarget(uint64_t value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_facingTarget", false, value);
}
GCAnimParamHandle GCMoverUpdateNode::GetMoveVecParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CMoverUpdateNode", "m_hMoveVecParam"));
    return value;
}
void GCMoverUpdateNode::SetMoveVecParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'MoveVecParam' is not possible.\n");
}
GCAnimParamHandle GCMoverUpdateNode::GetMoveHeadingParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CMoverUpdateNode", "m_hMoveHeadingParam"));
    return value;
}
void GCMoverUpdateNode::SetMoveHeadingParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'MoveHeadingParam' is not possible.\n");
}
GCAnimParamHandle GCMoverUpdateNode::GetTurnToFaceParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CMoverUpdateNode", "m_hTurnToFaceParam"));
    return value;
}
void GCMoverUpdateNode::SetTurnToFaceParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TurnToFaceParam' is not possible.\n");
}
float GCMoverUpdateNode::GetTurnToFaceOffset() const {
    return GetSchemaValue<float>(m_ptr, "CMoverUpdateNode", "m_flTurnToFaceOffset");
}
void GCMoverUpdateNode::SetTurnToFaceOffset(float value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_flTurnToFaceOffset", false, value);
}
float GCMoverUpdateNode::GetTurnToFaceLimit() const {
    return GetSchemaValue<float>(m_ptr, "CMoverUpdateNode", "m_flTurnToFaceLimit");
}
void GCMoverUpdateNode::SetTurnToFaceLimit(float value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_flTurnToFaceLimit", false, value);
}
bool GCMoverUpdateNode::GetAdditive() const {
    return GetSchemaValue<bool>(m_ptr, "CMoverUpdateNode", "m_bAdditive");
}
void GCMoverUpdateNode::SetAdditive(bool value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_bAdditive", false, value);
}
bool GCMoverUpdateNode::GetApplyMovement() const {
    return GetSchemaValue<bool>(m_ptr, "CMoverUpdateNode", "m_bApplyMovement");
}
void GCMoverUpdateNode::SetApplyMovement(bool value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_bApplyMovement", false, value);
}
bool GCMoverUpdateNode::GetOrientMovement() const {
    return GetSchemaValue<bool>(m_ptr, "CMoverUpdateNode", "m_bOrientMovement");
}
void GCMoverUpdateNode::SetOrientMovement(bool value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_bOrientMovement", false, value);
}
bool GCMoverUpdateNode::GetApplyRotation() const {
    return GetSchemaValue<bool>(m_ptr, "CMoverUpdateNode", "m_bApplyRotation");
}
void GCMoverUpdateNode::SetApplyRotation(bool value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_bApplyRotation", false, value);
}
bool GCMoverUpdateNode::GetLimitOnly() const {
    return GetSchemaValue<bool>(m_ptr, "CMoverUpdateNode", "m_bLimitOnly");
}
void GCMoverUpdateNode::SetLimitOnly(bool value) {
    SetSchemaValue(m_ptr, "CMoverUpdateNode", "m_bLimitOnly", false, value);
}
void* GCMoverUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCMoverUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMoverUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCMoverUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCMoverUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCMoverUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMoverUpdateNode>("CMoverUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Damping", &GCMoverUpdateNode::GetDamping, &GCMoverUpdateNode::SetDamping)
        .addProperty("FacingTarget", &GCMoverUpdateNode::GetFacingTarget, &GCMoverUpdateNode::SetFacingTarget)
        .addProperty("MoveVecParam", &GCMoverUpdateNode::GetMoveVecParam, &GCMoverUpdateNode::SetMoveVecParam)
        .addProperty("MoveHeadingParam", &GCMoverUpdateNode::GetMoveHeadingParam, &GCMoverUpdateNode::SetMoveHeadingParam)
        .addProperty("TurnToFaceParam", &GCMoverUpdateNode::GetTurnToFaceParam, &GCMoverUpdateNode::SetTurnToFaceParam)
        .addProperty("TurnToFaceOffset", &GCMoverUpdateNode::GetTurnToFaceOffset, &GCMoverUpdateNode::SetTurnToFaceOffset)
        .addProperty("TurnToFaceLimit", &GCMoverUpdateNode::GetTurnToFaceLimit, &GCMoverUpdateNode::SetTurnToFaceLimit)
        .addProperty("Additive", &GCMoverUpdateNode::GetAdditive, &GCMoverUpdateNode::SetAdditive)
        .addProperty("ApplyMovement", &GCMoverUpdateNode::GetApplyMovement, &GCMoverUpdateNode::SetApplyMovement)
        .addProperty("OrientMovement", &GCMoverUpdateNode::GetOrientMovement, &GCMoverUpdateNode::SetOrientMovement)
        .addProperty("ApplyRotation", &GCMoverUpdateNode::GetApplyRotation, &GCMoverUpdateNode::SetApplyRotation)
        .addProperty("LimitOnly", &GCMoverUpdateNode::GetLimitOnly, &GCMoverUpdateNode::SetLimitOnly)
        .addProperty("Parent", &GCMoverUpdateNode::GetParent, &GCMoverUpdateNode::SetParent)
        .addFunction("ToPtr", &GCMoverUpdateNode::ToPtr)
        .addFunction("IsValid", &GCMoverUpdateNode::IsValid)
        .endClass();
}
GRnHull_t::GRnHull_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnHull_t::GRnHull_t(void *ptr) {
    m_ptr = ptr;
}
Vector GRnHull_t::GetCentroid() const {
    return GetSchemaValue<Vector>(m_ptr, "RnHull_t", "m_vCentroid");
}
void GRnHull_t::SetCentroid(Vector value) {
    SetSchemaValue(m_ptr, "RnHull_t", "m_vCentroid", true, value);
}
float GRnHull_t::GetMaxAngularRadius() const {
    return GetSchemaValue<float>(m_ptr, "RnHull_t", "m_flMaxAngularRadius");
}
void GRnHull_t::SetMaxAngularRadius(float value) {
    SetSchemaValue(m_ptr, "RnHull_t", "m_flMaxAngularRadius", true, value);
}
GAABB_t GRnHull_t::GetBounds() const {
    GAABB_t value(GetSchemaPtr(m_ptr, "RnHull_t", "m_Bounds"));
    return value;
}
void GRnHull_t::SetBounds(GAABB_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Bounds' is not possible.\n");
}
Vector GRnHull_t::GetOrthographicAreas() const {
    return GetSchemaValue<Vector>(m_ptr, "RnHull_t", "m_vOrthographicAreas");
}
void GRnHull_t::SetOrthographicAreas(Vector value) {
    SetSchemaValue(m_ptr, "RnHull_t", "m_vOrthographicAreas", true, value);
}
float GRnHull_t::GetVolume() const {
    return GetSchemaValue<float>(m_ptr, "RnHull_t", "m_flVolume");
}
void GRnHull_t::SetVolume(float value) {
    SetSchemaValue(m_ptr, "RnHull_t", "m_flVolume", true, value);
}
float GRnHull_t::GetSurfaceArea() const {
    return GetSchemaValue<float>(m_ptr, "RnHull_t", "m_flSurfaceArea");
}
void GRnHull_t::SetSurfaceArea(float value) {
    SetSchemaValue(m_ptr, "RnHull_t", "m_flSurfaceArea", true, value);
}
std::vector<GRnVertex_t> GRnHull_t::GetVertices() const {
    CUtlVector<GRnVertex_t>* vec = GetSchemaValue<CUtlVector<GRnVertex_t>*>(m_ptr, "RnHull_t", "m_Vertices"); std::vector<GRnVertex_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GRnHull_t::SetVertices(std::vector<GRnVertex_t> value) {
    SetSchemaValueCUtlVector<GRnVertex_t>(m_ptr, "RnHull_t", "m_Vertices", true, value);
}
std::vector<Vector> GRnHull_t::GetVertexPositions() const {
    CUtlVector<Vector>* vec = GetSchemaValue<CUtlVector<Vector>*>(m_ptr, "RnHull_t", "m_VertexPositions"); std::vector<Vector> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GRnHull_t::SetVertexPositions(std::vector<Vector> value) {
    SetSchemaValueCUtlVector<Vector>(m_ptr, "RnHull_t", "m_VertexPositions", true, value);
}
std::vector<GRnHalfEdge_t> GRnHull_t::GetEdges() const {
    CUtlVector<GRnHalfEdge_t>* vec = GetSchemaValue<CUtlVector<GRnHalfEdge_t>*>(m_ptr, "RnHull_t", "m_Edges"); std::vector<GRnHalfEdge_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GRnHull_t::SetEdges(std::vector<GRnHalfEdge_t> value) {
    SetSchemaValueCUtlVector<GRnHalfEdge_t>(m_ptr, "RnHull_t", "m_Edges", true, value);
}
std::vector<GRnFace_t> GRnHull_t::GetFaces() const {
    CUtlVector<GRnFace_t>* vec = GetSchemaValue<CUtlVector<GRnFace_t>*>(m_ptr, "RnHull_t", "m_Faces"); std::vector<GRnFace_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GRnHull_t::SetFaces(std::vector<GRnFace_t> value) {
    SetSchemaValueCUtlVector<GRnFace_t>(m_ptr, "RnHull_t", "m_Faces", true, value);
}
std::vector<GRnPlane_t> GRnHull_t::GetFacePlanes() const {
    CUtlVector<GRnPlane_t>* vec = GetSchemaValue<CUtlVector<GRnPlane_t>*>(m_ptr, "RnHull_t", "m_FacePlanes"); std::vector<GRnPlane_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GRnHull_t::SetFacePlanes(std::vector<GRnPlane_t> value) {
    SetSchemaValueCUtlVector<GRnPlane_t>(m_ptr, "RnHull_t", "m_FacePlanes", true, value);
}
uint32_t GRnHull_t::GetFlags() const {
    return GetSchemaValue<uint32_t>(m_ptr, "RnHull_t", "m_nFlags");
}
void GRnHull_t::SetFlags(uint32_t value) {
    SetSchemaValue(m_ptr, "RnHull_t", "m_nFlags", true, value);
}
GCRegionSVM GRnHull_t::GetRegionSVM() const {
    GCRegionSVM value(*GetSchemaValuePtr<void*>(m_ptr, "RnHull_t", "m_pRegionSVM"));
    return value;
}
void GRnHull_t::SetRegionSVM(GCRegionSVM value) {
    SetSchemaValue(m_ptr, "RnHull_t","m_pRegionSVM", true, (char*)value.GetPtr());
}
void* GRnHull_t::GetPtr() {
    return m_ptr;
}
std::string GRnHull_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnHull_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassRnHull_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnHull_t>("RnHull_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Centroid", &GRnHull_t::GetCentroid, &GRnHull_t::SetCentroid)
        .addProperty("MaxAngularRadius", &GRnHull_t::GetMaxAngularRadius, &GRnHull_t::SetMaxAngularRadius)
        .addProperty("Bounds", &GRnHull_t::GetBounds, &GRnHull_t::SetBounds)
        .addProperty("OrthographicAreas", &GRnHull_t::GetOrthographicAreas, &GRnHull_t::SetOrthographicAreas)
        .addProperty("Volume", &GRnHull_t::GetVolume, &GRnHull_t::SetVolume)
        .addProperty("SurfaceArea", &GRnHull_t::GetSurfaceArea, &GRnHull_t::SetSurfaceArea)
        .addProperty("Vertices", &GRnHull_t::GetVertices, &GRnHull_t::SetVertices)
        .addProperty("VertexPositions", &GRnHull_t::GetVertexPositions, &GRnHull_t::SetVertexPositions)
        .addProperty("Edges", &GRnHull_t::GetEdges, &GRnHull_t::SetEdges)
        .addProperty("Faces", &GRnHull_t::GetFaces, &GRnHull_t::SetFaces)
        .addProperty("FacePlanes", &GRnHull_t::GetFacePlanes, &GRnHull_t::SetFacePlanes)
        .addProperty("Flags", &GRnHull_t::GetFlags, &GRnHull_t::SetFlags)
        .addProperty("RegionSVM", &GRnHull_t::GetRegionSVM, &GRnHull_t::SetRegionSVM)
        .addFunction("ToPtr", &GRnHull_t::ToPtr)
        .addFunction("IsValid", &GRnHull_t::IsValid)
        .endClass();
}
GCMoodVData::GCMoodVData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMoodVData::GCMoodVData(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCMoodVData::GetMoodType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CMoodVData", "m_nMoodType");
}
void GCMoodVData::SetMoodType(uint64_t value) {
    SetSchemaValue(m_ptr, "CMoodVData", "m_nMoodType", false, value);
}
void* GCMoodVData::GetPtr() {
    return m_ptr;
}
std::string GCMoodVData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMoodVData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMoodVData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMoodVData>("CMoodVData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MoodType", &GCMoodVData::GetMoodType, &GCMoodVData::SetMoodType)
        .addFunction("ToPtr", &GCMoodVData::ToPtr)
        .addFunction("IsValid", &GCMoodVData::IsValid)
        .endClass();
}
GEventClientFrameSimulate_t::GEventClientFrameSimulate_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientFrameSimulate_t::GEventClientFrameSimulate_t(void *ptr) {
    m_ptr = ptr;
}
GEngineLoopState_t GEventClientFrameSimulate_t::GetLoopState() const {
    GEngineLoopState_t value(GetSchemaPtr(m_ptr, "EventClientFrameSimulate_t", "m_LoopState"));
    return value;
}
void GEventClientFrameSimulate_t::SetLoopState(GEngineLoopState_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LoopState' is not possible.\n");
}
float GEventClientFrameSimulate_t::GetRealTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientFrameSimulate_t", "m_flRealTime");
}
void GEventClientFrameSimulate_t::SetRealTime(float value) {
    SetSchemaValue(m_ptr, "EventClientFrameSimulate_t", "m_flRealTime", true, value);
}
float GEventClientFrameSimulate_t::GetFrameTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientFrameSimulate_t", "m_flFrameTime");
}
void GEventClientFrameSimulate_t::SetFrameTime(float value) {
    SetSchemaValue(m_ptr, "EventClientFrameSimulate_t", "m_flFrameTime", true, value);
}
double GEventClientFrameSimulate_t::GetWhenScheduleSendTickPacket() const {
    return GetSchemaValue<double>(m_ptr, "EventClientFrameSimulate_t", "m_flWhenScheduleSendTickPacket");
}
void GEventClientFrameSimulate_t::SetWhenScheduleSendTickPacket(double value) {
    SetSchemaValue(m_ptr, "EventClientFrameSimulate_t", "m_flWhenScheduleSendTickPacket", true, value);
}
void* GEventClientFrameSimulate_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientFrameSimulate_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientFrameSimulate_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientFrameSimulate_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientFrameSimulate_t>("EventClientFrameSimulate_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("LoopState", &GEventClientFrameSimulate_t::GetLoopState, &GEventClientFrameSimulate_t::SetLoopState)
        .addProperty("RealTime", &GEventClientFrameSimulate_t::GetRealTime, &GEventClientFrameSimulate_t::SetRealTime)
        .addProperty("FrameTime", &GEventClientFrameSimulate_t::GetFrameTime, &GEventClientFrameSimulate_t::SetFrameTime)
        .addProperty("WhenScheduleSendTickPacket", &GEventClientFrameSimulate_t::GetWhenScheduleSendTickPacket, &GEventClientFrameSimulate_t::SetWhenScheduleSendTickPacket)
        .addFunction("ToPtr", &GEventClientFrameSimulate_t::ToPtr)
        .addFunction("IsValid", &GEventClientFrameSimulate_t::IsValid)
        .endClass();
}
GCRagdollComponentUpdater::GCRagdollComponentUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCRagdollComponentUpdater::GCRagdollComponentUpdater(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCAnimNodePath> GCRagdollComponentUpdater::GetRagdollNodePaths() const {
    CUtlVector<GCAnimNodePath>* vec = GetSchemaValue<CUtlVector<GCAnimNodePath>*>(m_ptr, "CRagdollComponentUpdater", "m_ragdollNodePaths"); std::vector<GCAnimNodePath> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCRagdollComponentUpdater::SetRagdollNodePaths(std::vector<GCAnimNodePath> value) {
    SetSchemaValueCUtlVector<GCAnimNodePath>(m_ptr, "CRagdollComponentUpdater", "m_ragdollNodePaths", false, value);
}
std::vector<int32> GCRagdollComponentUpdater::GetBoneIndices() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "CRagdollComponentUpdater", "m_boneIndices"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCRagdollComponentUpdater::SetBoneIndices(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "CRagdollComponentUpdater", "m_boneIndices", false, value);
}
std::vector<CUtlString> GCRagdollComponentUpdater::GetBoneNames() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "CRagdollComponentUpdater", "m_boneNames"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCRagdollComponentUpdater::SetBoneNames(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "CRagdollComponentUpdater", "m_boneNames", false, value);
}
std::vector<GWeightList> GCRagdollComponentUpdater::GetWeightLists() const {
    CUtlVector<GWeightList>* vec = GetSchemaValue<CUtlVector<GWeightList>*>(m_ptr, "CRagdollComponentUpdater", "m_weightLists"); std::vector<GWeightList> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCRagdollComponentUpdater::SetWeightLists(std::vector<GWeightList> value) {
    SetSchemaValueCUtlVector<GWeightList>(m_ptr, "CRagdollComponentUpdater", "m_weightLists", false, value);
}
float GCRagdollComponentUpdater::GetSpringFrequencyMin() const {
    return GetSchemaValue<float>(m_ptr, "CRagdollComponentUpdater", "m_flSpringFrequencyMin");
}
void GCRagdollComponentUpdater::SetSpringFrequencyMin(float value) {
    SetSchemaValue(m_ptr, "CRagdollComponentUpdater", "m_flSpringFrequencyMin", false, value);
}
float GCRagdollComponentUpdater::GetSpringFrequencyMax() const {
    return GetSchemaValue<float>(m_ptr, "CRagdollComponentUpdater", "m_flSpringFrequencyMax");
}
void GCRagdollComponentUpdater::SetSpringFrequencyMax(float value) {
    SetSchemaValue(m_ptr, "CRagdollComponentUpdater", "m_flSpringFrequencyMax", false, value);
}
float GCRagdollComponentUpdater::GetMaxStretch() const {
    return GetSchemaValue<float>(m_ptr, "CRagdollComponentUpdater", "m_flMaxStretch");
}
void GCRagdollComponentUpdater::SetMaxStretch(float value) {
    SetSchemaValue(m_ptr, "CRagdollComponentUpdater", "m_flMaxStretch", false, value);
}
bool GCRagdollComponentUpdater::GetSolidCollisionAtZeroWeight() const {
    return GetSchemaValue<bool>(m_ptr, "CRagdollComponentUpdater", "m_bSolidCollisionAtZeroWeight");
}
void GCRagdollComponentUpdater::SetSolidCollisionAtZeroWeight(bool value) {
    SetSchemaValue(m_ptr, "CRagdollComponentUpdater", "m_bSolidCollisionAtZeroWeight", false, value);
}
void* GCRagdollComponentUpdater::GetPtr() {
    return m_ptr;
}
std::string GCRagdollComponentUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCRagdollComponentUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimComponentUpdater GCRagdollComponentUpdater::GetParent() const {
    GCAnimComponentUpdater value(m_ptr);
    return value;
}
void GCRagdollComponentUpdater::SetParent(GCAnimComponentUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCRagdollComponentUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCRagdollComponentUpdater>("CRagdollComponentUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("RagdollNodePaths", &GCRagdollComponentUpdater::GetRagdollNodePaths, &GCRagdollComponentUpdater::SetRagdollNodePaths)
        .addProperty("BoneIndices", &GCRagdollComponentUpdater::GetBoneIndices, &GCRagdollComponentUpdater::SetBoneIndices)
        .addProperty("BoneNames", &GCRagdollComponentUpdater::GetBoneNames, &GCRagdollComponentUpdater::SetBoneNames)
        .addProperty("WeightLists", &GCRagdollComponentUpdater::GetWeightLists, &GCRagdollComponentUpdater::SetWeightLists)
        .addProperty("SpringFrequencyMin", &GCRagdollComponentUpdater::GetSpringFrequencyMin, &GCRagdollComponentUpdater::SetSpringFrequencyMin)
        .addProperty("SpringFrequencyMax", &GCRagdollComponentUpdater::GetSpringFrequencyMax, &GCRagdollComponentUpdater::SetSpringFrequencyMax)
        .addProperty("MaxStretch", &GCRagdollComponentUpdater::GetMaxStretch, &GCRagdollComponentUpdater::SetMaxStretch)
        .addProperty("SolidCollisionAtZeroWeight", &GCRagdollComponentUpdater::GetSolidCollisionAtZeroWeight, &GCRagdollComponentUpdater::SetSolidCollisionAtZeroWeight)
        .addProperty("Parent", &GCRagdollComponentUpdater::GetParent, &GCRagdollComponentUpdater::SetParent)
        .addFunction("ToPtr", &GCRagdollComponentUpdater::ToPtr)
        .addFunction("IsValid", &GCRagdollComponentUpdater::IsValid)
        .endClass();
}
GCMotionNodeBlend1D::GCMotionNodeBlend1D(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionNodeBlend1D::GCMotionNodeBlend1D(void *ptr) {
    m_ptr = ptr;
}
std::vector<GMotionBlendItem> GCMotionNodeBlend1D::GetBlendItems() const {
    CUtlVector<GMotionBlendItem>* vec = GetSchemaValue<CUtlVector<GMotionBlendItem>*>(m_ptr, "CMotionNodeBlend1D", "m_blendItems"); std::vector<GMotionBlendItem> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionNodeBlend1D::SetBlendItems(std::vector<GMotionBlendItem> value) {
    SetSchemaValueCUtlVector<GMotionBlendItem>(m_ptr, "CMotionNodeBlend1D", "m_blendItems", false, value);
}
int32_t GCMotionNodeBlend1D::GetParamIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMotionNodeBlend1D", "m_nParamIndex");
}
void GCMotionNodeBlend1D::SetParamIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CMotionNodeBlend1D", "m_nParamIndex", false, value);
}
void* GCMotionNodeBlend1D::GetPtr() {
    return m_ptr;
}
std::string GCMotionNodeBlend1D::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionNodeBlend1D::IsValid() {
    return (m_ptr != nullptr);
}
GCMotionNode GCMotionNodeBlend1D::GetParent() const {
    GCMotionNode value(m_ptr);
    return value;
}
void GCMotionNodeBlend1D::SetParent(GCMotionNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCMotionNodeBlend1D(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionNodeBlend1D>("CMotionNodeBlend1D")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BlendItems", &GCMotionNodeBlend1D::GetBlendItems, &GCMotionNodeBlend1D::SetBlendItems)
        .addProperty("ParamIndex", &GCMotionNodeBlend1D::GetParamIndex, &GCMotionNodeBlend1D::SetParamIndex)
        .addProperty("Parent", &GCMotionNodeBlend1D::GetParent, &GCMotionNodeBlend1D::SetParent)
        .addFunction("ToPtr", &GCMotionNodeBlend1D::ToPtr)
        .addFunction("IsValid", &GCMotionNodeBlend1D::IsValid)
        .endClass();
}
GCNmControlParameterVectorNode::GCNmControlParameterVectorNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmControlParameterVectorNode::GCNmControlParameterVectorNode(void *ptr) {
    m_ptr = ptr;
}
void* GCNmControlParameterVectorNode::GetPtr() {
    return m_ptr;
}
std::string GCNmControlParameterVectorNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmControlParameterVectorNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmVectorValueNode GCNmControlParameterVectorNode::GetParent() const {
    GCNmVectorValueNode value(m_ptr);
    return value;
}
void GCNmControlParameterVectorNode::SetParent(GCNmVectorValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmControlParameterVectorNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmControlParameterVectorNode>("CNmControlParameterVectorNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCNmControlParameterVectorNode::GetParent, &GCNmControlParameterVectorNode::SetParent)
        .addFunction("ToPtr", &GCNmControlParameterVectorNode::ToPtr)
        .addFunction("IsValid", &GCNmControlParameterVectorNode::IsValid)
        .endClass();
}
GCPathHelperUpdateNode::GCPathHelperUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCPathHelperUpdateNode::GCPathHelperUpdateNode(void *ptr) {
    m_ptr = ptr;
}
float GCPathHelperUpdateNode::GetStoppingRadius() const {
    return GetSchemaValue<float>(m_ptr, "CPathHelperUpdateNode", "m_flStoppingRadius");
}
void GCPathHelperUpdateNode::SetStoppingRadius(float value) {
    SetSchemaValue(m_ptr, "CPathHelperUpdateNode", "m_flStoppingRadius", false, value);
}
float GCPathHelperUpdateNode::GetStoppingSpeedScale() const {
    return GetSchemaValue<float>(m_ptr, "CPathHelperUpdateNode", "m_flStoppingSpeedScale");
}
void GCPathHelperUpdateNode::SetStoppingSpeedScale(float value) {
    SetSchemaValue(m_ptr, "CPathHelperUpdateNode", "m_flStoppingSpeedScale", false, value);
}
void* GCPathHelperUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCPathHelperUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCPathHelperUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCPathHelperUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCPathHelperUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCPathHelperUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCPathHelperUpdateNode>("CPathHelperUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StoppingRadius", &GCPathHelperUpdateNode::GetStoppingRadius, &GCPathHelperUpdateNode::SetStoppingRadius)
        .addProperty("StoppingSpeedScale", &GCPathHelperUpdateNode::GetStoppingSpeedScale, &GCPathHelperUpdateNode::SetStoppingSpeedScale)
        .addProperty("Parent", &GCPathHelperUpdateNode::GetParent, &GCPathHelperUpdateNode::SetParent)
        .addFunction("ToPtr", &GCPathHelperUpdateNode::ToPtr)
        .addFunction("IsValid", &GCPathHelperUpdateNode::IsValid)
        .endClass();
}
GCSeqPoseParamDesc::GCSeqPoseParamDesc(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSeqPoseParamDesc::GCSeqPoseParamDesc(void *ptr) {
    m_ptr = ptr;
}
float GCSeqPoseParamDesc::GetStart() const {
    return GetSchemaValue<float>(m_ptr, "CSeqPoseParamDesc", "m_flStart");
}
void GCSeqPoseParamDesc::SetStart(float value) {
    SetSchemaValue(m_ptr, "CSeqPoseParamDesc", "m_flStart", false, value);
}
float GCSeqPoseParamDesc::GetEnd() const {
    return GetSchemaValue<float>(m_ptr, "CSeqPoseParamDesc", "m_flEnd");
}
void GCSeqPoseParamDesc::SetEnd(float value) {
    SetSchemaValue(m_ptr, "CSeqPoseParamDesc", "m_flEnd", false, value);
}
float GCSeqPoseParamDesc::GetLoop() const {
    return GetSchemaValue<float>(m_ptr, "CSeqPoseParamDesc", "m_flLoop");
}
void GCSeqPoseParamDesc::SetLoop(float value) {
    SetSchemaValue(m_ptr, "CSeqPoseParamDesc", "m_flLoop", false, value);
}
bool GCSeqPoseParamDesc::GetLooping() const {
    return GetSchemaValue<bool>(m_ptr, "CSeqPoseParamDesc", "m_bLooping");
}
void GCSeqPoseParamDesc::SetLooping(bool value) {
    SetSchemaValue(m_ptr, "CSeqPoseParamDesc", "m_bLooping", false, value);
}
void* GCSeqPoseParamDesc::GetPtr() {
    return m_ptr;
}
std::string GCSeqPoseParamDesc::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSeqPoseParamDesc::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSeqPoseParamDesc(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSeqPoseParamDesc>("CSeqPoseParamDesc")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Start", &GCSeqPoseParamDesc::GetStart, &GCSeqPoseParamDesc::SetStart)
        .addProperty("End", &GCSeqPoseParamDesc::GetEnd, &GCSeqPoseParamDesc::SetEnd)
        .addProperty("Loop", &GCSeqPoseParamDesc::GetLoop, &GCSeqPoseParamDesc::SetLoop)
        .addProperty("Looping", &GCSeqPoseParamDesc::GetLooping, &GCSeqPoseParamDesc::SetLooping)
        .addFunction("ToPtr", &GCSeqPoseParamDesc::ToPtr)
        .addFunction("IsValid", &GCSeqPoseParamDesc::IsValid)
        .endClass();
}
GVMixPitchShiftDesc_t::GVMixPitchShiftDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixPitchShiftDesc_t::GVMixPitchShiftDesc_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GVMixPitchShiftDesc_t::GetGrainSampleCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "VMixPitchShiftDesc_t", "m_nGrainSampleCount");
}
void GVMixPitchShiftDesc_t::SetGrainSampleCount(int32_t value) {
    SetSchemaValue(m_ptr, "VMixPitchShiftDesc_t", "m_nGrainSampleCount", true, value);
}
float GVMixPitchShiftDesc_t::GetPitchShift() const {
    return GetSchemaValue<float>(m_ptr, "VMixPitchShiftDesc_t", "m_flPitchShift");
}
void GVMixPitchShiftDesc_t::SetPitchShift(float value) {
    SetSchemaValue(m_ptr, "VMixPitchShiftDesc_t", "m_flPitchShift", true, value);
}
int32_t GVMixPitchShiftDesc_t::GetQuality() const {
    return GetSchemaValue<int32_t>(m_ptr, "VMixPitchShiftDesc_t", "m_nQuality");
}
void GVMixPitchShiftDesc_t::SetQuality(int32_t value) {
    SetSchemaValue(m_ptr, "VMixPitchShiftDesc_t", "m_nQuality", true, value);
}
int32_t GVMixPitchShiftDesc_t::GetProcType() const {
    return GetSchemaValue<int32_t>(m_ptr, "VMixPitchShiftDesc_t", "m_nProcType");
}
void GVMixPitchShiftDesc_t::SetProcType(int32_t value) {
    SetSchemaValue(m_ptr, "VMixPitchShiftDesc_t", "m_nProcType", true, value);
}
void* GVMixPitchShiftDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixPitchShiftDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixPitchShiftDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixPitchShiftDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixPitchShiftDesc_t>("VMixPitchShiftDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("GrainSampleCount", &GVMixPitchShiftDesc_t::GetGrainSampleCount, &GVMixPitchShiftDesc_t::SetGrainSampleCount)
        .addProperty("PitchShift", &GVMixPitchShiftDesc_t::GetPitchShift, &GVMixPitchShiftDesc_t::SetPitchShift)
        .addProperty("Quality", &GVMixPitchShiftDesc_t::GetQuality, &GVMixPitchShiftDesc_t::SetQuality)
        .addProperty("ProcType", &GVMixPitchShiftDesc_t::GetProcType, &GVMixPitchShiftDesc_t::SetProcType)
        .addFunction("ToPtr", &GVMixPitchShiftDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixPitchShiftDesc_t::IsValid)
        .endClass();
}
GCAudioSentence::GCAudioSentence(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAudioSentence::GCAudioSentence(void *ptr) {
    m_ptr = ptr;
}
bool GCAudioSentence::GetShouldVoiceDuck() const {
    return GetSchemaValue<bool>(m_ptr, "CAudioSentence", "m_bShouldVoiceDuck");
}
void GCAudioSentence::SetShouldVoiceDuck(bool value) {
    SetSchemaValue(m_ptr, "CAudioSentence", "m_bShouldVoiceDuck", false, value);
}
std::vector<GCAudioPhonemeTag> GCAudioSentence::GetRunTimePhonemes() const {
    CUtlVector<GCAudioPhonemeTag>* vec = GetSchemaValue<CUtlVector<GCAudioPhonemeTag>*>(m_ptr, "CAudioSentence", "m_RunTimePhonemes"); std::vector<GCAudioPhonemeTag> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAudioSentence::SetRunTimePhonemes(std::vector<GCAudioPhonemeTag> value) {
    SetSchemaValueCUtlVector<GCAudioPhonemeTag>(m_ptr, "CAudioSentence", "m_RunTimePhonemes", false, value);
}
std::vector<GCAudioEmphasisSample> GCAudioSentence::GetEmphasisSamples() const {
    CUtlVector<GCAudioEmphasisSample>* vec = GetSchemaValue<CUtlVector<GCAudioEmphasisSample>*>(m_ptr, "CAudioSentence", "m_EmphasisSamples"); std::vector<GCAudioEmphasisSample> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAudioSentence::SetEmphasisSamples(std::vector<GCAudioEmphasisSample> value) {
    SetSchemaValueCUtlVector<GCAudioEmphasisSample>(m_ptr, "CAudioSentence", "m_EmphasisSamples", false, value);
}
GCAudioMorphData GCAudioSentence::GetMorphData() const {
    GCAudioMorphData value(GetSchemaPtr(m_ptr, "CAudioSentence", "m_morphData"));
    return value;
}
void GCAudioSentence::SetMorphData(GCAudioMorphData value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'MorphData' is not possible.\n");
}
void* GCAudioSentence::GetPtr() {
    return m_ptr;
}
std::string GCAudioSentence::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAudioSentence::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAudioSentence(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAudioSentence>("CAudioSentence")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ShouldVoiceDuck", &GCAudioSentence::GetShouldVoiceDuck, &GCAudioSentence::SetShouldVoiceDuck)
        .addProperty("RunTimePhonemes", &GCAudioSentence::GetRunTimePhonemes, &GCAudioSentence::SetRunTimePhonemes)
        .addProperty("EmphasisSamples", &GCAudioSentence::GetEmphasisSamples, &GCAudioSentence::SetEmphasisSamples)
        .addProperty("MorphData", &GCAudioSentence::GetMorphData, &GCAudioSentence::SetMorphData)
        .addFunction("ToPtr", &GCAudioSentence::ToPtr)
        .addFunction("IsValid", &GCAudioSentence::IsValid)
        .endClass();
}
GCRenderBufferBinding::GCRenderBufferBinding(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCRenderBufferBinding::GCRenderBufferBinding(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCRenderBufferBinding::GetBuffer() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CRenderBufferBinding", "m_hBuffer");
}
void GCRenderBufferBinding::SetBuffer(uint64_t value) {
    SetSchemaValue(m_ptr, "CRenderBufferBinding", "m_hBuffer", false, value);
}
uint32_t GCRenderBufferBinding::GetBindOffsetBytes() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CRenderBufferBinding", "m_nBindOffsetBytes");
}
void GCRenderBufferBinding::SetBindOffsetBytes(uint32_t value) {
    SetSchemaValue(m_ptr, "CRenderBufferBinding", "m_nBindOffsetBytes", false, value);
}
void* GCRenderBufferBinding::GetPtr() {
    return m_ptr;
}
std::string GCRenderBufferBinding::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCRenderBufferBinding::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCRenderBufferBinding(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCRenderBufferBinding>("CRenderBufferBinding")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Buffer", &GCRenderBufferBinding::GetBuffer, &GCRenderBufferBinding::SetBuffer)
        .addProperty("BindOffsetBytes", &GCRenderBufferBinding::GetBindOffsetBytes, &GCRenderBufferBinding::SetBindOffsetBytes)
        .addFunction("ToPtr", &GCRenderBufferBinding::ToPtr)
        .addFunction("IsValid", &GCRenderBufferBinding::IsValid)
        .endClass();
}
GCParticleAnimTag::GCParticleAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCParticleAnimTag::GCParticleAnimTag(void *ptr) {
    m_ptr = ptr;
}
std::string GCParticleAnimTag::GetParticleSystemName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CParticleAnimTag", "m_particleSystemName").Get();
}
void GCParticleAnimTag::SetParticleSystemName(std::string value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_particleSystemName", false, CUtlString(value.c_str()));
}
std::string GCParticleAnimTag::GetConfigName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CParticleAnimTag", "m_configName").Get();
}
void GCParticleAnimTag::SetConfigName(std::string value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_configName", false, CUtlString(value.c_str()));
}
bool GCParticleAnimTag::GetDetachFromOwner() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleAnimTag", "m_bDetachFromOwner");
}
void GCParticleAnimTag::SetDetachFromOwner(bool value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_bDetachFromOwner", false, value);
}
bool GCParticleAnimTag::GetStopWhenTagEnds() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleAnimTag", "m_bStopWhenTagEnds");
}
void GCParticleAnimTag::SetStopWhenTagEnds(bool value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_bStopWhenTagEnds", false, value);
}
bool GCParticleAnimTag::GetTagEndStopIsInstant() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleAnimTag", "m_bTagEndStopIsInstant");
}
void GCParticleAnimTag::SetTagEndStopIsInstant(bool value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_bTagEndStopIsInstant", false, value);
}
std::string GCParticleAnimTag::GetAttachmentName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CParticleAnimTag", "m_attachmentName").Get();
}
void GCParticleAnimTag::SetAttachmentName(std::string value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_attachmentName", false, CUtlString(value.c_str()));
}
uint64_t GCParticleAnimTag::GetAttachmentType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CParticleAnimTag", "m_attachmentType");
}
void GCParticleAnimTag::SetAttachmentType(uint64_t value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_attachmentType", false, value);
}
std::string GCParticleAnimTag::GetAttachmentCP1Name() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CParticleAnimTag", "m_attachmentCP1Name").Get();
}
void GCParticleAnimTag::SetAttachmentCP1Name(std::string value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_attachmentCP1Name", false, CUtlString(value.c_str()));
}
uint64_t GCParticleAnimTag::GetAttachmentCP1Type() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CParticleAnimTag", "m_attachmentCP1Type");
}
void GCParticleAnimTag::SetAttachmentCP1Type(uint64_t value) {
    SetSchemaValue(m_ptr, "CParticleAnimTag", "m_attachmentCP1Type", false, value);
}
void* GCParticleAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCParticleAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCParticleAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimTagBase GCParticleAnimTag::GetParent() const {
    GCAnimTagBase value(m_ptr);
    return value;
}
void GCParticleAnimTag::SetParent(GCAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCParticleAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCParticleAnimTag>("CParticleAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ParticleSystemName", &GCParticleAnimTag::GetParticleSystemName, &GCParticleAnimTag::SetParticleSystemName)
        .addProperty("ConfigName", &GCParticleAnimTag::GetConfigName, &GCParticleAnimTag::SetConfigName)
        .addProperty("DetachFromOwner", &GCParticleAnimTag::GetDetachFromOwner, &GCParticleAnimTag::SetDetachFromOwner)
        .addProperty("StopWhenTagEnds", &GCParticleAnimTag::GetStopWhenTagEnds, &GCParticleAnimTag::SetStopWhenTagEnds)
        .addProperty("TagEndStopIsInstant", &GCParticleAnimTag::GetTagEndStopIsInstant, &GCParticleAnimTag::SetTagEndStopIsInstant)
        .addProperty("AttachmentName", &GCParticleAnimTag::GetAttachmentName, &GCParticleAnimTag::SetAttachmentName)
        .addProperty("AttachmentType", &GCParticleAnimTag::GetAttachmentType, &GCParticleAnimTag::SetAttachmentType)
        .addProperty("AttachmentCP1Name", &GCParticleAnimTag::GetAttachmentCP1Name, &GCParticleAnimTag::SetAttachmentCP1Name)
        .addProperty("AttachmentCP1Type", &GCParticleAnimTag::GetAttachmentCP1Type, &GCParticleAnimTag::SetAttachmentCP1Type)
        .addProperty("Parent", &GCParticleAnimTag::GetParent, &GCParticleAnimTag::SetParent)
        .addFunction("ToPtr", &GCParticleAnimTag::ToPtr)
        .addFunction("IsValid", &GCParticleAnimTag::IsValid)
        .endClass();
}
GCStaticPoseCacheBuilder::GCStaticPoseCacheBuilder(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCStaticPoseCacheBuilder::GCStaticPoseCacheBuilder(void *ptr) {
    m_ptr = ptr;
}
void* GCStaticPoseCacheBuilder::GetPtr() {
    return m_ptr;
}
std::string GCStaticPoseCacheBuilder::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCStaticPoseCacheBuilder::IsValid() {
    return (m_ptr != nullptr);
}
GCStaticPoseCache GCStaticPoseCacheBuilder::GetParent() const {
    GCStaticPoseCache value(m_ptr);
    return value;
}
void GCStaticPoseCacheBuilder::SetParent(GCStaticPoseCache value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCStaticPoseCacheBuilder(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCStaticPoseCacheBuilder>("CStaticPoseCacheBuilder")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCStaticPoseCacheBuilder::GetParent, &GCStaticPoseCacheBuilder::SetParent)
        .addFunction("ToPtr", &GCStaticPoseCacheBuilder::ToPtr)
        .addFunction("IsValid", &GCStaticPoseCacheBuilder::IsValid)
        .endClass();
}
GCNmRootMotionData::GCNmRootMotionData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmRootMotionData::GCNmRootMotionData(void *ptr) {
    m_ptr = ptr;
}
int32_t GCNmRootMotionData::GetNumFrames() const {
    return GetSchemaValue<int32_t>(m_ptr, "CNmRootMotionData", "m_nNumFrames");
}
void GCNmRootMotionData::SetNumFrames(int32_t value) {
    SetSchemaValue(m_ptr, "CNmRootMotionData", "m_nNumFrames", false, value);
}
float GCNmRootMotionData::GetAverageLinearVelocity() const {
    return GetSchemaValue<float>(m_ptr, "CNmRootMotionData", "m_flAverageLinearVelocity");
}
void GCNmRootMotionData::SetAverageLinearVelocity(float value) {
    SetSchemaValue(m_ptr, "CNmRootMotionData", "m_flAverageLinearVelocity", false, value);
}
float GCNmRootMotionData::GetAverageAngularVelocityRadians() const {
    return GetSchemaValue<float>(m_ptr, "CNmRootMotionData", "m_flAverageAngularVelocityRadians");
}
void GCNmRootMotionData::SetAverageAngularVelocityRadians(float value) {
    SetSchemaValue(m_ptr, "CNmRootMotionData", "m_flAverageAngularVelocityRadians", false, value);
}
void* GCNmRootMotionData::GetPtr() {
    return m_ptr;
}
std::string GCNmRootMotionData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmRootMotionData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmRootMotionData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmRootMotionData>("CNmRootMotionData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("NumFrames", &GCNmRootMotionData::GetNumFrames, &GCNmRootMotionData::SetNumFrames)
        .addProperty("AverageLinearVelocity", &GCNmRootMotionData::GetAverageLinearVelocity, &GCNmRootMotionData::SetAverageLinearVelocity)
        .addProperty("AverageAngularVelocityRadians", &GCNmRootMotionData::GetAverageAngularVelocityRadians, &GCNmRootMotionData::SetAverageAngularVelocityRadians)
        .addFunction("ToPtr", &GCNmRootMotionData::ToPtr)
        .addFunction("IsValid", &GCNmRootMotionData::IsValid)
        .endClass();
}
GCAnimReplayFrame::GCAnimReplayFrame(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimReplayFrame::GCAnimReplayFrame(void *ptr) {
    m_ptr = ptr;
}
float GCAnimReplayFrame::GetTimeStamp() const {
    return GetSchemaValue<float>(m_ptr, "CAnimReplayFrame", "m_timeStamp");
}
void GCAnimReplayFrame::SetTimeStamp(float value) {
    SetSchemaValue(m_ptr, "CAnimReplayFrame", "m_timeStamp", false, value);
}
void* GCAnimReplayFrame::GetPtr() {
    return m_ptr;
}
std::string GCAnimReplayFrame::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimReplayFrame::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimReplayFrame(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimReplayFrame>("CAnimReplayFrame")
        .addConstructor<void (*)(std::string)>()
        .addProperty("TimeStamp", &GCAnimReplayFrame::GetTimeStamp, &GCAnimReplayFrame::SetTimeStamp)
        .addFunction("ToPtr", &GCAnimReplayFrame::ToPtr)
        .addFunction("IsValid", &GCAnimReplayFrame::IsValid)
        .endClass();
}
GCNmVirtualParameterBoneMaskNode::GCNmVirtualParameterBoneMaskNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmVirtualParameterBoneMaskNode::GCNmVirtualParameterBoneMaskNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmVirtualParameterBoneMaskNode::GetChildNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmVirtualParameterBoneMaskNode", "m_nChildNodeIdx");
}
void GCNmVirtualParameterBoneMaskNode::SetChildNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmVirtualParameterBoneMaskNode", "m_nChildNodeIdx", false, value);
}
void* GCNmVirtualParameterBoneMaskNode::GetPtr() {
    return m_ptr;
}
std::string GCNmVirtualParameterBoneMaskNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmVirtualParameterBoneMaskNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmBoneMaskValueNode GCNmVirtualParameterBoneMaskNode::GetParent() const {
    GCNmBoneMaskValueNode value(m_ptr);
    return value;
}
void GCNmVirtualParameterBoneMaskNode::SetParent(GCNmBoneMaskValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmVirtualParameterBoneMaskNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmVirtualParameterBoneMaskNode>("CNmVirtualParameterBoneMaskNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChildNodeIdx", &GCNmVirtualParameterBoneMaskNode::GetChildNodeIdx, &GCNmVirtualParameterBoneMaskNode::SetChildNodeIdx)
        .addProperty("Parent", &GCNmVirtualParameterBoneMaskNode::GetParent, &GCNmVirtualParameterBoneMaskNode::SetParent)
        .addFunction("ToPtr", &GCNmVirtualParameterBoneMaskNode::ToPtr)
        .addFunction("IsValid", &GCNmVirtualParameterBoneMaskNode::IsValid)
        .endClass();
}
GCBlockSelectionMetricEvaluator::GCBlockSelectionMetricEvaluator(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBlockSelectionMetricEvaluator::GCBlockSelectionMetricEvaluator(void *ptr) {
    m_ptr = ptr;
}
void* GCBlockSelectionMetricEvaluator::GetPtr() {
    return m_ptr;
}
std::string GCBlockSelectionMetricEvaluator::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBlockSelectionMetricEvaluator::IsValid() {
    return (m_ptr != nullptr);
}
GCMotionMetricEvaluator GCBlockSelectionMetricEvaluator::GetParent() const {
    GCMotionMetricEvaluator value(m_ptr);
    return value;
}
void GCBlockSelectionMetricEvaluator::SetParent(GCMotionMetricEvaluator value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCBlockSelectionMetricEvaluator(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBlockSelectionMetricEvaluator>("CBlockSelectionMetricEvaluator")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCBlockSelectionMetricEvaluator::GetParent, &GCBlockSelectionMetricEvaluator::SetParent)
        .addFunction("ToPtr", &GCBlockSelectionMetricEvaluator::ToPtr)
        .addFunction("IsValid", &GCBlockSelectionMetricEvaluator::IsValid)
        .endClass();
}
GCMotionGraph::GCMotionGraph(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionGraph::GCMotionGraph(void *ptr) {
    m_ptr = ptr;
}
GCParamSpanUpdater GCMotionGraph::GetParamSpans() const {
    GCParamSpanUpdater value(GetSchemaPtr(m_ptr, "CMotionGraph", "m_paramSpans"));
    return value;
}
void GCMotionGraph::SetParamSpans(GCParamSpanUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParamSpans' is not possible.\n");
}
std::vector<GTagSpan_t> GCMotionGraph::GetTags() const {
    CUtlVector<GTagSpan_t>* vec = GetSchemaValue<CUtlVector<GTagSpan_t>*>(m_ptr, "CMotionGraph", "m_tags"); std::vector<GTagSpan_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionGraph::SetTags(std::vector<GTagSpan_t> value) {
    SetSchemaValueCUtlVector<GTagSpan_t>(m_ptr, "CMotionGraph", "m_tags", false, value);
}
int32_t GCMotionGraph::GetParameterCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMotionGraph", "m_nParameterCount");
}
void GCMotionGraph::SetParameterCount(int32_t value) {
    SetSchemaValue(m_ptr, "CMotionGraph", "m_nParameterCount", false, value);
}
int32_t GCMotionGraph::GetConfigStartIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMotionGraph", "m_nConfigStartIndex");
}
void GCMotionGraph::SetConfigStartIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CMotionGraph", "m_nConfigStartIndex", false, value);
}
int32_t GCMotionGraph::GetConfigCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMotionGraph", "m_nConfigCount");
}
void GCMotionGraph::SetConfigCount(int32_t value) {
    SetSchemaValue(m_ptr, "CMotionGraph", "m_nConfigCount", false, value);
}
bool GCMotionGraph::GetLoop() const {
    return GetSchemaValue<bool>(m_ptr, "CMotionGraph", "m_bLoop");
}
void GCMotionGraph::SetLoop(bool value) {
    SetSchemaValue(m_ptr, "CMotionGraph", "m_bLoop", false, value);
}
void* GCMotionGraph::GetPtr() {
    return m_ptr;
}
std::string GCMotionGraph::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionGraph::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMotionGraph(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionGraph>("CMotionGraph")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ParamSpans", &GCMotionGraph::GetParamSpans, &GCMotionGraph::SetParamSpans)
        .addProperty("Tags", &GCMotionGraph::GetTags, &GCMotionGraph::SetTags)
        .addProperty("ParameterCount", &GCMotionGraph::GetParameterCount, &GCMotionGraph::SetParameterCount)
        .addProperty("ConfigStartIndex", &GCMotionGraph::GetConfigStartIndex, &GCMotionGraph::SetConfigStartIndex)
        .addProperty("ConfigCount", &GCMotionGraph::GetConfigCount, &GCMotionGraph::SetConfigCount)
        .addProperty("Loop", &GCMotionGraph::GetLoop, &GCMotionGraph::SetLoop)
        .addFunction("ToPtr", &GCMotionGraph::ToPtr)
        .addFunction("IsValid", &GCMotionGraph::IsValid)
        .endClass();
}
GCSosSoundEventGroupSchema::GCSosSoundEventGroupSchema(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSosSoundEventGroupSchema::GCSosSoundEventGroupSchema(void *ptr) {
    m_ptr = ptr;
}
std::string GCSosSoundEventGroupSchema::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CSosSoundEventGroupSchema", "m_name").Get();
}
void GCSosSoundEventGroupSchema::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CSosSoundEventGroupSchema", "m_name", false, CUtlString(value.c_str()));
}
uint64_t GCSosSoundEventGroupSchema::GetType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CSosSoundEventGroupSchema", "m_nType");
}
void GCSosSoundEventGroupSchema::SetType(uint64_t value) {
    SetSchemaValue(m_ptr, "CSosSoundEventGroupSchema", "m_nType", false, value);
}
bool GCSosSoundEventGroupSchema::GetIsBlocking() const {
    return GetSchemaValue<bool>(m_ptr, "CSosSoundEventGroupSchema", "m_bIsBlocking");
}
void GCSosSoundEventGroupSchema::SetIsBlocking(bool value) {
    SetSchemaValue(m_ptr, "CSosSoundEventGroupSchema", "m_bIsBlocking", false, value);
}
int32_t GCSosSoundEventGroupSchema::GetBlockMaxCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSosSoundEventGroupSchema", "m_nBlockMaxCount");
}
void GCSosSoundEventGroupSchema::SetBlockMaxCount(int32_t value) {
    SetSchemaValue(m_ptr, "CSosSoundEventGroupSchema", "m_nBlockMaxCount", false, value);
}
bool GCSosSoundEventGroupSchema::GetInvertMatch() const {
    return GetSchemaValue<bool>(m_ptr, "CSosSoundEventGroupSchema", "m_bInvertMatch");
}
void GCSosSoundEventGroupSchema::SetInvertMatch(bool value) {
    SetSchemaValue(m_ptr, "CSosSoundEventGroupSchema", "m_bInvertMatch", false, value);
}
GCSosGroupMatchPattern GCSosSoundEventGroupSchema::GetMatchPattern() const {
    GCSosGroupMatchPattern value(GetSchemaPtr(m_ptr, "CSosSoundEventGroupSchema", "m_matchPattern"));
    return value;
}
void GCSosSoundEventGroupSchema::SetMatchPattern(GCSosGroupMatchPattern value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'MatchPattern' is not possible.\n");
}
GCSosGroupBranchPattern GCSosSoundEventGroupSchema::GetBranchPattern() const {
    GCSosGroupBranchPattern value(GetSchemaPtr(m_ptr, "CSosSoundEventGroupSchema", "m_branchPattern"));
    return value;
}
void GCSosSoundEventGroupSchema::SetBranchPattern(GCSosGroupBranchPattern value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BranchPattern' is not possible.\n");
}
float GCSosSoundEventGroupSchema::GetLifeSpanTime() const {
    return GetSchemaValue<float>(m_ptr, "CSosSoundEventGroupSchema", "m_flLifeSpanTime");
}
void GCSosSoundEventGroupSchema::SetLifeSpanTime(float value) {
    SetSchemaValue(m_ptr, "CSosSoundEventGroupSchema", "m_flLifeSpanTime", false, value);
}
std::vector<GCSosGroupActionSchema*> GCSosSoundEventGroupSchema::GetActions() const {
    GCSosGroupActionSchema** outValue = GetSchemaValue<GCSosGroupActionSchema**>(m_ptr, "CSosSoundEventGroupSchema", "m_vActions"); std::vector<GCSosGroupActionSchema*> ret; for(int i = 0; i < 4; i++) { ret.push_back(outValue[i]); } return ret;
}
void GCSosSoundEventGroupSchema::SetActions(std::vector<GCSosGroupActionSchema*> value) {
    GCSosGroupActionSchema** outValue = GetSchemaValue<GCSosGroupActionSchema**>(m_ptr, "CSosSoundEventGroupSchema", "m_vActions"); for(int i = 0; i < 4; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "CSosSoundEventGroupSchema", "m_vActions", false, outValue);
}
void* GCSosSoundEventGroupSchema::GetPtr() {
    return m_ptr;
}
std::string GCSosSoundEventGroupSchema::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSosSoundEventGroupSchema::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSosSoundEventGroupSchema(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSosSoundEventGroupSchema>("CSosSoundEventGroupSchema")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCSosSoundEventGroupSchema::GetName, &GCSosSoundEventGroupSchema::SetName)
        .addProperty("Type", &GCSosSoundEventGroupSchema::GetType, &GCSosSoundEventGroupSchema::SetType)
        .addProperty("IsBlocking", &GCSosSoundEventGroupSchema::GetIsBlocking, &GCSosSoundEventGroupSchema::SetIsBlocking)
        .addProperty("BlockMaxCount", &GCSosSoundEventGroupSchema::GetBlockMaxCount, &GCSosSoundEventGroupSchema::SetBlockMaxCount)
        .addProperty("InvertMatch", &GCSosSoundEventGroupSchema::GetInvertMatch, &GCSosSoundEventGroupSchema::SetInvertMatch)
        .addProperty("MatchPattern", &GCSosSoundEventGroupSchema::GetMatchPattern, &GCSosSoundEventGroupSchema::SetMatchPattern)
        .addProperty("BranchPattern", &GCSosSoundEventGroupSchema::GetBranchPattern, &GCSosSoundEventGroupSchema::SetBranchPattern)
        .addProperty("LifeSpanTime", &GCSosSoundEventGroupSchema::GetLifeSpanTime, &GCSosSoundEventGroupSchema::SetLifeSpanTime)
        .addProperty("Actions", &GCSosSoundEventGroupSchema::GetActions, &GCSosSoundEventGroupSchema::SetActions)
        .addFunction("ToPtr", &GCSosSoundEventGroupSchema::ToPtr)
        .addFunction("IsValid", &GCSosSoundEventGroupSchema::IsValid)
        .endClass();
}
GCFootMotion::GCFootMotion(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootMotion::GCFootMotion(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCFootStride> GCFootMotion::GetStrides() const {
    CUtlVector<GCFootStride>* vec = GetSchemaValue<CUtlVector<GCFootStride>*>(m_ptr, "CFootMotion", "m_strides"); std::vector<GCFootStride> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCFootMotion::SetStrides(std::vector<GCFootStride> value) {
    SetSchemaValueCUtlVector<GCFootStride>(m_ptr, "CFootMotion", "m_strides", false, value);
}
std::string GCFootMotion::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFootMotion", "m_name").Get();
}
void GCFootMotion::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CFootMotion", "m_name", false, CUtlString(value.c_str()));
}
bool GCFootMotion::GetAdditive() const {
    return GetSchemaValue<bool>(m_ptr, "CFootMotion", "m_bAdditive");
}
void GCFootMotion::SetAdditive(bool value) {
    SetSchemaValue(m_ptr, "CFootMotion", "m_bAdditive", false, value);
}
void* GCFootMotion::GetPtr() {
    return m_ptr;
}
std::string GCFootMotion::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootMotion::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFootMotion(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootMotion>("CFootMotion")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Strides", &GCFootMotion::GetStrides, &GCFootMotion::SetStrides)
        .addProperty("Name", &GCFootMotion::GetName, &GCFootMotion::SetName)
        .addProperty("Additive", &GCFootMotion::GetAdditive, &GCFootMotion::SetAdditive)
        .addFunction("ToPtr", &GCFootMotion::ToPtr)
        .addFunction("IsValid", &GCFootMotion::IsValid)
        .endClass();
}
GCDampedValueUpdateItem::GCDampedValueUpdateItem(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCDampedValueUpdateItem::GCDampedValueUpdateItem(void *ptr) {
    m_ptr = ptr;
}
GCAnimInputDamping GCDampedValueUpdateItem::GetDamping() const {
    GCAnimInputDamping value(GetSchemaPtr(m_ptr, "CDampedValueUpdateItem", "m_damping"));
    return value;
}
void GCDampedValueUpdateItem::SetDamping(GCAnimInputDamping value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Damping' is not possible.\n");
}
GCAnimParamHandle GCDampedValueUpdateItem::GetParamIn() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CDampedValueUpdateItem", "m_hParamIn"));
    return value;
}
void GCDampedValueUpdateItem::SetParamIn(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParamIn' is not possible.\n");
}
GCAnimParamHandle GCDampedValueUpdateItem::GetParamOut() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CDampedValueUpdateItem", "m_hParamOut"));
    return value;
}
void GCDampedValueUpdateItem::SetParamOut(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParamOut' is not possible.\n");
}
void* GCDampedValueUpdateItem::GetPtr() {
    return m_ptr;
}
std::string GCDampedValueUpdateItem::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCDampedValueUpdateItem::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCDampedValueUpdateItem(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCDampedValueUpdateItem>("CDampedValueUpdateItem")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Damping", &GCDampedValueUpdateItem::GetDamping, &GCDampedValueUpdateItem::SetDamping)
        .addProperty("ParamIn", &GCDampedValueUpdateItem::GetParamIn, &GCDampedValueUpdateItem::SetParamIn)
        .addProperty("ParamOut", &GCDampedValueUpdateItem::GetParamOut, &GCDampedValueUpdateItem::SetParamOut)
        .addFunction("ToPtr", &GCDampedValueUpdateItem::ToPtr)
        .addFunction("IsValid", &GCDampedValueUpdateItem::IsValid)
        .endClass();
}
GRnHalfEdge_t::GRnHalfEdge_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnHalfEdge_t::GRnHalfEdge_t(void *ptr) {
    m_ptr = ptr;
}
uint8_t GRnHalfEdge_t::GetNext() const {
    return GetSchemaValue<uint8_t>(m_ptr, "RnHalfEdge_t", "m_nNext");
}
void GRnHalfEdge_t::SetNext(uint8_t value) {
    SetSchemaValue(m_ptr, "RnHalfEdge_t", "m_nNext", true, value);
}
uint8_t GRnHalfEdge_t::GetTwin() const {
    return GetSchemaValue<uint8_t>(m_ptr, "RnHalfEdge_t", "m_nTwin");
}
void GRnHalfEdge_t::SetTwin(uint8_t value) {
    SetSchemaValue(m_ptr, "RnHalfEdge_t", "m_nTwin", true, value);
}
uint8_t GRnHalfEdge_t::GetOrigin() const {
    return GetSchemaValue<uint8_t>(m_ptr, "RnHalfEdge_t", "m_nOrigin");
}
void GRnHalfEdge_t::SetOrigin(uint8_t value) {
    SetSchemaValue(m_ptr, "RnHalfEdge_t", "m_nOrigin", true, value);
}
uint8_t GRnHalfEdge_t::GetFace() const {
    return GetSchemaValue<uint8_t>(m_ptr, "RnHalfEdge_t", "m_nFace");
}
void GRnHalfEdge_t::SetFace(uint8_t value) {
    SetSchemaValue(m_ptr, "RnHalfEdge_t", "m_nFace", true, value);
}
void* GRnHalfEdge_t::GetPtr() {
    return m_ptr;
}
std::string GRnHalfEdge_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnHalfEdge_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassRnHalfEdge_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnHalfEdge_t>("RnHalfEdge_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Next", &GRnHalfEdge_t::GetNext, &GRnHalfEdge_t::SetNext)
        .addProperty("Twin", &GRnHalfEdge_t::GetTwin, &GRnHalfEdge_t::SetTwin)
        .addProperty("Origin", &GRnHalfEdge_t::GetOrigin, &GRnHalfEdge_t::SetOrigin)
        .addProperty("Face", &GRnHalfEdge_t::GetFace, &GRnHalfEdge_t::SetFace)
        .addFunction("ToPtr", &GRnHalfEdge_t::ToPtr)
        .addFunction("IsValid", &GRnHalfEdge_t::IsValid)
        .endClass();
}
GCAnimDataChannelDesc::GCAnimDataChannelDesc(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimDataChannelDesc::GCAnimDataChannelDesc(void *ptr) {
    m_ptr = ptr;
}
int32_t GCAnimDataChannelDesc::GetFlags() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimDataChannelDesc", "m_nFlags");
}
void GCAnimDataChannelDesc::SetFlags(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimDataChannelDesc", "m_nFlags", false, value);
}
int32_t GCAnimDataChannelDesc::GetType() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimDataChannelDesc", "m_nType");
}
void GCAnimDataChannelDesc::SetType(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimDataChannelDesc", "m_nType", false, value);
}
std::vector<int32> GCAnimDataChannelDesc::GetElementIndexArray() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "CAnimDataChannelDesc", "m_nElementIndexArray"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDataChannelDesc::SetElementIndexArray(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "CAnimDataChannelDesc", "m_nElementIndexArray", false, value);
}
std::vector<uint32> GCAnimDataChannelDesc::GetElementMaskArray() const {
    CUtlVector<uint32>* vec = GetSchemaValue<CUtlVector<uint32>*>(m_ptr, "CAnimDataChannelDesc", "m_nElementMaskArray"); std::vector<uint32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDataChannelDesc::SetElementMaskArray(std::vector<uint32> value) {
    SetSchemaValueCUtlVector<uint32>(m_ptr, "CAnimDataChannelDesc", "m_nElementMaskArray", false, value);
}
void* GCAnimDataChannelDesc::GetPtr() {
    return m_ptr;
}
std::string GCAnimDataChannelDesc::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimDataChannelDesc::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimDataChannelDesc(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimDataChannelDesc>("CAnimDataChannelDesc")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GCAnimDataChannelDesc::GetFlags, &GCAnimDataChannelDesc::SetFlags)
        .addProperty("Type", &GCAnimDataChannelDesc::GetType, &GCAnimDataChannelDesc::SetType)
        .addProperty("ElementIndexArray", &GCAnimDataChannelDesc::GetElementIndexArray, &GCAnimDataChannelDesc::SetElementIndexArray)
        .addProperty("ElementMaskArray", &GCAnimDataChannelDesc::GetElementMaskArray, &GCAnimDataChannelDesc::SetElementMaskArray)
        .addFunction("ToPtr", &GCAnimDataChannelDesc::ToPtr)
        .addFunction("IsValid", &GCAnimDataChannelDesc::IsValid)
        .endClass();
}
GEventClientProcessNetworking_t::GEventClientProcessNetworking_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientProcessNetworking_t::GEventClientProcessNetworking_t(void *ptr) {
    m_ptr = ptr;
}
void* GEventClientProcessNetworking_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientProcessNetworking_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientProcessNetworking_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientProcessNetworking_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientProcessNetworking_t>("EventClientProcessNetworking_t")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GEventClientProcessNetworking_t::ToPtr)
        .addFunction("IsValid", &GEventClientProcessNetworking_t::IsValid)
        .endClass();
}
GCModelConfigList::GCModelConfigList(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCModelConfigList::GCModelConfigList(void *ptr) {
    m_ptr = ptr;
}
bool GCModelConfigList::GetHideMaterialGroupInTools() const {
    return GetSchemaValue<bool>(m_ptr, "CModelConfigList", "m_bHideMaterialGroupInTools");
}
void GCModelConfigList::SetHideMaterialGroupInTools(bool value) {
    SetSchemaValue(m_ptr, "CModelConfigList", "m_bHideMaterialGroupInTools", false, value);
}
bool GCModelConfigList::GetHideRenderColorInTools() const {
    return GetSchemaValue<bool>(m_ptr, "CModelConfigList", "m_bHideRenderColorInTools");
}
void GCModelConfigList::SetHideRenderColorInTools(bool value) {
    SetSchemaValue(m_ptr, "CModelConfigList", "m_bHideRenderColorInTools", false, value);
}
std::vector<GCModelConfig*> GCModelConfigList::GetConfigs() const {
    CUtlVector<GCModelConfig*>* vec = GetSchemaValue<CUtlVector<GCModelConfig*>*>(m_ptr, "CModelConfigList", "m_Configs"); std::vector<GCModelConfig*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCModelConfigList::SetConfigs(std::vector<GCModelConfig*> value) {
    SetSchemaValueCUtlVector<GCModelConfig*>(m_ptr, "CModelConfigList", "m_Configs", false, value);
}
void* GCModelConfigList::GetPtr() {
    return m_ptr;
}
std::string GCModelConfigList::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCModelConfigList::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCModelConfigList(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCModelConfigList>("CModelConfigList")
        .addConstructor<void (*)(std::string)>()
        .addProperty("HideMaterialGroupInTools", &GCModelConfigList::GetHideMaterialGroupInTools, &GCModelConfigList::SetHideMaterialGroupInTools)
        .addProperty("HideRenderColorInTools", &GCModelConfigList::GetHideRenderColorInTools, &GCModelConfigList::SetHideRenderColorInTools)
        .addProperty("Configs", &GCModelConfigList::GetConfigs, &GCModelConfigList::SetConfigs)
        .addFunction("ToPtr", &GCModelConfigList::ToPtr)
        .addFunction("IsValid", &GCModelConfigList::IsValid)
        .endClass();
}
GCNmGraphVariation::GCNmGraphVariation(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmGraphVariation::GCNmGraphVariation(void *ptr) {
    m_ptr = ptr;
}
void* GCNmGraphVariation::GetPtr() {
    return m_ptr;
}
std::string GCNmGraphVariation::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmGraphVariation::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmGraphVariation(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmGraphVariation>("CNmGraphVariation")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GCNmGraphVariation::ToPtr)
        .addFunction("IsValid", &GCNmGraphVariation::IsValid)
        .endClass();
}
GCSosGroupActionTimeBlockLimitSchema::GCSosGroupActionTimeBlockLimitSchema(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSosGroupActionTimeBlockLimitSchema::GCSosGroupActionTimeBlockLimitSchema(void *ptr) {
    m_ptr = ptr;
}
int32_t GCSosGroupActionTimeBlockLimitSchema::GetMaxCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSosGroupActionTimeBlockLimitSchema", "m_nMaxCount");
}
void GCSosGroupActionTimeBlockLimitSchema::SetMaxCount(int32_t value) {
    SetSchemaValue(m_ptr, "CSosGroupActionTimeBlockLimitSchema", "m_nMaxCount", false, value);
}
float GCSosGroupActionTimeBlockLimitSchema::GetMaxDuration() const {
    return GetSchemaValue<float>(m_ptr, "CSosGroupActionTimeBlockLimitSchema", "m_flMaxDuration");
}
void GCSosGroupActionTimeBlockLimitSchema::SetMaxDuration(float value) {
    SetSchemaValue(m_ptr, "CSosGroupActionTimeBlockLimitSchema", "m_flMaxDuration", false, value);
}
void* GCSosGroupActionTimeBlockLimitSchema::GetPtr() {
    return m_ptr;
}
std::string GCSosGroupActionTimeBlockLimitSchema::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSosGroupActionTimeBlockLimitSchema::IsValid() {
    return (m_ptr != nullptr);
}
GCSosGroupActionSchema GCSosGroupActionTimeBlockLimitSchema::GetParent() const {
    GCSosGroupActionSchema value(m_ptr);
    return value;
}
void GCSosGroupActionTimeBlockLimitSchema::SetParent(GCSosGroupActionSchema value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSosGroupActionTimeBlockLimitSchema(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSosGroupActionTimeBlockLimitSchema>("CSosGroupActionTimeBlockLimitSchema")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MaxCount", &GCSosGroupActionTimeBlockLimitSchema::GetMaxCount, &GCSosGroupActionTimeBlockLimitSchema::SetMaxCount)
        .addProperty("MaxDuration", &GCSosGroupActionTimeBlockLimitSchema::GetMaxDuration, &GCSosGroupActionTimeBlockLimitSchema::SetMaxDuration)
        .addProperty("Parent", &GCSosGroupActionTimeBlockLimitSchema::GetParent, &GCSosGroupActionTimeBlockLimitSchema::SetParent)
        .addFunction("ToPtr", &GCSosGroupActionTimeBlockLimitSchema::ToPtr)
        .addFunction("IsValid", &GCSosGroupActionTimeBlockLimitSchema::IsValid)
        .endClass();
}
GVMixDynamics3BandDesc_t::GVMixDynamics3BandDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixDynamics3BandDesc_t::GVMixDynamics3BandDesc_t(void *ptr) {
    m_ptr = ptr;
}
float GVMixDynamics3BandDesc_t::GetFldbGainOutput() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_fldbGainOutput");
}
void GVMixDynamics3BandDesc_t::SetFldbGainOutput(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_fldbGainOutput", true, value);
}
float GVMixDynamics3BandDesc_t::GetRMSTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_flRMSTimeMS");
}
void GVMixDynamics3BandDesc_t::SetRMSTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_flRMSTimeMS", true, value);
}
float GVMixDynamics3BandDesc_t::GetFldbKneeWidth() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_fldbKneeWidth");
}
void GVMixDynamics3BandDesc_t::SetFldbKneeWidth(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_fldbKneeWidth", true, value);
}
float GVMixDynamics3BandDesc_t::GetDepth() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_flDepth");
}
void GVMixDynamics3BandDesc_t::SetDepth(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_flDepth", true, value);
}
float GVMixDynamics3BandDesc_t::GetWetMix() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_flWetMix");
}
void GVMixDynamics3BandDesc_t::SetWetMix(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_flWetMix", true, value);
}
float GVMixDynamics3BandDesc_t::GetTimeScale() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_flTimeScale");
}
void GVMixDynamics3BandDesc_t::SetTimeScale(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_flTimeScale", true, value);
}
float GVMixDynamics3BandDesc_t::GetLowCutoffFreq() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_flLowCutoffFreq");
}
void GVMixDynamics3BandDesc_t::SetLowCutoffFreq(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_flLowCutoffFreq", true, value);
}
float GVMixDynamics3BandDesc_t::GetHighCutoffFreq() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamics3BandDesc_t", "m_flHighCutoffFreq");
}
void GVMixDynamics3BandDesc_t::SetHighCutoffFreq(float value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_flHighCutoffFreq", true, value);
}
bool GVMixDynamics3BandDesc_t::GetPeakMode() const {
    return GetSchemaValue<bool>(m_ptr, "VMixDynamics3BandDesc_t", "m_bPeakMode");
}
void GVMixDynamics3BandDesc_t::SetPeakMode(bool value) {
    SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_bPeakMode", true, value);
}
std::vector<GVMixDynamicsBand_t> GVMixDynamics3BandDesc_t::GetBandDesc() const {
    GVMixDynamicsBand_t* outValue = GetSchemaValue<GVMixDynamicsBand_t*>(m_ptr, "VMixDynamics3BandDesc_t", "m_bandDesc"); std::vector<GVMixDynamicsBand_t> ret; for(int i = 0; i < 3; i++) { ret.push_back(outValue[i]); } return ret;
}
void GVMixDynamics3BandDesc_t::SetBandDesc(std::vector<GVMixDynamicsBand_t> value) {
    GVMixDynamicsBand_t* outValue = GetSchemaValue<GVMixDynamicsBand_t*>(m_ptr, "VMixDynamics3BandDesc_t", "m_bandDesc"); for(int i = 0; i < 3; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "VMixDynamics3BandDesc_t", "m_bandDesc", true, outValue);
}
void* GVMixDynamics3BandDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixDynamics3BandDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixDynamics3BandDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixDynamics3BandDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixDynamics3BandDesc_t>("VMixDynamics3BandDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FldbGainOutput", &GVMixDynamics3BandDesc_t::GetFldbGainOutput, &GVMixDynamics3BandDesc_t::SetFldbGainOutput)
        .addProperty("RMSTimeMS", &GVMixDynamics3BandDesc_t::GetRMSTimeMS, &GVMixDynamics3BandDesc_t::SetRMSTimeMS)
        .addProperty("FldbKneeWidth", &GVMixDynamics3BandDesc_t::GetFldbKneeWidth, &GVMixDynamics3BandDesc_t::SetFldbKneeWidth)
        .addProperty("Depth", &GVMixDynamics3BandDesc_t::GetDepth, &GVMixDynamics3BandDesc_t::SetDepth)
        .addProperty("WetMix", &GVMixDynamics3BandDesc_t::GetWetMix, &GVMixDynamics3BandDesc_t::SetWetMix)
        .addProperty("TimeScale", &GVMixDynamics3BandDesc_t::GetTimeScale, &GVMixDynamics3BandDesc_t::SetTimeScale)
        .addProperty("LowCutoffFreq", &GVMixDynamics3BandDesc_t::GetLowCutoffFreq, &GVMixDynamics3BandDesc_t::SetLowCutoffFreq)
        .addProperty("HighCutoffFreq", &GVMixDynamics3BandDesc_t::GetHighCutoffFreq, &GVMixDynamics3BandDesc_t::SetHighCutoffFreq)
        .addProperty("PeakMode", &GVMixDynamics3BandDesc_t::GetPeakMode, &GVMixDynamics3BandDesc_t::SetPeakMode)
        .addProperty("BandDesc", &GVMixDynamics3BandDesc_t::GetBandDesc, &GVMixDynamics3BandDesc_t::SetBandDesc)
        .addFunction("ToPtr", &GVMixDynamics3BandDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixDynamics3BandDesc_t::IsValid)
        .endClass();
}
GCModelConfigElement_SetMaterialGroup::GCModelConfigElement_SetMaterialGroup(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCModelConfigElement_SetMaterialGroup::GCModelConfigElement_SetMaterialGroup(void *ptr) {
    m_ptr = ptr;
}
std::string GCModelConfigElement_SetMaterialGroup::GetMaterialGroupName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CModelConfigElement_SetMaterialGroup", "m_MaterialGroupName").Get();
}
void GCModelConfigElement_SetMaterialGroup::SetMaterialGroupName(std::string value) {
    SetSchemaValue(m_ptr, "CModelConfigElement_SetMaterialGroup", "m_MaterialGroupName", false, CUtlString(value.c_str()));
}
void* GCModelConfigElement_SetMaterialGroup::GetPtr() {
    return m_ptr;
}
std::string GCModelConfigElement_SetMaterialGroup::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCModelConfigElement_SetMaterialGroup::IsValid() {
    return (m_ptr != nullptr);
}
GCModelConfigElement GCModelConfigElement_SetMaterialGroup::GetParent() const {
    GCModelConfigElement value(m_ptr);
    return value;
}
void GCModelConfigElement_SetMaterialGroup::SetParent(GCModelConfigElement value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCModelConfigElement_SetMaterialGroup(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCModelConfigElement_SetMaterialGroup>("CModelConfigElement_SetMaterialGroup")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MaterialGroupName", &GCModelConfigElement_SetMaterialGroup::GetMaterialGroupName, &GCModelConfigElement_SetMaterialGroup::SetMaterialGroupName)
        .addProperty("Parent", &GCModelConfigElement_SetMaterialGroup::GetParent, &GCModelConfigElement_SetMaterialGroup::SetParent)
        .addFunction("ToPtr", &GCModelConfigElement_SetMaterialGroup::ToPtr)
        .addFunction("IsValid", &GCModelConfigElement_SetMaterialGroup::IsValid)
        .endClass();
}
GCMovementHandshakeAnimTag::GCMovementHandshakeAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMovementHandshakeAnimTag::GCMovementHandshakeAnimTag(void *ptr) {
    m_ptr = ptr;
}
void* GCMovementHandshakeAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCMovementHandshakeAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMovementHandshakeAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCHandshakeAnimTagBase GCMovementHandshakeAnimTag::GetParent() const {
    GCHandshakeAnimTagBase value(m_ptr);
    return value;
}
void GCMovementHandshakeAnimTag::SetParent(GCHandshakeAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCMovementHandshakeAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMovementHandshakeAnimTag>("CMovementHandshakeAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCMovementHandshakeAnimTag::GetParent, &GCMovementHandshakeAnimTag::SetParent)
        .addFunction("ToPtr", &GCMovementHandshakeAnimTag::ToPtr)
        .addFunction("IsValid", &GCMovementHandshakeAnimTag::IsValid)
        .endClass();
}
GCSeqScaleSet::GCSeqScaleSet(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSeqScaleSet::GCSeqScaleSet(void *ptr) {
    m_ptr = ptr;
}
bool GCSeqScaleSet::GetRootOffset() const {
    return GetSchemaValue<bool>(m_ptr, "CSeqScaleSet", "m_bRootOffset");
}
void GCSeqScaleSet::SetRootOffset(bool value) {
    SetSchemaValue(m_ptr, "CSeqScaleSet", "m_bRootOffset", false, value);
}
Vector GCSeqScaleSet::GetRootOffset1() const {
    return GetSchemaValue<Vector>(m_ptr, "CSeqScaleSet", "m_vRootOffset");
}
void GCSeqScaleSet::SetRootOffset1(Vector value) {
    SetSchemaValue(m_ptr, "CSeqScaleSet", "m_vRootOffset", false, value);
}
std::vector<int16> GCSeqScaleSet::GetLocalBoneArray() const {
    CUtlVector<int16>* vec = GetSchemaValue<CUtlVector<int16>*>(m_ptr, "CSeqScaleSet", "m_nLocalBoneArray"); std::vector<int16> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqScaleSet::SetLocalBoneArray(std::vector<int16> value) {
    SetSchemaValueCUtlVector<int16>(m_ptr, "CSeqScaleSet", "m_nLocalBoneArray", false, value);
}
std::vector<float32> GCSeqScaleSet::GetBoneScaleArray() const {
    CUtlVector<float32>* vec = GetSchemaValue<CUtlVector<float32>*>(m_ptr, "CSeqScaleSet", "m_flBoneScaleArray"); std::vector<float32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqScaleSet::SetBoneScaleArray(std::vector<float32> value) {
    SetSchemaValueCUtlVector<float32>(m_ptr, "CSeqScaleSet", "m_flBoneScaleArray", false, value);
}
void* GCSeqScaleSet::GetPtr() {
    return m_ptr;
}
std::string GCSeqScaleSet::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSeqScaleSet::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSeqScaleSet(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSeqScaleSet>("CSeqScaleSet")
        .addConstructor<void (*)(std::string)>()
        .addProperty("RootOffset", &GCSeqScaleSet::GetRootOffset, &GCSeqScaleSet::SetRootOffset)
        .addProperty("RootOffset1", &GCSeqScaleSet::GetRootOffset1, &GCSeqScaleSet::SetRootOffset1)
        .addProperty("LocalBoneArray", &GCSeqScaleSet::GetLocalBoneArray, &GCSeqScaleSet::SetLocalBoneArray)
        .addProperty("BoneScaleArray", &GCSeqScaleSet::GetBoneScaleArray, &GCSeqScaleSet::SetBoneScaleArray)
        .addFunction("ToPtr", &GCSeqScaleSet::ToPtr)
        .addFunction("IsValid", &GCSeqScaleSet::IsValid)
        .endClass();
}
GEventClientProcessGameInput_t::GEventClientProcessGameInput_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientProcessGameInput_t::GEventClientProcessGameInput_t(void *ptr) {
    m_ptr = ptr;
}
GEngineLoopState_t GEventClientProcessGameInput_t::GetLoopState() const {
    GEngineLoopState_t value(GetSchemaPtr(m_ptr, "EventClientProcessGameInput_t", "m_LoopState"));
    return value;
}
void GEventClientProcessGameInput_t::SetLoopState(GEngineLoopState_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LoopState' is not possible.\n");
}
float GEventClientProcessGameInput_t::GetRealTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientProcessGameInput_t", "m_flRealTime");
}
void GEventClientProcessGameInput_t::SetRealTime(float value) {
    SetSchemaValue(m_ptr, "EventClientProcessGameInput_t", "m_flRealTime", true, value);
}
float GEventClientProcessGameInput_t::GetFrameTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientProcessGameInput_t", "m_flFrameTime");
}
void GEventClientProcessGameInput_t::SetFrameTime(float value) {
    SetSchemaValue(m_ptr, "EventClientProcessGameInput_t", "m_flFrameTime", true, value);
}
void* GEventClientProcessGameInput_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientProcessGameInput_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientProcessGameInput_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientProcessGameInput_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientProcessGameInput_t>("EventClientProcessGameInput_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("LoopState", &GEventClientProcessGameInput_t::GetLoopState, &GEventClientProcessGameInput_t::SetLoopState)
        .addProperty("RealTime", &GEventClientProcessGameInput_t::GetRealTime, &GEventClientProcessGameInput_t::SetRealTime)
        .addProperty("FrameTime", &GEventClientProcessGameInput_t::GetFrameTime, &GEventClientProcessGameInput_t::SetFrameTime)
        .addFunction("ToPtr", &GEventClientProcessGameInput_t::ToPtr)
        .addFunction("IsValid", &GEventClientProcessGameInput_t::IsValid)
        .endClass();
}
GVsInputSignatureElement_t::GVsInputSignatureElement_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVsInputSignatureElement_t::GVsInputSignatureElement_t(void *ptr) {
    m_ptr = ptr;
}
std::string GVsInputSignatureElement_t::GetName() const {
    return GetSchemaValuePtr<char>(m_ptr, "VsInputSignatureElement_t", "m_pName");
}
void GVsInputSignatureElement_t::SetName(std::string value) {
    WriteSchemaPtrValue(m_ptr, "VsInputSignatureElement_t", "m_pName", true, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), 64);
}
std::string GVsInputSignatureElement_t::GetSemantic() const {
    return GetSchemaValuePtr<char>(m_ptr, "VsInputSignatureElement_t", "m_pSemantic");
}
void GVsInputSignatureElement_t::SetSemantic(std::string value) {
    WriteSchemaPtrValue(m_ptr, "VsInputSignatureElement_t", "m_pSemantic", true, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), 64);
}
std::string GVsInputSignatureElement_t::GetD3DSemanticName() const {
    return GetSchemaValuePtr<char>(m_ptr, "VsInputSignatureElement_t", "m_pD3DSemanticName");
}
void GVsInputSignatureElement_t::SetD3DSemanticName(std::string value) {
    WriteSchemaPtrValue(m_ptr, "VsInputSignatureElement_t", "m_pD3DSemanticName", true, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), 64);
}
int32_t GVsInputSignatureElement_t::GetD3DSemanticIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "VsInputSignatureElement_t", "m_nD3DSemanticIndex");
}
void GVsInputSignatureElement_t::SetD3DSemanticIndex(int32_t value) {
    SetSchemaValue(m_ptr, "VsInputSignatureElement_t", "m_nD3DSemanticIndex", true, value);
}
void* GVsInputSignatureElement_t::GetPtr() {
    return m_ptr;
}
std::string GVsInputSignatureElement_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVsInputSignatureElement_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVsInputSignatureElement_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVsInputSignatureElement_t>("VsInputSignatureElement_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GVsInputSignatureElement_t::GetName, &GVsInputSignatureElement_t::SetName)
        .addProperty("Semantic", &GVsInputSignatureElement_t::GetSemantic, &GVsInputSignatureElement_t::SetSemantic)
        .addProperty("D3DSemanticName", &GVsInputSignatureElement_t::GetD3DSemanticName, &GVsInputSignatureElement_t::SetD3DSemanticName)
        .addProperty("D3DSemanticIndex", &GVsInputSignatureElement_t::GetD3DSemanticIndex, &GVsInputSignatureElement_t::SetD3DSemanticIndex)
        .addFunction("ToPtr", &GVsInputSignatureElement_t::ToPtr)
        .addFunction("IsValid", &GVsInputSignatureElement_t::IsValid)
        .endClass();
}
GCompositeMaterialMatchFilter_t::GCompositeMaterialMatchFilter_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCompositeMaterialMatchFilter_t::GCompositeMaterialMatchFilter_t(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCompositeMaterialMatchFilter_t::GetCompositeMaterialMatchFilterType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CompositeMaterialMatchFilter_t", "m_nCompositeMaterialMatchFilterType");
}
void GCompositeMaterialMatchFilter_t::SetCompositeMaterialMatchFilterType(uint64_t value) {
    SetSchemaValue(m_ptr, "CompositeMaterialMatchFilter_t", "m_nCompositeMaterialMatchFilterType", true, value);
}
std::string GCompositeMaterialMatchFilter_t::GetStrMatchFilter() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CompositeMaterialMatchFilter_t", "m_strMatchFilter").Get();
}
void GCompositeMaterialMatchFilter_t::SetStrMatchFilter(std::string value) {
    SetSchemaValue(m_ptr, "CompositeMaterialMatchFilter_t", "m_strMatchFilter", true, CUtlString(value.c_str()));
}
std::string GCompositeMaterialMatchFilter_t::GetStrMatchValue() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CompositeMaterialMatchFilter_t", "m_strMatchValue").Get();
}
void GCompositeMaterialMatchFilter_t::SetStrMatchValue(std::string value) {
    SetSchemaValue(m_ptr, "CompositeMaterialMatchFilter_t", "m_strMatchValue", true, CUtlString(value.c_str()));
}
bool GCompositeMaterialMatchFilter_t::GetPassWhenTrue() const {
    return GetSchemaValue<bool>(m_ptr, "CompositeMaterialMatchFilter_t", "m_bPassWhenTrue");
}
void GCompositeMaterialMatchFilter_t::SetPassWhenTrue(bool value) {
    SetSchemaValue(m_ptr, "CompositeMaterialMatchFilter_t", "m_bPassWhenTrue", true, value);
}
void* GCompositeMaterialMatchFilter_t::GetPtr() {
    return m_ptr;
}
std::string GCompositeMaterialMatchFilter_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCompositeMaterialMatchFilter_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCompositeMaterialMatchFilter_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCompositeMaterialMatchFilter_t>("CompositeMaterialMatchFilter_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CompositeMaterialMatchFilterType", &GCompositeMaterialMatchFilter_t::GetCompositeMaterialMatchFilterType, &GCompositeMaterialMatchFilter_t::SetCompositeMaterialMatchFilterType)
        .addProperty("StrMatchFilter", &GCompositeMaterialMatchFilter_t::GetStrMatchFilter, &GCompositeMaterialMatchFilter_t::SetStrMatchFilter)
        .addProperty("StrMatchValue", &GCompositeMaterialMatchFilter_t::GetStrMatchValue, &GCompositeMaterialMatchFilter_t::SetStrMatchValue)
        .addProperty("PassWhenTrue", &GCompositeMaterialMatchFilter_t::GetPassWhenTrue, &GCompositeMaterialMatchFilter_t::SetPassWhenTrue)
        .addFunction("ToPtr", &GCompositeMaterialMatchFilter_t::ToPtr)
        .addFunction("IsValid", &GCompositeMaterialMatchFilter_t::IsValid)
        .endClass();
}
GVertexPositionColor_t::GVertexPositionColor_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVertexPositionColor_t::GVertexPositionColor_t(void *ptr) {
    m_ptr = ptr;
}
Vector GVertexPositionColor_t::GetPosition() const {
    return GetSchemaValue<Vector>(m_ptr, "VertexPositionColor_t", "m_vPosition");
}
void GVertexPositionColor_t::SetPosition(Vector value) {
    SetSchemaValue(m_ptr, "VertexPositionColor_t", "m_vPosition", true, value);
}
void* GVertexPositionColor_t::GetPtr() {
    return m_ptr;
}
std::string GVertexPositionColor_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVertexPositionColor_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVertexPositionColor_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVertexPositionColor_t>("VertexPositionColor_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Position", &GVertexPositionColor_t::GetPosition, &GVertexPositionColor_t::SetPosition)
        .addFunction("ToPtr", &GVertexPositionColor_t::ToPtr)
        .addFunction("IsValid", &GVertexPositionColor_t::IsValid)
        .endClass();
}
GCFootTrajectories::GCFootTrajectories(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootTrajectories::GCFootTrajectories(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCFootTrajectory> GCFootTrajectories::GetTrajectories() const {
    CUtlVector<GCFootTrajectory>* vec = GetSchemaValue<CUtlVector<GCFootTrajectory>*>(m_ptr, "CFootTrajectories", "m_trajectories"); std::vector<GCFootTrajectory> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCFootTrajectories::SetTrajectories(std::vector<GCFootTrajectory> value) {
    SetSchemaValueCUtlVector<GCFootTrajectory>(m_ptr, "CFootTrajectories", "m_trajectories", false, value);
}
void* GCFootTrajectories::GetPtr() {
    return m_ptr;
}
std::string GCFootTrajectories::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootTrajectories::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFootTrajectories(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootTrajectories>("CFootTrajectories")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Trajectories", &GCFootTrajectories::GetTrajectories, &GCFootTrajectories::SetTrajectories)
        .addFunction("ToPtr", &GCFootTrajectories::ToPtr)
        .addFunction("IsValid", &GCFootTrajectories::IsValid)
        .endClass();
}
GSceneObject_t::GSceneObject_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GSceneObject_t::GSceneObject_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GSceneObject_t::GetObjectID() const {
    return GetSchemaValue<uint32_t>(m_ptr, "SceneObject_t", "m_nObjectID");
}
void GSceneObject_t::SetObjectID(uint32_t value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_nObjectID", true, value);
}
std::vector<Vector4D> GSceneObject_t::GetTransform() const {
    Vector4D* outValue = GetSchemaValue<Vector4D*>(m_ptr, "SceneObject_t", "m_vTransform"); std::vector<Vector4D> ret; for(int i = 0; i < 3; i++) { ret.push_back(outValue[i]); } return ret;
}
void GSceneObject_t::SetTransform(std::vector<Vector4D> value) {
    Vector4D* outValue = GetSchemaValue<Vector4D*>(m_ptr, "SceneObject_t", "m_vTransform"); for(int i = 0; i < 3; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "SceneObject_t", "m_vTransform", true, outValue);
}
float GSceneObject_t::GetFadeStartDistance() const {
    return GetSchemaValue<float>(m_ptr, "SceneObject_t", "m_flFadeStartDistance");
}
void GSceneObject_t::SetFadeStartDistance(float value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_flFadeStartDistance", true, value);
}
float GSceneObject_t::GetFadeEndDistance() const {
    return GetSchemaValue<float>(m_ptr, "SceneObject_t", "m_flFadeEndDistance");
}
void GSceneObject_t::SetFadeEndDistance(float value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_flFadeEndDistance", true, value);
}
Vector4D GSceneObject_t::GetTintColor() const {
    return GetSchemaValue<Vector4D>(m_ptr, "SceneObject_t", "m_vTintColor");
}
void GSceneObject_t::SetTintColor(Vector4D value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_vTintColor", true, value);
}
std::string GSceneObject_t::GetSkin() const {
    return GetSchemaValue<CUtlString>(m_ptr, "SceneObject_t", "m_skin").Get();
}
void GSceneObject_t::SetSkin(std::string value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_skin", true, CUtlString(value.c_str()));
}
uint64_t GSceneObject_t::GetObjectTypeFlags() const {
    return GetSchemaValue<uint64_t>(m_ptr, "SceneObject_t", "m_nObjectTypeFlags");
}
void GSceneObject_t::SetObjectTypeFlags(uint64_t value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_nObjectTypeFlags", true, value);
}
Vector GSceneObject_t::GetLightingOrigin() const {
    return GetSchemaValue<Vector>(m_ptr, "SceneObject_t", "m_vLightingOrigin");
}
void GSceneObject_t::SetLightingOrigin(Vector value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_vLightingOrigin", true, value);
}
int16_t GSceneObject_t::GetOverlayRenderOrder() const {
    return GetSchemaValue<int16_t>(m_ptr, "SceneObject_t", "m_nOverlayRenderOrder");
}
void GSceneObject_t::SetOverlayRenderOrder(int16_t value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_nOverlayRenderOrder", true, value);
}
int16_t GSceneObject_t::GetLODOverride() const {
    return GetSchemaValue<int16_t>(m_ptr, "SceneObject_t", "m_nLODOverride");
}
void GSceneObject_t::SetLODOverride(int16_t value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_nLODOverride", true, value);
}
int32_t GSceneObject_t::GetCubeMapPrecomputedHandshake() const {
    return GetSchemaValue<int32_t>(m_ptr, "SceneObject_t", "m_nCubeMapPrecomputedHandshake");
}
void GSceneObject_t::SetCubeMapPrecomputedHandshake(int32_t value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_nCubeMapPrecomputedHandshake", true, value);
}
int32_t GSceneObject_t::GetLightProbeVolumePrecomputedHandshake() const {
    return GetSchemaValue<int32_t>(m_ptr, "SceneObject_t", "m_nLightProbeVolumePrecomputedHandshake");
}
void GSceneObject_t::SetLightProbeVolumePrecomputedHandshake(int32_t value) {
    SetSchemaValue(m_ptr, "SceneObject_t", "m_nLightProbeVolumePrecomputedHandshake", true, value);
}
void* GSceneObject_t::GetPtr() {
    return m_ptr;
}
std::string GSceneObject_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GSceneObject_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassSceneObject_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GSceneObject_t>("SceneObject_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ObjectID", &GSceneObject_t::GetObjectID, &GSceneObject_t::SetObjectID)
        .addProperty("Transform", &GSceneObject_t::GetTransform, &GSceneObject_t::SetTransform)
        .addProperty("FadeStartDistance", &GSceneObject_t::GetFadeStartDistance, &GSceneObject_t::SetFadeStartDistance)
        .addProperty("FadeEndDistance", &GSceneObject_t::GetFadeEndDistance, &GSceneObject_t::SetFadeEndDistance)
        .addProperty("TintColor", &GSceneObject_t::GetTintColor, &GSceneObject_t::SetTintColor)
        .addProperty("Skin", &GSceneObject_t::GetSkin, &GSceneObject_t::SetSkin)
        .addProperty("ObjectTypeFlags", &GSceneObject_t::GetObjectTypeFlags, &GSceneObject_t::SetObjectTypeFlags)
        .addProperty("LightingOrigin", &GSceneObject_t::GetLightingOrigin, &GSceneObject_t::SetLightingOrigin)
        .addProperty("OverlayRenderOrder", &GSceneObject_t::GetOverlayRenderOrder, &GSceneObject_t::SetOverlayRenderOrder)
        .addProperty("LODOverride", &GSceneObject_t::GetLODOverride, &GSceneObject_t::SetLODOverride)
        .addProperty("CubeMapPrecomputedHandshake", &GSceneObject_t::GetCubeMapPrecomputedHandshake, &GSceneObject_t::SetCubeMapPrecomputedHandshake)
        .addProperty("LightProbeVolumePrecomputedHandshake", &GSceneObject_t::GetLightProbeVolumePrecomputedHandshake, &GSceneObject_t::SetLightProbeVolumePrecomputedHandshake)
        .addFunction("ToPtr", &GSceneObject_t::ToPtr)
        .addFunction("IsValid", &GSceneObject_t::IsValid)
        .endClass();
}
GCSSDSMsg_ViewTarget::GCSSDSMsg_ViewTarget(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSSDSMsg_ViewTarget::GCSSDSMsg_ViewTarget(void *ptr) {
    m_ptr = ptr;
}
std::string GCSSDSMsg_ViewTarget::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CSSDSMsg_ViewTarget", "m_Name").Get();
}
void GCSSDSMsg_ViewTarget::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_Name", false, CUtlString(value.c_str()));
}
uint64_t GCSSDSMsg_ViewTarget::GetTextureId() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_TextureId");
}
void GCSSDSMsg_ViewTarget::SetTextureId(uint64_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_TextureId", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetWidth() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nWidth");
}
void GCSSDSMsg_ViewTarget::SetWidth(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nWidth", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetHeight() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nHeight");
}
void GCSSDSMsg_ViewTarget::SetHeight(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nHeight", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetRequestedWidth() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nRequestedWidth");
}
void GCSSDSMsg_ViewTarget::SetRequestedWidth(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nRequestedWidth", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetRequestedHeight() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nRequestedHeight");
}
void GCSSDSMsg_ViewTarget::SetRequestedHeight(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nRequestedHeight", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetNumMipLevels() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nNumMipLevels");
}
void GCSSDSMsg_ViewTarget::SetNumMipLevels(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nNumMipLevels", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetDepth() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nDepth");
}
void GCSSDSMsg_ViewTarget::SetDepth(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nDepth", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetMultisampleNumSamples() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nMultisampleNumSamples");
}
void GCSSDSMsg_ViewTarget::SetMultisampleNumSamples(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nMultisampleNumSamples", false, value);
}
int32_t GCSSDSMsg_ViewTarget::GetFormat() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSSDSMsg_ViewTarget", "m_nFormat");
}
void GCSSDSMsg_ViewTarget::SetFormat(int32_t value) {
    SetSchemaValue(m_ptr, "CSSDSMsg_ViewTarget", "m_nFormat", false, value);
}
void* GCSSDSMsg_ViewTarget::GetPtr() {
    return m_ptr;
}
std::string GCSSDSMsg_ViewTarget::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSSDSMsg_ViewTarget::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSSDSMsg_ViewTarget(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSSDSMsg_ViewTarget>("CSSDSMsg_ViewTarget")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCSSDSMsg_ViewTarget::GetName, &GCSSDSMsg_ViewTarget::SetName)
        .addProperty("TextureId", &GCSSDSMsg_ViewTarget::GetTextureId, &GCSSDSMsg_ViewTarget::SetTextureId)
        .addProperty("Width", &GCSSDSMsg_ViewTarget::GetWidth, &GCSSDSMsg_ViewTarget::SetWidth)
        .addProperty("Height", &GCSSDSMsg_ViewTarget::GetHeight, &GCSSDSMsg_ViewTarget::SetHeight)
        .addProperty("RequestedWidth", &GCSSDSMsg_ViewTarget::GetRequestedWidth, &GCSSDSMsg_ViewTarget::SetRequestedWidth)
        .addProperty("RequestedHeight", &GCSSDSMsg_ViewTarget::GetRequestedHeight, &GCSSDSMsg_ViewTarget::SetRequestedHeight)
        .addProperty("NumMipLevels", &GCSSDSMsg_ViewTarget::GetNumMipLevels, &GCSSDSMsg_ViewTarget::SetNumMipLevels)
        .addProperty("Depth", &GCSSDSMsg_ViewTarget::GetDepth, &GCSSDSMsg_ViewTarget::SetDepth)
        .addProperty("MultisampleNumSamples", &GCSSDSMsg_ViewTarget::GetMultisampleNumSamples, &GCSSDSMsg_ViewTarget::SetMultisampleNumSamples)
        .addProperty("Format", &GCSSDSMsg_ViewTarget::GetFormat, &GCSSDSMsg_ViewTarget::SetFormat)
        .addFunction("ToPtr", &GCSSDSMsg_ViewTarget::ToPtr)
        .addFunction("IsValid", &GCSSDSMsg_ViewTarget::IsValid)
        .endClass();
}
GVMixSubgraphSwitchDesc_t::GVMixSubgraphSwitchDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixSubgraphSwitchDesc_t::GVMixSubgraphSwitchDesc_t(void *ptr) {
    m_ptr = ptr;
}
uint64_t GVMixSubgraphSwitchDesc_t::GetInterpolationMode() const {
    return GetSchemaValue<uint64_t>(m_ptr, "VMixSubgraphSwitchDesc_t", "m_interpolationMode");
}
void GVMixSubgraphSwitchDesc_t::SetInterpolationMode(uint64_t value) {
    SetSchemaValue(m_ptr, "VMixSubgraphSwitchDesc_t", "m_interpolationMode", true, value);
}
bool GVMixSubgraphSwitchDesc_t::GetOnlyTailsOnFadeOut() const {
    return GetSchemaValue<bool>(m_ptr, "VMixSubgraphSwitchDesc_t", "m_bOnlyTailsOnFadeOut");
}
void GVMixSubgraphSwitchDesc_t::SetOnlyTailsOnFadeOut(bool value) {
    SetSchemaValue(m_ptr, "VMixSubgraphSwitchDesc_t", "m_bOnlyTailsOnFadeOut", true, value);
}
float GVMixSubgraphSwitchDesc_t::GetInterpolationTime() const {
    return GetSchemaValue<float>(m_ptr, "VMixSubgraphSwitchDesc_t", "m_flInterpolationTime");
}
void GVMixSubgraphSwitchDesc_t::SetInterpolationTime(float value) {
    SetSchemaValue(m_ptr, "VMixSubgraphSwitchDesc_t", "m_flInterpolationTime", true, value);
}
void* GVMixSubgraphSwitchDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixSubgraphSwitchDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixSubgraphSwitchDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixSubgraphSwitchDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixSubgraphSwitchDesc_t>("VMixSubgraphSwitchDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("InterpolationMode", &GVMixSubgraphSwitchDesc_t::GetInterpolationMode, &GVMixSubgraphSwitchDesc_t::SetInterpolationMode)
        .addProperty("OnlyTailsOnFadeOut", &GVMixSubgraphSwitchDesc_t::GetOnlyTailsOnFadeOut, &GVMixSubgraphSwitchDesc_t::SetOnlyTailsOnFadeOut)
        .addProperty("InterpolationTime", &GVMixSubgraphSwitchDesc_t::GetInterpolationTime, &GVMixSubgraphSwitchDesc_t::SetInterpolationTime)
        .addFunction("ToPtr", &GVMixSubgraphSwitchDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixSubgraphSwitchDesc_t::IsValid)
        .endClass();
}
GCNmTransitionNode::GCNmTransitionNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmTransitionNode::GCNmTransitionNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmTransitionNode::GetTargetCNmStateNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmTransitionNode", "m_targetCNmStateNodeIdx");
}
void GCNmTransitionNode::SetTargetCNmStateNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_targetCNmStateNodeIdx", false, value);
}
int16_t GCNmTransitionNode::GetDurationOverrideNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmTransitionNode", "m_durationOverrideNodeIdx");
}
void GCNmTransitionNode::SetDurationOverrideNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_durationOverrideNodeIdx", false, value);
}
int16_t GCNmTransitionNode::GetSyncEventOffsetOverrideNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmTransitionNode", "m_syncEventOffsetOverrideNodeIdx");
}
void GCNmTransitionNode::SetSyncEventOffsetOverrideNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_syncEventOffsetOverrideNodeIdx", false, value);
}
int16_t GCNmTransitionNode::GetStartBoneMaskNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmTransitionNode", "m_startBoneMaskNodeIdx");
}
void GCNmTransitionNode::SetStartBoneMaskNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_startBoneMaskNodeIdx", false, value);
}
float GCNmTransitionNode::GetDuration() const {
    return GetSchemaValue<float>(m_ptr, "CNmTransitionNode", "m_flDuration");
}
void GCNmTransitionNode::SetDuration(float value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_flDuration", false, value);
}
GNmPercent_t GCNmTransitionNode::GetBoneMaskBlendInTimePercentage() const {
    GNmPercent_t value(GetSchemaPtr(m_ptr, "CNmTransitionNode", "m_boneMaskBlendInTimePercentage"));
    return value;
}
void GCNmTransitionNode::SetBoneMaskBlendInTimePercentage(GNmPercent_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BoneMaskBlendInTimePercentage' is not possible.\n");
}
float GCNmTransitionNode::GetSyncEventOffset() const {
    return GetSchemaValue<float>(m_ptr, "CNmTransitionNode", "m_syncEventOffset");
}
void GCNmTransitionNode::SetSyncEventOffset(float value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_syncEventOffset", false, value);
}
GCNmTransitionNode GCNmTransitionNode::GetTransitionOptions() const {
    GCNmTransitionNode value(GetSchemaPtr(m_ptr, "CNmTransitionNode", "m_transitionOptions"));
    return value;
}
void GCNmTransitionNode::SetTransitionOptions(GCNmTransitionNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TransitionOptions' is not possible.\n");
}
int16_t GCNmTransitionNode::GetTargetSyncIDNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmTransitionNode", "m_targetSyncIDNodeIdx");
}
void GCNmTransitionNode::SetTargetSyncIDNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_targetSyncIDNodeIdx", false, value);
}
uint64_t GCNmTransitionNode::GetBlendWeightEasing() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CNmTransitionNode", "m_blendWeightEasing");
}
void GCNmTransitionNode::SetBlendWeightEasing(uint64_t value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_blendWeightEasing", false, value);
}
uint64_t GCNmTransitionNode::GetRootMotionBlend() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CNmTransitionNode", "m_rootMotionBlend");
}
void GCNmTransitionNode::SetRootMotionBlend(uint64_t value) {
    SetSchemaValue(m_ptr, "CNmTransitionNode", "m_rootMotionBlend", false, value);
}
void* GCNmTransitionNode::GetPtr() {
    return m_ptr;
}
std::string GCNmTransitionNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmTransitionNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmPoseNode GCNmTransitionNode::GetParent() const {
    GCNmPoseNode value(m_ptr);
    return value;
}
void GCNmTransitionNode::SetParent(GCNmPoseNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmTransitionNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmTransitionNode>("CNmTransitionNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("TargetCNmStateNodeIdx", &GCNmTransitionNode::GetTargetCNmStateNodeIdx, &GCNmTransitionNode::SetTargetCNmStateNodeIdx)
        .addProperty("DurationOverrideNodeIdx", &GCNmTransitionNode::GetDurationOverrideNodeIdx, &GCNmTransitionNode::SetDurationOverrideNodeIdx)
        .addProperty("SyncEventOffsetOverrideNodeIdx", &GCNmTransitionNode::GetSyncEventOffsetOverrideNodeIdx, &GCNmTransitionNode::SetSyncEventOffsetOverrideNodeIdx)
        .addProperty("StartBoneMaskNodeIdx", &GCNmTransitionNode::GetStartBoneMaskNodeIdx, &GCNmTransitionNode::SetStartBoneMaskNodeIdx)
        .addProperty("Duration", &GCNmTransitionNode::GetDuration, &GCNmTransitionNode::SetDuration)
        .addProperty("BoneMaskBlendInTimePercentage", &GCNmTransitionNode::GetBoneMaskBlendInTimePercentage, &GCNmTransitionNode::SetBoneMaskBlendInTimePercentage)
        .addProperty("SyncEventOffset", &GCNmTransitionNode::GetSyncEventOffset, &GCNmTransitionNode::SetSyncEventOffset)
        .addProperty("TransitionOptions", &GCNmTransitionNode::GetTransitionOptions, &GCNmTransitionNode::SetTransitionOptions)
        .addProperty("TargetSyncIDNodeIdx", &GCNmTransitionNode::GetTargetSyncIDNodeIdx, &GCNmTransitionNode::SetTargetSyncIDNodeIdx)
        .addProperty("BlendWeightEasing", &GCNmTransitionNode::GetBlendWeightEasing, &GCNmTransitionNode::SetBlendWeightEasing)
        .addProperty("RootMotionBlend", &GCNmTransitionNode::GetRootMotionBlend, &GCNmTransitionNode::SetRootMotionBlend)
        .addProperty("Parent", &GCNmTransitionNode::GetParent, &GCNmTransitionNode::SetParent)
        .addFunction("ToPtr", &GCNmTransitionNode::ToPtr)
        .addFunction("IsValid", &GCNmTransitionNode::IsValid)
        .endClass();
}
GMotionDBIndex::GMotionDBIndex(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GMotionDBIndex::GMotionDBIndex(void *ptr) {
    m_ptr = ptr;
}
uint32_t GMotionDBIndex::GetIndex() const {
    return GetSchemaValue<uint32_t>(m_ptr, "MotionDBIndex", "m_nIndex");
}
void GMotionDBIndex::SetIndex(uint32_t value) {
    SetSchemaValue(m_ptr, "MotionDBIndex", "m_nIndex", false, value);
}
void* GMotionDBIndex::GetPtr() {
    return m_ptr;
}
std::string GMotionDBIndex::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GMotionDBIndex::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassMotionDBIndex(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GMotionDBIndex>("MotionDBIndex")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Index", &GMotionDBIndex::GetIndex, &GMotionDBIndex::SetIndex)
        .addFunction("ToPtr", &GMotionDBIndex::ToPtr)
        .addFunction("IsValid", &GMotionDBIndex::IsValid)
        .endClass();
}
GCToggleComponentActionUpdater::GCToggleComponentActionUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCToggleComponentActionUpdater::GCToggleComponentActionUpdater(void *ptr) {
    m_ptr = ptr;
}
GAnimComponentID GCToggleComponentActionUpdater::GetComponentID() const {
    GAnimComponentID value(GetSchemaPtr(m_ptr, "CToggleComponentActionUpdater", "m_componentID"));
    return value;
}
void GCToggleComponentActionUpdater::SetComponentID(GAnimComponentID value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ComponentID' is not possible.\n");
}
bool GCToggleComponentActionUpdater::GetSetEnabled() const {
    return GetSchemaValue<bool>(m_ptr, "CToggleComponentActionUpdater", "m_bSetEnabled");
}
void GCToggleComponentActionUpdater::SetSetEnabled(bool value) {
    SetSchemaValue(m_ptr, "CToggleComponentActionUpdater", "m_bSetEnabled", false, value);
}
void* GCToggleComponentActionUpdater::GetPtr() {
    return m_ptr;
}
std::string GCToggleComponentActionUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCToggleComponentActionUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimActionUpdater GCToggleComponentActionUpdater::GetParent() const {
    GCAnimActionUpdater value(m_ptr);
    return value;
}
void GCToggleComponentActionUpdater::SetParent(GCAnimActionUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCToggleComponentActionUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCToggleComponentActionUpdater>("CToggleComponentActionUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ComponentID", &GCToggleComponentActionUpdater::GetComponentID, &GCToggleComponentActionUpdater::SetComponentID)
        .addProperty("SetEnabled", &GCToggleComponentActionUpdater::GetSetEnabled, &GCToggleComponentActionUpdater::SetSetEnabled)
        .addProperty("Parent", &GCToggleComponentActionUpdater::GetParent, &GCToggleComponentActionUpdater::SetParent)
        .addFunction("ToPtr", &GCToggleComponentActionUpdater::ToPtr)
        .addFunction("IsValid", &GCToggleComponentActionUpdater::IsValid)
        .endClass();
}
GCNmControlParameterIDNode::GCNmControlParameterIDNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmControlParameterIDNode::GCNmControlParameterIDNode(void *ptr) {
    m_ptr = ptr;
}
void* GCNmControlParameterIDNode::GetPtr() {
    return m_ptr;
}
std::string GCNmControlParameterIDNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmControlParameterIDNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmIDValueNode GCNmControlParameterIDNode::GetParent() const {
    GCNmIDValueNode value(m_ptr);
    return value;
}
void GCNmControlParameterIDNode::SetParent(GCNmIDValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmControlParameterIDNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmControlParameterIDNode>("CNmControlParameterIDNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCNmControlParameterIDNode::GetParent, &GCNmControlParameterIDNode::SetParent)
        .addFunction("ToPtr", &GCNmControlParameterIDNode::ToPtr)
        .addFunction("IsValid", &GCNmControlParameterIDNode::IsValid)
        .endClass();
}
GPostProcessingTonemapParameters_t::GPostProcessingTonemapParameters_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GPostProcessingTonemapParameters_t::GPostProcessingTonemapParameters_t(void *ptr) {
    m_ptr = ptr;
}
float GPostProcessingTonemapParameters_t::GetExposureBias() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flExposureBias");
}
void GPostProcessingTonemapParameters_t::SetExposureBias(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flExposureBias", true, value);
}
float GPostProcessingTonemapParameters_t::GetShoulderStrength() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flShoulderStrength");
}
void GPostProcessingTonemapParameters_t::SetShoulderStrength(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flShoulderStrength", true, value);
}
float GPostProcessingTonemapParameters_t::GetLinearStrength() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flLinearStrength");
}
void GPostProcessingTonemapParameters_t::SetLinearStrength(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flLinearStrength", true, value);
}
float GPostProcessingTonemapParameters_t::GetLinearAngle() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flLinearAngle");
}
void GPostProcessingTonemapParameters_t::SetLinearAngle(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flLinearAngle", true, value);
}
float GPostProcessingTonemapParameters_t::GetToeStrength() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flToeStrength");
}
void GPostProcessingTonemapParameters_t::SetToeStrength(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flToeStrength", true, value);
}
float GPostProcessingTonemapParameters_t::GetToeNum() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flToeNum");
}
void GPostProcessingTonemapParameters_t::SetToeNum(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flToeNum", true, value);
}
float GPostProcessingTonemapParameters_t::GetToeDenom() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flToeDenom");
}
void GPostProcessingTonemapParameters_t::SetToeDenom(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flToeDenom", true, value);
}
float GPostProcessingTonemapParameters_t::GetWhitePoint() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flWhitePoint");
}
void GPostProcessingTonemapParameters_t::SetWhitePoint(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flWhitePoint", true, value);
}
float GPostProcessingTonemapParameters_t::GetLuminanceSource() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flLuminanceSource");
}
void GPostProcessingTonemapParameters_t::SetLuminanceSource(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flLuminanceSource", true, value);
}
float GPostProcessingTonemapParameters_t::GetExposureBiasShadows() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flExposureBiasShadows");
}
void GPostProcessingTonemapParameters_t::SetExposureBiasShadows(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flExposureBiasShadows", true, value);
}
float GPostProcessingTonemapParameters_t::GetExposureBiasHighlights() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flExposureBiasHighlights");
}
void GPostProcessingTonemapParameters_t::SetExposureBiasHighlights(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flExposureBiasHighlights", true, value);
}
float GPostProcessingTonemapParameters_t::GetMinShadowLum() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flMinShadowLum");
}
void GPostProcessingTonemapParameters_t::SetMinShadowLum(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flMinShadowLum", true, value);
}
float GPostProcessingTonemapParameters_t::GetMaxShadowLum() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flMaxShadowLum");
}
void GPostProcessingTonemapParameters_t::SetMaxShadowLum(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flMaxShadowLum", true, value);
}
float GPostProcessingTonemapParameters_t::GetMinHighlightLum() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flMinHighlightLum");
}
void GPostProcessingTonemapParameters_t::SetMinHighlightLum(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flMinHighlightLum", true, value);
}
float GPostProcessingTonemapParameters_t::GetMaxHighlightLum() const {
    return GetSchemaValue<float>(m_ptr, "PostProcessingTonemapParameters_t", "m_flMaxHighlightLum");
}
void GPostProcessingTonemapParameters_t::SetMaxHighlightLum(float value) {
    SetSchemaValue(m_ptr, "PostProcessingTonemapParameters_t", "m_flMaxHighlightLum", true, value);
}
void* GPostProcessingTonemapParameters_t::GetPtr() {
    return m_ptr;
}
std::string GPostProcessingTonemapParameters_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GPostProcessingTonemapParameters_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassPostProcessingTonemapParameters_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GPostProcessingTonemapParameters_t>("PostProcessingTonemapParameters_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ExposureBias", &GPostProcessingTonemapParameters_t::GetExposureBias, &GPostProcessingTonemapParameters_t::SetExposureBias)
        .addProperty("ShoulderStrength", &GPostProcessingTonemapParameters_t::GetShoulderStrength, &GPostProcessingTonemapParameters_t::SetShoulderStrength)
        .addProperty("LinearStrength", &GPostProcessingTonemapParameters_t::GetLinearStrength, &GPostProcessingTonemapParameters_t::SetLinearStrength)
        .addProperty("LinearAngle", &GPostProcessingTonemapParameters_t::GetLinearAngle, &GPostProcessingTonemapParameters_t::SetLinearAngle)
        .addProperty("ToeStrength", &GPostProcessingTonemapParameters_t::GetToeStrength, &GPostProcessingTonemapParameters_t::SetToeStrength)
        .addProperty("ToeNum", &GPostProcessingTonemapParameters_t::GetToeNum, &GPostProcessingTonemapParameters_t::SetToeNum)
        .addProperty("ToeDenom", &GPostProcessingTonemapParameters_t::GetToeDenom, &GPostProcessingTonemapParameters_t::SetToeDenom)
        .addProperty("WhitePoint", &GPostProcessingTonemapParameters_t::GetWhitePoint, &GPostProcessingTonemapParameters_t::SetWhitePoint)
        .addProperty("LuminanceSource", &GPostProcessingTonemapParameters_t::GetLuminanceSource, &GPostProcessingTonemapParameters_t::SetLuminanceSource)
        .addProperty("ExposureBiasShadows", &GPostProcessingTonemapParameters_t::GetExposureBiasShadows, &GPostProcessingTonemapParameters_t::SetExposureBiasShadows)
        .addProperty("ExposureBiasHighlights", &GPostProcessingTonemapParameters_t::GetExposureBiasHighlights, &GPostProcessingTonemapParameters_t::SetExposureBiasHighlights)
        .addProperty("MinShadowLum", &GPostProcessingTonemapParameters_t::GetMinShadowLum, &GPostProcessingTonemapParameters_t::SetMinShadowLum)
        .addProperty("MaxShadowLum", &GPostProcessingTonemapParameters_t::GetMaxShadowLum, &GPostProcessingTonemapParameters_t::SetMaxShadowLum)
        .addProperty("MinHighlightLum", &GPostProcessingTonemapParameters_t::GetMinHighlightLum, &GPostProcessingTonemapParameters_t::SetMinHighlightLum)
        .addProperty("MaxHighlightLum", &GPostProcessingTonemapParameters_t::GetMaxHighlightLum, &GPostProcessingTonemapParameters_t::SetMaxHighlightLum)
        .addFunction("ToPtr", &GPostProcessingTonemapParameters_t::ToPtr)
        .addFunction("IsValid", &GPostProcessingTonemapParameters_t::IsValid)
        .endClass();
}
GVMixAutoFilterDesc_t::GVMixAutoFilterDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixAutoFilterDesc_t::GVMixAutoFilterDesc_t(void *ptr) {
    m_ptr = ptr;
}
float GVMixAutoFilterDesc_t::GetEnvelopeAmount() const {
    return GetSchemaValue<float>(m_ptr, "VMixAutoFilterDesc_t", "m_flEnvelopeAmount");
}
void GVMixAutoFilterDesc_t::SetEnvelopeAmount(float value) {
    SetSchemaValue(m_ptr, "VMixAutoFilterDesc_t", "m_flEnvelopeAmount", true, value);
}
float GVMixAutoFilterDesc_t::GetAttackTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixAutoFilterDesc_t", "m_flAttackTimeMS");
}
void GVMixAutoFilterDesc_t::SetAttackTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixAutoFilterDesc_t", "m_flAttackTimeMS", true, value);
}
float GVMixAutoFilterDesc_t::GetReleaseTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixAutoFilterDesc_t", "m_flReleaseTimeMS");
}
void GVMixAutoFilterDesc_t::SetReleaseTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixAutoFilterDesc_t", "m_flReleaseTimeMS", true, value);
}
GVMixFilterDesc_t GVMixAutoFilterDesc_t::GetFilter() const {
    GVMixFilterDesc_t value(GetSchemaPtr(m_ptr, "VMixAutoFilterDesc_t", "m_filter"));
    return value;
}
void GVMixAutoFilterDesc_t::SetFilter(GVMixFilterDesc_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Filter' is not possible.\n");
}
float GVMixAutoFilterDesc_t::GetLFOAmount() const {
    return GetSchemaValue<float>(m_ptr, "VMixAutoFilterDesc_t", "m_flLFOAmount");
}
void GVMixAutoFilterDesc_t::SetLFOAmount(float value) {
    SetSchemaValue(m_ptr, "VMixAutoFilterDesc_t", "m_flLFOAmount", true, value);
}
float GVMixAutoFilterDesc_t::GetLFORate() const {
    return GetSchemaValue<float>(m_ptr, "VMixAutoFilterDesc_t", "m_flLFORate");
}
void GVMixAutoFilterDesc_t::SetLFORate(float value) {
    SetSchemaValue(m_ptr, "VMixAutoFilterDesc_t", "m_flLFORate", true, value);
}
float GVMixAutoFilterDesc_t::GetPhase() const {
    return GetSchemaValue<float>(m_ptr, "VMixAutoFilterDesc_t", "m_flPhase");
}
void GVMixAutoFilterDesc_t::SetPhase(float value) {
    SetSchemaValue(m_ptr, "VMixAutoFilterDesc_t", "m_flPhase", true, value);
}
uint64_t GVMixAutoFilterDesc_t::GetLFOShape() const {
    return GetSchemaValue<uint64_t>(m_ptr, "VMixAutoFilterDesc_t", "m_nLFOShape");
}
void GVMixAutoFilterDesc_t::SetLFOShape(uint64_t value) {
    SetSchemaValue(m_ptr, "VMixAutoFilterDesc_t", "m_nLFOShape", true, value);
}
void* GVMixAutoFilterDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixAutoFilterDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixAutoFilterDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixAutoFilterDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixAutoFilterDesc_t>("VMixAutoFilterDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("EnvelopeAmount", &GVMixAutoFilterDesc_t::GetEnvelopeAmount, &GVMixAutoFilterDesc_t::SetEnvelopeAmount)
        .addProperty("AttackTimeMS", &GVMixAutoFilterDesc_t::GetAttackTimeMS, &GVMixAutoFilterDesc_t::SetAttackTimeMS)
        .addProperty("ReleaseTimeMS", &GVMixAutoFilterDesc_t::GetReleaseTimeMS, &GVMixAutoFilterDesc_t::SetReleaseTimeMS)
        .addProperty("Filter", &GVMixAutoFilterDesc_t::GetFilter, &GVMixAutoFilterDesc_t::SetFilter)
        .addProperty("LFOAmount", &GVMixAutoFilterDesc_t::GetLFOAmount, &GVMixAutoFilterDesc_t::SetLFOAmount)
        .addProperty("LFORate", &GVMixAutoFilterDesc_t::GetLFORate, &GVMixAutoFilterDesc_t::SetLFORate)
        .addProperty("Phase", &GVMixAutoFilterDesc_t::GetPhase, &GVMixAutoFilterDesc_t::SetPhase)
        .addProperty("LFOShape", &GVMixAutoFilterDesc_t::GetLFOShape, &GVMixAutoFilterDesc_t::SetLFOShape)
        .addFunction("ToPtr", &GVMixAutoFilterDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixAutoFilterDesc_t::IsValid)
        .endClass();
}
GCSeqMultiFetch::GCSeqMultiFetch(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSeqMultiFetch::GCSeqMultiFetch(void *ptr) {
    m_ptr = ptr;
}
GCSeqMultiFetchFlag GCSeqMultiFetch::GetFlags() const {
    GCSeqMultiFetchFlag value(GetSchemaPtr(m_ptr, "CSeqMultiFetch", "m_flags"));
    return value;
}
void GCSeqMultiFetch::SetFlags(GCSeqMultiFetchFlag value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Flags' is not possible.\n");
}
std::vector<int16> GCSeqMultiFetch::GetLocalReferenceArray() const {
    CUtlVector<int16>* vec = GetSchemaValue<CUtlVector<int16>*>(m_ptr, "CSeqMultiFetch", "m_localReferenceArray"); std::vector<int16> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqMultiFetch::SetLocalReferenceArray(std::vector<int16> value) {
    SetSchemaValueCUtlVector<int16>(m_ptr, "CSeqMultiFetch", "m_localReferenceArray", false, value);
}
std::vector<int32_t> GCSeqMultiFetch::GetGroupSize() const {
    int32_t* outValue = GetSchemaValue<int32_t*>(m_ptr, "CSeqMultiFetch", "m_nGroupSize"); std::vector<int32_t> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GCSeqMultiFetch::SetGroupSize(std::vector<int32_t> value) {
    int32_t* outValue = GetSchemaValue<int32_t*>(m_ptr, "CSeqMultiFetch", "m_nGroupSize"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "CSeqMultiFetch", "m_nGroupSize", false, outValue);
}
std::vector<int32_t> GCSeqMultiFetch::GetLocalPose() const {
    int32_t* outValue = GetSchemaValue<int32_t*>(m_ptr, "CSeqMultiFetch", "m_nLocalPose"); std::vector<int32_t> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GCSeqMultiFetch::SetLocalPose(std::vector<int32_t> value) {
    int32_t* outValue = GetSchemaValue<int32_t*>(m_ptr, "CSeqMultiFetch", "m_nLocalPose"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "CSeqMultiFetch", "m_nLocalPose", false, outValue);
}
std::vector<float32> GCSeqMultiFetch::GetPoseKeyArray0() const {
    CUtlVector<float32>* vec = GetSchemaValue<CUtlVector<float32>*>(m_ptr, "CSeqMultiFetch", "m_poseKeyArray0"); std::vector<float32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqMultiFetch::SetPoseKeyArray0(std::vector<float32> value) {
    SetSchemaValueCUtlVector<float32>(m_ptr, "CSeqMultiFetch", "m_poseKeyArray0", false, value);
}
std::vector<float32> GCSeqMultiFetch::GetPoseKeyArray1() const {
    CUtlVector<float32>* vec = GetSchemaValue<CUtlVector<float32>*>(m_ptr, "CSeqMultiFetch", "m_poseKeyArray1"); std::vector<float32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqMultiFetch::SetPoseKeyArray1(std::vector<float32> value) {
    SetSchemaValueCUtlVector<float32>(m_ptr, "CSeqMultiFetch", "m_poseKeyArray1", false, value);
}
int32_t GCSeqMultiFetch::GetLocalCyclePoseParameter() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSeqMultiFetch", "m_nLocalCyclePoseParameter");
}
void GCSeqMultiFetch::SetLocalCyclePoseParameter(int32_t value) {
    SetSchemaValue(m_ptr, "CSeqMultiFetch", "m_nLocalCyclePoseParameter", false, value);
}
bool GCSeqMultiFetch::GetCalculatePoseParameters() const {
    return GetSchemaValue<bool>(m_ptr, "CSeqMultiFetch", "m_bCalculatePoseParameters");
}
void GCSeqMultiFetch::SetCalculatePoseParameters(bool value) {
    SetSchemaValue(m_ptr, "CSeqMultiFetch", "m_bCalculatePoseParameters", false, value);
}
bool GCSeqMultiFetch::GetFixedBlendWeight() const {
    return GetSchemaValue<bool>(m_ptr, "CSeqMultiFetch", "m_bFixedBlendWeight");
}
void GCSeqMultiFetch::SetFixedBlendWeight(bool value) {
    SetSchemaValue(m_ptr, "CSeqMultiFetch", "m_bFixedBlendWeight", false, value);
}
std::vector<float> GCSeqMultiFetch::GetFixedBlendWeightVals() const {
    float* outValue = GetSchemaValue<float*>(m_ptr, "CSeqMultiFetch", "m_flFixedBlendWeightVals"); std::vector<float> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GCSeqMultiFetch::SetFixedBlendWeightVals(std::vector<float> value) {
    float* outValue = GetSchemaValue<float*>(m_ptr, "CSeqMultiFetch", "m_flFixedBlendWeightVals"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "CSeqMultiFetch", "m_flFixedBlendWeightVals", false, outValue);
}
void* GCSeqMultiFetch::GetPtr() {
    return m_ptr;
}
std::string GCSeqMultiFetch::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSeqMultiFetch::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSeqMultiFetch(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSeqMultiFetch>("CSeqMultiFetch")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GCSeqMultiFetch::GetFlags, &GCSeqMultiFetch::SetFlags)
        .addProperty("LocalReferenceArray", &GCSeqMultiFetch::GetLocalReferenceArray, &GCSeqMultiFetch::SetLocalReferenceArray)
        .addProperty("GroupSize", &GCSeqMultiFetch::GetGroupSize, &GCSeqMultiFetch::SetGroupSize)
        .addProperty("LocalPose", &GCSeqMultiFetch::GetLocalPose, &GCSeqMultiFetch::SetLocalPose)
        .addProperty("PoseKeyArray0", &GCSeqMultiFetch::GetPoseKeyArray0, &GCSeqMultiFetch::SetPoseKeyArray0)
        .addProperty("PoseKeyArray1", &GCSeqMultiFetch::GetPoseKeyArray1, &GCSeqMultiFetch::SetPoseKeyArray1)
        .addProperty("LocalCyclePoseParameter", &GCSeqMultiFetch::GetLocalCyclePoseParameter, &GCSeqMultiFetch::SetLocalCyclePoseParameter)
        .addProperty("CalculatePoseParameters", &GCSeqMultiFetch::GetCalculatePoseParameters, &GCSeqMultiFetch::SetCalculatePoseParameters)
        .addProperty("FixedBlendWeight", &GCSeqMultiFetch::GetFixedBlendWeight, &GCSeqMultiFetch::SetFixedBlendWeight)
        .addProperty("FixedBlendWeightVals", &GCSeqMultiFetch::GetFixedBlendWeightVals, &GCSeqMultiFetch::SetFixedBlendWeightVals)
        .addFunction("ToPtr", &GCSeqMultiFetch::ToPtr)
        .addFunction("IsValid", &GCSeqMultiFetch::IsValid)
        .endClass();
}
GCNmStateMachineNode::GCNmStateMachineNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmStateMachineNode::GCNmStateMachineNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmStateMachineNode::GetDefaultStateIndex() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmStateMachineNode", "m_nDefaultStateIndex");
}
void GCNmStateMachineNode::SetDefaultStateIndex(int16_t value) {
    SetSchemaValue(m_ptr, "CNmStateMachineNode", "m_nDefaultStateIndex", false, value);
}
void* GCNmStateMachineNode::GetPtr() {
    return m_ptr;
}
std::string GCNmStateMachineNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmStateMachineNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmPoseNode GCNmStateMachineNode::GetParent() const {
    GCNmPoseNode value(m_ptr);
    return value;
}
void GCNmStateMachineNode::SetParent(GCNmPoseNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmStateMachineNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmStateMachineNode>("CNmStateMachineNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("DefaultStateIndex", &GCNmStateMachineNode::GetDefaultStateIndex, &GCNmStateMachineNode::SetDefaultStateIndex)
        .addProperty("Parent", &GCNmStateMachineNode::GetParent, &GCNmStateMachineNode::SetParent)
        .addFunction("ToPtr", &GCNmStateMachineNode::ToPtr)
        .addFunction("IsValid", &GCNmStateMachineNode::IsValid)
        .endClass();
}
GCBoneConstraintPoseSpaceMorph::GCBoneConstraintPoseSpaceMorph(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBoneConstraintPoseSpaceMorph::GCBoneConstraintPoseSpaceMorph(void *ptr) {
    m_ptr = ptr;
}
std::string GCBoneConstraintPoseSpaceMorph::GetBoneName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_sBoneName").Get();
}
void GCBoneConstraintPoseSpaceMorph::SetBoneName(std::string value) {
    SetSchemaValue(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_sBoneName", false, CUtlString(value.c_str()));
}
std::string GCBoneConstraintPoseSpaceMorph::GetAttachmentName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_sAttachmentName").Get();
}
void GCBoneConstraintPoseSpaceMorph::SetAttachmentName(std::string value) {
    SetSchemaValue(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_sAttachmentName", false, CUtlString(value.c_str()));
}
std::vector<CUtlString> GCBoneConstraintPoseSpaceMorph::GetOutputMorph() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_outputMorph"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCBoneConstraintPoseSpaceMorph::SetOutputMorph(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_outputMorph", false, value);
}
std::vector<GCBoneConstraintPoseSpaceMorph> GCBoneConstraintPoseSpaceMorph::GetInputList() const {
    CUtlVector<GCBoneConstraintPoseSpaceMorph>* vec = GetSchemaValue<CUtlVector<GCBoneConstraintPoseSpaceMorph>*>(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_inputList"); std::vector<GCBoneConstraintPoseSpaceMorph> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCBoneConstraintPoseSpaceMorph::SetInputList(std::vector<GCBoneConstraintPoseSpaceMorph> value) {
    SetSchemaValueCUtlVector<GCBoneConstraintPoseSpaceMorph>(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_inputList", false, value);
}
bool GCBoneConstraintPoseSpaceMorph::GetClamp() const {
    return GetSchemaValue<bool>(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_bClamp");
}
void GCBoneConstraintPoseSpaceMorph::SetClamp(bool value) {
    SetSchemaValue(m_ptr, "CBoneConstraintPoseSpaceMorph", "m_bClamp", false, value);
}
void* GCBoneConstraintPoseSpaceMorph::GetPtr() {
    return m_ptr;
}
std::string GCBoneConstraintPoseSpaceMorph::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBoneConstraintPoseSpaceMorph::IsValid() {
    return (m_ptr != nullptr);
}
GCBoneConstraintBase GCBoneConstraintPoseSpaceMorph::GetParent() const {
    GCBoneConstraintBase value(m_ptr);
    return value;
}
void GCBoneConstraintPoseSpaceMorph::SetParent(GCBoneConstraintBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCBoneConstraintPoseSpaceMorph(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBoneConstraintPoseSpaceMorph>("CBoneConstraintPoseSpaceMorph")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BoneName", &GCBoneConstraintPoseSpaceMorph::GetBoneName, &GCBoneConstraintPoseSpaceMorph::SetBoneName)
        .addProperty("AttachmentName", &GCBoneConstraintPoseSpaceMorph::GetAttachmentName, &GCBoneConstraintPoseSpaceMorph::SetAttachmentName)
        .addProperty("OutputMorph", &GCBoneConstraintPoseSpaceMorph::GetOutputMorph, &GCBoneConstraintPoseSpaceMorph::SetOutputMorph)
        .addProperty("InputList", &GCBoneConstraintPoseSpaceMorph::GetInputList, &GCBoneConstraintPoseSpaceMorph::SetInputList)
        .addProperty("Clamp", &GCBoneConstraintPoseSpaceMorph::GetClamp, &GCBoneConstraintPoseSpaceMorph::SetClamp)
        .addProperty("Parent", &GCBoneConstraintPoseSpaceMorph::GetParent, &GCBoneConstraintPoseSpaceMorph::SetParent)
        .addFunction("ToPtr", &GCBoneConstraintPoseSpaceMorph::ToPtr)
        .addFunction("IsValid", &GCBoneConstraintPoseSpaceMorph::IsValid)
        .endClass();
}
GCSSDSMsg_PreLayer::GCSSDSMsg_PreLayer(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSSDSMsg_PreLayer::GCSSDSMsg_PreLayer(void *ptr) {
    m_ptr = ptr;
}
void* GCSSDSMsg_PreLayer::GetPtr() {
    return m_ptr;
}
std::string GCSSDSMsg_PreLayer::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSSDSMsg_PreLayer::IsValid() {
    return (m_ptr != nullptr);
}
GCSSDSMsg_LayerBase GCSSDSMsg_PreLayer::GetParent() const {
    GCSSDSMsg_LayerBase value(m_ptr);
    return value;
}
void GCSSDSMsg_PreLayer::SetParent(GCSSDSMsg_LayerBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSSDSMsg_PreLayer(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSSDSMsg_PreLayer>("CSSDSMsg_PreLayer")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCSSDSMsg_PreLayer::GetParent, &GCSSDSMsg_PreLayer::SetParent)
        .addFunction("ToPtr", &GCSSDSMsg_PreLayer::ToPtr)
        .addFunction("IsValid", &GCSSDSMsg_PreLayer::IsValid)
        .endClass();
}
GCSelectorUpdateNode::GCSelectorUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSelectorUpdateNode::GCSelectorUpdateNode(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCAnimUpdateNodeRef> GCSelectorUpdateNode::GetChildren() const {
    CUtlVector<GCAnimUpdateNodeRef>* vec = GetSchemaValue<CUtlVector<GCAnimUpdateNodeRef>*>(m_ptr, "CSelectorUpdateNode", "m_children"); std::vector<GCAnimUpdateNodeRef> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSelectorUpdateNode::SetChildren(std::vector<GCAnimUpdateNodeRef> value) {
    SetSchemaValueCUtlVector<GCAnimUpdateNodeRef>(m_ptr, "CSelectorUpdateNode", "m_children", false, value);
}
std::vector<int8> GCSelectorUpdateNode::GetTags() const {
    CUtlVector<int8>* vec = GetSchemaValue<CUtlVector<int8>*>(m_ptr, "CSelectorUpdateNode", "m_tags"); std::vector<int8> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSelectorUpdateNode::SetTags(std::vector<int8> value) {
    SetSchemaValueCUtlVector<int8>(m_ptr, "CSelectorUpdateNode", "m_tags", false, value);
}
GCBlendCurve GCSelectorUpdateNode::GetBlendCurve() const {
    GCBlendCurve value(GetSchemaPtr(m_ptr, "CSelectorUpdateNode", "m_blendCurve"));
    return value;
}
void GCSelectorUpdateNode::SetBlendCurve(GCBlendCurve value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BlendCurve' is not possible.\n");
}
GCAnimParamHandle GCSelectorUpdateNode::GetParameter() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CSelectorUpdateNode", "m_hParameter"));
    return value;
}
void GCSelectorUpdateNode::SetParameter(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parameter' is not possible.\n");
}
int32_t GCSelectorUpdateNode::GetTagIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSelectorUpdateNode", "m_nTagIndex");
}
void GCSelectorUpdateNode::SetTagIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CSelectorUpdateNode", "m_nTagIndex", false, value);
}
uint64_t GCSelectorUpdateNode::GetTagBehavior() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CSelectorUpdateNode", "m_eTagBehavior");
}
void GCSelectorUpdateNode::SetTagBehavior(uint64_t value) {
    SetSchemaValue(m_ptr, "CSelectorUpdateNode", "m_eTagBehavior", false, value);
}
bool GCSelectorUpdateNode::GetResetOnChange() const {
    return GetSchemaValue<bool>(m_ptr, "CSelectorUpdateNode", "m_bResetOnChange");
}
void GCSelectorUpdateNode::SetResetOnChange(bool value) {
    SetSchemaValue(m_ptr, "CSelectorUpdateNode", "m_bResetOnChange", false, value);
}
bool GCSelectorUpdateNode::GetLockWhenWaning() const {
    return GetSchemaValue<bool>(m_ptr, "CSelectorUpdateNode", "m_bLockWhenWaning");
}
void GCSelectorUpdateNode::SetLockWhenWaning(bool value) {
    SetSchemaValue(m_ptr, "CSelectorUpdateNode", "m_bLockWhenWaning", false, value);
}
bool GCSelectorUpdateNode::GetSyncCyclesOnChange() const {
    return GetSchemaValue<bool>(m_ptr, "CSelectorUpdateNode", "m_bSyncCyclesOnChange");
}
void GCSelectorUpdateNode::SetSyncCyclesOnChange(bool value) {
    SetSchemaValue(m_ptr, "CSelectorUpdateNode", "m_bSyncCyclesOnChange", false, value);
}
void* GCSelectorUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCSelectorUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSelectorUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimUpdateNodeBase GCSelectorUpdateNode::GetParent() const {
    GCAnimUpdateNodeBase value(m_ptr);
    return value;
}
void GCSelectorUpdateNode::SetParent(GCAnimUpdateNodeBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSelectorUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSelectorUpdateNode>("CSelectorUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Children", &GCSelectorUpdateNode::GetChildren, &GCSelectorUpdateNode::SetChildren)
        .addProperty("Tags", &GCSelectorUpdateNode::GetTags, &GCSelectorUpdateNode::SetTags)
        .addProperty("BlendCurve", &GCSelectorUpdateNode::GetBlendCurve, &GCSelectorUpdateNode::SetBlendCurve)
        .addProperty("Parameter", &GCSelectorUpdateNode::GetParameter, &GCSelectorUpdateNode::SetParameter)
        .addProperty("TagIndex", &GCSelectorUpdateNode::GetTagIndex, &GCSelectorUpdateNode::SetTagIndex)
        .addProperty("TagBehavior", &GCSelectorUpdateNode::GetTagBehavior, &GCSelectorUpdateNode::SetTagBehavior)
        .addProperty("ResetOnChange", &GCSelectorUpdateNode::GetResetOnChange, &GCSelectorUpdateNode::SetResetOnChange)
        .addProperty("LockWhenWaning", &GCSelectorUpdateNode::GetLockWhenWaning, &GCSelectorUpdateNode::SetLockWhenWaning)
        .addProperty("SyncCyclesOnChange", &GCSelectorUpdateNode::GetSyncCyclesOnChange, &GCSelectorUpdateNode::SetSyncCyclesOnChange)
        .addProperty("Parent", &GCSelectorUpdateNode::GetParent, &GCSelectorUpdateNode::SetParent)
        .addFunction("ToPtr", &GCSelectorUpdateNode::ToPtr)
        .addFunction("IsValid", &GCSelectorUpdateNode::IsValid)
        .endClass();
}
GCAimCameraUpdateNode::GCAimCameraUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAimCameraUpdateNode::GCAimCameraUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GCAnimParamHandle GCAimCameraUpdateNode::GetParameterPosition() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_hParameterPosition"));
    return value;
}
void GCAimCameraUpdateNode::SetParameterPosition(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterPosition' is not possible.\n");
}
GCAnimParamHandle GCAimCameraUpdateNode::GetParameterOrientation() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_hParameterOrientation"));
    return value;
}
void GCAimCameraUpdateNode::SetParameterOrientation(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterOrientation' is not possible.\n");
}
GCAnimParamHandle GCAimCameraUpdateNode::GetParameterSpineRotationWeight() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_hParameterSpineRotationWeight"));
    return value;
}
void GCAimCameraUpdateNode::SetParameterSpineRotationWeight(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterSpineRotationWeight' is not possible.\n");
}
GCAnimParamHandle GCAimCameraUpdateNode::GetParameterPelvisOffset() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_hParameterPelvisOffset"));
    return value;
}
void GCAimCameraUpdateNode::SetParameterPelvisOffset(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterPelvisOffset' is not possible.\n");
}
GCAnimParamHandle GCAimCameraUpdateNode::GetParameterUseIK() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_hParameterUseIK"));
    return value;
}
void GCAimCameraUpdateNode::SetParameterUseIK(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterUseIK' is not possible.\n");
}
GCAnimParamHandle GCAimCameraUpdateNode::GetParameterWeaponDepenetrationDistance() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_hParameterWeaponDepenetrationDistance"));
    return value;
}
void GCAimCameraUpdateNode::SetParameterWeaponDepenetrationDistance(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterWeaponDepenetrationDistance' is not possible.\n");
}
GCAnimParamHandle GCAimCameraUpdateNode::GetParameterCameraClearanceDistance() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_hParameterCameraClearanceDistance"));
    return value;
}
void GCAimCameraUpdateNode::SetParameterCameraClearanceDistance(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterCameraClearanceDistance' is not possible.\n");
}
GAimCameraOpFixedSettings_t GCAimCameraUpdateNode::GetOpFixedSettings() const {
    GAimCameraOpFixedSettings_t value(GetSchemaPtr(m_ptr, "CAimCameraUpdateNode", "m_opFixedSettings"));
    return value;
}
void GCAimCameraUpdateNode::SetOpFixedSettings(GAimCameraOpFixedSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'OpFixedSettings' is not possible.\n");
}
void* GCAimCameraUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCAimCameraUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAimCameraUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCAimCameraUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCAimCameraUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCAimCameraUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAimCameraUpdateNode>("CAimCameraUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ParameterPosition", &GCAimCameraUpdateNode::GetParameterPosition, &GCAimCameraUpdateNode::SetParameterPosition)
        .addProperty("ParameterOrientation", &GCAimCameraUpdateNode::GetParameterOrientation, &GCAimCameraUpdateNode::SetParameterOrientation)
        .addProperty("ParameterSpineRotationWeight", &GCAimCameraUpdateNode::GetParameterSpineRotationWeight, &GCAimCameraUpdateNode::SetParameterSpineRotationWeight)
        .addProperty("ParameterPelvisOffset", &GCAimCameraUpdateNode::GetParameterPelvisOffset, &GCAimCameraUpdateNode::SetParameterPelvisOffset)
        .addProperty("ParameterUseIK", &GCAimCameraUpdateNode::GetParameterUseIK, &GCAimCameraUpdateNode::SetParameterUseIK)
        .addProperty("ParameterWeaponDepenetrationDistance", &GCAimCameraUpdateNode::GetParameterWeaponDepenetrationDistance, &GCAimCameraUpdateNode::SetParameterWeaponDepenetrationDistance)
        .addProperty("ParameterCameraClearanceDistance", &GCAimCameraUpdateNode::GetParameterCameraClearanceDistance, &GCAimCameraUpdateNode::SetParameterCameraClearanceDistance)
        .addProperty("OpFixedSettings", &GCAimCameraUpdateNode::GetOpFixedSettings, &GCAimCameraUpdateNode::SetOpFixedSettings)
        .addProperty("Parent", &GCAimCameraUpdateNode::GetParent, &GCAimCameraUpdateNode::SetParent)
        .addFunction("ToPtr", &GCAimCameraUpdateNode::ToPtr)
        .addFunction("IsValid", &GCAimCameraUpdateNode::IsValid)
        .endClass();
}
GCFootStepTriggerUpdateNode::GCFootStepTriggerUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootStepTriggerUpdateNode::GCFootStepTriggerUpdateNode(void *ptr) {
    m_ptr = ptr;
}
std::vector<GFootStepTrigger> GCFootStepTriggerUpdateNode::GetTriggers() const {
    CUtlVector<GFootStepTrigger>* vec = GetSchemaValue<CUtlVector<GFootStepTrigger>*>(m_ptr, "CFootStepTriggerUpdateNode", "m_triggers"); std::vector<GFootStepTrigger> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCFootStepTriggerUpdateNode::SetTriggers(std::vector<GFootStepTrigger> value) {
    SetSchemaValueCUtlVector<GFootStepTrigger>(m_ptr, "CFootStepTriggerUpdateNode", "m_triggers", false, value);
}
float GCFootStepTriggerUpdateNode::GetTolerance() const {
    return GetSchemaValue<float>(m_ptr, "CFootStepTriggerUpdateNode", "m_flTolerance");
}
void GCFootStepTriggerUpdateNode::SetTolerance(float value) {
    SetSchemaValue(m_ptr, "CFootStepTriggerUpdateNode", "m_flTolerance", false, value);
}
void* GCFootStepTriggerUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCFootStepTriggerUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootStepTriggerUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCFootStepTriggerUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCFootStepTriggerUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCFootStepTriggerUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootStepTriggerUpdateNode>("CFootStepTriggerUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Triggers", &GCFootStepTriggerUpdateNode::GetTriggers, &GCFootStepTriggerUpdateNode::SetTriggers)
        .addProperty("Tolerance", &GCFootStepTriggerUpdateNode::GetTolerance, &GCFootStepTriggerUpdateNode::SetTolerance)
        .addProperty("Parent", &GCFootStepTriggerUpdateNode::GetParent, &GCFootStepTriggerUpdateNode::SetParent)
        .addFunction("ToPtr", &GCFootStepTriggerUpdateNode::ToPtr)
        .addFunction("IsValid", &GCFootStepTriggerUpdateNode::IsValid)
        .endClass();
}
GRnSoftbodyParticle_t::GRnSoftbodyParticle_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnSoftbodyParticle_t::GRnSoftbodyParticle_t(void *ptr) {
    m_ptr = ptr;
}
float GRnSoftbodyParticle_t::GetMassInv() const {
    return GetSchemaValue<float>(m_ptr, "RnSoftbodyParticle_t", "m_flMassInv");
}
void GRnSoftbodyParticle_t::SetMassInv(float value) {
    SetSchemaValue(m_ptr, "RnSoftbodyParticle_t", "m_flMassInv", true, value);
}
void* GRnSoftbodyParticle_t::GetPtr() {
    return m_ptr;
}
std::string GRnSoftbodyParticle_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnSoftbodyParticle_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassRnSoftbodyParticle_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnSoftbodyParticle_t>("RnSoftbodyParticle_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MassInv", &GRnSoftbodyParticle_t::GetMassInv, &GRnSoftbodyParticle_t::SetMassInv)
        .addFunction("ToPtr", &GRnSoftbodyParticle_t::ToPtr)
        .addFunction("IsValid", &GRnSoftbodyParticle_t::IsValid)
        .endClass();
}
GCSingleFrameUpdateNode::GCSingleFrameUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSingleFrameUpdateNode::GCSingleFrameUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GCPoseHandle GCSingleFrameUpdateNode::GetPoseCacheHandle() const {
    GCPoseHandle value(GetSchemaPtr(m_ptr, "CSingleFrameUpdateNode", "m_hPoseCacheHandle"));
    return value;
}
void GCSingleFrameUpdateNode::SetPoseCacheHandle(GCPoseHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'PoseCacheHandle' is not possible.\n");
}
float GCSingleFrameUpdateNode::GetCycle() const {
    return GetSchemaValue<float>(m_ptr, "CSingleFrameUpdateNode", "m_flCycle");
}
void GCSingleFrameUpdateNode::SetCycle(float value) {
    SetSchemaValue(m_ptr, "CSingleFrameUpdateNode", "m_flCycle", false, value);
}
void* GCSingleFrameUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCSingleFrameUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSingleFrameUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCLeafUpdateNode GCSingleFrameUpdateNode::GetParent() const {
    GCLeafUpdateNode value(m_ptr);
    return value;
}
void GCSingleFrameUpdateNode::SetParent(GCLeafUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSingleFrameUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSingleFrameUpdateNode>("CSingleFrameUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("PoseCacheHandle", &GCSingleFrameUpdateNode::GetPoseCacheHandle, &GCSingleFrameUpdateNode::SetPoseCacheHandle)
        .addProperty("Cycle", &GCSingleFrameUpdateNode::GetCycle, &GCSingleFrameUpdateNode::SetCycle)
        .addProperty("Parent", &GCSingleFrameUpdateNode::GetParent, &GCSingleFrameUpdateNode::SetParent)
        .addFunction("ToPtr", &GCSingleFrameUpdateNode::ToPtr)
        .addFunction("IsValid", &GCSingleFrameUpdateNode::IsValid)
        .endClass();
}
GCSeqSynthAnimDesc::GCSeqSynthAnimDesc(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSeqSynthAnimDesc::GCSeqSynthAnimDesc(void *ptr) {
    m_ptr = ptr;
}
GCSeqSeqDescFlag GCSeqSynthAnimDesc::GetFlags() const {
    GCSeqSeqDescFlag value(GetSchemaPtr(m_ptr, "CSeqSynthAnimDesc", "m_flags"));
    return value;
}
void GCSeqSynthAnimDesc::SetFlags(GCSeqSeqDescFlag value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Flags' is not possible.\n");
}
GCSeqTransition GCSeqSynthAnimDesc::GetTransition() const {
    GCSeqTransition value(GetSchemaPtr(m_ptr, "CSeqSynthAnimDesc", "m_transition"));
    return value;
}
void GCSeqSynthAnimDesc::SetTransition(GCSeqTransition value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Transition' is not possible.\n");
}
int16_t GCSeqSynthAnimDesc::GetLocalBaseReference() const {
    return GetSchemaValue<int16_t>(m_ptr, "CSeqSynthAnimDesc", "m_nLocalBaseReference");
}
void GCSeqSynthAnimDesc::SetLocalBaseReference(int16_t value) {
    SetSchemaValue(m_ptr, "CSeqSynthAnimDesc", "m_nLocalBaseReference", false, value);
}
int16_t GCSeqSynthAnimDesc::GetLocalBoneMask() const {
    return GetSchemaValue<int16_t>(m_ptr, "CSeqSynthAnimDesc", "m_nLocalBoneMask");
}
void GCSeqSynthAnimDesc::SetLocalBoneMask(int16_t value) {
    SetSchemaValue(m_ptr, "CSeqSynthAnimDesc", "m_nLocalBoneMask", false, value);
}
std::vector<GCAnimActivity> GCSeqSynthAnimDesc::GetActivityArray() const {
    CUtlVector<GCAnimActivity>* vec = GetSchemaValue<CUtlVector<GCAnimActivity>*>(m_ptr, "CSeqSynthAnimDesc", "m_activityArray"); std::vector<GCAnimActivity> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqSynthAnimDesc::SetActivityArray(std::vector<GCAnimActivity> value) {
    SetSchemaValueCUtlVector<GCAnimActivity>(m_ptr, "CSeqSynthAnimDesc", "m_activityArray", false, value);
}
void* GCSeqSynthAnimDesc::GetPtr() {
    return m_ptr;
}
std::string GCSeqSynthAnimDesc::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSeqSynthAnimDesc::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSeqSynthAnimDesc(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSeqSynthAnimDesc>("CSeqSynthAnimDesc")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GCSeqSynthAnimDesc::GetFlags, &GCSeqSynthAnimDesc::SetFlags)
        .addProperty("Transition", &GCSeqSynthAnimDesc::GetTransition, &GCSeqSynthAnimDesc::SetTransition)
        .addProperty("LocalBaseReference", &GCSeqSynthAnimDesc::GetLocalBaseReference, &GCSeqSynthAnimDesc::SetLocalBaseReference)
        .addProperty("LocalBoneMask", &GCSeqSynthAnimDesc::GetLocalBoneMask, &GCSeqSynthAnimDesc::SetLocalBoneMask)
        .addProperty("ActivityArray", &GCSeqSynthAnimDesc::GetActivityArray, &GCSeqSynthAnimDesc::SetActivityArray)
        .addFunction("ToPtr", &GCSeqSynthAnimDesc::ToPtr)
        .addFunction("IsValid", &GCSeqSynthAnimDesc::IsValid)
        .endClass();
}
GCDirectPlaybackTagData::GCDirectPlaybackTagData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCDirectPlaybackTagData::GCDirectPlaybackTagData(void *ptr) {
    m_ptr = ptr;
}
std::string GCDirectPlaybackTagData::GetSequenceName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CDirectPlaybackTagData", "m_sequenceName").Get();
}
void GCDirectPlaybackTagData::SetSequenceName(std::string value) {
    SetSchemaValue(m_ptr, "CDirectPlaybackTagData", "m_sequenceName", false, CUtlString(value.c_str()));
}
std::vector<GTagSpan_t> GCDirectPlaybackTagData::GetTags() const {
    CUtlVector<GTagSpan_t>* vec = GetSchemaValue<CUtlVector<GTagSpan_t>*>(m_ptr, "CDirectPlaybackTagData", "m_tags"); std::vector<GTagSpan_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCDirectPlaybackTagData::SetTags(std::vector<GTagSpan_t> value) {
    SetSchemaValueCUtlVector<GTagSpan_t>(m_ptr, "CDirectPlaybackTagData", "m_tags", false, value);
}
void* GCDirectPlaybackTagData::GetPtr() {
    return m_ptr;
}
std::string GCDirectPlaybackTagData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCDirectPlaybackTagData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCDirectPlaybackTagData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCDirectPlaybackTagData>("CDirectPlaybackTagData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SequenceName", &GCDirectPlaybackTagData::GetSequenceName, &GCDirectPlaybackTagData::SetSequenceName)
        .addProperty("Tags", &GCDirectPlaybackTagData::GetTags, &GCDirectPlaybackTagData::SetTags)
        .addFunction("ToPtr", &GCDirectPlaybackTagData::ToPtr)
        .addFunction("IsValid", &GCDirectPlaybackTagData::IsValid)
        .endClass();
}
GEventFrameBoundary_t::GEventFrameBoundary_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventFrameBoundary_t::GEventFrameBoundary_t(void *ptr) {
    m_ptr = ptr;
}
float GEventFrameBoundary_t::GetFrameTime() const {
    return GetSchemaValue<float>(m_ptr, "EventFrameBoundary_t", "m_flFrameTime");
}
void GEventFrameBoundary_t::SetFrameTime(float value) {
    SetSchemaValue(m_ptr, "EventFrameBoundary_t", "m_flFrameTime", true, value);
}
void* GEventFrameBoundary_t::GetPtr() {
    return m_ptr;
}
std::string GEventFrameBoundary_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventFrameBoundary_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventFrameBoundary_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventFrameBoundary_t>("EventFrameBoundary_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FrameTime", &GEventFrameBoundary_t::GetFrameTime, &GEventFrameBoundary_t::SetFrameTime)
        .addFunction("ToPtr", &GEventFrameBoundary_t::ToPtr)
        .addFunction("IsValid", &GEventFrameBoundary_t::IsValid)
        .endClass();
}
GWorldNode_t::GWorldNode_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GWorldNode_t::GWorldNode_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<GSceneObject_t> GWorldNode_t::GetSceneObjects() const {
    CUtlVector<GSceneObject_t>* vec = GetSchemaValue<CUtlVector<GSceneObject_t>*>(m_ptr, "WorldNode_t", "m_sceneObjects"); std::vector<GSceneObject_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetSceneObjects(std::vector<GSceneObject_t> value) {
    SetSchemaValueCUtlVector<GSceneObject_t>(m_ptr, "WorldNode_t", "m_sceneObjects", true, value);
}
std::vector<GInfoOverlayData_t> GWorldNode_t::GetInfoOverlays() const {
    CUtlVector<GInfoOverlayData_t>* vec = GetSchemaValue<CUtlVector<GInfoOverlayData_t>*>(m_ptr, "WorldNode_t", "m_infoOverlays"); std::vector<GInfoOverlayData_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetInfoOverlays(std::vector<GInfoOverlayData_t> value) {
    SetSchemaValueCUtlVector<GInfoOverlayData_t>(m_ptr, "WorldNode_t", "m_infoOverlays", true, value);
}
std::vector<uint16> GWorldNode_t::GetVisClusterMembership() const {
    CUtlVector<uint16>* vec = GetSchemaValue<CUtlVector<uint16>*>(m_ptr, "WorldNode_t", "m_visClusterMembership"); std::vector<uint16> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetVisClusterMembership(std::vector<uint16> value) {
    SetSchemaValueCUtlVector<uint16>(m_ptr, "WorldNode_t", "m_visClusterMembership", true, value);
}
std::vector<GAggregateSceneObject_t> GWorldNode_t::GetAggregateSceneObjects() const {
    CUtlVector<GAggregateSceneObject_t>* vec = GetSchemaValue<CUtlVector<GAggregateSceneObject_t>*>(m_ptr, "WorldNode_t", "m_aggregateSceneObjects"); std::vector<GAggregateSceneObject_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetAggregateSceneObjects(std::vector<GAggregateSceneObject_t> value) {
    SetSchemaValueCUtlVector<GAggregateSceneObject_t>(m_ptr, "WorldNode_t", "m_aggregateSceneObjects", true, value);
}
std::vector<GClutterSceneObject_t> GWorldNode_t::GetClutterSceneObjects() const {
    CUtlVector<GClutterSceneObject_t>* vec = GetSchemaValue<CUtlVector<GClutterSceneObject_t>*>(m_ptr, "WorldNode_t", "m_clutterSceneObjects"); std::vector<GClutterSceneObject_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetClutterSceneObjects(std::vector<GClutterSceneObject_t> value) {
    SetSchemaValueCUtlVector<GClutterSceneObject_t>(m_ptr, "WorldNode_t", "m_clutterSceneObjects", true, value);
}
std::vector<GExtraVertexStreamOverride_t> GWorldNode_t::GetExtraVertexStreamOverrides() const {
    CUtlVector<GExtraVertexStreamOverride_t>* vec = GetSchemaValue<CUtlVector<GExtraVertexStreamOverride_t>*>(m_ptr, "WorldNode_t", "m_extraVertexStreamOverrides"); std::vector<GExtraVertexStreamOverride_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetExtraVertexStreamOverrides(std::vector<GExtraVertexStreamOverride_t> value) {
    SetSchemaValueCUtlVector<GExtraVertexStreamOverride_t>(m_ptr, "WorldNode_t", "m_extraVertexStreamOverrides", true, value);
}
std::vector<GMaterialOverride_t> GWorldNode_t::GetMaterialOverrides() const {
    CUtlVector<GMaterialOverride_t>* vec = GetSchemaValue<CUtlVector<GMaterialOverride_t>*>(m_ptr, "WorldNode_t", "m_materialOverrides"); std::vector<GMaterialOverride_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetMaterialOverrides(std::vector<GMaterialOverride_t> value) {
    SetSchemaValueCUtlVector<GMaterialOverride_t>(m_ptr, "WorldNode_t", "m_materialOverrides", true, value);
}
std::vector<GWorldNodeOnDiskBufferData_t> GWorldNode_t::GetExtraVertexStreams() const {
    CUtlVector<GWorldNodeOnDiskBufferData_t>* vec = GetSchemaValue<CUtlVector<GWorldNodeOnDiskBufferData_t>*>(m_ptr, "WorldNode_t", "m_extraVertexStreams"); std::vector<GWorldNodeOnDiskBufferData_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetExtraVertexStreams(std::vector<GWorldNodeOnDiskBufferData_t> value) {
    SetSchemaValueCUtlVector<GWorldNodeOnDiskBufferData_t>(m_ptr, "WorldNode_t", "m_extraVertexStreams", true, value);
}
std::vector<CUtlString> GWorldNode_t::GetLayerNames() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "WorldNode_t", "m_layerNames"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetLayerNames(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "WorldNode_t", "m_layerNames", true, value);
}
std::vector<uint8> GWorldNode_t::GetSceneObjectLayerIndices() const {
    CUtlVector<uint8>* vec = GetSchemaValue<CUtlVector<uint8>*>(m_ptr, "WorldNode_t", "m_sceneObjectLayerIndices"); std::vector<uint8> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetSceneObjectLayerIndices(std::vector<uint8> value) {
    SetSchemaValueCUtlVector<uint8>(m_ptr, "WorldNode_t", "m_sceneObjectLayerIndices", true, value);
}
std::vector<uint8> GWorldNode_t::GetOverlayLayerIndices() const {
    CUtlVector<uint8>* vec = GetSchemaValue<CUtlVector<uint8>*>(m_ptr, "WorldNode_t", "m_overlayLayerIndices"); std::vector<uint8> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNode_t::SetOverlayLayerIndices(std::vector<uint8> value) {
    SetSchemaValueCUtlVector<uint8>(m_ptr, "WorldNode_t", "m_overlayLayerIndices", true, value);
}
std::string GWorldNode_t::GetGrassFileName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "WorldNode_t", "m_grassFileName").Get();
}
void GWorldNode_t::SetGrassFileName(std::string value) {
    SetSchemaValue(m_ptr, "WorldNode_t", "m_grassFileName", true, CUtlString(value.c_str()));
}
GBakedLightingInfo_t GWorldNode_t::GetNodeLightingInfo() const {
    GBakedLightingInfo_t value(GetSchemaPtr(m_ptr, "WorldNode_t", "m_nodeLightingInfo"));
    return value;
}
void GWorldNode_t::SetNodeLightingInfo(GBakedLightingInfo_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'NodeLightingInfo' is not possible.\n");
}
void* GWorldNode_t::GetPtr() {
    return m_ptr;
}
std::string GWorldNode_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GWorldNode_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassWorldNode_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GWorldNode_t>("WorldNode_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SceneObjects", &GWorldNode_t::GetSceneObjects, &GWorldNode_t::SetSceneObjects)
        .addProperty("InfoOverlays", &GWorldNode_t::GetInfoOverlays, &GWorldNode_t::SetInfoOverlays)
        .addProperty("VisClusterMembership", &GWorldNode_t::GetVisClusterMembership, &GWorldNode_t::SetVisClusterMembership)
        .addProperty("AggregateSceneObjects", &GWorldNode_t::GetAggregateSceneObjects, &GWorldNode_t::SetAggregateSceneObjects)
        .addProperty("ClutterSceneObjects", &GWorldNode_t::GetClutterSceneObjects, &GWorldNode_t::SetClutterSceneObjects)
        .addProperty("ExtraVertexStreamOverrides", &GWorldNode_t::GetExtraVertexStreamOverrides, &GWorldNode_t::SetExtraVertexStreamOverrides)
        .addProperty("MaterialOverrides", &GWorldNode_t::GetMaterialOverrides, &GWorldNode_t::SetMaterialOverrides)
        .addProperty("ExtraVertexStreams", &GWorldNode_t::GetExtraVertexStreams, &GWorldNode_t::SetExtraVertexStreams)
        .addProperty("LayerNames", &GWorldNode_t::GetLayerNames, &GWorldNode_t::SetLayerNames)
        .addProperty("SceneObjectLayerIndices", &GWorldNode_t::GetSceneObjectLayerIndices, &GWorldNode_t::SetSceneObjectLayerIndices)
        .addProperty("OverlayLayerIndices", &GWorldNode_t::GetOverlayLayerIndices, &GWorldNode_t::SetOverlayLayerIndices)
        .addProperty("GrassFileName", &GWorldNode_t::GetGrassFileName, &GWorldNode_t::SetGrassFileName)
        .addProperty("NodeLightingInfo", &GWorldNode_t::GetNodeLightingInfo, &GWorldNode_t::SetNodeLightingInfo)
        .addFunction("ToPtr", &GWorldNode_t::ToPtr)
        .addFunction("IsValid", &GWorldNode_t::IsValid)
        .endClass();
}
GAggregateMeshInfo_t::GAggregateMeshInfo_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GAggregateMeshInfo_t::GAggregateMeshInfo_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GAggregateMeshInfo_t::GetVisClusterMemberOffset() const {
    return GetSchemaValue<uint32_t>(m_ptr, "AggregateMeshInfo_t", "m_nVisClusterMemberOffset");
}
void GAggregateMeshInfo_t::SetVisClusterMemberOffset(uint32_t value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_nVisClusterMemberOffset", true, value);
}
uint8_t GAggregateMeshInfo_t::GetVisClusterMemberCount() const {
    return GetSchemaValue<uint8_t>(m_ptr, "AggregateMeshInfo_t", "m_nVisClusterMemberCount");
}
void GAggregateMeshInfo_t::SetVisClusterMemberCount(uint8_t value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_nVisClusterMemberCount", true, value);
}
bool GAggregateMeshInfo_t::GetHasTransform() const {
    return GetSchemaValue<bool>(m_ptr, "AggregateMeshInfo_t", "m_bHasTransform");
}
void GAggregateMeshInfo_t::SetHasTransform(bool value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_bHasTransform", true, value);
}
int16_t GAggregateMeshInfo_t::GetDrawCallIndex() const {
    return GetSchemaValue<int16_t>(m_ptr, "AggregateMeshInfo_t", "m_nDrawCallIndex");
}
void GAggregateMeshInfo_t::SetDrawCallIndex(int16_t value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_nDrawCallIndex", true, value);
}
int16_t GAggregateMeshInfo_t::GetLODSetupIndex() const {
    return GetSchemaValue<int16_t>(m_ptr, "AggregateMeshInfo_t", "m_nLODSetupIndex");
}
void GAggregateMeshInfo_t::SetLODSetupIndex(int16_t value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_nLODSetupIndex", true, value);
}
uint8_t GAggregateMeshInfo_t::GetLODGroupMask() const {
    return GetSchemaValue<uint8_t>(m_ptr, "AggregateMeshInfo_t", "m_nLODGroupMask");
}
void GAggregateMeshInfo_t::SetLODGroupMask(uint8_t value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_nLODGroupMask", true, value);
}
Color GAggregateMeshInfo_t::GetTintColor() const {
    return GetSchemaValue<Color>(m_ptr, "AggregateMeshInfo_t", "m_vTintColor");
}
void GAggregateMeshInfo_t::SetTintColor(Color value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_vTintColor", true, value);
}
uint64_t GAggregateMeshInfo_t::GetObjectFlags() const {
    return GetSchemaValue<uint64_t>(m_ptr, "AggregateMeshInfo_t", "m_objectFlags");
}
void GAggregateMeshInfo_t::SetObjectFlags(uint64_t value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_objectFlags", true, value);
}
int32_t GAggregateMeshInfo_t::GetLightProbeVolumePrecomputedHandshake() const {
    return GetSchemaValue<int32_t>(m_ptr, "AggregateMeshInfo_t", "m_nLightProbeVolumePrecomputedHandshake");
}
void GAggregateMeshInfo_t::SetLightProbeVolumePrecomputedHandshake(int32_t value) {
    SetSchemaValue(m_ptr, "AggregateMeshInfo_t", "m_nLightProbeVolumePrecomputedHandshake", true, value);
}
void* GAggregateMeshInfo_t::GetPtr() {
    return m_ptr;
}
std::string GAggregateMeshInfo_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GAggregateMeshInfo_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassAggregateMeshInfo_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GAggregateMeshInfo_t>("AggregateMeshInfo_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("VisClusterMemberOffset", &GAggregateMeshInfo_t::GetVisClusterMemberOffset, &GAggregateMeshInfo_t::SetVisClusterMemberOffset)
        .addProperty("VisClusterMemberCount", &GAggregateMeshInfo_t::GetVisClusterMemberCount, &GAggregateMeshInfo_t::SetVisClusterMemberCount)
        .addProperty("HasTransform", &GAggregateMeshInfo_t::GetHasTransform, &GAggregateMeshInfo_t::SetHasTransform)
        .addProperty("DrawCallIndex", &GAggregateMeshInfo_t::GetDrawCallIndex, &GAggregateMeshInfo_t::SetDrawCallIndex)
        .addProperty("LODSetupIndex", &GAggregateMeshInfo_t::GetLODSetupIndex, &GAggregateMeshInfo_t::SetLODSetupIndex)
        .addProperty("LODGroupMask", &GAggregateMeshInfo_t::GetLODGroupMask, &GAggregateMeshInfo_t::SetLODGroupMask)
        .addProperty("TintColor", &GAggregateMeshInfo_t::GetTintColor, &GAggregateMeshInfo_t::SetTintColor)
        .addProperty("ObjectFlags", &GAggregateMeshInfo_t::GetObjectFlags, &GAggregateMeshInfo_t::SetObjectFlags)
        .addProperty("LightProbeVolumePrecomputedHandshake", &GAggregateMeshInfo_t::GetLightProbeVolumePrecomputedHandshake, &GAggregateMeshInfo_t::SetLightProbeVolumePrecomputedHandshake)
        .addFunction("ToPtr", &GAggregateMeshInfo_t::ToPtr)
        .addFunction("IsValid", &GAggregateMeshInfo_t::IsValid)
        .endClass();
}
GFeSimdRodConstraintAnim_t::GFeSimdRodConstraintAnim_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeSimdRodConstraintAnim_t::GFeSimdRodConstraintAnim_t(void *ptr) {
    m_ptr = ptr;
}
float GFeSimdRodConstraintAnim_t::Get4Weight0() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdRodConstraintAnim_t", "f4Weight0");
}
void GFeSimdRodConstraintAnim_t::Set4Weight0(float value) {
    SetSchemaValue(m_ptr, "FeSimdRodConstraintAnim_t", "f4Weight0", true, value);
}
float GFeSimdRodConstraintAnim_t::Get4RelaxationFactor() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdRodConstraintAnim_t", "f4RelaxationFactor");
}
void GFeSimdRodConstraintAnim_t::Set4RelaxationFactor(float value) {
    SetSchemaValue(m_ptr, "FeSimdRodConstraintAnim_t", "f4RelaxationFactor", true, value);
}
void* GFeSimdRodConstraintAnim_t::GetPtr() {
    return m_ptr;
}
std::string GFeSimdRodConstraintAnim_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeSimdRodConstraintAnim_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeSimdRodConstraintAnim_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeSimdRodConstraintAnim_t>("FeSimdRodConstraintAnim_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("4Weight0", &GFeSimdRodConstraintAnim_t::Get4Weight0, &GFeSimdRodConstraintAnim_t::Set4Weight0)
        .addProperty("4RelaxationFactor", &GFeSimdRodConstraintAnim_t::Get4RelaxationFactor, &GFeSimdRodConstraintAnim_t::Set4RelaxationFactor)
        .addFunction("ToPtr", &GFeSimdRodConstraintAnim_t::ToPtr)
        .addFunction("IsValid", &GFeSimdRodConstraintAnim_t::IsValid)
        .endClass();
}
GEventPostAdvanceTick_t::GEventPostAdvanceTick_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventPostAdvanceTick_t::GEventPostAdvanceTick_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GEventPostAdvanceTick_t::GetCurrentTick() const {
    return GetSchemaValue<int32_t>(m_ptr, "EventPostAdvanceTick_t", "m_nCurrentTick");
}
void GEventPostAdvanceTick_t::SetCurrentTick(int32_t value) {
    SetSchemaValue(m_ptr, "EventPostAdvanceTick_t", "m_nCurrentTick", true, value);
}
int32_t GEventPostAdvanceTick_t::GetCurrentTickThisFrame() const {
    return GetSchemaValue<int32_t>(m_ptr, "EventPostAdvanceTick_t", "m_nCurrentTickThisFrame");
}
void GEventPostAdvanceTick_t::SetCurrentTickThisFrame(int32_t value) {
    SetSchemaValue(m_ptr, "EventPostAdvanceTick_t", "m_nCurrentTickThisFrame", true, value);
}
int32_t GEventPostAdvanceTick_t::GetTotalTicksThisFrame() const {
    return GetSchemaValue<int32_t>(m_ptr, "EventPostAdvanceTick_t", "m_nTotalTicksThisFrame");
}
void GEventPostAdvanceTick_t::SetTotalTicksThisFrame(int32_t value) {
    SetSchemaValue(m_ptr, "EventPostAdvanceTick_t", "m_nTotalTicksThisFrame", true, value);
}
int32_t GEventPostAdvanceTick_t::GetTotalTicks() const {
    return GetSchemaValue<int32_t>(m_ptr, "EventPostAdvanceTick_t", "m_nTotalTicks");
}
void GEventPostAdvanceTick_t::SetTotalTicks(int32_t value) {
    SetSchemaValue(m_ptr, "EventPostAdvanceTick_t", "m_nTotalTicks", true, value);
}
void* GEventPostAdvanceTick_t::GetPtr() {
    return m_ptr;
}
std::string GEventPostAdvanceTick_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventPostAdvanceTick_t::IsValid() {
    return (m_ptr != nullptr);
}
GEventSimulate_t GEventPostAdvanceTick_t::GetParent() const {
    GEventSimulate_t value(m_ptr);
    return value;
}
void GEventPostAdvanceTick_t::SetParent(GEventSimulate_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassEventPostAdvanceTick_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventPostAdvanceTick_t>("EventPostAdvanceTick_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CurrentTick", &GEventPostAdvanceTick_t::GetCurrentTick, &GEventPostAdvanceTick_t::SetCurrentTick)
        .addProperty("CurrentTickThisFrame", &GEventPostAdvanceTick_t::GetCurrentTickThisFrame, &GEventPostAdvanceTick_t::SetCurrentTickThisFrame)
        .addProperty("TotalTicksThisFrame", &GEventPostAdvanceTick_t::GetTotalTicksThisFrame, &GEventPostAdvanceTick_t::SetTotalTicksThisFrame)
        .addProperty("TotalTicks", &GEventPostAdvanceTick_t::GetTotalTicks, &GEventPostAdvanceTick_t::SetTotalTicks)
        .addProperty("Parent", &GEventPostAdvanceTick_t::GetParent, &GEventPostAdvanceTick_t::SetParent)
        .addFunction("ToPtr", &GEventPostAdvanceTick_t::ToPtr)
        .addFunction("IsValid", &GEventPostAdvanceTick_t::IsValid)
        .endClass();
}
GFeBuildBoxRigid_t::GFeBuildBoxRigid_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeBuildBoxRigid_t::GFeBuildBoxRigid_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GFeBuildBoxRigid_t::GetPriority() const {
    return GetSchemaValue<int32_t>(m_ptr, "FeBuildBoxRigid_t", "m_nPriority");
}
void GFeBuildBoxRigid_t::SetPriority(int32_t value) {
    SetSchemaValue(m_ptr, "FeBuildBoxRigid_t", "m_nPriority", true, value);
}
uint32_t GFeBuildBoxRigid_t::GetVertexMapHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeBuildBoxRigid_t", "m_nVertexMapHash");
}
void GFeBuildBoxRigid_t::SetVertexMapHash(uint32_t value) {
    SetSchemaValue(m_ptr, "FeBuildBoxRigid_t", "m_nVertexMapHash", true, value);
}
void* GFeBuildBoxRigid_t::GetPtr() {
    return m_ptr;
}
std::string GFeBuildBoxRigid_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeBuildBoxRigid_t::IsValid() {
    return (m_ptr != nullptr);
}
GFeBoxRigid_t GFeBuildBoxRigid_t::GetParent() const {
    GFeBoxRigid_t value(m_ptr);
    return value;
}
void GFeBuildBoxRigid_t::SetParent(GFeBoxRigid_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassFeBuildBoxRigid_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeBuildBoxRigid_t>("FeBuildBoxRigid_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Priority", &GFeBuildBoxRigid_t::GetPriority, &GFeBuildBoxRigid_t::SetPriority)
        .addProperty("VertexMapHash", &GFeBuildBoxRigid_t::GetVertexMapHash, &GFeBuildBoxRigid_t::SetVertexMapHash)
        .addProperty("Parent", &GFeBuildBoxRigid_t::GetParent, &GFeBuildBoxRigid_t::SetParent)
        .addFunction("ToPtr", &GFeBuildBoxRigid_t::ToPtr)
        .addFunction("IsValid", &GFeBuildBoxRigid_t::IsValid)
        .endClass();
}
GIPhysicsPlayerController::GIPhysicsPlayerController(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GIPhysicsPlayerController::GIPhysicsPlayerController(void *ptr) {
    m_ptr = ptr;
}
void* GIPhysicsPlayerController::GetPtr() {
    return m_ptr;
}
std::string GIPhysicsPlayerController::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GIPhysicsPlayerController::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassIPhysicsPlayerController(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GIPhysicsPlayerController>("IPhysicsPlayerController")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GIPhysicsPlayerController::ToPtr)
        .addFunction("IsValid", &GIPhysicsPlayerController::IsValid)
        .endClass();
}
GEventServerPostAdvanceTick_t::GEventServerPostAdvanceTick_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventServerPostAdvanceTick_t::GEventServerPostAdvanceTick_t(void *ptr) {
    m_ptr = ptr;
}
void* GEventServerPostAdvanceTick_t::GetPtr() {
    return m_ptr;
}
std::string GEventServerPostAdvanceTick_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventServerPostAdvanceTick_t::IsValid() {
    return (m_ptr != nullptr);
}
GEventPostAdvanceTick_t GEventServerPostAdvanceTick_t::GetParent() const {
    GEventPostAdvanceTick_t value(m_ptr);
    return value;
}
void GEventServerPostAdvanceTick_t::SetParent(GEventPostAdvanceTick_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassEventServerPostAdvanceTick_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventServerPostAdvanceTick_t>("EventServerPostAdvanceTick_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GEventServerPostAdvanceTick_t::GetParent, &GEventServerPostAdvanceTick_t::SetParent)
        .addFunction("ToPtr", &GEventServerPostAdvanceTick_t::ToPtr)
        .addFunction("IsValid", &GEventServerPostAdvanceTick_t::IsValid)
        .endClass();
}
GEventClientPreOutput_t::GEventClientPreOutput_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientPreOutput_t::GEventClientPreOutput_t(void *ptr) {
    m_ptr = ptr;
}
GEngineLoopState_t GEventClientPreOutput_t::GetLoopState() const {
    GEngineLoopState_t value(GetSchemaPtr(m_ptr, "EventClientPreOutput_t", "m_LoopState"));
    return value;
}
void GEventClientPreOutput_t::SetLoopState(GEngineLoopState_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LoopState' is not possible.\n");
}
double GEventClientPreOutput_t::GetRenderTime() const {
    return GetSchemaValue<double>(m_ptr, "EventClientPreOutput_t", "m_flRenderTime");
}
void GEventClientPreOutput_t::SetRenderTime(double value) {
    SetSchemaValue(m_ptr, "EventClientPreOutput_t", "m_flRenderTime", true, value);
}
double GEventClientPreOutput_t::GetRenderFrameTime() const {
    return GetSchemaValue<double>(m_ptr, "EventClientPreOutput_t", "m_flRenderFrameTime");
}
void GEventClientPreOutput_t::SetRenderFrameTime(double value) {
    SetSchemaValue(m_ptr, "EventClientPreOutput_t", "m_flRenderFrameTime", true, value);
}
double GEventClientPreOutput_t::GetRenderFrameTimeUnbounded() const {
    return GetSchemaValue<double>(m_ptr, "EventClientPreOutput_t", "m_flRenderFrameTimeUnbounded");
}
void GEventClientPreOutput_t::SetRenderFrameTimeUnbounded(double value) {
    SetSchemaValue(m_ptr, "EventClientPreOutput_t", "m_flRenderFrameTimeUnbounded", true, value);
}
float GEventClientPreOutput_t::GetRealTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientPreOutput_t", "m_flRealTime");
}
void GEventClientPreOutput_t::SetRealTime(float value) {
    SetSchemaValue(m_ptr, "EventClientPreOutput_t", "m_flRealTime", true, value);
}
bool GEventClientPreOutput_t::GetRenderOnly() const {
    return GetSchemaValue<bool>(m_ptr, "EventClientPreOutput_t", "m_bRenderOnly");
}
void GEventClientPreOutput_t::SetRenderOnly(bool value) {
    SetSchemaValue(m_ptr, "EventClientPreOutput_t", "m_bRenderOnly", true, value);
}
void* GEventClientPreOutput_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientPreOutput_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientPreOutput_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientPreOutput_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientPreOutput_t>("EventClientPreOutput_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("LoopState", &GEventClientPreOutput_t::GetLoopState, &GEventClientPreOutput_t::SetLoopState)
        .addProperty("RenderTime", &GEventClientPreOutput_t::GetRenderTime, &GEventClientPreOutput_t::SetRenderTime)
        .addProperty("RenderFrameTime", &GEventClientPreOutput_t::GetRenderFrameTime, &GEventClientPreOutput_t::SetRenderFrameTime)
        .addProperty("RenderFrameTimeUnbounded", &GEventClientPreOutput_t::GetRenderFrameTimeUnbounded, &GEventClientPreOutput_t::SetRenderFrameTimeUnbounded)
        .addProperty("RealTime", &GEventClientPreOutput_t::GetRealTime, &GEventClientPreOutput_t::SetRealTime)
        .addProperty("RenderOnly", &GEventClientPreOutput_t::GetRenderOnly, &GEventClientPreOutput_t::SetRenderOnly)
        .addFunction("ToPtr", &GEventClientPreOutput_t::ToPtr)
        .addFunction("IsValid", &GEventClientPreOutput_t::IsValid)
        .endClass();
}
GRnSoftbodySpring_t::GRnSoftbodySpring_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnSoftbodySpring_t::GRnSoftbodySpring_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<uint16_t> GRnSoftbodySpring_t::GetParticle() const {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "RnSoftbodySpring_t", "m_nParticle"); std::vector<uint16_t> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GRnSoftbodySpring_t::SetParticle(std::vector<uint16_t> value) {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "RnSoftbodySpring_t", "m_nParticle"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "RnSoftbodySpring_t", "m_nParticle", true, outValue);
}
float GRnSoftbodySpring_t::GetLength() const {
    return GetSchemaValue<float>(m_ptr, "RnSoftbodySpring_t", "m_flLength");
}
void GRnSoftbodySpring_t::SetLength(float value) {
    SetSchemaValue(m_ptr, "RnSoftbodySpring_t", "m_flLength", true, value);
}
void* GRnSoftbodySpring_t::GetPtr() {
    return m_ptr;
}
std::string GRnSoftbodySpring_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnSoftbodySpring_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassRnSoftbodySpring_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnSoftbodySpring_t>("RnSoftbodySpring_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Particle", &GRnSoftbodySpring_t::GetParticle, &GRnSoftbodySpring_t::SetParticle)
        .addProperty("Length", &GRnSoftbodySpring_t::GetLength, &GRnSoftbodySpring_t::SetLength)
        .addFunction("ToPtr", &GRnSoftbodySpring_t::ToPtr)
        .addFunction("IsValid", &GRnSoftbodySpring_t::IsValid)
        .endClass();
}
GFeNodeReverseOffset_t::GFeNodeReverseOffset_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeNodeReverseOffset_t::GFeNodeReverseOffset_t(void *ptr) {
    m_ptr = ptr;
}
Vector GFeNodeReverseOffset_t::GetOffset() const {
    return GetSchemaValue<Vector>(m_ptr, "FeNodeReverseOffset_t", "vOffset");
}
void GFeNodeReverseOffset_t::SetOffset(Vector value) {
    SetSchemaValue(m_ptr, "FeNodeReverseOffset_t", "vOffset", true, value);
}
uint16_t GFeNodeReverseOffset_t::GetBoneCtrl() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeNodeReverseOffset_t", "nBoneCtrl");
}
void GFeNodeReverseOffset_t::SetBoneCtrl(uint16_t value) {
    SetSchemaValue(m_ptr, "FeNodeReverseOffset_t", "nBoneCtrl", true, value);
}
uint16_t GFeNodeReverseOffset_t::GetTargetNode() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeNodeReverseOffset_t", "nTargetNode");
}
void GFeNodeReverseOffset_t::SetTargetNode(uint16_t value) {
    SetSchemaValue(m_ptr, "FeNodeReverseOffset_t", "nTargetNode", true, value);
}
void* GFeNodeReverseOffset_t::GetPtr() {
    return m_ptr;
}
std::string GFeNodeReverseOffset_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeNodeReverseOffset_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeNodeReverseOffset_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeNodeReverseOffset_t>("FeNodeReverseOffset_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Offset", &GFeNodeReverseOffset_t::GetOffset, &GFeNodeReverseOffset_t::SetOffset)
        .addProperty("BoneCtrl", &GFeNodeReverseOffset_t::GetBoneCtrl, &GFeNodeReverseOffset_t::SetBoneCtrl)
        .addProperty("TargetNode", &GFeNodeReverseOffset_t::GetTargetNode, &GFeNodeReverseOffset_t::SetTargetNode)
        .addFunction("ToPtr", &GFeNodeReverseOffset_t::ToPtr)
        .addFunction("IsValid", &GFeNodeReverseOffset_t::IsValid)
        .endClass();
}
GRnHullDesc_t::GRnHullDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnHullDesc_t::GRnHullDesc_t(void *ptr) {
    m_ptr = ptr;
}
GRnHull_t GRnHullDesc_t::GetHull() const {
    GRnHull_t value(GetSchemaPtr(m_ptr, "RnHullDesc_t", "m_Hull"));
    return value;
}
void GRnHullDesc_t::SetHull(GRnHull_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Hull' is not possible.\n");
}
void* GRnHullDesc_t::GetPtr() {
    return m_ptr;
}
std::string GRnHullDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnHullDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
GRnShapeDesc_t GRnHullDesc_t::GetParent() const {
    GRnShapeDesc_t value(m_ptr);
    return value;
}
void GRnHullDesc_t::SetParent(GRnShapeDesc_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassRnHullDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnHullDesc_t>("RnHullDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Hull", &GRnHullDesc_t::GetHull, &GRnHullDesc_t::SetHull)
        .addProperty("Parent", &GRnHullDesc_t::GetParent, &GRnHullDesc_t::SetParent)
        .addFunction("ToPtr", &GRnHullDesc_t::ToPtr)
        .addFunction("IsValid", &GRnHullDesc_t::IsValid)
        .endClass();
}
GCSymbolAnimParameter::GCSymbolAnimParameter(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSymbolAnimParameter::GCSymbolAnimParameter(void *ptr) {
    m_ptr = ptr;
}
void* GCSymbolAnimParameter::GetPtr() {
    return m_ptr;
}
std::string GCSymbolAnimParameter::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSymbolAnimParameter::IsValid() {
    return (m_ptr != nullptr);
}
GCConcreteAnimParameter GCSymbolAnimParameter::GetParent() const {
    GCConcreteAnimParameter value(m_ptr);
    return value;
}
void GCSymbolAnimParameter::SetParent(GCConcreteAnimParameter value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSymbolAnimParameter(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSymbolAnimParameter>("CSymbolAnimParameter")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCSymbolAnimParameter::GetParent, &GCSymbolAnimParameter::SetParent)
        .addFunction("ToPtr", &GCSymbolAnimParameter::ToPtr)
        .addFunction("IsValid", &GCSymbolAnimParameter::IsValid)
        .endClass();
}
GFeStiffHingeBuild_t::GFeStiffHingeBuild_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeStiffHingeBuild_t::GFeStiffHingeBuild_t(void *ptr) {
    m_ptr = ptr;
}
float GFeStiffHingeBuild_t::GetMaxAngle() const {
    return GetSchemaValue<float>(m_ptr, "FeStiffHingeBuild_t", "flMaxAngle");
}
void GFeStiffHingeBuild_t::SetMaxAngle(float value) {
    SetSchemaValue(m_ptr, "FeStiffHingeBuild_t", "flMaxAngle", true, value);
}
float GFeStiffHingeBuild_t::GetStrength() const {
    return GetSchemaValue<float>(m_ptr, "FeStiffHingeBuild_t", "flStrength");
}
void GFeStiffHingeBuild_t::SetStrength(float value) {
    SetSchemaValue(m_ptr, "FeStiffHingeBuild_t", "flStrength", true, value);
}
std::vector<float> GFeStiffHingeBuild_t::GetMotionBias() const {
    float* outValue = GetSchemaValue<float*>(m_ptr, "FeStiffHingeBuild_t", "flMotionBias"); std::vector<float> ret; for(int i = 0; i < 3; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeStiffHingeBuild_t::SetMotionBias(std::vector<float> value) {
    float* outValue = GetSchemaValue<float*>(m_ptr, "FeStiffHingeBuild_t", "flMotionBias"); for(int i = 0; i < 3; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeStiffHingeBuild_t", "flMotionBias", true, outValue);
}
std::vector<uint16_t> GFeStiffHingeBuild_t::GetNode() const {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeStiffHingeBuild_t", "nNode"); std::vector<uint16_t> ret; for(int i = 0; i < 3; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeStiffHingeBuild_t::SetNode(std::vector<uint16_t> value) {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeStiffHingeBuild_t", "nNode"); for(int i = 0; i < 3; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeStiffHingeBuild_t", "nNode", true, outValue);
}
void* GFeStiffHingeBuild_t::GetPtr() {
    return m_ptr;
}
std::string GFeStiffHingeBuild_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeStiffHingeBuild_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeStiffHingeBuild_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeStiffHingeBuild_t>("FeStiffHingeBuild_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MaxAngle", &GFeStiffHingeBuild_t::GetMaxAngle, &GFeStiffHingeBuild_t::SetMaxAngle)
        .addProperty("Strength", &GFeStiffHingeBuild_t::GetStrength, &GFeStiffHingeBuild_t::SetStrength)
        .addProperty("MotionBias", &GFeStiffHingeBuild_t::GetMotionBias, &GFeStiffHingeBuild_t::SetMotionBias)
        .addProperty("Node", &GFeStiffHingeBuild_t::GetNode, &GFeStiffHingeBuild_t::SetNode)
        .addFunction("ToPtr", &GFeStiffHingeBuild_t::ToPtr)
        .addFunction("IsValid", &GFeStiffHingeBuild_t::IsValid)
        .endClass();
}
GExtraVertexStreamOverride_t::GExtraVertexStreamOverride_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GExtraVertexStreamOverride_t::GExtraVertexStreamOverride_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GExtraVertexStreamOverride_t::GetSubSceneObject() const {
    return GetSchemaValue<uint32_t>(m_ptr, "ExtraVertexStreamOverride_t", "m_nSubSceneObject");
}
void GExtraVertexStreamOverride_t::SetSubSceneObject(uint32_t value) {
    SetSchemaValue(m_ptr, "ExtraVertexStreamOverride_t", "m_nSubSceneObject", true, value);
}
uint32_t GExtraVertexStreamOverride_t::GetDrawCallIndex() const {
    return GetSchemaValue<uint32_t>(m_ptr, "ExtraVertexStreamOverride_t", "m_nDrawCallIndex");
}
void GExtraVertexStreamOverride_t::SetDrawCallIndex(uint32_t value) {
    SetSchemaValue(m_ptr, "ExtraVertexStreamOverride_t", "m_nDrawCallIndex", true, value);
}
uint64_t GExtraVertexStreamOverride_t::GetAdditionalMeshDrawPrimitiveFlags() const {
    return GetSchemaValue<uint64_t>(m_ptr, "ExtraVertexStreamOverride_t", "m_nAdditionalMeshDrawPrimitiveFlags");
}
void GExtraVertexStreamOverride_t::SetAdditionalMeshDrawPrimitiveFlags(uint64_t value) {
    SetSchemaValue(m_ptr, "ExtraVertexStreamOverride_t", "m_nAdditionalMeshDrawPrimitiveFlags", true, value);
}
GCRenderBufferBinding GExtraVertexStreamOverride_t::GetExtraBufferBinding() const {
    GCRenderBufferBinding value(GetSchemaPtr(m_ptr, "ExtraVertexStreamOverride_t", "m_extraBufferBinding"));
    return value;
}
void GExtraVertexStreamOverride_t::SetExtraBufferBinding(GCRenderBufferBinding value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ExtraBufferBinding' is not possible.\n");
}
void* GExtraVertexStreamOverride_t::GetPtr() {
    return m_ptr;
}
std::string GExtraVertexStreamOverride_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GExtraVertexStreamOverride_t::IsValid() {
    return (m_ptr != nullptr);
}
GBaseSceneObjectOverride_t GExtraVertexStreamOverride_t::GetParent() const {
    GBaseSceneObjectOverride_t value(m_ptr);
    return value;
}
void GExtraVertexStreamOverride_t::SetParent(GBaseSceneObjectOverride_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassExtraVertexStreamOverride_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GExtraVertexStreamOverride_t>("ExtraVertexStreamOverride_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SubSceneObject", &GExtraVertexStreamOverride_t::GetSubSceneObject, &GExtraVertexStreamOverride_t::SetSubSceneObject)
        .addProperty("DrawCallIndex", &GExtraVertexStreamOverride_t::GetDrawCallIndex, &GExtraVertexStreamOverride_t::SetDrawCallIndex)
        .addProperty("AdditionalMeshDrawPrimitiveFlags", &GExtraVertexStreamOverride_t::GetAdditionalMeshDrawPrimitiveFlags, &GExtraVertexStreamOverride_t::SetAdditionalMeshDrawPrimitiveFlags)
        .addProperty("ExtraBufferBinding", &GExtraVertexStreamOverride_t::GetExtraBufferBinding, &GExtraVertexStreamOverride_t::SetExtraBufferBinding)
        .addProperty("Parent", &GExtraVertexStreamOverride_t::GetParent, &GExtraVertexStreamOverride_t::SetParent)
        .addFunction("ToPtr", &GExtraVertexStreamOverride_t::ToPtr)
        .addFunction("IsValid", &GExtraVertexStreamOverride_t::IsValid)
        .endClass();
}
GEntityIOConnectionData_t::GEntityIOConnectionData_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEntityIOConnectionData_t::GEntityIOConnectionData_t(void *ptr) {
    m_ptr = ptr;
}
std::string GEntityIOConnectionData_t::GetOutputName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "EntityIOConnectionData_t", "m_outputName").Get();
}
void GEntityIOConnectionData_t::SetOutputName(std::string value) {
    SetSchemaValue(m_ptr, "EntityIOConnectionData_t", "m_outputName", true, CUtlString(value.c_str()));
}
uint32_t GEntityIOConnectionData_t::GetTargetType() const {
    return GetSchemaValue<uint32_t>(m_ptr, "EntityIOConnectionData_t", "m_targetType");
}
void GEntityIOConnectionData_t::SetTargetType(uint32_t value) {
    SetSchemaValue(m_ptr, "EntityIOConnectionData_t", "m_targetType", true, value);
}
std::string GEntityIOConnectionData_t::GetTargetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "EntityIOConnectionData_t", "m_targetName").Get();
}
void GEntityIOConnectionData_t::SetTargetName(std::string value) {
    SetSchemaValue(m_ptr, "EntityIOConnectionData_t", "m_targetName", true, CUtlString(value.c_str()));
}
std::string GEntityIOConnectionData_t::GetInputName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "EntityIOConnectionData_t", "m_inputName").Get();
}
void GEntityIOConnectionData_t::SetInputName(std::string value) {
    SetSchemaValue(m_ptr, "EntityIOConnectionData_t", "m_inputName", true, CUtlString(value.c_str()));
}
std::string GEntityIOConnectionData_t::GetOverrideParam() const {
    return GetSchemaValue<CUtlString>(m_ptr, "EntityIOConnectionData_t", "m_overrideParam").Get();
}
void GEntityIOConnectionData_t::SetOverrideParam(std::string value) {
    SetSchemaValue(m_ptr, "EntityIOConnectionData_t", "m_overrideParam", true, CUtlString(value.c_str()));
}
float GEntityIOConnectionData_t::GetDelay() const {
    return GetSchemaValue<float>(m_ptr, "EntityIOConnectionData_t", "m_flDelay");
}
void GEntityIOConnectionData_t::SetDelay(float value) {
    SetSchemaValue(m_ptr, "EntityIOConnectionData_t", "m_flDelay", true, value);
}
int32_t GEntityIOConnectionData_t::GetTimesToFire() const {
    return GetSchemaValue<int32_t>(m_ptr, "EntityIOConnectionData_t", "m_nTimesToFire");
}
void GEntityIOConnectionData_t::SetTimesToFire(int32_t value) {
    SetSchemaValue(m_ptr, "EntityIOConnectionData_t", "m_nTimesToFire", true, value);
}
void* GEntityIOConnectionData_t::GetPtr() {
    return m_ptr;
}
std::string GEntityIOConnectionData_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEntityIOConnectionData_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEntityIOConnectionData_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEntityIOConnectionData_t>("EntityIOConnectionData_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OutputName", &GEntityIOConnectionData_t::GetOutputName, &GEntityIOConnectionData_t::SetOutputName)
        .addProperty("TargetType", &GEntityIOConnectionData_t::GetTargetType, &GEntityIOConnectionData_t::SetTargetType)
        .addProperty("TargetName", &GEntityIOConnectionData_t::GetTargetName, &GEntityIOConnectionData_t::SetTargetName)
        .addProperty("InputName", &GEntityIOConnectionData_t::GetInputName, &GEntityIOConnectionData_t::SetInputName)
        .addProperty("OverrideParam", &GEntityIOConnectionData_t::GetOverrideParam, &GEntityIOConnectionData_t::SetOverrideParam)
        .addProperty("Delay", &GEntityIOConnectionData_t::GetDelay, &GEntityIOConnectionData_t::SetDelay)
        .addProperty("TimesToFire", &GEntityIOConnectionData_t::GetTimesToFire, &GEntityIOConnectionData_t::SetTimesToFire)
        .addFunction("ToPtr", &GEntityIOConnectionData_t::ToPtr)
        .addFunction("IsValid", &GEntityIOConnectionData_t::IsValid)
        .endClass();
}
GSkeletonAnimCapture_t::GSkeletonAnimCapture_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GSkeletonAnimCapture_t::GSkeletonAnimCapture_t(void *ptr) {
    m_ptr = ptr;
}
int GSkeletonAnimCapture_t::GetEntIndex() const {
    return GetSchemaValue<CEntityIndex>(m_ptr, "SkeletonAnimCapture_t", "m_nEntIndex").Get();
}
void GSkeletonAnimCapture_t::SetEntIndex(int value) {
    SetSchemaValue(m_ptr, "SkeletonAnimCapture_t", "m_nEntIndex", true, CEntityIndex(value));
}
int GSkeletonAnimCapture_t::GetEntParent() const {
    return GetSchemaValue<CEntityIndex>(m_ptr, "SkeletonAnimCapture_t", "m_nEntParent").Get();
}
void GSkeletonAnimCapture_t::SetEntParent(int value) {
    SetSchemaValue(m_ptr, "SkeletonAnimCapture_t", "m_nEntParent", true, CEntityIndex(value));
}
std::vector<int> GSkeletonAnimCapture_t::GetImportedCollision() const {
    CUtlVector<int>* vec = GetSchemaValue<CUtlVector<int>*>(m_ptr, "SkeletonAnimCapture_t", "m_ImportedCollision"); std::vector<int> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GSkeletonAnimCapture_t::SetImportedCollision(std::vector<int> value) {
    SetSchemaValueCUtlVector<int>(m_ptr, "SkeletonAnimCapture_t", "m_ImportedCollision", true, value);
}
std::string GSkeletonAnimCapture_t::GetModelName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "SkeletonAnimCapture_t", "m_ModelName").Get();
}
void GSkeletonAnimCapture_t::SetModelName(std::string value) {
    SetSchemaValue(m_ptr, "SkeletonAnimCapture_t", "m_ModelName", true, CUtlString(value.c_str()));
}
std::string GSkeletonAnimCapture_t::GetCaptureName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "SkeletonAnimCapture_t", "m_CaptureName").Get();
}
void GSkeletonAnimCapture_t::SetCaptureName(std::string value) {
    SetSchemaValue(m_ptr, "SkeletonAnimCapture_t", "m_CaptureName", true, CUtlString(value.c_str()));
}
std::vector<GSkeletonAnimCapture_t> GSkeletonAnimCapture_t::GetModelBindPose() const {
    CUtlVector<GSkeletonAnimCapture_t>* vec = GetSchemaValue<CUtlVector<GSkeletonAnimCapture_t>*>(m_ptr, "SkeletonAnimCapture_t", "m_ModelBindPose"); std::vector<GSkeletonAnimCapture_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GSkeletonAnimCapture_t::SetModelBindPose(std::vector<GSkeletonAnimCapture_t> value) {
    SetSchemaValueCUtlVector<GSkeletonAnimCapture_t>(m_ptr, "SkeletonAnimCapture_t", "m_ModelBindPose", true, value);
}
std::vector<GSkeletonAnimCapture_t> GSkeletonAnimCapture_t::GetFeModelInitPose() const {
    CUtlVector<GSkeletonAnimCapture_t>* vec = GetSchemaValue<CUtlVector<GSkeletonAnimCapture_t>*>(m_ptr, "SkeletonAnimCapture_t", "m_FeModelInitPose"); std::vector<GSkeletonAnimCapture_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GSkeletonAnimCapture_t::SetFeModelInitPose(std::vector<GSkeletonAnimCapture_t> value) {
    SetSchemaValueCUtlVector<GSkeletonAnimCapture_t>(m_ptr, "SkeletonAnimCapture_t", "m_FeModelInitPose", true, value);
}
int32_t GSkeletonAnimCapture_t::GetFlexControllers() const {
    return GetSchemaValue<int32_t>(m_ptr, "SkeletonAnimCapture_t", "m_nFlexControllers");
}
void GSkeletonAnimCapture_t::SetFlexControllers(int32_t value) {
    SetSchemaValue(m_ptr, "SkeletonAnimCapture_t", "m_nFlexControllers", true, value);
}
bool GSkeletonAnimCapture_t::GetPredicted() const {
    return GetSchemaValue<bool>(m_ptr, "SkeletonAnimCapture_t", "m_bPredicted");
}
void GSkeletonAnimCapture_t::SetPredicted(bool value) {
    SetSchemaValue(m_ptr, "SkeletonAnimCapture_t", "m_bPredicted", true, value);
}
std::vector<GSkeletonAnimCapture_t> GSkeletonAnimCapture_t::GetFrames() const {
    CUtlVector<GSkeletonAnimCapture_t>* vec = GetSchemaValue<CUtlVector<GSkeletonAnimCapture_t>*>(m_ptr, "SkeletonAnimCapture_t", "m_Frames"); std::vector<GSkeletonAnimCapture_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GSkeletonAnimCapture_t::SetFrames(std::vector<GSkeletonAnimCapture_t> value) {
    SetSchemaValueCUtlVector<GSkeletonAnimCapture_t>(m_ptr, "SkeletonAnimCapture_t", "m_Frames", true, value);
}
void* GSkeletonAnimCapture_t::GetPtr() {
    return m_ptr;
}
std::string GSkeletonAnimCapture_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GSkeletonAnimCapture_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassSkeletonAnimCapture_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GSkeletonAnimCapture_t>("SkeletonAnimCapture_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("EntIndex", &GSkeletonAnimCapture_t::GetEntIndex, &GSkeletonAnimCapture_t::SetEntIndex)
        .addProperty("EntParent", &GSkeletonAnimCapture_t::GetEntParent, &GSkeletonAnimCapture_t::SetEntParent)
        .addProperty("ImportedCollision", &GSkeletonAnimCapture_t::GetImportedCollision, &GSkeletonAnimCapture_t::SetImportedCollision)
        .addProperty("ModelName", &GSkeletonAnimCapture_t::GetModelName, &GSkeletonAnimCapture_t::SetModelName)
        .addProperty("CaptureName", &GSkeletonAnimCapture_t::GetCaptureName, &GSkeletonAnimCapture_t::SetCaptureName)
        .addProperty("ModelBindPose", &GSkeletonAnimCapture_t::GetModelBindPose, &GSkeletonAnimCapture_t::SetModelBindPose)
        .addProperty("FeModelInitPose", &GSkeletonAnimCapture_t::GetFeModelInitPose, &GSkeletonAnimCapture_t::SetFeModelInitPose)
        .addProperty("FlexControllers", &GSkeletonAnimCapture_t::GetFlexControllers, &GSkeletonAnimCapture_t::SetFlexControllers)
        .addProperty("Predicted", &GSkeletonAnimCapture_t::GetPredicted, &GSkeletonAnimCapture_t::SetPredicted)
        .addProperty("Frames", &GSkeletonAnimCapture_t::GetFrames, &GSkeletonAnimCapture_t::SetFrames)
        .addFunction("ToPtr", &GSkeletonAnimCapture_t::ToPtr)
        .addFunction("IsValid", &GSkeletonAnimCapture_t::IsValid)
        .endClass();
}
GCStateActionUpdater::GCStateActionUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCStateActionUpdater::GCStateActionUpdater(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCStateActionUpdater::GetBehavior() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CStateActionUpdater", "m_eBehavior");
}
void GCStateActionUpdater::SetBehavior(uint64_t value) {
    SetSchemaValue(m_ptr, "CStateActionUpdater", "m_eBehavior", false, value);
}
void* GCStateActionUpdater::GetPtr() {
    return m_ptr;
}
std::string GCStateActionUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCStateActionUpdater::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCStateActionUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCStateActionUpdater>("CStateActionUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Behavior", &GCStateActionUpdater::GetBehavior, &GCStateActionUpdater::SetBehavior)
        .addFunction("ToPtr", &GCStateActionUpdater::ToPtr)
        .addFunction("IsValid", &GCStateActionUpdater::IsValid)
        .endClass();
}
GCSeqS1SeqDesc::GCSeqS1SeqDesc(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSeqS1SeqDesc::GCSeqS1SeqDesc(void *ptr) {
    m_ptr = ptr;
}
GCSeqSeqDescFlag GCSeqS1SeqDesc::GetFlags() const {
    GCSeqSeqDescFlag value(GetSchemaPtr(m_ptr, "CSeqS1SeqDesc", "m_flags"));
    return value;
}
void GCSeqS1SeqDesc::SetFlags(GCSeqSeqDescFlag value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Flags' is not possible.\n");
}
GCSeqMultiFetch GCSeqS1SeqDesc::GetFetch() const {
    GCSeqMultiFetch value(GetSchemaPtr(m_ptr, "CSeqS1SeqDesc", "m_fetch"));
    return value;
}
void GCSeqS1SeqDesc::SetFetch(GCSeqMultiFetch value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Fetch' is not possible.\n");
}
int32_t GCSeqS1SeqDesc::GetLocalWeightlist() const {
    return GetSchemaValue<int32_t>(m_ptr, "CSeqS1SeqDesc", "m_nLocalWeightlist");
}
void GCSeqS1SeqDesc::SetLocalWeightlist(int32_t value) {
    SetSchemaValue(m_ptr, "CSeqS1SeqDesc", "m_nLocalWeightlist", false, value);
}
std::vector<GCSeqAutoLayer> GCSeqS1SeqDesc::GetAutoLayerArray() const {
    CUtlVector<GCSeqAutoLayer>* vec = GetSchemaValue<CUtlVector<GCSeqAutoLayer>*>(m_ptr, "CSeqS1SeqDesc", "m_autoLayerArray"); std::vector<GCSeqAutoLayer> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqS1SeqDesc::SetAutoLayerArray(std::vector<GCSeqAutoLayer> value) {
    SetSchemaValueCUtlVector<GCSeqAutoLayer>(m_ptr, "CSeqS1SeqDesc", "m_autoLayerArray", false, value);
}
std::vector<GCSeqIKLock> GCSeqS1SeqDesc::GetIKLockArray() const {
    CUtlVector<GCSeqIKLock>* vec = GetSchemaValue<CUtlVector<GCSeqIKLock>*>(m_ptr, "CSeqS1SeqDesc", "m_IKLockArray"); std::vector<GCSeqIKLock> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqS1SeqDesc::SetIKLockArray(std::vector<GCSeqIKLock> value) {
    SetSchemaValueCUtlVector<GCSeqIKLock>(m_ptr, "CSeqS1SeqDesc", "m_IKLockArray", false, value);
}
GCSeqTransition GCSeqS1SeqDesc::GetTransition() const {
    GCSeqTransition value(GetSchemaPtr(m_ptr, "CSeqS1SeqDesc", "m_transition"));
    return value;
}
void GCSeqS1SeqDesc::SetTransition(GCSeqTransition value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Transition' is not possible.\n");
}
std::vector<GCAnimActivity> GCSeqS1SeqDesc::GetActivityArray() const {
    CUtlVector<GCAnimActivity>* vec = GetSchemaValue<CUtlVector<GCAnimActivity>*>(m_ptr, "CSeqS1SeqDesc", "m_activityArray"); std::vector<GCAnimActivity> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqS1SeqDesc::SetActivityArray(std::vector<GCAnimActivity> value) {
    SetSchemaValueCUtlVector<GCAnimActivity>(m_ptr, "CSeqS1SeqDesc", "m_activityArray", false, value);
}
std::vector<GCFootMotion> GCSeqS1SeqDesc::GetFootMotion() const {
    CUtlVector<GCFootMotion>* vec = GetSchemaValue<CUtlVector<GCFootMotion>*>(m_ptr, "CSeqS1SeqDesc", "m_footMotion"); std::vector<GCFootMotion> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqS1SeqDesc::SetFootMotion(std::vector<GCFootMotion> value) {
    SetSchemaValueCUtlVector<GCFootMotion>(m_ptr, "CSeqS1SeqDesc", "m_footMotion", false, value);
}
void* GCSeqS1SeqDesc::GetPtr() {
    return m_ptr;
}
std::string GCSeqS1SeqDesc::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSeqS1SeqDesc::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSeqS1SeqDesc(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSeqS1SeqDesc>("CSeqS1SeqDesc")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GCSeqS1SeqDesc::GetFlags, &GCSeqS1SeqDesc::SetFlags)
        .addProperty("Fetch", &GCSeqS1SeqDesc::GetFetch, &GCSeqS1SeqDesc::SetFetch)
        .addProperty("LocalWeightlist", &GCSeqS1SeqDesc::GetLocalWeightlist, &GCSeqS1SeqDesc::SetLocalWeightlist)
        .addProperty("AutoLayerArray", &GCSeqS1SeqDesc::GetAutoLayerArray, &GCSeqS1SeqDesc::SetAutoLayerArray)
        .addProperty("IKLockArray", &GCSeqS1SeqDesc::GetIKLockArray, &GCSeqS1SeqDesc::SetIKLockArray)
        .addProperty("Transition", &GCSeqS1SeqDesc::GetTransition, &GCSeqS1SeqDesc::SetTransition)
        .addProperty("ActivityArray", &GCSeqS1SeqDesc::GetActivityArray, &GCSeqS1SeqDesc::SetActivityArray)
        .addProperty("FootMotion", &GCSeqS1SeqDesc::GetFootMotion, &GCSeqS1SeqDesc::SetFootMotion)
        .addFunction("ToPtr", &GCSeqS1SeqDesc::ToPtr)
        .addFunction("IsValid", &GCSeqS1SeqDesc::IsValid)
        .endClass();
}
GAimMatrixOpFixedSettings_t::GAimMatrixOpFixedSettings_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GAimMatrixOpFixedSettings_t::GAimMatrixOpFixedSettings_t(void *ptr) {
    m_ptr = ptr;
}
GCAnimAttachment GAimMatrixOpFixedSettings_t::GetAttachment() const {
    GCAnimAttachment value(GetSchemaPtr(m_ptr, "AimMatrixOpFixedSettings_t", "m_attachment"));
    return value;
}
void GAimMatrixOpFixedSettings_t::SetAttachment(GCAnimAttachment value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Attachment' is not possible.\n");
}
GCAnimInputDamping GAimMatrixOpFixedSettings_t::GetDamping() const {
    GCAnimInputDamping value(GetSchemaPtr(m_ptr, "AimMatrixOpFixedSettings_t", "m_damping"));
    return value;
}
void GAimMatrixOpFixedSettings_t::SetDamping(GCAnimInputDamping value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Damping' is not possible.\n");
}
std::vector<GCPoseHandle> GAimMatrixOpFixedSettings_t::GetPoseCacheHandles() const {
    GCPoseHandle* outValue = GetSchemaValue<GCPoseHandle*>(m_ptr, "AimMatrixOpFixedSettings_t", "m_poseCacheHandles"); std::vector<GCPoseHandle> ret; for(int i = 0; i < 10; i++) { ret.push_back(outValue[i]); } return ret;
}
void GAimMatrixOpFixedSettings_t::SetPoseCacheHandles(std::vector<GCPoseHandle> value) {
    GCPoseHandle* outValue = GetSchemaValue<GCPoseHandle*>(m_ptr, "AimMatrixOpFixedSettings_t", "m_poseCacheHandles"); for(int i = 0; i < 10; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_poseCacheHandles", true, outValue);
}
uint64_t GAimMatrixOpFixedSettings_t::GetBlendMode() const {
    return GetSchemaValue<uint64_t>(m_ptr, "AimMatrixOpFixedSettings_t", "m_eBlendMode");
}
void GAimMatrixOpFixedSettings_t::SetBlendMode(uint64_t value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_eBlendMode", true, value);
}
float GAimMatrixOpFixedSettings_t::GetMaxYawAngle() const {
    return GetSchemaValue<float>(m_ptr, "AimMatrixOpFixedSettings_t", "m_flMaxYawAngle");
}
void GAimMatrixOpFixedSettings_t::SetMaxYawAngle(float value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_flMaxYawAngle", true, value);
}
float GAimMatrixOpFixedSettings_t::GetMaxPitchAngle() const {
    return GetSchemaValue<float>(m_ptr, "AimMatrixOpFixedSettings_t", "m_flMaxPitchAngle");
}
void GAimMatrixOpFixedSettings_t::SetMaxPitchAngle(float value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_flMaxPitchAngle", true, value);
}
int32_t GAimMatrixOpFixedSettings_t::GetSequenceMaxFrame() const {
    return GetSchemaValue<int32_t>(m_ptr, "AimMatrixOpFixedSettings_t", "m_nSequenceMaxFrame");
}
void GAimMatrixOpFixedSettings_t::SetSequenceMaxFrame(int32_t value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_nSequenceMaxFrame", true, value);
}
int32_t GAimMatrixOpFixedSettings_t::GetBoneMaskIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "AimMatrixOpFixedSettings_t", "m_nBoneMaskIndex");
}
void GAimMatrixOpFixedSettings_t::SetBoneMaskIndex(int32_t value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_nBoneMaskIndex", true, value);
}
bool GAimMatrixOpFixedSettings_t::GetTargetIsPosition() const {
    return GetSchemaValue<bool>(m_ptr, "AimMatrixOpFixedSettings_t", "m_bTargetIsPosition");
}
void GAimMatrixOpFixedSettings_t::SetTargetIsPosition(bool value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_bTargetIsPosition", true, value);
}
bool GAimMatrixOpFixedSettings_t::GetUseBiasAndClamp() const {
    return GetSchemaValue<bool>(m_ptr, "AimMatrixOpFixedSettings_t", "m_bUseBiasAndClamp");
}
void GAimMatrixOpFixedSettings_t::SetUseBiasAndClamp(bool value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_bUseBiasAndClamp", true, value);
}
float GAimMatrixOpFixedSettings_t::GetBiasAndClampYawOffset() const {
    return GetSchemaValue<float>(m_ptr, "AimMatrixOpFixedSettings_t", "m_flBiasAndClampYawOffset");
}
void GAimMatrixOpFixedSettings_t::SetBiasAndClampYawOffset(float value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_flBiasAndClampYawOffset", true, value);
}
float GAimMatrixOpFixedSettings_t::GetBiasAndClampPitchOffset() const {
    return GetSchemaValue<float>(m_ptr, "AimMatrixOpFixedSettings_t", "m_flBiasAndClampPitchOffset");
}
void GAimMatrixOpFixedSettings_t::SetBiasAndClampPitchOffset(float value) {
    SetSchemaValue(m_ptr, "AimMatrixOpFixedSettings_t", "m_flBiasAndClampPitchOffset", true, value);
}
GCBlendCurve GAimMatrixOpFixedSettings_t::GetBiasAndClampBlendCurve() const {
    GCBlendCurve value(GetSchemaPtr(m_ptr, "AimMatrixOpFixedSettings_t", "m_biasAndClampBlendCurve"));
    return value;
}
void GAimMatrixOpFixedSettings_t::SetBiasAndClampBlendCurve(GCBlendCurve value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BiasAndClampBlendCurve' is not possible.\n");
}
void* GAimMatrixOpFixedSettings_t::GetPtr() {
    return m_ptr;
}
std::string GAimMatrixOpFixedSettings_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GAimMatrixOpFixedSettings_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassAimMatrixOpFixedSettings_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GAimMatrixOpFixedSettings_t>("AimMatrixOpFixedSettings_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Attachment", &GAimMatrixOpFixedSettings_t::GetAttachment, &GAimMatrixOpFixedSettings_t::SetAttachment)
        .addProperty("Damping", &GAimMatrixOpFixedSettings_t::GetDamping, &GAimMatrixOpFixedSettings_t::SetDamping)
        .addProperty("PoseCacheHandles", &GAimMatrixOpFixedSettings_t::GetPoseCacheHandles, &GAimMatrixOpFixedSettings_t::SetPoseCacheHandles)
        .addProperty("BlendMode", &GAimMatrixOpFixedSettings_t::GetBlendMode, &GAimMatrixOpFixedSettings_t::SetBlendMode)
        .addProperty("MaxYawAngle", &GAimMatrixOpFixedSettings_t::GetMaxYawAngle, &GAimMatrixOpFixedSettings_t::SetMaxYawAngle)
        .addProperty("MaxPitchAngle", &GAimMatrixOpFixedSettings_t::GetMaxPitchAngle, &GAimMatrixOpFixedSettings_t::SetMaxPitchAngle)
        .addProperty("SequenceMaxFrame", &GAimMatrixOpFixedSettings_t::GetSequenceMaxFrame, &GAimMatrixOpFixedSettings_t::SetSequenceMaxFrame)
        .addProperty("BoneMaskIndex", &GAimMatrixOpFixedSettings_t::GetBoneMaskIndex, &GAimMatrixOpFixedSettings_t::SetBoneMaskIndex)
        .addProperty("TargetIsPosition", &GAimMatrixOpFixedSettings_t::GetTargetIsPosition, &GAimMatrixOpFixedSettings_t::SetTargetIsPosition)
        .addProperty("UseBiasAndClamp", &GAimMatrixOpFixedSettings_t::GetUseBiasAndClamp, &GAimMatrixOpFixedSettings_t::SetUseBiasAndClamp)
        .addProperty("BiasAndClampYawOffset", &GAimMatrixOpFixedSettings_t::GetBiasAndClampYawOffset, &GAimMatrixOpFixedSettings_t::SetBiasAndClampYawOffset)
        .addProperty("BiasAndClampPitchOffset", &GAimMatrixOpFixedSettings_t::GetBiasAndClampPitchOffset, &GAimMatrixOpFixedSettings_t::SetBiasAndClampPitchOffset)
        .addProperty("BiasAndClampBlendCurve", &GAimMatrixOpFixedSettings_t::GetBiasAndClampBlendCurve, &GAimMatrixOpFixedSettings_t::SetBiasAndClampBlendCurve)
        .addFunction("ToPtr", &GAimMatrixOpFixedSettings_t::ToPtr)
        .addFunction("IsValid", &GAimMatrixOpFixedSettings_t::IsValid)
        .endClass();
}
GParticlePreviewState_t::GParticlePreviewState_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GParticlePreviewState_t::GParticlePreviewState_t(void *ptr) {
    m_ptr = ptr;
}
std::string GParticlePreviewState_t::GetPreviewModel() const {
    return GetSchemaValue<CUtlString>(m_ptr, "ParticlePreviewState_t", "m_previewModel").Get();
}
void GParticlePreviewState_t::SetPreviewModel(std::string value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_previewModel", true, CUtlString(value.c_str()));
}
uint32_t GParticlePreviewState_t::GetModSpecificData() const {
    return GetSchemaValue<uint32_t>(m_ptr, "ParticlePreviewState_t", "m_nModSpecificData");
}
void GParticlePreviewState_t::SetModSpecificData(uint32_t value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_nModSpecificData", true, value);
}
uint64_t GParticlePreviewState_t::GetGroundType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "ParticlePreviewState_t", "m_groundType");
}
void GParticlePreviewState_t::SetGroundType(uint64_t value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_groundType", true, value);
}
std::string GParticlePreviewState_t::GetSequenceName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "ParticlePreviewState_t", "m_sequenceName").Get();
}
void GParticlePreviewState_t::SetSequenceName(std::string value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_sequenceName", true, CUtlString(value.c_str()));
}
int32_t GParticlePreviewState_t::GetFireParticleOnSequenceFrame() const {
    return GetSchemaValue<int32_t>(m_ptr, "ParticlePreviewState_t", "m_nFireParticleOnSequenceFrame");
}
void GParticlePreviewState_t::SetFireParticleOnSequenceFrame(int32_t value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_nFireParticleOnSequenceFrame", true, value);
}
std::string GParticlePreviewState_t::GetHitboxSetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "ParticlePreviewState_t", "m_hitboxSetName").Get();
}
void GParticlePreviewState_t::SetHitboxSetName(std::string value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_hitboxSetName", true, CUtlString(value.c_str()));
}
std::string GParticlePreviewState_t::GetMaterialGroupName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "ParticlePreviewState_t", "m_materialGroupName").Get();
}
void GParticlePreviewState_t::SetMaterialGroupName(std::string value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_materialGroupName", true, CUtlString(value.c_str()));
}
std::vector<GParticlePreviewBodyGroup_t> GParticlePreviewState_t::GetBodyGroups() const {
    CUtlVector<GParticlePreviewBodyGroup_t>* vec = GetSchemaValue<CUtlVector<GParticlePreviewBodyGroup_t>*>(m_ptr, "ParticlePreviewState_t", "m_vecBodyGroups"); std::vector<GParticlePreviewBodyGroup_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GParticlePreviewState_t::SetBodyGroups(std::vector<GParticlePreviewBodyGroup_t> value) {
    SetSchemaValueCUtlVector<GParticlePreviewBodyGroup_t>(m_ptr, "ParticlePreviewState_t", "m_vecBodyGroups", true, value);
}
float GParticlePreviewState_t::GetPlaybackSpeed() const {
    return GetSchemaValue<float>(m_ptr, "ParticlePreviewState_t", "m_flPlaybackSpeed");
}
void GParticlePreviewState_t::SetPlaybackSpeed(float value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_flPlaybackSpeed", true, value);
}
float GParticlePreviewState_t::GetParticleSimulationRate() const {
    return GetSchemaValue<float>(m_ptr, "ParticlePreviewState_t", "m_flParticleSimulationRate");
}
void GParticlePreviewState_t::SetParticleSimulationRate(float value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_flParticleSimulationRate", true, value);
}
bool GParticlePreviewState_t::GetShouldDrawHitboxes() const {
    return GetSchemaValue<bool>(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawHitboxes");
}
void GParticlePreviewState_t::SetShouldDrawHitboxes(bool value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawHitboxes", true, value);
}
bool GParticlePreviewState_t::GetShouldDrawAttachments() const {
    return GetSchemaValue<bool>(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawAttachments");
}
void GParticlePreviewState_t::SetShouldDrawAttachments(bool value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawAttachments", true, value);
}
bool GParticlePreviewState_t::GetShouldDrawAttachmentNames() const {
    return GetSchemaValue<bool>(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawAttachmentNames");
}
void GParticlePreviewState_t::SetShouldDrawAttachmentNames(bool value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawAttachmentNames", true, value);
}
bool GParticlePreviewState_t::GetShouldDrawControlPointAxes() const {
    return GetSchemaValue<bool>(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawControlPointAxes");
}
void GParticlePreviewState_t::SetShouldDrawControlPointAxes(bool value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_bShouldDrawControlPointAxes", true, value);
}
bool GParticlePreviewState_t::GetAnimationNonLooping() const {
    return GetSchemaValue<bool>(m_ptr, "ParticlePreviewState_t", "m_bAnimationNonLooping");
}
void GParticlePreviewState_t::SetAnimationNonLooping(bool value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_bAnimationNonLooping", true, value);
}
Vector GParticlePreviewState_t::GetPreviewGravity() const {
    return GetSchemaValue<Vector>(m_ptr, "ParticlePreviewState_t", "m_vecPreviewGravity");
}
void GParticlePreviewState_t::SetPreviewGravity(Vector value) {
    SetSchemaValue(m_ptr, "ParticlePreviewState_t", "m_vecPreviewGravity", true, value);
}
void* GParticlePreviewState_t::GetPtr() {
    return m_ptr;
}
std::string GParticlePreviewState_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GParticlePreviewState_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassParticlePreviewState_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GParticlePreviewState_t>("ParticlePreviewState_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("PreviewModel", &GParticlePreviewState_t::GetPreviewModel, &GParticlePreviewState_t::SetPreviewModel)
        .addProperty("ModSpecificData", &GParticlePreviewState_t::GetModSpecificData, &GParticlePreviewState_t::SetModSpecificData)
        .addProperty("GroundType", &GParticlePreviewState_t::GetGroundType, &GParticlePreviewState_t::SetGroundType)
        .addProperty("SequenceName", &GParticlePreviewState_t::GetSequenceName, &GParticlePreviewState_t::SetSequenceName)
        .addProperty("FireParticleOnSequenceFrame", &GParticlePreviewState_t::GetFireParticleOnSequenceFrame, &GParticlePreviewState_t::SetFireParticleOnSequenceFrame)
        .addProperty("HitboxSetName", &GParticlePreviewState_t::GetHitboxSetName, &GParticlePreviewState_t::SetHitboxSetName)
        .addProperty("MaterialGroupName", &GParticlePreviewState_t::GetMaterialGroupName, &GParticlePreviewState_t::SetMaterialGroupName)
        .addProperty("BodyGroups", &GParticlePreviewState_t::GetBodyGroups, &GParticlePreviewState_t::SetBodyGroups)
        .addProperty("PlaybackSpeed", &GParticlePreviewState_t::GetPlaybackSpeed, &GParticlePreviewState_t::SetPlaybackSpeed)
        .addProperty("ParticleSimulationRate", &GParticlePreviewState_t::GetParticleSimulationRate, &GParticlePreviewState_t::SetParticleSimulationRate)
        .addProperty("ShouldDrawHitboxes", &GParticlePreviewState_t::GetShouldDrawHitboxes, &GParticlePreviewState_t::SetShouldDrawHitboxes)
        .addProperty("ShouldDrawAttachments", &GParticlePreviewState_t::GetShouldDrawAttachments, &GParticlePreviewState_t::SetShouldDrawAttachments)
        .addProperty("ShouldDrawAttachmentNames", &GParticlePreviewState_t::GetShouldDrawAttachmentNames, &GParticlePreviewState_t::SetShouldDrawAttachmentNames)
        .addProperty("ShouldDrawControlPointAxes", &GParticlePreviewState_t::GetShouldDrawControlPointAxes, &GParticlePreviewState_t::SetShouldDrawControlPointAxes)
        .addProperty("AnimationNonLooping", &GParticlePreviewState_t::GetAnimationNonLooping, &GParticlePreviewState_t::SetAnimationNonLooping)
        .addProperty("PreviewGravity", &GParticlePreviewState_t::GetPreviewGravity, &GParticlePreviewState_t::SetPreviewGravity)
        .addFunction("ToPtr", &GParticlePreviewState_t::ToPtr)
        .addFunction("IsValid", &GParticlePreviewState_t::IsValid)
        .endClass();
}
GFeCtrlOsOffset_t::GFeCtrlOsOffset_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeCtrlOsOffset_t::GFeCtrlOsOffset_t(void *ptr) {
    m_ptr = ptr;
}
uint16_t GFeCtrlOsOffset_t::GetCtrlParent() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeCtrlOsOffset_t", "nCtrlParent");
}
void GFeCtrlOsOffset_t::SetCtrlParent(uint16_t value) {
    SetSchemaValue(m_ptr, "FeCtrlOsOffset_t", "nCtrlParent", true, value);
}
uint16_t GFeCtrlOsOffset_t::GetCtrlChild() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeCtrlOsOffset_t", "nCtrlChild");
}
void GFeCtrlOsOffset_t::SetCtrlChild(uint16_t value) {
    SetSchemaValue(m_ptr, "FeCtrlOsOffset_t", "nCtrlChild", true, value);
}
void* GFeCtrlOsOffset_t::GetPtr() {
    return m_ptr;
}
std::string GFeCtrlOsOffset_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeCtrlOsOffset_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeCtrlOsOffset_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeCtrlOsOffset_t>("FeCtrlOsOffset_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CtrlParent", &GFeCtrlOsOffset_t::GetCtrlParent, &GFeCtrlOsOffset_t::SetCtrlParent)
        .addProperty("CtrlChild", &GFeCtrlOsOffset_t::GetCtrlChild, &GFeCtrlOsOffset_t::SetCtrlChild)
        .addFunction("ToPtr", &GFeCtrlOsOffset_t::ToPtr)
        .addFunction("IsValid", &GFeCtrlOsOffset_t::IsValid)
        .endClass();
}
GCMorphData::GCMorphData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMorphData::GCMorphData(void *ptr) {
    m_ptr = ptr;
}
std::string GCMorphData::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CMorphData", "m_name").Get();
}
void GCMorphData::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CMorphData", "m_name", false, CUtlString(value.c_str()));
}
std::vector<GCMorphRectData> GCMorphData::GetMorphRectDatas() const {
    CUtlVector<GCMorphRectData>* vec = GetSchemaValue<CUtlVector<GCMorphRectData>*>(m_ptr, "CMorphData", "m_morphRectDatas"); std::vector<GCMorphRectData> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMorphData::SetMorphRectDatas(std::vector<GCMorphRectData> value) {
    SetSchemaValueCUtlVector<GCMorphRectData>(m_ptr, "CMorphData", "m_morphRectDatas", false, value);
}
void* GCMorphData::GetPtr() {
    return m_ptr;
}
std::string GCMorphData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMorphData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMorphData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMorphData>("CMorphData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCMorphData::GetName, &GCMorphData::SetName)
        .addProperty("MorphRectDatas", &GCMorphData::GetMorphRectDatas, &GCMorphData::SetMorphRectDatas)
        .addFunction("ToPtr", &GCMorphData::ToPtr)
        .addFunction("IsValid", &GCMorphData::IsValid)
        .endClass();
}
GCAimMatrixUpdateNode::GCAimMatrixUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAimMatrixUpdateNode::GCAimMatrixUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GAimMatrixOpFixedSettings_t GCAimMatrixUpdateNode::GetOpFixedSettings() const {
    GAimMatrixOpFixedSettings_t value(GetSchemaPtr(m_ptr, "CAimMatrixUpdateNode", "m_opFixedSettings"));
    return value;
}
void GCAimMatrixUpdateNode::SetOpFixedSettings(GAimMatrixOpFixedSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'OpFixedSettings' is not possible.\n");
}
uint64_t GCAimMatrixUpdateNode::GetTarget() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CAimMatrixUpdateNode", "m_target");
}
void GCAimMatrixUpdateNode::SetTarget(uint64_t value) {
    SetSchemaValue(m_ptr, "CAimMatrixUpdateNode", "m_target", false, value);
}
GCAnimParamHandle GCAimMatrixUpdateNode::GetParamIndex() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CAimMatrixUpdateNode", "m_paramIndex"));
    return value;
}
void GCAimMatrixUpdateNode::SetParamIndex(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParamIndex' is not possible.\n");
}
bool GCAimMatrixUpdateNode::GetResetChild() const {
    return GetSchemaValue<bool>(m_ptr, "CAimMatrixUpdateNode", "m_bResetChild");
}
void GCAimMatrixUpdateNode::SetResetChild(bool value) {
    SetSchemaValue(m_ptr, "CAimMatrixUpdateNode", "m_bResetChild", false, value);
}
bool GCAimMatrixUpdateNode::GetLockWhenWaning() const {
    return GetSchemaValue<bool>(m_ptr, "CAimMatrixUpdateNode", "m_bLockWhenWaning");
}
void GCAimMatrixUpdateNode::SetLockWhenWaning(bool value) {
    SetSchemaValue(m_ptr, "CAimMatrixUpdateNode", "m_bLockWhenWaning", false, value);
}
void* GCAimMatrixUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCAimMatrixUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAimMatrixUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCAimMatrixUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCAimMatrixUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCAimMatrixUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAimMatrixUpdateNode>("CAimMatrixUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OpFixedSettings", &GCAimMatrixUpdateNode::GetOpFixedSettings, &GCAimMatrixUpdateNode::SetOpFixedSettings)
        .addProperty("Target", &GCAimMatrixUpdateNode::GetTarget, &GCAimMatrixUpdateNode::SetTarget)
        .addProperty("ParamIndex", &GCAimMatrixUpdateNode::GetParamIndex, &GCAimMatrixUpdateNode::SetParamIndex)
        .addProperty("ResetChild", &GCAimMatrixUpdateNode::GetResetChild, &GCAimMatrixUpdateNode::SetResetChild)
        .addProperty("LockWhenWaning", &GCAimMatrixUpdateNode::GetLockWhenWaning, &GCAimMatrixUpdateNode::SetLockWhenWaning)
        .addProperty("Parent", &GCAimMatrixUpdateNode::GetParent, &GCAimMatrixUpdateNode::SetParent)
        .addFunction("ToPtr", &GCAimMatrixUpdateNode::ToPtr)
        .addFunction("IsValid", &GCAimMatrixUpdateNode::IsValid)
        .endClass();
}
GCDirectionalBlendUpdateNode::GCDirectionalBlendUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCDirectionalBlendUpdateNode::GCDirectionalBlendUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GCAnimInputDamping GCDirectionalBlendUpdateNode::GetDamping() const {
    GCAnimInputDamping value(GetSchemaPtr(m_ptr, "CDirectionalBlendUpdateNode", "m_damping"));
    return value;
}
void GCDirectionalBlendUpdateNode::SetDamping(GCAnimInputDamping value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Damping' is not possible.\n");
}
uint64_t GCDirectionalBlendUpdateNode::GetBlendValueSource() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CDirectionalBlendUpdateNode", "m_blendValueSource");
}
void GCDirectionalBlendUpdateNode::SetBlendValueSource(uint64_t value) {
    SetSchemaValue(m_ptr, "CDirectionalBlendUpdateNode", "m_blendValueSource", false, value);
}
GCAnimParamHandle GCDirectionalBlendUpdateNode::GetParamIndex() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CDirectionalBlendUpdateNode", "m_paramIndex"));
    return value;
}
void GCDirectionalBlendUpdateNode::SetParamIndex(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParamIndex' is not possible.\n");
}
float GCDirectionalBlendUpdateNode::GetPlaybackSpeed() const {
    return GetSchemaValue<float>(m_ptr, "CDirectionalBlendUpdateNode", "m_playbackSpeed");
}
void GCDirectionalBlendUpdateNode::SetPlaybackSpeed(float value) {
    SetSchemaValue(m_ptr, "CDirectionalBlendUpdateNode", "m_playbackSpeed", false, value);
}
float GCDirectionalBlendUpdateNode::GetDuration() const {
    return GetSchemaValue<float>(m_ptr, "CDirectionalBlendUpdateNode", "m_duration");
}
void GCDirectionalBlendUpdateNode::SetDuration(float value) {
    SetSchemaValue(m_ptr, "CDirectionalBlendUpdateNode", "m_duration", false, value);
}
bool GCDirectionalBlendUpdateNode::GetLoop() const {
    return GetSchemaValue<bool>(m_ptr, "CDirectionalBlendUpdateNode", "m_bLoop");
}
void GCDirectionalBlendUpdateNode::SetLoop(bool value) {
    SetSchemaValue(m_ptr, "CDirectionalBlendUpdateNode", "m_bLoop", false, value);
}
bool GCDirectionalBlendUpdateNode::GetLockBlendOnReset() const {
    return GetSchemaValue<bool>(m_ptr, "CDirectionalBlendUpdateNode", "m_bLockBlendOnReset");
}
void GCDirectionalBlendUpdateNode::SetLockBlendOnReset(bool value) {
    SetSchemaValue(m_ptr, "CDirectionalBlendUpdateNode", "m_bLockBlendOnReset", false, value);
}
void* GCDirectionalBlendUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCDirectionalBlendUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCDirectionalBlendUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCLeafUpdateNode GCDirectionalBlendUpdateNode::GetParent() const {
    GCLeafUpdateNode value(m_ptr);
    return value;
}
void GCDirectionalBlendUpdateNode::SetParent(GCLeafUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCDirectionalBlendUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCDirectionalBlendUpdateNode>("CDirectionalBlendUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Damping", &GCDirectionalBlendUpdateNode::GetDamping, &GCDirectionalBlendUpdateNode::SetDamping)
        .addProperty("BlendValueSource", &GCDirectionalBlendUpdateNode::GetBlendValueSource, &GCDirectionalBlendUpdateNode::SetBlendValueSource)
        .addProperty("ParamIndex", &GCDirectionalBlendUpdateNode::GetParamIndex, &GCDirectionalBlendUpdateNode::SetParamIndex)
        .addProperty("PlaybackSpeed", &GCDirectionalBlendUpdateNode::GetPlaybackSpeed, &GCDirectionalBlendUpdateNode::SetPlaybackSpeed)
        .addProperty("Duration", &GCDirectionalBlendUpdateNode::GetDuration, &GCDirectionalBlendUpdateNode::SetDuration)
        .addProperty("Loop", &GCDirectionalBlendUpdateNode::GetLoop, &GCDirectionalBlendUpdateNode::SetLoop)
        .addProperty("LockBlendOnReset", &GCDirectionalBlendUpdateNode::GetLockBlendOnReset, &GCDirectionalBlendUpdateNode::SetLockBlendOnReset)
        .addProperty("Parent", &GCDirectionalBlendUpdateNode::GetParent, &GCDirectionalBlendUpdateNode::SetParent)
        .addFunction("ToPtr", &GCDirectionalBlendUpdateNode::ToPtr)
        .addFunction("IsValid", &GCDirectionalBlendUpdateNode::IsValid)
        .endClass();
}
GVMixPannerDesc_t::GVMixPannerDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixPannerDesc_t::GVMixPannerDesc_t(void *ptr) {
    m_ptr = ptr;
}
uint64_t GVMixPannerDesc_t::GetType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "VMixPannerDesc_t", "m_type");
}
void GVMixPannerDesc_t::SetType(uint64_t value) {
    SetSchemaValue(m_ptr, "VMixPannerDesc_t", "m_type", true, value);
}
float GVMixPannerDesc_t::GetStrength() const {
    return GetSchemaValue<float>(m_ptr, "VMixPannerDesc_t", "m_flStrength");
}
void GVMixPannerDesc_t::SetStrength(float value) {
    SetSchemaValue(m_ptr, "VMixPannerDesc_t", "m_flStrength", true, value);
}
void* GVMixPannerDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixPannerDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixPannerDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixPannerDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixPannerDesc_t>("VMixPannerDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Type", &GVMixPannerDesc_t::GetType, &GVMixPannerDesc_t::SetType)
        .addProperty("Strength", &GVMixPannerDesc_t::GetStrength, &GVMixPannerDesc_t::SetStrength)
        .addFunction("ToPtr", &GVMixPannerDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixPannerDesc_t::IsValid)
        .endClass();
}
GFeSimdSpringIntegrator_t::GFeSimdSpringIntegrator_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeSimdSpringIntegrator_t::GFeSimdSpringIntegrator_t(void *ptr) {
    m_ptr = ptr;
}
float GFeSimdSpringIntegrator_t::GetSpringRestLength() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdSpringIntegrator_t", "flSpringRestLength");
}
void GFeSimdSpringIntegrator_t::SetSpringRestLength(float value) {
    SetSchemaValue(m_ptr, "FeSimdSpringIntegrator_t", "flSpringRestLength", true, value);
}
float GFeSimdSpringIntegrator_t::GetSpringConstant() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdSpringIntegrator_t", "flSpringConstant");
}
void GFeSimdSpringIntegrator_t::SetSpringConstant(float value) {
    SetSchemaValue(m_ptr, "FeSimdSpringIntegrator_t", "flSpringConstant", true, value);
}
float GFeSimdSpringIntegrator_t::GetSpringDamping() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdSpringIntegrator_t", "flSpringDamping");
}
void GFeSimdSpringIntegrator_t::SetSpringDamping(float value) {
    SetSchemaValue(m_ptr, "FeSimdSpringIntegrator_t", "flSpringDamping", true, value);
}
float GFeSimdSpringIntegrator_t::GetNodeWeight0() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdSpringIntegrator_t", "flNodeWeight0");
}
void GFeSimdSpringIntegrator_t::SetNodeWeight0(float value) {
    SetSchemaValue(m_ptr, "FeSimdSpringIntegrator_t", "flNodeWeight0", true, value);
}
void* GFeSimdSpringIntegrator_t::GetPtr() {
    return m_ptr;
}
std::string GFeSimdSpringIntegrator_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeSimdSpringIntegrator_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeSimdSpringIntegrator_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeSimdSpringIntegrator_t>("FeSimdSpringIntegrator_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SpringRestLength", &GFeSimdSpringIntegrator_t::GetSpringRestLength, &GFeSimdSpringIntegrator_t::SetSpringRestLength)
        .addProperty("SpringConstant", &GFeSimdSpringIntegrator_t::GetSpringConstant, &GFeSimdSpringIntegrator_t::SetSpringConstant)
        .addProperty("SpringDamping", &GFeSimdSpringIntegrator_t::GetSpringDamping, &GFeSimdSpringIntegrator_t::SetSpringDamping)
        .addProperty("NodeWeight0", &GFeSimdSpringIntegrator_t::GetNodeWeight0, &GFeSimdSpringIntegrator_t::SetNodeWeight0)
        .addFunction("ToPtr", &GFeSimdSpringIntegrator_t::ToPtr)
        .addFunction("IsValid", &GFeSimdSpringIntegrator_t::IsValid)
        .endClass();
}
GModelBoneFlexDriver_t::GModelBoneFlexDriver_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GModelBoneFlexDriver_t::GModelBoneFlexDriver_t(void *ptr) {
    m_ptr = ptr;
}
std::string GModelBoneFlexDriver_t::GetBoneName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "ModelBoneFlexDriver_t", "m_boneName").Get();
}
void GModelBoneFlexDriver_t::SetBoneName(std::string value) {
    SetSchemaValue(m_ptr, "ModelBoneFlexDriver_t", "m_boneName", true, CUtlString(value.c_str()));
}
uint32_t GModelBoneFlexDriver_t::GetBoneNameToken() const {
    return GetSchemaValue<uint32_t>(m_ptr, "ModelBoneFlexDriver_t", "m_boneNameToken");
}
void GModelBoneFlexDriver_t::SetBoneNameToken(uint32_t value) {
    SetSchemaValue(m_ptr, "ModelBoneFlexDriver_t", "m_boneNameToken", true, value);
}
std::vector<GModelBoneFlexDriverControl_t> GModelBoneFlexDriver_t::GetControls() const {
    CUtlVector<GModelBoneFlexDriverControl_t>* vec = GetSchemaValue<CUtlVector<GModelBoneFlexDriverControl_t>*>(m_ptr, "ModelBoneFlexDriver_t", "m_controls"); std::vector<GModelBoneFlexDriverControl_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GModelBoneFlexDriver_t::SetControls(std::vector<GModelBoneFlexDriverControl_t> value) {
    SetSchemaValueCUtlVector<GModelBoneFlexDriverControl_t>(m_ptr, "ModelBoneFlexDriver_t", "m_controls", true, value);
}
void* GModelBoneFlexDriver_t::GetPtr() {
    return m_ptr;
}
std::string GModelBoneFlexDriver_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GModelBoneFlexDriver_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassModelBoneFlexDriver_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GModelBoneFlexDriver_t>("ModelBoneFlexDriver_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BoneName", &GModelBoneFlexDriver_t::GetBoneName, &GModelBoneFlexDriver_t::SetBoneName)
        .addProperty("BoneNameToken", &GModelBoneFlexDriver_t::GetBoneNameToken, &GModelBoneFlexDriver_t::SetBoneNameToken)
        .addProperty("Controls", &GModelBoneFlexDriver_t::GetControls, &GModelBoneFlexDriver_t::SetControls)
        .addFunction("ToPtr", &GModelBoneFlexDriver_t::ToPtr)
        .addFunction("IsValid", &GModelBoneFlexDriver_t::IsValid)
        .endClass();
}
GCBoolAnimParameter::GCBoolAnimParameter(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBoolAnimParameter::GCBoolAnimParameter(void *ptr) {
    m_ptr = ptr;
}
bool GCBoolAnimParameter::GetDefaultValue() const {
    return GetSchemaValue<bool>(m_ptr, "CBoolAnimParameter", "m_bDefaultValue");
}
void GCBoolAnimParameter::SetDefaultValue(bool value) {
    SetSchemaValue(m_ptr, "CBoolAnimParameter", "m_bDefaultValue", false, value);
}
void* GCBoolAnimParameter::GetPtr() {
    return m_ptr;
}
std::string GCBoolAnimParameter::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBoolAnimParameter::IsValid() {
    return (m_ptr != nullptr);
}
GCConcreteAnimParameter GCBoolAnimParameter::GetParent() const {
    GCConcreteAnimParameter value(m_ptr);
    return value;
}
void GCBoolAnimParameter::SetParent(GCConcreteAnimParameter value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCBoolAnimParameter(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBoolAnimParameter>("CBoolAnimParameter")
        .addConstructor<void (*)(std::string)>()
        .addProperty("DefaultValue", &GCBoolAnimParameter::GetDefaultValue, &GCBoolAnimParameter::SetDefaultValue)
        .addProperty("Parent", &GCBoolAnimParameter::GetParent, &GCBoolAnimParameter::SetParent)
        .addFunction("ToPtr", &GCBoolAnimParameter::ToPtr)
        .addFunction("IsValid", &GCBoolAnimParameter::IsValid)
        .endClass();
}
GEventAppShutdown_t::GEventAppShutdown_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventAppShutdown_t::GEventAppShutdown_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GEventAppShutdown_t::GetDummy0() const {
    return GetSchemaValue<int32_t>(m_ptr, "EventAppShutdown_t", "m_nDummy0");
}
void GEventAppShutdown_t::SetDummy0(int32_t value) {
    SetSchemaValue(m_ptr, "EventAppShutdown_t", "m_nDummy0", true, value);
}
void* GEventAppShutdown_t::GetPtr() {
    return m_ptr;
}
std::string GEventAppShutdown_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventAppShutdown_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventAppShutdown_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventAppShutdown_t>("EventAppShutdown_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Dummy0", &GEventAppShutdown_t::GetDummy0, &GEventAppShutdown_t::SetDummy0)
        .addFunction("ToPtr", &GEventAppShutdown_t::ToPtr)
        .addFunction("IsValid", &GEventAppShutdown_t::IsValid)
        .endClass();
}
GResourceId_t::GResourceId_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GResourceId_t::GResourceId_t(void *ptr) {
    m_ptr = ptr;
}
uint64_t GResourceId_t::GetValue() const {
    return GetSchemaValue<uint64_t>(m_ptr, "ResourceId_t", "m_Value");
}
void GResourceId_t::SetValue(uint64_t value) {
    SetSchemaValue(m_ptr, "ResourceId_t", "m_Value", true, value);
}
void* GResourceId_t::GetPtr() {
    return m_ptr;
}
std::string GResourceId_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GResourceId_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassResourceId_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GResourceId_t>("ResourceId_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Value", &GResourceId_t::GetValue, &GResourceId_t::SetValue)
        .addFunction("ToPtr", &GResourceId_t::ToPtr)
        .addFunction("IsValid", &GResourceId_t::IsValid)
        .endClass();
}
GCVoiceContainerRealtimeFMSineWave::GCVoiceContainerRealtimeFMSineWave(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCVoiceContainerRealtimeFMSineWave::GCVoiceContainerRealtimeFMSineWave(void *ptr) {
    m_ptr = ptr;
}
float GCVoiceContainerRealtimeFMSineWave::GetCarrierFrequency() const {
    return GetSchemaValue<float>(m_ptr, "CVoiceContainerRealtimeFMSineWave", "m_flCarrierFrequency");
}
void GCVoiceContainerRealtimeFMSineWave::SetCarrierFrequency(float value) {
    SetSchemaValue(m_ptr, "CVoiceContainerRealtimeFMSineWave", "m_flCarrierFrequency", false, value);
}
float GCVoiceContainerRealtimeFMSineWave::GetModulatorFrequency() const {
    return GetSchemaValue<float>(m_ptr, "CVoiceContainerRealtimeFMSineWave", "m_flModulatorFrequency");
}
void GCVoiceContainerRealtimeFMSineWave::SetModulatorFrequency(float value) {
    SetSchemaValue(m_ptr, "CVoiceContainerRealtimeFMSineWave", "m_flModulatorFrequency", false, value);
}
float GCVoiceContainerRealtimeFMSineWave::GetModulatorAmount() const {
    return GetSchemaValue<float>(m_ptr, "CVoiceContainerRealtimeFMSineWave", "m_flModulatorAmount");
}
void GCVoiceContainerRealtimeFMSineWave::SetModulatorAmount(float value) {
    SetSchemaValue(m_ptr, "CVoiceContainerRealtimeFMSineWave", "m_flModulatorAmount", false, value);
}
void* GCVoiceContainerRealtimeFMSineWave::GetPtr() {
    return m_ptr;
}
std::string GCVoiceContainerRealtimeFMSineWave::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCVoiceContainerRealtimeFMSineWave::IsValid() {
    return (m_ptr != nullptr);
}
GCVoiceContainerBase GCVoiceContainerRealtimeFMSineWave::GetParent() const {
    GCVoiceContainerBase value(m_ptr);
    return value;
}
void GCVoiceContainerRealtimeFMSineWave::SetParent(GCVoiceContainerBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCVoiceContainerRealtimeFMSineWave(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCVoiceContainerRealtimeFMSineWave>("CVoiceContainerRealtimeFMSineWave")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CarrierFrequency", &GCVoiceContainerRealtimeFMSineWave::GetCarrierFrequency, &GCVoiceContainerRealtimeFMSineWave::SetCarrierFrequency)
        .addProperty("ModulatorFrequency", &GCVoiceContainerRealtimeFMSineWave::GetModulatorFrequency, &GCVoiceContainerRealtimeFMSineWave::SetModulatorFrequency)
        .addProperty("ModulatorAmount", &GCVoiceContainerRealtimeFMSineWave::GetModulatorAmount, &GCVoiceContainerRealtimeFMSineWave::SetModulatorAmount)
        .addProperty("Parent", &GCVoiceContainerRealtimeFMSineWave::GetParent, &GCVoiceContainerRealtimeFMSineWave::SetParent)
        .addFunction("ToPtr", &GCVoiceContainerRealtimeFMSineWave::ToPtr)
        .addFunction("IsValid", &GCVoiceContainerRealtimeFMSineWave::IsValid)
        .endClass();
}
GCNmVirtualParameterBoolNode::GCNmVirtualParameterBoolNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmVirtualParameterBoolNode::GCNmVirtualParameterBoolNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmVirtualParameterBoolNode::GetChildNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmVirtualParameterBoolNode", "m_nChildNodeIdx");
}
void GCNmVirtualParameterBoolNode::SetChildNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmVirtualParameterBoolNode", "m_nChildNodeIdx", false, value);
}
void* GCNmVirtualParameterBoolNode::GetPtr() {
    return m_ptr;
}
std::string GCNmVirtualParameterBoolNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmVirtualParameterBoolNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmBoolValueNode GCNmVirtualParameterBoolNode::GetParent() const {
    GCNmBoolValueNode value(m_ptr);
    return value;
}
void GCNmVirtualParameterBoolNode::SetParent(GCNmBoolValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmVirtualParameterBoolNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmVirtualParameterBoolNode>("CNmVirtualParameterBoolNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChildNodeIdx", &GCNmVirtualParameterBoolNode::GetChildNodeIdx, &GCNmVirtualParameterBoolNode::SetChildNodeIdx)
        .addProperty("Parent", &GCNmVirtualParameterBoolNode::GetParent, &GCNmVirtualParameterBoolNode::SetParent)
        .addFunction("ToPtr", &GCNmVirtualParameterBoolNode::ToPtr)
        .addFunction("IsValid", &GCNmVirtualParameterBoolNode::IsValid)
        .endClass();
}
GCNmSyncTrack::GCNmSyncTrack(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmSyncTrack::GCNmSyncTrack(void *ptr) {
    m_ptr = ptr;
}
int32_t GCNmSyncTrack::GetStartEventOffset() const {
    return GetSchemaValue<int32_t>(m_ptr, "CNmSyncTrack", "m_nStartEventOffset");
}
void GCNmSyncTrack::SetStartEventOffset(int32_t value) {
    SetSchemaValue(m_ptr, "CNmSyncTrack", "m_nStartEventOffset", false, value);
}
void* GCNmSyncTrack::GetPtr() {
    return m_ptr;
}
std::string GCNmSyncTrack::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmSyncTrack::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmSyncTrack(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmSyncTrack>("CNmSyncTrack")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StartEventOffset", &GCNmSyncTrack::GetStartEventOffset, &GCNmSyncTrack::SetStartEventOffset)
        .addFunction("ToPtr", &GCNmSyncTrack::ToPtr)
        .addFunction("IsValid", &GCNmSyncTrack::IsValid)
        .endClass();
}
GTagSpan_t::GTagSpan_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GTagSpan_t::GTagSpan_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GTagSpan_t::GetTagIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "TagSpan_t", "m_tagIndex");
}
void GTagSpan_t::SetTagIndex(int32_t value) {
    SetSchemaValue(m_ptr, "TagSpan_t", "m_tagIndex", true, value);
}
float GTagSpan_t::GetStartCycle() const {
    return GetSchemaValue<float>(m_ptr, "TagSpan_t", "m_startCycle");
}
void GTagSpan_t::SetStartCycle(float value) {
    SetSchemaValue(m_ptr, "TagSpan_t", "m_startCycle", true, value);
}
float GTagSpan_t::GetEndCycle() const {
    return GetSchemaValue<float>(m_ptr, "TagSpan_t", "m_endCycle");
}
void GTagSpan_t::SetEndCycle(float value) {
    SetSchemaValue(m_ptr, "TagSpan_t", "m_endCycle", true, value);
}
void* GTagSpan_t::GetPtr() {
    return m_ptr;
}
std::string GTagSpan_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GTagSpan_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassTagSpan_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GTagSpan_t>("TagSpan_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("TagIndex", &GTagSpan_t::GetTagIndex, &GTagSpan_t::SetTagIndex)
        .addProperty("StartCycle", &GTagSpan_t::GetStartCycle, &GTagSpan_t::SetStartCycle)
        .addProperty("EndCycle", &GTagSpan_t::GetEndCycle, &GTagSpan_t::SetEndCycle)
        .addFunction("ToPtr", &GTagSpan_t::ToPtr)
        .addFunction("IsValid", &GTagSpan_t::IsValid)
        .endClass();
}
GCNmStateNode__TimedEvent_t::GCNmStateNode__TimedEvent_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmStateNode__TimedEvent_t::GCNmStateNode__TimedEvent_t(void *ptr) {
    m_ptr = ptr;
}
float GCNmStateNode__TimedEvent_t::GetTimeValue() const {
    return GetSchemaValue<float>(m_ptr, "CNmStateNode__TimedEvent_t", "m_timeValue");
}
void GCNmStateNode__TimedEvent_t::SetTimeValue(float value) {
    SetSchemaValue(m_ptr, "CNmStateNode__TimedEvent_t", "m_timeValue", true, value);
}
void* GCNmStateNode__TimedEvent_t::GetPtr() {
    return m_ptr;
}
std::string GCNmStateNode__TimedEvent_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmStateNode__TimedEvent_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmStateNode__TimedEvent_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmStateNode__TimedEvent_t>("CNmStateNode__TimedEvent_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("TimeValue", &GCNmStateNode__TimedEvent_t::GetTimeValue, &GCNmStateNode__TimedEvent_t::SetTimeValue)
        .addFunction("ToPtr", &GCNmStateNode__TimedEvent_t::ToPtr)
        .addFunction("IsValid", &GCNmStateNode__TimedEvent_t::IsValid)
        .endClass();
}
GCNmControlParameterTargetNode::GCNmControlParameterTargetNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmControlParameterTargetNode::GCNmControlParameterTargetNode(void *ptr) {
    m_ptr = ptr;
}
void* GCNmControlParameterTargetNode::GetPtr() {
    return m_ptr;
}
std::string GCNmControlParameterTargetNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmControlParameterTargetNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmTargetValueNode GCNmControlParameterTargetNode::GetParent() const {
    GCNmTargetValueNode value(m_ptr);
    return value;
}
void GCNmControlParameterTargetNode::SetParent(GCNmTargetValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmControlParameterTargetNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmControlParameterTargetNode>("CNmControlParameterTargetNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCNmControlParameterTargetNode::GetParent, &GCNmControlParameterTargetNode::SetParent)
        .addFunction("ToPtr", &GCNmControlParameterTargetNode::ToPtr)
        .addFunction("IsValid", &GCNmControlParameterTargetNode::IsValid)
        .endClass();
}
GCFootstepLandedAnimTag::GCFootstepLandedAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootstepLandedAnimTag::GCFootstepLandedAnimTag(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCFootstepLandedAnimTag::GetFootstepType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CFootstepLandedAnimTag", "m_FootstepType");
}
void GCFootstepLandedAnimTag::SetFootstepType(uint64_t value) {
    SetSchemaValue(m_ptr, "CFootstepLandedAnimTag", "m_FootstepType", false, value);
}
std::string GCFootstepLandedAnimTag::GetOverrideSoundName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFootstepLandedAnimTag", "m_OverrideSoundName").Get();
}
void GCFootstepLandedAnimTag::SetOverrideSoundName(std::string value) {
    SetSchemaValue(m_ptr, "CFootstepLandedAnimTag", "m_OverrideSoundName", false, CUtlString(value.c_str()));
}
std::string GCFootstepLandedAnimTag::GetDebugAnimSourceString() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFootstepLandedAnimTag", "m_DebugAnimSourceString").Get();
}
void GCFootstepLandedAnimTag::SetDebugAnimSourceString(std::string value) {
    SetSchemaValue(m_ptr, "CFootstepLandedAnimTag", "m_DebugAnimSourceString", false, CUtlString(value.c_str()));
}
std::string GCFootstepLandedAnimTag::GetBoneName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFootstepLandedAnimTag", "m_BoneName").Get();
}
void GCFootstepLandedAnimTag::SetBoneName(std::string value) {
    SetSchemaValue(m_ptr, "CFootstepLandedAnimTag", "m_BoneName", false, CUtlString(value.c_str()));
}
void* GCFootstepLandedAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCFootstepLandedAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootstepLandedAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimTagBase GCFootstepLandedAnimTag::GetParent() const {
    GCAnimTagBase value(m_ptr);
    return value;
}
void GCFootstepLandedAnimTag::SetParent(GCAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCFootstepLandedAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootstepLandedAnimTag>("CFootstepLandedAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FootstepType", &GCFootstepLandedAnimTag::GetFootstepType, &GCFootstepLandedAnimTag::SetFootstepType)
        .addProperty("OverrideSoundName", &GCFootstepLandedAnimTag::GetOverrideSoundName, &GCFootstepLandedAnimTag::SetOverrideSoundName)
        .addProperty("DebugAnimSourceString", &GCFootstepLandedAnimTag::GetDebugAnimSourceString, &GCFootstepLandedAnimTag::SetDebugAnimSourceString)
        .addProperty("BoneName", &GCFootstepLandedAnimTag::GetBoneName, &GCFootstepLandedAnimTag::SetBoneName)
        .addProperty("Parent", &GCFootstepLandedAnimTag::GetParent, &GCFootstepLandedAnimTag::SetParent)
        .addFunction("ToPtr", &GCFootstepLandedAnimTag::ToPtr)
        .addFunction("IsValid", &GCFootstepLandedAnimTag::IsValid)
        .endClass();
}
GCEnumAnimParameter::GCEnumAnimParameter(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCEnumAnimParameter::GCEnumAnimParameter(void *ptr) {
    m_ptr = ptr;
}
uint8_t GCEnumAnimParameter::GetDefaultValue() const {
    return GetSchemaValue<uint8_t>(m_ptr, "CEnumAnimParameter", "m_defaultValue");
}
void GCEnumAnimParameter::SetDefaultValue(uint8_t value) {
    SetSchemaValue(m_ptr, "CEnumAnimParameter", "m_defaultValue", false, value);
}
std::vector<CUtlString> GCEnumAnimParameter::GetEnumOptions() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "CEnumAnimParameter", "m_enumOptions"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCEnumAnimParameter::SetEnumOptions(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "CEnumAnimParameter", "m_enumOptions", false, value);
}
std::vector<uint64> GCEnumAnimParameter::GetEnumReferenced() const {
    CUtlVector<uint64>* vec = GetSchemaValue<CUtlVector<uint64>*>(m_ptr, "CEnumAnimParameter", "m_vecEnumReferenced"); std::vector<uint64> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCEnumAnimParameter::SetEnumReferenced(std::vector<uint64> value) {
    SetSchemaValueCUtlVector<uint64>(m_ptr, "CEnumAnimParameter", "m_vecEnumReferenced", false, value);
}
void* GCEnumAnimParameter::GetPtr() {
    return m_ptr;
}
std::string GCEnumAnimParameter::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCEnumAnimParameter::IsValid() {
    return (m_ptr != nullptr);
}
GCConcreteAnimParameter GCEnumAnimParameter::GetParent() const {
    GCConcreteAnimParameter value(m_ptr);
    return value;
}
void GCEnumAnimParameter::SetParent(GCConcreteAnimParameter value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCEnumAnimParameter(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCEnumAnimParameter>("CEnumAnimParameter")
        .addConstructor<void (*)(std::string)>()
        .addProperty("DefaultValue", &GCEnumAnimParameter::GetDefaultValue, &GCEnumAnimParameter::SetDefaultValue)
        .addProperty("EnumOptions", &GCEnumAnimParameter::GetEnumOptions, &GCEnumAnimParameter::SetEnumOptions)
        .addProperty("EnumReferenced", &GCEnumAnimParameter::GetEnumReferenced, &GCEnumAnimParameter::SetEnumReferenced)
        .addProperty("Parent", &GCEnumAnimParameter::GetParent, &GCEnumAnimParameter::SetParent)
        .addFunction("ToPtr", &GCEnumAnimParameter::ToPtr)
        .addFunction("IsValid", &GCEnumAnimParameter::IsValid)
        .endClass();
}
GCAnimationGraphVisualizerPie::GCAnimationGraphVisualizerPie(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimationGraphVisualizerPie::GCAnimationGraphVisualizerPie(void *ptr) {
    m_ptr = ptr;
}
Vector GCAnimationGraphVisualizerPie::GetWsCenter() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimationGraphVisualizerPie", "m_vWsCenter");
}
void GCAnimationGraphVisualizerPie::SetWsCenter(Vector value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerPie", "m_vWsCenter", false, value);
}
Vector GCAnimationGraphVisualizerPie::GetWsStart() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimationGraphVisualizerPie", "m_vWsStart");
}
void GCAnimationGraphVisualizerPie::SetWsStart(Vector value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerPie", "m_vWsStart", false, value);
}
Vector GCAnimationGraphVisualizerPie::GetWsEnd() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimationGraphVisualizerPie", "m_vWsEnd");
}
void GCAnimationGraphVisualizerPie::SetWsEnd(Vector value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerPie", "m_vWsEnd", false, value);
}
Color GCAnimationGraphVisualizerPie::GetColor() const {
    return GetSchemaValue<Color>(m_ptr, "CAnimationGraphVisualizerPie", "m_Color");
}
void GCAnimationGraphVisualizerPie::SetColor(Color value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerPie", "m_Color", false, value);
}
void* GCAnimationGraphVisualizerPie::GetPtr() {
    return m_ptr;
}
std::string GCAnimationGraphVisualizerPie::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimationGraphVisualizerPie::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimationGraphVisualizerPrimitiveBase GCAnimationGraphVisualizerPie::GetParent() const {
    GCAnimationGraphVisualizerPrimitiveBase value(m_ptr);
    return value;
}
void GCAnimationGraphVisualizerPie::SetParent(GCAnimationGraphVisualizerPrimitiveBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCAnimationGraphVisualizerPie(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimationGraphVisualizerPie>("CAnimationGraphVisualizerPie")
        .addConstructor<void (*)(std::string)>()
        .addProperty("WsCenter", &GCAnimationGraphVisualizerPie::GetWsCenter, &GCAnimationGraphVisualizerPie::SetWsCenter)
        .addProperty("WsStart", &GCAnimationGraphVisualizerPie::GetWsStart, &GCAnimationGraphVisualizerPie::SetWsStart)
        .addProperty("WsEnd", &GCAnimationGraphVisualizerPie::GetWsEnd, &GCAnimationGraphVisualizerPie::SetWsEnd)
        .addProperty("Color", &GCAnimationGraphVisualizerPie::GetColor, &GCAnimationGraphVisualizerPie::SetColor)
        .addProperty("Parent", &GCAnimationGraphVisualizerPie::GetParent, &GCAnimationGraphVisualizerPie::SetParent)
        .addFunction("ToPtr", &GCAnimationGraphVisualizerPie::ToPtr)
        .addFunction("IsValid", &GCAnimationGraphVisualizerPie::IsValid)
        .endClass();
}
GAnimationSnapshot_t::GAnimationSnapshot_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GAnimationSnapshot_t::GAnimationSnapshot_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GAnimationSnapshot_t::GetEntIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "AnimationSnapshot_t", "m_nEntIndex");
}
void GAnimationSnapshot_t::SetEntIndex(int32_t value) {
    SetSchemaValue(m_ptr, "AnimationSnapshot_t", "m_nEntIndex", true, value);
}
std::string GAnimationSnapshot_t::GetModelName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "AnimationSnapshot_t", "m_modelName").Get();
}
void GAnimationSnapshot_t::SetModelName(std::string value) {
    SetSchemaValue(m_ptr, "AnimationSnapshot_t", "m_modelName", true, CUtlString(value.c_str()));
}
void* GAnimationSnapshot_t::GetPtr() {
    return m_ptr;
}
std::string GAnimationSnapshot_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GAnimationSnapshot_t::IsValid() {
    return (m_ptr != nullptr);
}
GAnimationSnapshotBase_t GAnimationSnapshot_t::GetParent() const {
    GAnimationSnapshotBase_t value(m_ptr);
    return value;
}
void GAnimationSnapshot_t::SetParent(GAnimationSnapshotBase_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassAnimationSnapshot_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GAnimationSnapshot_t>("AnimationSnapshot_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("EntIndex", &GAnimationSnapshot_t::GetEntIndex, &GAnimationSnapshot_t::SetEntIndex)
        .addProperty("ModelName", &GAnimationSnapshot_t::GetModelName, &GAnimationSnapshot_t::SetModelName)
        .addProperty("Parent", &GAnimationSnapshot_t::GetParent, &GAnimationSnapshot_t::SetParent)
        .addFunction("ToPtr", &GAnimationSnapshot_t::ToPtr)
        .addFunction("IsValid", &GAnimationSnapshot_t::IsValid)
        .endClass();
}
GVPhysXCollisionAttributes_t::GVPhysXCollisionAttributes_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVPhysXCollisionAttributes_t::GVPhysXCollisionAttributes_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GVPhysXCollisionAttributes_t::GetCollisionGroup() const {
    return GetSchemaValue<uint32_t>(m_ptr, "VPhysXCollisionAttributes_t", "m_CollisionGroup");
}
void GVPhysXCollisionAttributes_t::SetCollisionGroup(uint32_t value) {
    SetSchemaValue(m_ptr, "VPhysXCollisionAttributes_t", "m_CollisionGroup", true, value);
}
std::vector<uint32> GVPhysXCollisionAttributes_t::GetInteractAs() const {
    CUtlVector<uint32>* vec = GetSchemaValue<CUtlVector<uint32>*>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractAs"); std::vector<uint32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysXCollisionAttributes_t::SetInteractAs(std::vector<uint32> value) {
    SetSchemaValueCUtlVector<uint32>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractAs", true, value);
}
std::vector<uint32> GVPhysXCollisionAttributes_t::GetInteractWith() const {
    CUtlVector<uint32>* vec = GetSchemaValue<CUtlVector<uint32>*>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractWith"); std::vector<uint32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysXCollisionAttributes_t::SetInteractWith(std::vector<uint32> value) {
    SetSchemaValueCUtlVector<uint32>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractWith", true, value);
}
std::vector<uint32> GVPhysXCollisionAttributes_t::GetInteractExclude() const {
    CUtlVector<uint32>* vec = GetSchemaValue<CUtlVector<uint32>*>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractExclude"); std::vector<uint32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysXCollisionAttributes_t::SetInteractExclude(std::vector<uint32> value) {
    SetSchemaValueCUtlVector<uint32>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractExclude", true, value);
}
std::string GVPhysXCollisionAttributes_t::GetCollisionGroupString() const {
    return GetSchemaValue<CUtlString>(m_ptr, "VPhysXCollisionAttributes_t", "m_CollisionGroupString").Get();
}
void GVPhysXCollisionAttributes_t::SetCollisionGroupString(std::string value) {
    SetSchemaValue(m_ptr, "VPhysXCollisionAttributes_t", "m_CollisionGroupString", true, CUtlString(value.c_str()));
}
std::vector<CUtlString> GVPhysXCollisionAttributes_t::GetInteractAsStrings() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractAsStrings"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysXCollisionAttributes_t::SetInteractAsStrings(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractAsStrings", true, value);
}
std::vector<CUtlString> GVPhysXCollisionAttributes_t::GetInteractWithStrings() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractWithStrings"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysXCollisionAttributes_t::SetInteractWithStrings(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractWithStrings", true, value);
}
std::vector<CUtlString> GVPhysXCollisionAttributes_t::GetInteractExcludeStrings() const {
    CUtlVector<CUtlString>* vec = GetSchemaValue<CUtlVector<CUtlString>*>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractExcludeStrings"); std::vector<CUtlString> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysXCollisionAttributes_t::SetInteractExcludeStrings(std::vector<CUtlString> value) {
    SetSchemaValueCUtlVector<CUtlString>(m_ptr, "VPhysXCollisionAttributes_t", "m_InteractExcludeStrings", true, value);
}
void* GVPhysXCollisionAttributes_t::GetPtr() {
    return m_ptr;
}
std::string GVPhysXCollisionAttributes_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVPhysXCollisionAttributes_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVPhysXCollisionAttributes_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVPhysXCollisionAttributes_t>("VPhysXCollisionAttributes_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CollisionGroup", &GVPhysXCollisionAttributes_t::GetCollisionGroup, &GVPhysXCollisionAttributes_t::SetCollisionGroup)
        .addProperty("InteractAs", &GVPhysXCollisionAttributes_t::GetInteractAs, &GVPhysXCollisionAttributes_t::SetInteractAs)
        .addProperty("InteractWith", &GVPhysXCollisionAttributes_t::GetInteractWith, &GVPhysXCollisionAttributes_t::SetInteractWith)
        .addProperty("InteractExclude", &GVPhysXCollisionAttributes_t::GetInteractExclude, &GVPhysXCollisionAttributes_t::SetInteractExclude)
        .addProperty("CollisionGroupString", &GVPhysXCollisionAttributes_t::GetCollisionGroupString, &GVPhysXCollisionAttributes_t::SetCollisionGroupString)
        .addProperty("InteractAsStrings", &GVPhysXCollisionAttributes_t::GetInteractAsStrings, &GVPhysXCollisionAttributes_t::SetInteractAsStrings)
        .addProperty("InteractWithStrings", &GVPhysXCollisionAttributes_t::GetInteractWithStrings, &GVPhysXCollisionAttributes_t::SetInteractWithStrings)
        .addProperty("InteractExcludeStrings", &GVPhysXCollisionAttributes_t::GetInteractExcludeStrings, &GVPhysXCollisionAttributes_t::SetInteractExcludeStrings)
        .addFunction("ToPtr", &GVPhysXCollisionAttributes_t::ToPtr)
        .addFunction("IsValid", &GVPhysXCollisionAttributes_t::IsValid)
        .endClass();
}
GCActionComponentUpdater::GCActionComponentUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCActionComponentUpdater::GCActionComponentUpdater(void *ptr) {
    m_ptr = ptr;
}
void* GCActionComponentUpdater::GetPtr() {
    return m_ptr;
}
std::string GCActionComponentUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCActionComponentUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimComponentUpdater GCActionComponentUpdater::GetParent() const {
    GCAnimComponentUpdater value(m_ptr);
    return value;
}
void GCActionComponentUpdater::SetParent(GCAnimComponentUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCActionComponentUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCActionComponentUpdater>("CActionComponentUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCActionComponentUpdater::GetParent, &GCActionComponentUpdater::SetParent)
        .addFunction("ToPtr", &GCActionComponentUpdater::ToPtr)
        .addFunction("IsValid", &GCActionComponentUpdater::IsValid)
        .endClass();
}
GCNmVirtualParameterVectorNode::GCNmVirtualParameterVectorNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmVirtualParameterVectorNode::GCNmVirtualParameterVectorNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmVirtualParameterVectorNode::GetChildNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmVirtualParameterVectorNode", "m_nChildNodeIdx");
}
void GCNmVirtualParameterVectorNode::SetChildNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmVirtualParameterVectorNode", "m_nChildNodeIdx", false, value);
}
void* GCNmVirtualParameterVectorNode::GetPtr() {
    return m_ptr;
}
std::string GCNmVirtualParameterVectorNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmVirtualParameterVectorNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmVectorValueNode GCNmVirtualParameterVectorNode::GetParent() const {
    GCNmVectorValueNode value(m_ptr);
    return value;
}
void GCNmVirtualParameterVectorNode::SetParent(GCNmVectorValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmVirtualParameterVectorNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmVirtualParameterVectorNode>("CNmVirtualParameterVectorNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChildNodeIdx", &GCNmVirtualParameterVectorNode::GetChildNodeIdx, &GCNmVirtualParameterVectorNode::SetChildNodeIdx)
        .addProperty("Parent", &GCNmVirtualParameterVectorNode::GetParent, &GCNmVirtualParameterVectorNode::SetParent)
        .addFunction("ToPtr", &GCNmVirtualParameterVectorNode::ToPtr)
        .addFunction("IsValid", &GCNmVirtualParameterVectorNode::IsValid)
        .endClass();
}
GCAnimFrameSegment::GCAnimFrameSegment(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimFrameSegment::GCAnimFrameSegment(void *ptr) {
    m_ptr = ptr;
}
int32_t GCAnimFrameSegment::GetUniqueFrameIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimFrameSegment", "m_nUniqueFrameIndex");
}
void GCAnimFrameSegment::SetUniqueFrameIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimFrameSegment", "m_nUniqueFrameIndex", false, value);
}
uint32_t GCAnimFrameSegment::GetLocalElementMasks() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CAnimFrameSegment", "m_nLocalElementMasks");
}
void GCAnimFrameSegment::SetLocalElementMasks(uint32_t value) {
    SetSchemaValue(m_ptr, "CAnimFrameSegment", "m_nLocalElementMasks", false, value);
}
int32_t GCAnimFrameSegment::GetLocalChannel() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimFrameSegment", "m_nLocalChannel");
}
void GCAnimFrameSegment::SetLocalChannel(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimFrameSegment", "m_nLocalChannel", false, value);
}
void* GCAnimFrameSegment::GetPtr() {
    return m_ptr;
}
std::string GCAnimFrameSegment::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimFrameSegment::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimFrameSegment(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimFrameSegment>("CAnimFrameSegment")
        .addConstructor<void (*)(std::string)>()
        .addProperty("UniqueFrameIndex", &GCAnimFrameSegment::GetUniqueFrameIndex, &GCAnimFrameSegment::SetUniqueFrameIndex)
        .addProperty("LocalElementMasks", &GCAnimFrameSegment::GetLocalElementMasks, &GCAnimFrameSegment::SetLocalElementMasks)
        .addProperty("LocalChannel", &GCAnimFrameSegment::GetLocalChannel, &GCAnimFrameSegment::SetLocalChannel)
        .addFunction("ToPtr", &GCAnimFrameSegment::ToPtr)
        .addFunction("IsValid", &GCAnimFrameSegment::IsValid)
        .endClass();
}
GCClothSettingsAnimTag::GCClothSettingsAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCClothSettingsAnimTag::GCClothSettingsAnimTag(void *ptr) {
    m_ptr = ptr;
}
float GCClothSettingsAnimTag::GetStiffness() const {
    return GetSchemaValue<float>(m_ptr, "CClothSettingsAnimTag", "m_flStiffness");
}
void GCClothSettingsAnimTag::SetStiffness(float value) {
    SetSchemaValue(m_ptr, "CClothSettingsAnimTag", "m_flStiffness", false, value);
}
float GCClothSettingsAnimTag::GetEaseIn() const {
    return GetSchemaValue<float>(m_ptr, "CClothSettingsAnimTag", "m_flEaseIn");
}
void GCClothSettingsAnimTag::SetEaseIn(float value) {
    SetSchemaValue(m_ptr, "CClothSettingsAnimTag", "m_flEaseIn", false, value);
}
float GCClothSettingsAnimTag::GetEaseOut() const {
    return GetSchemaValue<float>(m_ptr, "CClothSettingsAnimTag", "m_flEaseOut");
}
void GCClothSettingsAnimTag::SetEaseOut(float value) {
    SetSchemaValue(m_ptr, "CClothSettingsAnimTag", "m_flEaseOut", false, value);
}
std::string GCClothSettingsAnimTag::GetVertexSet() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CClothSettingsAnimTag", "m_nVertexSet").Get();
}
void GCClothSettingsAnimTag::SetVertexSet(std::string value) {
    SetSchemaValue(m_ptr, "CClothSettingsAnimTag", "m_nVertexSet", false, CUtlString(value.c_str()));
}
void* GCClothSettingsAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCClothSettingsAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCClothSettingsAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimTagBase GCClothSettingsAnimTag::GetParent() const {
    GCAnimTagBase value(m_ptr);
    return value;
}
void GCClothSettingsAnimTag::SetParent(GCAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCClothSettingsAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCClothSettingsAnimTag>("CClothSettingsAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Stiffness", &GCClothSettingsAnimTag::GetStiffness, &GCClothSettingsAnimTag::SetStiffness)
        .addProperty("EaseIn", &GCClothSettingsAnimTag::GetEaseIn, &GCClothSettingsAnimTag::SetEaseIn)
        .addProperty("EaseOut", &GCClothSettingsAnimTag::GetEaseOut, &GCClothSettingsAnimTag::SetEaseOut)
        .addProperty("VertexSet", &GCClothSettingsAnimTag::GetVertexSet, &GCClothSettingsAnimTag::SetVertexSet)
        .addProperty("Parent", &GCClothSettingsAnimTag::GetParent, &GCClothSettingsAnimTag::SetParent)
        .addFunction("ToPtr", &GCClothSettingsAnimTag::ToPtr)
        .addFunction("IsValid", &GCClothSettingsAnimTag::IsValid)
        .endClass();
}
GVariableInfo_t::GVariableInfo_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVariableInfo_t::GVariableInfo_t(void *ptr) {
    m_ptr = ptr;
}
std::string GVariableInfo_t::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "VariableInfo_t", "m_name").Get();
}
void GVariableInfo_t::SetName(std::string value) {
    SetSchemaValue(m_ptr, "VariableInfo_t", "m_name", true, CUtlString(value.c_str()));
}
uint32_t GVariableInfo_t::GetNameToken() const {
    return GetSchemaValue<CUtlStringToken>(m_ptr, "VariableInfo_t", "m_nameToken").m_nHashCode;
}
void GVariableInfo_t::SetNameToken(uint32_t value) {
    SetSchemaValue(m_ptr, "VariableInfo_t", "m_nameToken", true, CUtlStringToken(value));
}
GFuseVariableIndex_t GVariableInfo_t::GetIndex() const {
    GFuseVariableIndex_t value(GetSchemaPtr(m_ptr, "VariableInfo_t", "m_nIndex"));
    return value;
}
void GVariableInfo_t::SetIndex(GFuseVariableIndex_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Index' is not possible.\n");
}
uint8_t GVariableInfo_t::GetNumComponents() const {
    return GetSchemaValue<uint8_t>(m_ptr, "VariableInfo_t", "m_nNumComponents");
}
void GVariableInfo_t::SetNumComponents(uint8_t value) {
    SetSchemaValue(m_ptr, "VariableInfo_t", "m_nNumComponents", true, value);
}
uint64_t GVariableInfo_t::GetVarType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "VariableInfo_t", "m_eVarType");
}
void GVariableInfo_t::SetVarType(uint64_t value) {
    SetSchemaValue(m_ptr, "VariableInfo_t", "m_eVarType", true, value);
}
uint64_t GVariableInfo_t::GetAccess() const {
    return GetSchemaValue<uint64_t>(m_ptr, "VariableInfo_t", "m_eAccess");
}
void GVariableInfo_t::SetAccess(uint64_t value) {
    SetSchemaValue(m_ptr, "VariableInfo_t", "m_eAccess", true, value);
}
void* GVariableInfo_t::GetPtr() {
    return m_ptr;
}
std::string GVariableInfo_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVariableInfo_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVariableInfo_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVariableInfo_t>("VariableInfo_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GVariableInfo_t::GetName, &GVariableInfo_t::SetName)
        .addProperty("NameToken", &GVariableInfo_t::GetNameToken, &GVariableInfo_t::SetNameToken)
        .addProperty("Index", &GVariableInfo_t::GetIndex, &GVariableInfo_t::SetIndex)
        .addProperty("NumComponents", &GVariableInfo_t::GetNumComponents, &GVariableInfo_t::SetNumComponents)
        .addProperty("VarType", &GVariableInfo_t::GetVarType, &GVariableInfo_t::SetVarType)
        .addProperty("Access", &GVariableInfo_t::GetAccess, &GVariableInfo_t::SetAccess)
        .addFunction("ToPtr", &GVariableInfo_t::ToPtr)
        .addFunction("IsValid", &GVariableInfo_t::IsValid)
        .endClass();
}
GVMixShaperDesc_t::GVMixShaperDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixShaperDesc_t::GVMixShaperDesc_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GVMixShaperDesc_t::GetShape() const {
    return GetSchemaValue<int32_t>(m_ptr, "VMixShaperDesc_t", "m_nShape");
}
void GVMixShaperDesc_t::SetShape(int32_t value) {
    SetSchemaValue(m_ptr, "VMixShaperDesc_t", "m_nShape", true, value);
}
float GVMixShaperDesc_t::GetFldbDrive() const {
    return GetSchemaValue<float>(m_ptr, "VMixShaperDesc_t", "m_fldbDrive");
}
void GVMixShaperDesc_t::SetFldbDrive(float value) {
    SetSchemaValue(m_ptr, "VMixShaperDesc_t", "m_fldbDrive", true, value);
}
float GVMixShaperDesc_t::GetFldbOutputGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixShaperDesc_t", "m_fldbOutputGain");
}
void GVMixShaperDesc_t::SetFldbOutputGain(float value) {
    SetSchemaValue(m_ptr, "VMixShaperDesc_t", "m_fldbOutputGain", true, value);
}
float GVMixShaperDesc_t::GetWetMix() const {
    return GetSchemaValue<float>(m_ptr, "VMixShaperDesc_t", "m_flWetMix");
}
void GVMixShaperDesc_t::SetWetMix(float value) {
    SetSchemaValue(m_ptr, "VMixShaperDesc_t", "m_flWetMix", true, value);
}
int32_t GVMixShaperDesc_t::GetOversampleFactor() const {
    return GetSchemaValue<int32_t>(m_ptr, "VMixShaperDesc_t", "m_nOversampleFactor");
}
void GVMixShaperDesc_t::SetOversampleFactor(int32_t value) {
    SetSchemaValue(m_ptr, "VMixShaperDesc_t", "m_nOversampleFactor", true, value);
}
void* GVMixShaperDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixShaperDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixShaperDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixShaperDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixShaperDesc_t>("VMixShaperDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Shape", &GVMixShaperDesc_t::GetShape, &GVMixShaperDesc_t::SetShape)
        .addProperty("FldbDrive", &GVMixShaperDesc_t::GetFldbDrive, &GVMixShaperDesc_t::SetFldbDrive)
        .addProperty("FldbOutputGain", &GVMixShaperDesc_t::GetFldbOutputGain, &GVMixShaperDesc_t::SetFldbOutputGain)
        .addProperty("WetMix", &GVMixShaperDesc_t::GetWetMix, &GVMixShaperDesc_t::SetWetMix)
        .addProperty("OversampleFactor", &GVMixShaperDesc_t::GetOversampleFactor, &GVMixShaperDesc_t::SetOversampleFactor)
        .addFunction("ToPtr", &GVMixShaperDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixShaperDesc_t::IsValid)
        .endClass();
}
GCSoundInfoHeader::GCSoundInfoHeader(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSoundInfoHeader::GCSoundInfoHeader(void *ptr) {
    m_ptr = ptr;
}
void* GCSoundInfoHeader::GetPtr() {
    return m_ptr;
}
std::string GCSoundInfoHeader::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSoundInfoHeader::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSoundInfoHeader(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSoundInfoHeader>("CSoundInfoHeader")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GCSoundInfoHeader::ToPtr)
        .addFunction("IsValid", &GCSoundInfoHeader::IsValid)
        .endClass();
}
GCVoiceContainerDecayingSineWave::GCVoiceContainerDecayingSineWave(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCVoiceContainerDecayingSineWave::GCVoiceContainerDecayingSineWave(void *ptr) {
    m_ptr = ptr;
}
float GCVoiceContainerDecayingSineWave::GetFrequency() const {
    return GetSchemaValue<float>(m_ptr, "CVoiceContainerDecayingSineWave", "m_flFrequency");
}
void GCVoiceContainerDecayingSineWave::SetFrequency(float value) {
    SetSchemaValue(m_ptr, "CVoiceContainerDecayingSineWave", "m_flFrequency", false, value);
}
float GCVoiceContainerDecayingSineWave::GetDecayTime() const {
    return GetSchemaValue<float>(m_ptr, "CVoiceContainerDecayingSineWave", "m_flDecayTime");
}
void GCVoiceContainerDecayingSineWave::SetDecayTime(float value) {
    SetSchemaValue(m_ptr, "CVoiceContainerDecayingSineWave", "m_flDecayTime", false, value);
}
void* GCVoiceContainerDecayingSineWave::GetPtr() {
    return m_ptr;
}
std::string GCVoiceContainerDecayingSineWave::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCVoiceContainerDecayingSineWave::IsValid() {
    return (m_ptr != nullptr);
}
GCVoiceContainerBase GCVoiceContainerDecayingSineWave::GetParent() const {
    GCVoiceContainerBase value(m_ptr);
    return value;
}
void GCVoiceContainerDecayingSineWave::SetParent(GCVoiceContainerBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCVoiceContainerDecayingSineWave(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCVoiceContainerDecayingSineWave>("CVoiceContainerDecayingSineWave")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Frequency", &GCVoiceContainerDecayingSineWave::GetFrequency, &GCVoiceContainerDecayingSineWave::SetFrequency)
        .addProperty("DecayTime", &GCVoiceContainerDecayingSineWave::GetDecayTime, &GCVoiceContainerDecayingSineWave::SetDecayTime)
        .addProperty("Parent", &GCVoiceContainerDecayingSineWave::GetParent, &GCVoiceContainerDecayingSineWave::SetParent)
        .addFunction("ToPtr", &GCVoiceContainerDecayingSineWave::ToPtr)
        .addFunction("IsValid", &GCVoiceContainerDecayingSineWave::IsValid)
        .endClass();
}
GCCycleControlClipUpdateNode::GCCycleControlClipUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCCycleControlClipUpdateNode::GCCycleControlClipUpdateNode(void *ptr) {
    m_ptr = ptr;
}
std::vector<GTagSpan_t> GCCycleControlClipUpdateNode::GetTags() const {
    CUtlVector<GTagSpan_t>* vec = GetSchemaValue<CUtlVector<GTagSpan_t>*>(m_ptr, "CCycleControlClipUpdateNode", "m_tags"); std::vector<GTagSpan_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCCycleControlClipUpdateNode::SetTags(std::vector<GTagSpan_t> value) {
    SetSchemaValueCUtlVector<GTagSpan_t>(m_ptr, "CCycleControlClipUpdateNode", "m_tags", false, value);
}
float GCCycleControlClipUpdateNode::GetDuration() const {
    return GetSchemaValue<float>(m_ptr, "CCycleControlClipUpdateNode", "m_duration");
}
void GCCycleControlClipUpdateNode::SetDuration(float value) {
    SetSchemaValue(m_ptr, "CCycleControlClipUpdateNode", "m_duration", false, value);
}
uint64_t GCCycleControlClipUpdateNode::GetValueSource() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CCycleControlClipUpdateNode", "m_valueSource");
}
void GCCycleControlClipUpdateNode::SetValueSource(uint64_t value) {
    SetSchemaValue(m_ptr, "CCycleControlClipUpdateNode", "m_valueSource", false, value);
}
GCAnimParamHandle GCCycleControlClipUpdateNode::GetParamIndex() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CCycleControlClipUpdateNode", "m_paramIndex"));
    return value;
}
void GCCycleControlClipUpdateNode::SetParamIndex(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParamIndex' is not possible.\n");
}
void* GCCycleControlClipUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCCycleControlClipUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCCycleControlClipUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCLeafUpdateNode GCCycleControlClipUpdateNode::GetParent() const {
    GCLeafUpdateNode value(m_ptr);
    return value;
}
void GCCycleControlClipUpdateNode::SetParent(GCLeafUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCCycleControlClipUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCCycleControlClipUpdateNode>("CCycleControlClipUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Tags", &GCCycleControlClipUpdateNode::GetTags, &GCCycleControlClipUpdateNode::SetTags)
        .addProperty("Duration", &GCCycleControlClipUpdateNode::GetDuration, &GCCycleControlClipUpdateNode::SetDuration)
        .addProperty("ValueSource", &GCCycleControlClipUpdateNode::GetValueSource, &GCCycleControlClipUpdateNode::SetValueSource)
        .addProperty("ParamIndex", &GCCycleControlClipUpdateNode::GetParamIndex, &GCCycleControlClipUpdateNode::SetParamIndex)
        .addProperty("Parent", &GCCycleControlClipUpdateNode::GetParent, &GCCycleControlClipUpdateNode::SetParent)
        .addFunction("ToPtr", &GCCycleControlClipUpdateNode::ToPtr)
        .addFunction("IsValid", &GCCycleControlClipUpdateNode::IsValid)
        .endClass();
}
GCBaseTrailRenderer::GCBaseTrailRenderer(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBaseTrailRenderer::GCBaseTrailRenderer(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCBaseTrailRenderer::GetOrientationType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CBaseTrailRenderer", "m_nOrientationType");
}
void GCBaseTrailRenderer::SetOrientationType(uint64_t value) {
    SetSchemaValue(m_ptr, "CBaseTrailRenderer", "m_nOrientationType", false, value);
}
int32_t GCBaseTrailRenderer::GetOrientationControlPoint() const {
    return GetSchemaValue<int32_t>(m_ptr, "CBaseTrailRenderer", "m_nOrientationControlPoint");
}
void GCBaseTrailRenderer::SetOrientationControlPoint(int32_t value) {
    SetSchemaValue(m_ptr, "CBaseTrailRenderer", "m_nOrientationControlPoint", false, value);
}
float GCBaseTrailRenderer::GetMinSize() const {
    return GetSchemaValue<float>(m_ptr, "CBaseTrailRenderer", "m_flMinSize");
}
void GCBaseTrailRenderer::SetMinSize(float value) {
    SetSchemaValue(m_ptr, "CBaseTrailRenderer", "m_flMinSize", false, value);
}
float GCBaseTrailRenderer::GetMaxSize() const {
    return GetSchemaValue<float>(m_ptr, "CBaseTrailRenderer", "m_flMaxSize");
}
void GCBaseTrailRenderer::SetMaxSize(float value) {
    SetSchemaValue(m_ptr, "CBaseTrailRenderer", "m_flMaxSize", false, value);
}
GCParticleCollectionRendererFloatInput GCBaseTrailRenderer::GetStartFadeSize() const {
    GCParticleCollectionRendererFloatInput value(GetSchemaPtr(m_ptr, "CBaseTrailRenderer", "m_flStartFadeSize"));
    return value;
}
void GCBaseTrailRenderer::SetStartFadeSize(GCParticleCollectionRendererFloatInput value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'StartFadeSize' is not possible.\n");
}
GCParticleCollectionRendererFloatInput GCBaseTrailRenderer::GetEndFadeSize() const {
    GCParticleCollectionRendererFloatInput value(GetSchemaPtr(m_ptr, "CBaseTrailRenderer", "m_flEndFadeSize"));
    return value;
}
void GCBaseTrailRenderer::SetEndFadeSize(GCParticleCollectionRendererFloatInput value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'EndFadeSize' is not possible.\n");
}
bool GCBaseTrailRenderer::GetClampV() const {
    return GetSchemaValue<bool>(m_ptr, "CBaseTrailRenderer", "m_bClampV");
}
void GCBaseTrailRenderer::SetClampV(bool value) {
    SetSchemaValue(m_ptr, "CBaseTrailRenderer", "m_bClampV", false, value);
}
void* GCBaseTrailRenderer::GetPtr() {
    return m_ptr;
}
std::string GCBaseTrailRenderer::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBaseTrailRenderer::IsValid() {
    return (m_ptr != nullptr);
}
GCBaseRendererSource2 GCBaseTrailRenderer::GetParent() const {
    GCBaseRendererSource2 value(m_ptr);
    return value;
}
void GCBaseTrailRenderer::SetParent(GCBaseRendererSource2 value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCBaseTrailRenderer(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBaseTrailRenderer>("CBaseTrailRenderer")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OrientationType", &GCBaseTrailRenderer::GetOrientationType, &GCBaseTrailRenderer::SetOrientationType)
        .addProperty("OrientationControlPoint", &GCBaseTrailRenderer::GetOrientationControlPoint, &GCBaseTrailRenderer::SetOrientationControlPoint)
        .addProperty("MinSize", &GCBaseTrailRenderer::GetMinSize, &GCBaseTrailRenderer::SetMinSize)
        .addProperty("MaxSize", &GCBaseTrailRenderer::GetMaxSize, &GCBaseTrailRenderer::SetMaxSize)
        .addProperty("StartFadeSize", &GCBaseTrailRenderer::GetStartFadeSize, &GCBaseTrailRenderer::SetStartFadeSize)
        .addProperty("EndFadeSize", &GCBaseTrailRenderer::GetEndFadeSize, &GCBaseTrailRenderer::SetEndFadeSize)
        .addProperty("ClampV", &GCBaseTrailRenderer::GetClampV, &GCBaseTrailRenderer::SetClampV)
        .addProperty("Parent", &GCBaseTrailRenderer::GetParent, &GCBaseTrailRenderer::SetParent)
        .addFunction("ToPtr", &GCBaseTrailRenderer::ToPtr)
        .addFunction("IsValid", &GCBaseTrailRenderer::IsValid)
        .endClass();
}
GCBoneConstraintPoseSpaceBone::GCBoneConstraintPoseSpaceBone(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBoneConstraintPoseSpaceBone::GCBoneConstraintPoseSpaceBone(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCBoneConstraintPoseSpaceBone> GCBoneConstraintPoseSpaceBone::GetInputList() const {
    CUtlVector<GCBoneConstraintPoseSpaceBone>* vec = GetSchemaValue<CUtlVector<GCBoneConstraintPoseSpaceBone>*>(m_ptr, "CBoneConstraintPoseSpaceBone", "m_inputList"); std::vector<GCBoneConstraintPoseSpaceBone> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCBoneConstraintPoseSpaceBone::SetInputList(std::vector<GCBoneConstraintPoseSpaceBone> value) {
    SetSchemaValueCUtlVector<GCBoneConstraintPoseSpaceBone>(m_ptr, "CBoneConstraintPoseSpaceBone", "m_inputList", false, value);
}
void* GCBoneConstraintPoseSpaceBone::GetPtr() {
    return m_ptr;
}
std::string GCBoneConstraintPoseSpaceBone::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBoneConstraintPoseSpaceBone::IsValid() {
    return (m_ptr != nullptr);
}
GCBaseConstraint GCBoneConstraintPoseSpaceBone::GetParent() const {
    GCBaseConstraint value(m_ptr);
    return value;
}
void GCBoneConstraintPoseSpaceBone::SetParent(GCBaseConstraint value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCBoneConstraintPoseSpaceBone(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBoneConstraintPoseSpaceBone>("CBoneConstraintPoseSpaceBone")
        .addConstructor<void (*)(std::string)>()
        .addProperty("InputList", &GCBoneConstraintPoseSpaceBone::GetInputList, &GCBoneConstraintPoseSpaceBone::SetInputList)
        .addProperty("Parent", &GCBoneConstraintPoseSpaceBone::GetParent, &GCBoneConstraintPoseSpaceBone::SetParent)
        .addFunction("ToPtr", &GCBoneConstraintPoseSpaceBone::ToPtr)
        .addFunction("IsValid", &GCBoneConstraintPoseSpaceBone::IsValid)
        .endClass();
}
GEventServerPostSimulate_t::GEventServerPostSimulate_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventServerPostSimulate_t::GEventServerPostSimulate_t(void *ptr) {
    m_ptr = ptr;
}
void* GEventServerPostSimulate_t::GetPtr() {
    return m_ptr;
}
std::string GEventServerPostSimulate_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventServerPostSimulate_t::IsValid() {
    return (m_ptr != nullptr);
}
GEventSimulate_t GEventServerPostSimulate_t::GetParent() const {
    GEventSimulate_t value(m_ptr);
    return value;
}
void GEventServerPostSimulate_t::SetParent(GEventSimulate_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassEventServerPostSimulate_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventServerPostSimulate_t>("EventServerPostSimulate_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GEventServerPostSimulate_t::GetParent, &GEventServerPostSimulate_t::SetParent)
        .addFunction("ToPtr", &GEventServerPostSimulate_t::ToPtr)
        .addFunction("IsValid", &GEventServerPostSimulate_t::IsValid)
        .endClass();
}
GCChoreoUpdateNode::GCChoreoUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCChoreoUpdateNode::GCChoreoUpdateNode(void *ptr) {
    m_ptr = ptr;
}
void* GCChoreoUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCChoreoUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCChoreoUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCChoreoUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCChoreoUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCChoreoUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCChoreoUpdateNode>("CChoreoUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCChoreoUpdateNode::GetParent, &GCChoreoUpdateNode::SetParent)
        .addFunction("ToPtr", &GCChoreoUpdateNode::ToPtr)
        .addFunction("IsValid", &GCChoreoUpdateNode::IsValid)
        .endClass();
}
GCNmSkeleton::GCNmSkeleton(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmSkeleton::GCNmSkeleton(void *ptr) {
    m_ptr = ptr;
}
std::vector<int32> GCNmSkeleton::GetParentIndices() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "CNmSkeleton", "m_parentIndices"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCNmSkeleton::SetParentIndices(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "CNmSkeleton", "m_parentIndices", false, value);
}
int32_t GCNmSkeleton::GetNumBonesToSampleAtLowLOD() const {
    return GetSchemaValue<int32_t>(m_ptr, "CNmSkeleton", "m_numBonesToSampleAtLowLOD");
}
void GCNmSkeleton::SetNumBonesToSampleAtLowLOD(int32_t value) {
    SetSchemaValue(m_ptr, "CNmSkeleton", "m_numBonesToSampleAtLowLOD", false, value);
}
void* GCNmSkeleton::GetPtr() {
    return m_ptr;
}
std::string GCNmSkeleton::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmSkeleton::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmSkeleton(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmSkeleton>("CNmSkeleton")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ParentIndices", &GCNmSkeleton::GetParentIndices, &GCNmSkeleton::SetParentIndices)
        .addProperty("NumBonesToSampleAtLowLOD", &GCNmSkeleton::GetNumBonesToSampleAtLowLOD, &GCNmSkeleton::SetNumBonesToSampleAtLowLOD)
        .addFunction("ToPtr", &GCNmSkeleton::ToPtr)
        .addFunction("IsValid", &GCNmSkeleton::IsValid)
        .endClass();
}
GVMixBoxverbDesc_t::GVMixBoxverbDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixBoxverbDesc_t::GVMixBoxverbDesc_t(void *ptr) {
    m_ptr = ptr;
}
float GVMixBoxverbDesc_t::GetSizeMax() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flSizeMax");
}
void GVMixBoxverbDesc_t::SetSizeMax(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flSizeMax", true, value);
}
float GVMixBoxverbDesc_t::GetSizeMin() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flSizeMin");
}
void GVMixBoxverbDesc_t::SetSizeMin(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flSizeMin", true, value);
}
float GVMixBoxverbDesc_t::GetComplexity() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flComplexity");
}
void GVMixBoxverbDesc_t::SetComplexity(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flComplexity", true, value);
}
float GVMixBoxverbDesc_t::GetDiffusion() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flDiffusion");
}
void GVMixBoxverbDesc_t::SetDiffusion(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flDiffusion", true, value);
}
float GVMixBoxverbDesc_t::GetModDepth() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flModDepth");
}
void GVMixBoxverbDesc_t::SetModDepth(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flModDepth", true, value);
}
float GVMixBoxverbDesc_t::GetModRate() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flModRate");
}
void GVMixBoxverbDesc_t::SetModRate(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flModRate", true, value);
}
bool GVMixBoxverbDesc_t::GetParallel() const {
    return GetSchemaValue<bool>(m_ptr, "VMixBoxverbDesc_t", "m_bParallel");
}
void GVMixBoxverbDesc_t::SetParallel(bool value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_bParallel", true, value);
}
GVMixFilterDesc_t GVMixBoxverbDesc_t::GetFilterType() const {
    GVMixFilterDesc_t value(GetSchemaPtr(m_ptr, "VMixBoxverbDesc_t", "m_filterType"));
    return value;
}
void GVMixBoxverbDesc_t::SetFilterType(GVMixFilterDesc_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FilterType' is not possible.\n");
}
float GVMixBoxverbDesc_t::GetWidth() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flWidth");
}
void GVMixBoxverbDesc_t::SetWidth(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flWidth", true, value);
}
float GVMixBoxverbDesc_t::GetHeight() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flHeight");
}
void GVMixBoxverbDesc_t::SetHeight(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flHeight", true, value);
}
float GVMixBoxverbDesc_t::GetDepth() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flDepth");
}
void GVMixBoxverbDesc_t::SetDepth(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flDepth", true, value);
}
float GVMixBoxverbDesc_t::GetFeedbackScale() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackScale");
}
void GVMixBoxverbDesc_t::SetFeedbackScale(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackScale", true, value);
}
float GVMixBoxverbDesc_t::GetFeedbackWidth() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackWidth");
}
void GVMixBoxverbDesc_t::SetFeedbackWidth(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackWidth", true, value);
}
float GVMixBoxverbDesc_t::GetFeedbackHeight() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackHeight");
}
void GVMixBoxverbDesc_t::SetFeedbackHeight(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackHeight", true, value);
}
float GVMixBoxverbDesc_t::GetFeedbackDepth() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackDepth");
}
void GVMixBoxverbDesc_t::SetFeedbackDepth(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flFeedbackDepth", true, value);
}
float GVMixBoxverbDesc_t::GetOutputGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flOutputGain");
}
void GVMixBoxverbDesc_t::SetOutputGain(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flOutputGain", true, value);
}
float GVMixBoxverbDesc_t::GetTaps() const {
    return GetSchemaValue<float>(m_ptr, "VMixBoxverbDesc_t", "m_flTaps");
}
void GVMixBoxverbDesc_t::SetTaps(float value) {
    SetSchemaValue(m_ptr, "VMixBoxverbDesc_t", "m_flTaps", true, value);
}
void* GVMixBoxverbDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixBoxverbDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixBoxverbDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixBoxverbDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixBoxverbDesc_t>("VMixBoxverbDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SizeMax", &GVMixBoxverbDesc_t::GetSizeMax, &GVMixBoxverbDesc_t::SetSizeMax)
        .addProperty("SizeMin", &GVMixBoxverbDesc_t::GetSizeMin, &GVMixBoxverbDesc_t::SetSizeMin)
        .addProperty("Complexity", &GVMixBoxverbDesc_t::GetComplexity, &GVMixBoxverbDesc_t::SetComplexity)
        .addProperty("Diffusion", &GVMixBoxverbDesc_t::GetDiffusion, &GVMixBoxverbDesc_t::SetDiffusion)
        .addProperty("ModDepth", &GVMixBoxverbDesc_t::GetModDepth, &GVMixBoxverbDesc_t::SetModDepth)
        .addProperty("ModRate", &GVMixBoxverbDesc_t::GetModRate, &GVMixBoxverbDesc_t::SetModRate)
        .addProperty("Parallel", &GVMixBoxverbDesc_t::GetParallel, &GVMixBoxverbDesc_t::SetParallel)
        .addProperty("FilterType", &GVMixBoxverbDesc_t::GetFilterType, &GVMixBoxverbDesc_t::SetFilterType)
        .addProperty("Width", &GVMixBoxverbDesc_t::GetWidth, &GVMixBoxverbDesc_t::SetWidth)
        .addProperty("Height", &GVMixBoxverbDesc_t::GetHeight, &GVMixBoxverbDesc_t::SetHeight)
        .addProperty("Depth", &GVMixBoxverbDesc_t::GetDepth, &GVMixBoxverbDesc_t::SetDepth)
        .addProperty("FeedbackScale", &GVMixBoxverbDesc_t::GetFeedbackScale, &GVMixBoxverbDesc_t::SetFeedbackScale)
        .addProperty("FeedbackWidth", &GVMixBoxverbDesc_t::GetFeedbackWidth, &GVMixBoxverbDesc_t::SetFeedbackWidth)
        .addProperty("FeedbackHeight", &GVMixBoxverbDesc_t::GetFeedbackHeight, &GVMixBoxverbDesc_t::SetFeedbackHeight)
        .addProperty("FeedbackDepth", &GVMixBoxverbDesc_t::GetFeedbackDepth, &GVMixBoxverbDesc_t::SetFeedbackDepth)
        .addProperty("OutputGain", &GVMixBoxverbDesc_t::GetOutputGain, &GVMixBoxverbDesc_t::SetOutputGain)
        .addProperty("Taps", &GVMixBoxverbDesc_t::GetTaps, &GVMixBoxverbDesc_t::SetTaps)
        .addFunction("ToPtr", &GVMixBoxverbDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixBoxverbDesc_t::IsValid)
        .endClass();
}
GFeTreeChildren_t::GFeTreeChildren_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeTreeChildren_t::GFeTreeChildren_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<uint16_t> GFeTreeChildren_t::GetChild() const {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeTreeChildren_t", "nChild"); std::vector<uint16_t> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeTreeChildren_t::SetChild(std::vector<uint16_t> value) {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeTreeChildren_t", "nChild"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeTreeChildren_t", "nChild", true, outValue);
}
void* GFeTreeChildren_t::GetPtr() {
    return m_ptr;
}
std::string GFeTreeChildren_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeTreeChildren_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeTreeChildren_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeTreeChildren_t>("FeTreeChildren_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Child", &GFeTreeChildren_t::GetChild, &GFeTreeChildren_t::SetChild)
        .addFunction("ToPtr", &GFeTreeChildren_t::ToPtr)
        .addFunction("IsValid", &GFeTreeChildren_t::IsValid)
        .endClass();
}
GCSceneObjectData::GCSceneObjectData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSceneObjectData::GCSceneObjectData(void *ptr) {
    m_ptr = ptr;
}
Vector GCSceneObjectData::GetMinBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "CSceneObjectData", "m_vMinBounds");
}
void GCSceneObjectData::SetMinBounds(Vector value) {
    SetSchemaValue(m_ptr, "CSceneObjectData", "m_vMinBounds", false, value);
}
Vector GCSceneObjectData::GetMaxBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "CSceneObjectData", "m_vMaxBounds");
}
void GCSceneObjectData::SetMaxBounds(Vector value) {
    SetSchemaValue(m_ptr, "CSceneObjectData", "m_vMaxBounds", false, value);
}
std::vector<GCMaterialDrawDescriptor> GCSceneObjectData::GetDrawCalls() const {
    CUtlVector<GCMaterialDrawDescriptor>* vec = GetSchemaValue<CUtlVector<GCMaterialDrawDescriptor>*>(m_ptr, "CSceneObjectData", "m_drawCalls"); std::vector<GCMaterialDrawDescriptor> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSceneObjectData::SetDrawCalls(std::vector<GCMaterialDrawDescriptor> value) {
    SetSchemaValueCUtlVector<GCMaterialDrawDescriptor>(m_ptr, "CSceneObjectData", "m_drawCalls", false, value);
}
std::vector<GAABB_t> GCSceneObjectData::GetDrawBounds() const {
    CUtlVector<GAABB_t>* vec = GetSchemaValue<CUtlVector<GAABB_t>*>(m_ptr, "CSceneObjectData", "m_drawBounds"); std::vector<GAABB_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSceneObjectData::SetDrawBounds(std::vector<GAABB_t> value) {
    SetSchemaValueCUtlVector<GAABB_t>(m_ptr, "CSceneObjectData", "m_drawBounds", false, value);
}
std::vector<GCMeshletDescriptor> GCSceneObjectData::GetMeshlets() const {
    CUtlVector<GCMeshletDescriptor>* vec = GetSchemaValue<CUtlVector<GCMeshletDescriptor>*>(m_ptr, "CSceneObjectData", "m_meshlets"); std::vector<GCMeshletDescriptor> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSceneObjectData::SetMeshlets(std::vector<GCMeshletDescriptor> value) {
    SetSchemaValueCUtlVector<GCMeshletDescriptor>(m_ptr, "CSceneObjectData", "m_meshlets", false, value);
}
Vector4D GCSceneObjectData::GetTintColor() const {
    return GetSchemaValue<Vector4D>(m_ptr, "CSceneObjectData", "m_vTintColor");
}
void GCSceneObjectData::SetTintColor(Vector4D value) {
    SetSchemaValue(m_ptr, "CSceneObjectData", "m_vTintColor", false, value);
}
void* GCSceneObjectData::GetPtr() {
    return m_ptr;
}
std::string GCSceneObjectData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSceneObjectData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSceneObjectData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSceneObjectData>("CSceneObjectData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MinBounds", &GCSceneObjectData::GetMinBounds, &GCSceneObjectData::SetMinBounds)
        .addProperty("MaxBounds", &GCSceneObjectData::GetMaxBounds, &GCSceneObjectData::SetMaxBounds)
        .addProperty("DrawCalls", &GCSceneObjectData::GetDrawCalls, &GCSceneObjectData::SetDrawCalls)
        .addProperty("DrawBounds", &GCSceneObjectData::GetDrawBounds, &GCSceneObjectData::SetDrawBounds)
        .addProperty("Meshlets", &GCSceneObjectData::GetMeshlets, &GCSceneObjectData::SetMeshlets)
        .addProperty("TintColor", &GCSceneObjectData::GetTintColor, &GCSceneObjectData::SetTintColor)
        .addFunction("ToPtr", &GCSceneObjectData::ToPtr)
        .addFunction("IsValid", &GCSceneObjectData::IsValid)
        .endClass();
}
GStanceInfo_t::GStanceInfo_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GStanceInfo_t::GStanceInfo_t(void *ptr) {
    m_ptr = ptr;
}
Vector GStanceInfo_t::GetPosition() const {
    return GetSchemaValue<Vector>(m_ptr, "StanceInfo_t", "m_vPosition");
}
void GStanceInfo_t::SetPosition(Vector value) {
    SetSchemaValue(m_ptr, "StanceInfo_t", "m_vPosition", true, value);
}
float GStanceInfo_t::GetDirection() const {
    return GetSchemaValue<float>(m_ptr, "StanceInfo_t", "m_flDirection");
}
void GStanceInfo_t::SetDirection(float value) {
    SetSchemaValue(m_ptr, "StanceInfo_t", "m_flDirection", true, value);
}
void* GStanceInfo_t::GetPtr() {
    return m_ptr;
}
std::string GStanceInfo_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GStanceInfo_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassStanceInfo_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GStanceInfo_t>("StanceInfo_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Position", &GStanceInfo_t::GetPosition, &GStanceInfo_t::SetPosition)
        .addProperty("Direction", &GStanceInfo_t::GetDirection, &GStanceInfo_t::SetDirection)
        .addFunction("ToPtr", &GStanceInfo_t::ToPtr)
        .addFunction("IsValid", &GStanceInfo_t::IsValid)
        .endClass();
}
GCMotionNodeSequence::GCMotionNodeSequence(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionNodeSequence::GCMotionNodeSequence(void *ptr) {
    m_ptr = ptr;
}
std::vector<GTagSpan_t> GCMotionNodeSequence::GetTags() const {
    CUtlVector<GTagSpan_t>* vec = GetSchemaValue<CUtlVector<GTagSpan_t>*>(m_ptr, "CMotionNodeSequence", "m_tags"); std::vector<GTagSpan_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionNodeSequence::SetTags(std::vector<GTagSpan_t> value) {
    SetSchemaValueCUtlVector<GTagSpan_t>(m_ptr, "CMotionNodeSequence", "m_tags", false, value);
}
float GCMotionNodeSequence::GetPlaybackSpeed() const {
    return GetSchemaValue<float>(m_ptr, "CMotionNodeSequence", "m_flPlaybackSpeed");
}
void GCMotionNodeSequence::SetPlaybackSpeed(float value) {
    SetSchemaValue(m_ptr, "CMotionNodeSequence", "m_flPlaybackSpeed", false, value);
}
void* GCMotionNodeSequence::GetPtr() {
    return m_ptr;
}
std::string GCMotionNodeSequence::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionNodeSequence::IsValid() {
    return (m_ptr != nullptr);
}
GCMotionNode GCMotionNodeSequence::GetParent() const {
    GCMotionNode value(m_ptr);
    return value;
}
void GCMotionNodeSequence::SetParent(GCMotionNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCMotionNodeSequence(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionNodeSequence>("CMotionNodeSequence")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Tags", &GCMotionNodeSequence::GetTags, &GCMotionNodeSequence::SetTags)
        .addProperty("PlaybackSpeed", &GCMotionNodeSequence::GetPlaybackSpeed, &GCMotionNodeSequence::SetPlaybackSpeed)
        .addProperty("Parent", &GCMotionNodeSequence::GetParent, &GCMotionNodeSequence::SetParent)
        .addFunction("ToPtr", &GCMotionNodeSequence::ToPtr)
        .addFunction("IsValid", &GCMotionNodeSequence::IsValid)
        .endClass();
}
GCFootCycleDefinition::GCFootCycleDefinition(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootCycleDefinition::GCFootCycleDefinition(void *ptr) {
    m_ptr = ptr;
}
Vector GCFootCycleDefinition::GetStancePositionMS() const {
    return GetSchemaValue<Vector>(m_ptr, "CFootCycleDefinition", "m_vStancePositionMS");
}
void GCFootCycleDefinition::SetStancePositionMS(Vector value) {
    SetSchemaValue(m_ptr, "CFootCycleDefinition", "m_vStancePositionMS", false, value);
}
Vector GCFootCycleDefinition::GetMidpointPositionMS() const {
    return GetSchemaValue<Vector>(m_ptr, "CFootCycleDefinition", "m_vMidpointPositionMS");
}
void GCFootCycleDefinition::SetMidpointPositionMS(Vector value) {
    SetSchemaValue(m_ptr, "CFootCycleDefinition", "m_vMidpointPositionMS", false, value);
}
float GCFootCycleDefinition::GetStanceDirectionMS() const {
    return GetSchemaValue<float>(m_ptr, "CFootCycleDefinition", "m_flStanceDirectionMS");
}
void GCFootCycleDefinition::SetStanceDirectionMS(float value) {
    SetSchemaValue(m_ptr, "CFootCycleDefinition", "m_flStanceDirectionMS", false, value);
}
Vector GCFootCycleDefinition::GetToStrideStartPos() const {
    return GetSchemaValue<Vector>(m_ptr, "CFootCycleDefinition", "m_vToStrideStartPos");
}
void GCFootCycleDefinition::SetToStrideStartPos(Vector value) {
    SetSchemaValue(m_ptr, "CFootCycleDefinition", "m_vToStrideStartPos", false, value);
}
GCAnimCycle GCFootCycleDefinition::GetStanceCycle() const {
    GCAnimCycle value(GetSchemaPtr(m_ptr, "CFootCycleDefinition", "m_stanceCycle"));
    return value;
}
void GCFootCycleDefinition::SetStanceCycle(GCAnimCycle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'StanceCycle' is not possible.\n");
}
GCFootCycle GCFootCycleDefinition::GetFootLiftCycle() const {
    GCFootCycle value(GetSchemaPtr(m_ptr, "CFootCycleDefinition", "m_footLiftCycle"));
    return value;
}
void GCFootCycleDefinition::SetFootLiftCycle(GCFootCycle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FootLiftCycle' is not possible.\n");
}
GCFootCycle GCFootCycleDefinition::GetFootOffCycle() const {
    GCFootCycle value(GetSchemaPtr(m_ptr, "CFootCycleDefinition", "m_footOffCycle"));
    return value;
}
void GCFootCycleDefinition::SetFootOffCycle(GCFootCycle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FootOffCycle' is not possible.\n");
}
GCFootCycle GCFootCycleDefinition::GetFootStrikeCycle() const {
    GCFootCycle value(GetSchemaPtr(m_ptr, "CFootCycleDefinition", "m_footStrikeCycle"));
    return value;
}
void GCFootCycleDefinition::SetFootStrikeCycle(GCFootCycle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FootStrikeCycle' is not possible.\n");
}
GCFootCycle GCFootCycleDefinition::GetFootLandCycle() const {
    GCFootCycle value(GetSchemaPtr(m_ptr, "CFootCycleDefinition", "m_footLandCycle"));
    return value;
}
void GCFootCycleDefinition::SetFootLandCycle(GCFootCycle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FootLandCycle' is not possible.\n");
}
void* GCFootCycleDefinition::GetPtr() {
    return m_ptr;
}
std::string GCFootCycleDefinition::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootCycleDefinition::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFootCycleDefinition(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootCycleDefinition>("CFootCycleDefinition")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StancePositionMS", &GCFootCycleDefinition::GetStancePositionMS, &GCFootCycleDefinition::SetStancePositionMS)
        .addProperty("MidpointPositionMS", &GCFootCycleDefinition::GetMidpointPositionMS, &GCFootCycleDefinition::SetMidpointPositionMS)
        .addProperty("StanceDirectionMS", &GCFootCycleDefinition::GetStanceDirectionMS, &GCFootCycleDefinition::SetStanceDirectionMS)
        .addProperty("ToStrideStartPos", &GCFootCycleDefinition::GetToStrideStartPos, &GCFootCycleDefinition::SetToStrideStartPos)
        .addProperty("StanceCycle", &GCFootCycleDefinition::GetStanceCycle, &GCFootCycleDefinition::SetStanceCycle)
        .addProperty("FootLiftCycle", &GCFootCycleDefinition::GetFootLiftCycle, &GCFootCycleDefinition::SetFootLiftCycle)
        .addProperty("FootOffCycle", &GCFootCycleDefinition::GetFootOffCycle, &GCFootCycleDefinition::SetFootOffCycle)
        .addProperty("FootStrikeCycle", &GCFootCycleDefinition::GetFootStrikeCycle, &GCFootCycleDefinition::SetFootStrikeCycle)
        .addProperty("FootLandCycle", &GCFootCycleDefinition::GetFootLandCycle, &GCFootCycleDefinition::SetFootLandCycle)
        .addFunction("ToPtr", &GCFootCycleDefinition::ToPtr)
        .addFunction("IsValid", &GCFootCycleDefinition::IsValid)
        .endClass();
}
GCAnimDesc_Flag::GCAnimDesc_Flag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimDesc_Flag::GCAnimDesc_Flag(void *ptr) {
    m_ptr = ptr;
}
bool GCAnimDesc_Flag::GetLooping() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bLooping");
}
void GCAnimDesc_Flag::SetLooping(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bLooping", false, value);
}
bool GCAnimDesc_Flag::GetAllZeros() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bAllZeros");
}
void GCAnimDesc_Flag::SetAllZeros(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bAllZeros", false, value);
}
bool GCAnimDesc_Flag::GetHidden() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bHidden");
}
void GCAnimDesc_Flag::SetHidden(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bHidden", false, value);
}
bool GCAnimDesc_Flag::GetDelta() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bDelta");
}
void GCAnimDesc_Flag::SetDelta(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bDelta", false, value);
}
bool GCAnimDesc_Flag::GetLegacyWorldspace() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bLegacyWorldspace");
}
void GCAnimDesc_Flag::SetLegacyWorldspace(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bLegacyWorldspace", false, value);
}
bool GCAnimDesc_Flag::GetModelDoc() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bModelDoc");
}
void GCAnimDesc_Flag::SetModelDoc(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bModelDoc", false, value);
}
bool GCAnimDesc_Flag::GetImplicitSeqIgnoreDelta() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bImplicitSeqIgnoreDelta");
}
void GCAnimDesc_Flag::SetImplicitSeqIgnoreDelta(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bImplicitSeqIgnoreDelta", false, value);
}
bool GCAnimDesc_Flag::GetAnimGraphAdditive() const {
    return GetSchemaValue<bool>(m_ptr, "CAnimDesc_Flag", "m_bAnimGraphAdditive");
}
void GCAnimDesc_Flag::SetAnimGraphAdditive(bool value) {
    SetSchemaValue(m_ptr, "CAnimDesc_Flag", "m_bAnimGraphAdditive", false, value);
}
void* GCAnimDesc_Flag::GetPtr() {
    return m_ptr;
}
std::string GCAnimDesc_Flag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimDesc_Flag::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimDesc_Flag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimDesc_Flag>("CAnimDesc_Flag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Looping", &GCAnimDesc_Flag::GetLooping, &GCAnimDesc_Flag::SetLooping)
        .addProperty("AllZeros", &GCAnimDesc_Flag::GetAllZeros, &GCAnimDesc_Flag::SetAllZeros)
        .addProperty("Hidden", &GCAnimDesc_Flag::GetHidden, &GCAnimDesc_Flag::SetHidden)
        .addProperty("Delta", &GCAnimDesc_Flag::GetDelta, &GCAnimDesc_Flag::SetDelta)
        .addProperty("LegacyWorldspace", &GCAnimDesc_Flag::GetLegacyWorldspace, &GCAnimDesc_Flag::SetLegacyWorldspace)
        .addProperty("ModelDoc", &GCAnimDesc_Flag::GetModelDoc, &GCAnimDesc_Flag::SetModelDoc)
        .addProperty("ImplicitSeqIgnoreDelta", &GCAnimDesc_Flag::GetImplicitSeqIgnoreDelta, &GCAnimDesc_Flag::SetImplicitSeqIgnoreDelta)
        .addProperty("AnimGraphAdditive", &GCAnimDesc_Flag::GetAnimGraphAdditive, &GCAnimDesc_Flag::SetAnimGraphAdditive)
        .addFunction("ToPtr", &GCAnimDesc_Flag::ToPtr)
        .addFunction("IsValid", &GCAnimDesc_Flag::IsValid)
        .endClass();
}
GCBoneVelocityMetricEvaluator::GCBoneVelocityMetricEvaluator(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBoneVelocityMetricEvaluator::GCBoneVelocityMetricEvaluator(void *ptr) {
    m_ptr = ptr;
}
int32_t GCBoneVelocityMetricEvaluator::GetBoneIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CBoneVelocityMetricEvaluator", "m_nBoneIndex");
}
void GCBoneVelocityMetricEvaluator::SetBoneIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CBoneVelocityMetricEvaluator", "m_nBoneIndex", false, value);
}
void* GCBoneVelocityMetricEvaluator::GetPtr() {
    return m_ptr;
}
std::string GCBoneVelocityMetricEvaluator::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBoneVelocityMetricEvaluator::IsValid() {
    return (m_ptr != nullptr);
}
GCMotionMetricEvaluator GCBoneVelocityMetricEvaluator::GetParent() const {
    GCMotionMetricEvaluator value(m_ptr);
    return value;
}
void GCBoneVelocityMetricEvaluator::SetParent(GCMotionMetricEvaluator value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCBoneVelocityMetricEvaluator(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBoneVelocityMetricEvaluator>("CBoneVelocityMetricEvaluator")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BoneIndex", &GCBoneVelocityMetricEvaluator::GetBoneIndex, &GCBoneVelocityMetricEvaluator::SetBoneIndex)
        .addProperty("Parent", &GCBoneVelocityMetricEvaluator::GetParent, &GCBoneVelocityMetricEvaluator::SetParent)
        .addFunction("ToPtr", &GCBoneVelocityMetricEvaluator::ToPtr)
        .addFunction("IsValid", &GCBoneVelocityMetricEvaluator::IsValid)
        .endClass();
}
GCFuseProgram::GCFuseProgram(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFuseProgram::GCFuseProgram(void *ptr) {
    m_ptr = ptr;
}
std::vector<uint8> GCFuseProgram::GetProgramBuffer() const {
    CUtlVector<uint8>* vec = GetSchemaValue<CUtlVector<uint8>*>(m_ptr, "CFuseProgram", "m_programBuffer"); std::vector<uint8> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCFuseProgram::SetProgramBuffer(std::vector<uint8> value) {
    SetSchemaValueCUtlVector<uint8>(m_ptr, "CFuseProgram", "m_programBuffer", false, value);
}
std::vector<GFuseVariableIndex_t> GCFuseProgram::GetVariablesRead() const {
    CUtlVector<GFuseVariableIndex_t>* vec = GetSchemaValue<CUtlVector<GFuseVariableIndex_t>*>(m_ptr, "CFuseProgram", "m_variablesRead"); std::vector<GFuseVariableIndex_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCFuseProgram::SetVariablesRead(std::vector<GFuseVariableIndex_t> value) {
    SetSchemaValueCUtlVector<GFuseVariableIndex_t>(m_ptr, "CFuseProgram", "m_variablesRead", false, value);
}
std::vector<GFuseVariableIndex_t> GCFuseProgram::GetVariablesWritten() const {
    CUtlVector<GFuseVariableIndex_t>* vec = GetSchemaValue<CUtlVector<GFuseVariableIndex_t>*>(m_ptr, "CFuseProgram", "m_variablesWritten"); std::vector<GFuseVariableIndex_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCFuseProgram::SetVariablesWritten(std::vector<GFuseVariableIndex_t> value) {
    SetSchemaValueCUtlVector<GFuseVariableIndex_t>(m_ptr, "CFuseProgram", "m_variablesWritten", false, value);
}
int32_t GCFuseProgram::GetMaxTempVarsUsed() const {
    return GetSchemaValue<int32_t>(m_ptr, "CFuseProgram", "m_nMaxTempVarsUsed");
}
void GCFuseProgram::SetMaxTempVarsUsed(int32_t value) {
    SetSchemaValue(m_ptr, "CFuseProgram", "m_nMaxTempVarsUsed", false, value);
}
void* GCFuseProgram::GetPtr() {
    return m_ptr;
}
std::string GCFuseProgram::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFuseProgram::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFuseProgram(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFuseProgram>("CFuseProgram")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ProgramBuffer", &GCFuseProgram::GetProgramBuffer, &GCFuseProgram::SetProgramBuffer)
        .addProperty("VariablesRead", &GCFuseProgram::GetVariablesRead, &GCFuseProgram::SetVariablesRead)
        .addProperty("VariablesWritten", &GCFuseProgram::GetVariablesWritten, &GCFuseProgram::SetVariablesWritten)
        .addProperty("MaxTempVarsUsed", &GCFuseProgram::GetMaxTempVarsUsed, &GCFuseProgram::SetMaxTempVarsUsed)
        .addFunction("ToPtr", &GCFuseProgram::ToPtr)
        .addFunction("IsValid", &GCFuseProgram::IsValid)
        .endClass();
}
GCFeVertexMapBuildArray::GCFeVertexMapBuildArray(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFeVertexMapBuildArray::GCFeVertexMapBuildArray(void *ptr) {
    m_ptr = ptr;
}
std::vector<GFeVertexMapBuild_t*> GCFeVertexMapBuildArray::GetArray() const {
    CUtlVector<GFeVertexMapBuild_t*>* vec = GetSchemaValue<CUtlVector<GFeVertexMapBuild_t*>*>(m_ptr, "CFeVertexMapBuildArray", "m_Array"); std::vector<GFeVertexMapBuild_t*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCFeVertexMapBuildArray::SetArray(std::vector<GFeVertexMapBuild_t*> value) {
    SetSchemaValueCUtlVector<GFeVertexMapBuild_t*>(m_ptr, "CFeVertexMapBuildArray", "m_Array", false, value);
}
void* GCFeVertexMapBuildArray::GetPtr() {
    return m_ptr;
}
std::string GCFeVertexMapBuildArray::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFeVertexMapBuildArray::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFeVertexMapBuildArray(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFeVertexMapBuildArray>("CFeVertexMapBuildArray")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Array", &GCFeVertexMapBuildArray::GetArray, &GCFeVertexMapBuildArray::SetArray)
        .addFunction("ToPtr", &GCFeVertexMapBuildArray::ToPtr)
        .addFunction("IsValid", &GCFeVertexMapBuildArray::IsValid)
        .endClass();
}
GFeSoftParent_t::GFeSoftParent_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeSoftParent_t::GFeSoftParent_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GFeSoftParent_t::GetParent() const {
    return GetSchemaValue<int32_t>(m_ptr, "FeSoftParent_t", "nParent");
}
void GFeSoftParent_t::SetParent(int32_t value) {
    SetSchemaValue(m_ptr, "FeSoftParent_t", "nParent", true, value);
}
float GFeSoftParent_t::GetAlpha() const {
    return GetSchemaValue<float>(m_ptr, "FeSoftParent_t", "flAlpha");
}
void GFeSoftParent_t::SetAlpha(float value) {
    SetSchemaValue(m_ptr, "FeSoftParent_t", "flAlpha", true, value);
}
void* GFeSoftParent_t::GetPtr() {
    return m_ptr;
}
std::string GFeSoftParent_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeSoftParent_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeSoftParent_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeSoftParent_t>("FeSoftParent_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GFeSoftParent_t::GetParent, &GFeSoftParent_t::SetParent)
        .addProperty("Alpha", &GFeSoftParent_t::GetAlpha, &GFeSoftParent_t::SetAlpha)
        .addFunction("ToPtr", &GFeSoftParent_t::ToPtr)
        .addFunction("IsValid", &GFeSoftParent_t::IsValid)
        .endClass();
}
GCFootFallAnimTag::GCFootFallAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootFallAnimTag::GCFootFallAnimTag(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCFootFallAnimTag::GetFoot() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CFootFallAnimTag", "m_foot");
}
void GCFootFallAnimTag::SetFoot(uint64_t value) {
    SetSchemaValue(m_ptr, "CFootFallAnimTag", "m_foot", false, value);
}
void* GCFootFallAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCFootFallAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootFallAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimTagBase GCFootFallAnimTag::GetParent() const {
    GCAnimTagBase value(m_ptr);
    return value;
}
void GCFootFallAnimTag::SetParent(GCAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCFootFallAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootFallAnimTag>("CFootFallAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Foot", &GCFootFallAnimTag::GetFoot, &GCFootFallAnimTag::SetFoot)
        .addProperty("Parent", &GCFootFallAnimTag::GetParent, &GCFootFallAnimTag::SetParent)
        .addFunction("ToPtr", &GCFootFallAnimTag::ToPtr)
        .addFunction("IsValid", &GCFootFallAnimTag::IsValid)
        .endClass();
}
GEventClientOutput_t::GEventClientOutput_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientOutput_t::GEventClientOutput_t(void *ptr) {
    m_ptr = ptr;
}
GEngineLoopState_t GEventClientOutput_t::GetLoopState() const {
    GEngineLoopState_t value(GetSchemaPtr(m_ptr, "EventClientOutput_t", "m_LoopState"));
    return value;
}
void GEventClientOutput_t::SetLoopState(GEngineLoopState_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LoopState' is not possible.\n");
}
float GEventClientOutput_t::GetRenderTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientOutput_t", "m_flRenderTime");
}
void GEventClientOutput_t::SetRenderTime(float value) {
    SetSchemaValue(m_ptr, "EventClientOutput_t", "m_flRenderTime", true, value);
}
float GEventClientOutput_t::GetRealTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientOutput_t", "m_flRealTime");
}
void GEventClientOutput_t::SetRealTime(float value) {
    SetSchemaValue(m_ptr, "EventClientOutput_t", "m_flRealTime", true, value);
}
float GEventClientOutput_t::GetRenderFrameTimeUnbounded() const {
    return GetSchemaValue<float>(m_ptr, "EventClientOutput_t", "m_flRenderFrameTimeUnbounded");
}
void GEventClientOutput_t::SetRenderFrameTimeUnbounded(float value) {
    SetSchemaValue(m_ptr, "EventClientOutput_t", "m_flRenderFrameTimeUnbounded", true, value);
}
bool GEventClientOutput_t::GetRenderOnly() const {
    return GetSchemaValue<bool>(m_ptr, "EventClientOutput_t", "m_bRenderOnly");
}
void GEventClientOutput_t::SetRenderOnly(bool value) {
    SetSchemaValue(m_ptr, "EventClientOutput_t", "m_bRenderOnly", true, value);
}
void* GEventClientOutput_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientOutput_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientOutput_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientOutput_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientOutput_t>("EventClientOutput_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("LoopState", &GEventClientOutput_t::GetLoopState, &GEventClientOutput_t::SetLoopState)
        .addProperty("RenderTime", &GEventClientOutput_t::GetRenderTime, &GEventClientOutput_t::SetRenderTime)
        .addProperty("RealTime", &GEventClientOutput_t::GetRealTime, &GEventClientOutput_t::SetRealTime)
        .addProperty("RenderFrameTimeUnbounded", &GEventClientOutput_t::GetRenderFrameTimeUnbounded, &GEventClientOutput_t::SetRenderFrameTimeUnbounded)
        .addProperty("RenderOnly", &GEventClientOutput_t::GetRenderOnly, &GEventClientOutput_t::SetRenderOnly)
        .addFunction("ToPtr", &GEventClientOutput_t::ToPtr)
        .addFunction("IsValid", &GEventClientOutput_t::IsValid)
        .endClass();
}
GMaterialVariable_t::GMaterialVariable_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GMaterialVariable_t::GMaterialVariable_t(void *ptr) {
    m_ptr = ptr;
}
std::string GMaterialVariable_t::GetStrVariable() const {
    return GetSchemaValue<CUtlString>(m_ptr, "MaterialVariable_t", "m_strVariable").Get();
}
void GMaterialVariable_t::SetStrVariable(std::string value) {
    SetSchemaValue(m_ptr, "MaterialVariable_t", "m_strVariable", true, CUtlString(value.c_str()));
}
GParticleAttributeIndex_t GMaterialVariable_t::GetVariableField() const {
    GParticleAttributeIndex_t value(GetSchemaPtr(m_ptr, "MaterialVariable_t", "m_nVariableField"));
    return value;
}
void GMaterialVariable_t::SetVariableField(GParticleAttributeIndex_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'VariableField' is not possible.\n");
}
float GMaterialVariable_t::GetScale() const {
    return GetSchemaValue<float>(m_ptr, "MaterialVariable_t", "m_flScale");
}
void GMaterialVariable_t::SetScale(float value) {
    SetSchemaValue(m_ptr, "MaterialVariable_t", "m_flScale", true, value);
}
void* GMaterialVariable_t::GetPtr() {
    return m_ptr;
}
std::string GMaterialVariable_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GMaterialVariable_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassMaterialVariable_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GMaterialVariable_t>("MaterialVariable_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StrVariable", &GMaterialVariable_t::GetStrVariable, &GMaterialVariable_t::SetStrVariable)
        .addProperty("VariableField", &GMaterialVariable_t::GetVariableField, &GMaterialVariable_t::SetVariableField)
        .addProperty("Scale", &GMaterialVariable_t::GetScale, &GMaterialVariable_t::SetScale)
        .addFunction("ToPtr", &GMaterialVariable_t::ToPtr)
        .addFunction("IsValid", &GMaterialVariable_t::IsValid)
        .endClass();
}
GCFeNamedJiggleBone::GCFeNamedJiggleBone(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFeNamedJiggleBone::GCFeNamedJiggleBone(void *ptr) {
    m_ptr = ptr;
}
std::string GCFeNamedJiggleBone::GetStrParentBone() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFeNamedJiggleBone", "m_strParentBone").Get();
}
void GCFeNamedJiggleBone::SetStrParentBone(std::string value) {
    SetSchemaValue(m_ptr, "CFeNamedJiggleBone", "m_strParentBone", false, CUtlString(value.c_str()));
}
uint32_t GCFeNamedJiggleBone::GetJiggleParent() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CFeNamedJiggleBone", "m_nJiggleParent");
}
void GCFeNamedJiggleBone::SetJiggleParent(uint32_t value) {
    SetSchemaValue(m_ptr, "CFeNamedJiggleBone", "m_nJiggleParent", false, value);
}
GCFeJiggleBone GCFeNamedJiggleBone::GetJiggleBone() const {
    GCFeJiggleBone value(GetSchemaPtr(m_ptr, "CFeNamedJiggleBone", "m_jiggleBone"));
    return value;
}
void GCFeNamedJiggleBone::SetJiggleBone(GCFeJiggleBone value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'JiggleBone' is not possible.\n");
}
void* GCFeNamedJiggleBone::GetPtr() {
    return m_ptr;
}
std::string GCFeNamedJiggleBone::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFeNamedJiggleBone::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFeNamedJiggleBone(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFeNamedJiggleBone>("CFeNamedJiggleBone")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StrParentBone", &GCFeNamedJiggleBone::GetStrParentBone, &GCFeNamedJiggleBone::SetStrParentBone)
        .addProperty("JiggleParent", &GCFeNamedJiggleBone::GetJiggleParent, &GCFeNamedJiggleBone::SetJiggleParent)
        .addProperty("JiggleBone", &GCFeNamedJiggleBone::GetJiggleBone, &GCFeNamedJiggleBone::SetJiggleBone)
        .addFunction("ToPtr", &GCFeNamedJiggleBone::ToPtr)
        .addFunction("IsValid", &GCFeNamedJiggleBone::IsValid)
        .endClass();
}
GEventClientProcessInput_t::GEventClientProcessInput_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientProcessInput_t::GEventClientProcessInput_t(void *ptr) {
    m_ptr = ptr;
}
GEngineLoopState_t GEventClientProcessInput_t::GetLoopState() const {
    GEngineLoopState_t value(GetSchemaPtr(m_ptr, "EventClientProcessInput_t", "m_LoopState"));
    return value;
}
void GEventClientProcessInput_t::SetLoopState(GEngineLoopState_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LoopState' is not possible.\n");
}
float GEventClientProcessInput_t::GetRealTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientProcessInput_t", "m_flRealTime");
}
void GEventClientProcessInput_t::SetRealTime(float value) {
    SetSchemaValue(m_ptr, "EventClientProcessInput_t", "m_flRealTime", true, value);
}
float GEventClientProcessInput_t::GetTickInterval() const {
    return GetSchemaValue<float>(m_ptr, "EventClientProcessInput_t", "m_flTickInterval");
}
void GEventClientProcessInput_t::SetTickInterval(float value) {
    SetSchemaValue(m_ptr, "EventClientProcessInput_t", "m_flTickInterval", true, value);
}
double GEventClientProcessInput_t::GetTickStartTime() const {
    return GetSchemaValue<double>(m_ptr, "EventClientProcessInput_t", "m_flTickStartTime");
}
void GEventClientProcessInput_t::SetTickStartTime(double value) {
    SetSchemaValue(m_ptr, "EventClientProcessInput_t", "m_flTickStartTime", true, value);
}
void* GEventClientProcessInput_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientProcessInput_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientProcessInput_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientProcessInput_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientProcessInput_t>("EventClientProcessInput_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("LoopState", &GEventClientProcessInput_t::GetLoopState, &GEventClientProcessInput_t::SetLoopState)
        .addProperty("RealTime", &GEventClientProcessInput_t::GetRealTime, &GEventClientProcessInput_t::SetRealTime)
        .addProperty("TickInterval", &GEventClientProcessInput_t::GetTickInterval, &GEventClientProcessInput_t::SetTickInterval)
        .addProperty("TickStartTime", &GEventClientProcessInput_t::GetTickStartTime, &GEventClientProcessInput_t::SetTickStartTime)
        .addFunction("ToPtr", &GEventClientProcessInput_t::ToPtr)
        .addFunction("IsValid", &GEventClientProcessInput_t::IsValid)
        .endClass();
}
GJiggleBoneSettingsList_t::GJiggleBoneSettingsList_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GJiggleBoneSettingsList_t::GJiggleBoneSettingsList_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<GJiggleBoneSettings_t> GJiggleBoneSettingsList_t::GetBoneSettings() const {
    CUtlVector<GJiggleBoneSettings_t>* vec = GetSchemaValue<CUtlVector<GJiggleBoneSettings_t>*>(m_ptr, "JiggleBoneSettingsList_t", "m_boneSettings"); std::vector<GJiggleBoneSettings_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GJiggleBoneSettingsList_t::SetBoneSettings(std::vector<GJiggleBoneSettings_t> value) {
    SetSchemaValueCUtlVector<GJiggleBoneSettings_t>(m_ptr, "JiggleBoneSettingsList_t", "m_boneSettings", true, value);
}
void* GJiggleBoneSettingsList_t::GetPtr() {
    return m_ptr;
}
std::string GJiggleBoneSettingsList_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GJiggleBoneSettingsList_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassJiggleBoneSettingsList_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GJiggleBoneSettingsList_t>("JiggleBoneSettingsList_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BoneSettings", &GJiggleBoneSettingsList_t::GetBoneSettings, &GJiggleBoneSettingsList_t::SetBoneSettings)
        .addFunction("ToPtr", &GJiggleBoneSettingsList_t::ToPtr)
        .addFunction("IsValid", &GJiggleBoneSettingsList_t::IsValid)
        .endClass();
}
GCSequenceFinishedAnimTag::GCSequenceFinishedAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSequenceFinishedAnimTag::GCSequenceFinishedAnimTag(void *ptr) {
    m_ptr = ptr;
}
std::string GCSequenceFinishedAnimTag::GetSequenceName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CSequenceFinishedAnimTag", "m_sequenceName").Get();
}
void GCSequenceFinishedAnimTag::SetSequenceName(std::string value) {
    SetSchemaValue(m_ptr, "CSequenceFinishedAnimTag", "m_sequenceName", false, CUtlString(value.c_str()));
}
void* GCSequenceFinishedAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCSequenceFinishedAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSequenceFinishedAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimTagBase GCSequenceFinishedAnimTag::GetParent() const {
    GCAnimTagBase value(m_ptr);
    return value;
}
void GCSequenceFinishedAnimTag::SetParent(GCAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSequenceFinishedAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSequenceFinishedAnimTag>("CSequenceFinishedAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SequenceName", &GCSequenceFinishedAnimTag::GetSequenceName, &GCSequenceFinishedAnimTag::SetSequenceName)
        .addProperty("Parent", &GCSequenceFinishedAnimTag::GetParent, &GCSequenceFinishedAnimTag::SetParent)
        .addFunction("ToPtr", &GCSequenceFinishedAnimTag::ToPtr)
        .addFunction("IsValid", &GCSequenceFinishedAnimTag::IsValid)
        .endClass();
}
GCAnimationGraphVisualizerText::GCAnimationGraphVisualizerText(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimationGraphVisualizerText::GCAnimationGraphVisualizerText(void *ptr) {
    m_ptr = ptr;
}
Vector GCAnimationGraphVisualizerText::GetWsPosition() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimationGraphVisualizerText", "m_vWsPosition");
}
void GCAnimationGraphVisualizerText::SetWsPosition(Vector value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerText", "m_vWsPosition", false, value);
}
Color GCAnimationGraphVisualizerText::GetColor() const {
    return GetSchemaValue<Color>(m_ptr, "CAnimationGraphVisualizerText", "m_Color");
}
void GCAnimationGraphVisualizerText::SetColor(Color value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerText", "m_Color", false, value);
}
std::string GCAnimationGraphVisualizerText::GetText() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CAnimationGraphVisualizerText", "m_Text").Get();
}
void GCAnimationGraphVisualizerText::SetText(std::string value) {
    SetSchemaValue(m_ptr, "CAnimationGraphVisualizerText", "m_Text", false, CUtlString(value.c_str()));
}
void* GCAnimationGraphVisualizerText::GetPtr() {
    return m_ptr;
}
std::string GCAnimationGraphVisualizerText::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimationGraphVisualizerText::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimationGraphVisualizerPrimitiveBase GCAnimationGraphVisualizerText::GetParent() const {
    GCAnimationGraphVisualizerPrimitiveBase value(m_ptr);
    return value;
}
void GCAnimationGraphVisualizerText::SetParent(GCAnimationGraphVisualizerPrimitiveBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCAnimationGraphVisualizerText(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimationGraphVisualizerText>("CAnimationGraphVisualizerText")
        .addConstructor<void (*)(std::string)>()
        .addProperty("WsPosition", &GCAnimationGraphVisualizerText::GetWsPosition, &GCAnimationGraphVisualizerText::SetWsPosition)
        .addProperty("Color", &GCAnimationGraphVisualizerText::GetColor, &GCAnimationGraphVisualizerText::SetColor)
        .addProperty("Text", &GCAnimationGraphVisualizerText::GetText, &GCAnimationGraphVisualizerText::SetText)
        .addProperty("Parent", &GCAnimationGraphVisualizerText::GetParent, &GCAnimationGraphVisualizerText::SetParent)
        .addFunction("ToPtr", &GCAnimationGraphVisualizerText::ToPtr)
        .addFunction("IsValid", &GCAnimationGraphVisualizerText::IsValid)
        .endClass();
}
GCDampedPathAnimMotorUpdater::GCDampedPathAnimMotorUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCDampedPathAnimMotorUpdater::GCDampedPathAnimMotorUpdater(void *ptr) {
    m_ptr = ptr;
}
float GCDampedPathAnimMotorUpdater::GetAnticipationTime() const {
    return GetSchemaValue<float>(m_ptr, "CDampedPathAnimMotorUpdater", "m_flAnticipationTime");
}
void GCDampedPathAnimMotorUpdater::SetAnticipationTime(float value) {
    SetSchemaValue(m_ptr, "CDampedPathAnimMotorUpdater", "m_flAnticipationTime", false, value);
}
float GCDampedPathAnimMotorUpdater::GetMinSpeedScale() const {
    return GetSchemaValue<float>(m_ptr, "CDampedPathAnimMotorUpdater", "m_flMinSpeedScale");
}
void GCDampedPathAnimMotorUpdater::SetMinSpeedScale(float value) {
    SetSchemaValue(m_ptr, "CDampedPathAnimMotorUpdater", "m_flMinSpeedScale", false, value);
}
GCAnimParamHandle GCDampedPathAnimMotorUpdater::GetAnticipationPosParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CDampedPathAnimMotorUpdater", "m_hAnticipationPosParam"));
    return value;
}
void GCDampedPathAnimMotorUpdater::SetAnticipationPosParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'AnticipationPosParam' is not possible.\n");
}
GCAnimParamHandle GCDampedPathAnimMotorUpdater::GetAnticipationHeadingParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CDampedPathAnimMotorUpdater", "m_hAnticipationHeadingParam"));
    return value;
}
void GCDampedPathAnimMotorUpdater::SetAnticipationHeadingParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'AnticipationHeadingParam' is not possible.\n");
}
float GCDampedPathAnimMotorUpdater::GetSpringConstant() const {
    return GetSchemaValue<float>(m_ptr, "CDampedPathAnimMotorUpdater", "m_flSpringConstant");
}
void GCDampedPathAnimMotorUpdater::SetSpringConstant(float value) {
    SetSchemaValue(m_ptr, "CDampedPathAnimMotorUpdater", "m_flSpringConstant", false, value);
}
float GCDampedPathAnimMotorUpdater::GetMinSpringTension() const {
    return GetSchemaValue<float>(m_ptr, "CDampedPathAnimMotorUpdater", "m_flMinSpringTension");
}
void GCDampedPathAnimMotorUpdater::SetMinSpringTension(float value) {
    SetSchemaValue(m_ptr, "CDampedPathAnimMotorUpdater", "m_flMinSpringTension", false, value);
}
float GCDampedPathAnimMotorUpdater::GetMaxSpringTension() const {
    return GetSchemaValue<float>(m_ptr, "CDampedPathAnimMotorUpdater", "m_flMaxSpringTension");
}
void GCDampedPathAnimMotorUpdater::SetMaxSpringTension(float value) {
    SetSchemaValue(m_ptr, "CDampedPathAnimMotorUpdater", "m_flMaxSpringTension", false, value);
}
void* GCDampedPathAnimMotorUpdater::GetPtr() {
    return m_ptr;
}
std::string GCDampedPathAnimMotorUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCDampedPathAnimMotorUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCPathAnimMotorUpdaterBase GCDampedPathAnimMotorUpdater::GetParent() const {
    GCPathAnimMotorUpdaterBase value(m_ptr);
    return value;
}
void GCDampedPathAnimMotorUpdater::SetParent(GCPathAnimMotorUpdaterBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCDampedPathAnimMotorUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCDampedPathAnimMotorUpdater>("CDampedPathAnimMotorUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("AnticipationTime", &GCDampedPathAnimMotorUpdater::GetAnticipationTime, &GCDampedPathAnimMotorUpdater::SetAnticipationTime)
        .addProperty("MinSpeedScale", &GCDampedPathAnimMotorUpdater::GetMinSpeedScale, &GCDampedPathAnimMotorUpdater::SetMinSpeedScale)
        .addProperty("AnticipationPosParam", &GCDampedPathAnimMotorUpdater::GetAnticipationPosParam, &GCDampedPathAnimMotorUpdater::SetAnticipationPosParam)
        .addProperty("AnticipationHeadingParam", &GCDampedPathAnimMotorUpdater::GetAnticipationHeadingParam, &GCDampedPathAnimMotorUpdater::SetAnticipationHeadingParam)
        .addProperty("SpringConstant", &GCDampedPathAnimMotorUpdater::GetSpringConstant, &GCDampedPathAnimMotorUpdater::SetSpringConstant)
        .addProperty("MinSpringTension", &GCDampedPathAnimMotorUpdater::GetMinSpringTension, &GCDampedPathAnimMotorUpdater::SetMinSpringTension)
        .addProperty("MaxSpringTension", &GCDampedPathAnimMotorUpdater::GetMaxSpringTension, &GCDampedPathAnimMotorUpdater::SetMaxSpringTension)
        .addProperty("Parent", &GCDampedPathAnimMotorUpdater::GetParent, &GCDampedPathAnimMotorUpdater::SetParent)
        .addFunction("ToPtr", &GCDampedPathAnimMotorUpdater::ToPtr)
        .addFunction("IsValid", &GCDampedPathAnimMotorUpdater::IsValid)
        .endClass();
}
GLookAtOpFixedSettings_t::GLookAtOpFixedSettings_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GLookAtOpFixedSettings_t::GLookAtOpFixedSettings_t(void *ptr) {
    m_ptr = ptr;
}
GCAnimAttachment GLookAtOpFixedSettings_t::GetAttachment() const {
    GCAnimAttachment value(GetSchemaPtr(m_ptr, "LookAtOpFixedSettings_t", "m_attachment"));
    return value;
}
void GLookAtOpFixedSettings_t::SetAttachment(GCAnimAttachment value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Attachment' is not possible.\n");
}
GCAnimInputDamping GLookAtOpFixedSettings_t::GetDamping() const {
    GCAnimInputDamping value(GetSchemaPtr(m_ptr, "LookAtOpFixedSettings_t", "m_damping"));
    return value;
}
void GLookAtOpFixedSettings_t::SetDamping(GCAnimInputDamping value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Damping' is not possible.\n");
}
std::vector<GLookAtBone_t> GLookAtOpFixedSettings_t::GetBones() const {
    CUtlVector<GLookAtBone_t>* vec = GetSchemaValue<CUtlVector<GLookAtBone_t>*>(m_ptr, "LookAtOpFixedSettings_t", "m_bones"); std::vector<GLookAtBone_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GLookAtOpFixedSettings_t::SetBones(std::vector<GLookAtBone_t> value) {
    SetSchemaValueCUtlVector<GLookAtBone_t>(m_ptr, "LookAtOpFixedSettings_t", "m_bones", true, value);
}
float GLookAtOpFixedSettings_t::GetYawLimit() const {
    return GetSchemaValue<float>(m_ptr, "LookAtOpFixedSettings_t", "m_flYawLimit");
}
void GLookAtOpFixedSettings_t::SetYawLimit(float value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_flYawLimit", true, value);
}
float GLookAtOpFixedSettings_t::GetPitchLimit() const {
    return GetSchemaValue<float>(m_ptr, "LookAtOpFixedSettings_t", "m_flPitchLimit");
}
void GLookAtOpFixedSettings_t::SetPitchLimit(float value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_flPitchLimit", true, value);
}
float GLookAtOpFixedSettings_t::GetHysteresisInnerAngle() const {
    return GetSchemaValue<float>(m_ptr, "LookAtOpFixedSettings_t", "m_flHysteresisInnerAngle");
}
void GLookAtOpFixedSettings_t::SetHysteresisInnerAngle(float value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_flHysteresisInnerAngle", true, value);
}
float GLookAtOpFixedSettings_t::GetHysteresisOuterAngle() const {
    return GetSchemaValue<float>(m_ptr, "LookAtOpFixedSettings_t", "m_flHysteresisOuterAngle");
}
void GLookAtOpFixedSettings_t::SetHysteresisOuterAngle(float value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_flHysteresisOuterAngle", true, value);
}
bool GLookAtOpFixedSettings_t::GetRotateYawForward() const {
    return GetSchemaValue<bool>(m_ptr, "LookAtOpFixedSettings_t", "m_bRotateYawForward");
}
void GLookAtOpFixedSettings_t::SetRotateYawForward(bool value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_bRotateYawForward", true, value);
}
bool GLookAtOpFixedSettings_t::GetMaintainUpDirection() const {
    return GetSchemaValue<bool>(m_ptr, "LookAtOpFixedSettings_t", "m_bMaintainUpDirection");
}
void GLookAtOpFixedSettings_t::SetMaintainUpDirection(bool value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_bMaintainUpDirection", true, value);
}
bool GLookAtOpFixedSettings_t::GetTargetIsPosition() const {
    return GetSchemaValue<bool>(m_ptr, "LookAtOpFixedSettings_t", "m_bTargetIsPosition");
}
void GLookAtOpFixedSettings_t::SetTargetIsPosition(bool value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_bTargetIsPosition", true, value);
}
bool GLookAtOpFixedSettings_t::GetUseHysteresis() const {
    return GetSchemaValue<bool>(m_ptr, "LookAtOpFixedSettings_t", "m_bUseHysteresis");
}
void GLookAtOpFixedSettings_t::SetUseHysteresis(bool value) {
    SetSchemaValue(m_ptr, "LookAtOpFixedSettings_t", "m_bUseHysteresis", true, value);
}
void* GLookAtOpFixedSettings_t::GetPtr() {
    return m_ptr;
}
std::string GLookAtOpFixedSettings_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GLookAtOpFixedSettings_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassLookAtOpFixedSettings_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GLookAtOpFixedSettings_t>("LookAtOpFixedSettings_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Attachment", &GLookAtOpFixedSettings_t::GetAttachment, &GLookAtOpFixedSettings_t::SetAttachment)
        .addProperty("Damping", &GLookAtOpFixedSettings_t::GetDamping, &GLookAtOpFixedSettings_t::SetDamping)
        .addProperty("Bones", &GLookAtOpFixedSettings_t::GetBones, &GLookAtOpFixedSettings_t::SetBones)
        .addProperty("YawLimit", &GLookAtOpFixedSettings_t::GetYawLimit, &GLookAtOpFixedSettings_t::SetYawLimit)
        .addProperty("PitchLimit", &GLookAtOpFixedSettings_t::GetPitchLimit, &GLookAtOpFixedSettings_t::SetPitchLimit)
        .addProperty("HysteresisInnerAngle", &GLookAtOpFixedSettings_t::GetHysteresisInnerAngle, &GLookAtOpFixedSettings_t::SetHysteresisInnerAngle)
        .addProperty("HysteresisOuterAngle", &GLookAtOpFixedSettings_t::GetHysteresisOuterAngle, &GLookAtOpFixedSettings_t::SetHysteresisOuterAngle)
        .addProperty("RotateYawForward", &GLookAtOpFixedSettings_t::GetRotateYawForward, &GLookAtOpFixedSettings_t::SetRotateYawForward)
        .addProperty("MaintainUpDirection", &GLookAtOpFixedSettings_t::GetMaintainUpDirection, &GLookAtOpFixedSettings_t::SetMaintainUpDirection)
        .addProperty("TargetIsPosition", &GLookAtOpFixedSettings_t::GetTargetIsPosition, &GLookAtOpFixedSettings_t::SetTargetIsPosition)
        .addProperty("UseHysteresis", &GLookAtOpFixedSettings_t::GetUseHysteresis, &GLookAtOpFixedSettings_t::SetUseHysteresis)
        .addFunction("ToPtr", &GLookAtOpFixedSettings_t::ToPtr)
        .addFunction("IsValid", &GLookAtOpFixedSettings_t::IsValid)
        .endClass();
}
GCEntityIOOutput::GCEntityIOOutput(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCEntityIOOutput::GCEntityIOOutput(void *ptr) {
    m_ptr = ptr;
}
void* GCEntityIOOutput::GetPtr() {
    return m_ptr;
}
std::string GCEntityIOOutput::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCEntityIOOutput::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCEntityIOOutput(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCEntityIOOutput>("CEntityIOOutput")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GCEntityIOOutput::ToPtr)
        .addFunction("IsValid", &GCEntityIOOutput::IsValid)
        .endClass();
}
GCDSPPresetMixgroupModifierTable::GCDSPPresetMixgroupModifierTable(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCDSPPresetMixgroupModifierTable::GCDSPPresetMixgroupModifierTable(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCDspPresetModifierList> GCDSPPresetMixgroupModifierTable::GetTable() const {
    CUtlVector<GCDspPresetModifierList>* vec = GetSchemaValue<CUtlVector<GCDspPresetModifierList>*>(m_ptr, "CDSPPresetMixgroupModifierTable", "m_table"); std::vector<GCDspPresetModifierList> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCDSPPresetMixgroupModifierTable::SetTable(std::vector<GCDspPresetModifierList> value) {
    SetSchemaValueCUtlVector<GCDspPresetModifierList>(m_ptr, "CDSPPresetMixgroupModifierTable", "m_table", false, value);
}
void* GCDSPPresetMixgroupModifierTable::GetPtr() {
    return m_ptr;
}
std::string GCDSPPresetMixgroupModifierTable::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCDSPPresetMixgroupModifierTable::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCDSPPresetMixgroupModifierTable(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCDSPPresetMixgroupModifierTable>("CDSPPresetMixgroupModifierTable")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Table", &GCDSPPresetMixgroupModifierTable::GetTable, &GCDSPPresetMixgroupModifierTable::SetTable)
        .addFunction("ToPtr", &GCDSPPresetMixgroupModifierTable::ToPtr)
        .addFunction("IsValid", &GCDSPPresetMixgroupModifierTable::IsValid)
        .endClass();
}
GRnWing_t::GRnWing_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnWing_t::GRnWing_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<int32_t> GRnWing_t::GetIndex() const {
    int32_t* outValue = GetSchemaValue<int32_t*>(m_ptr, "RnWing_t", "m_nIndex"); std::vector<int32_t> ret; for(int i = 0; i < 3; i++) { ret.push_back(outValue[i]); } return ret;
}
void GRnWing_t::SetIndex(std::vector<int32_t> value) {
    int32_t* outValue = GetSchemaValue<int32_t*>(m_ptr, "RnWing_t", "m_nIndex"); for(int i = 0; i < 3; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "RnWing_t", "m_nIndex", true, outValue);
}
void* GRnWing_t::GetPtr() {
    return m_ptr;
}
std::string GRnWing_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnWing_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassRnWing_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnWing_t>("RnWing_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Index", &GRnWing_t::GetIndex, &GRnWing_t::SetIndex)
        .addFunction("ToPtr", &GRnWing_t::ToPtr)
        .addFunction("IsValid", &GRnWing_t::IsValid)
        .endClass();
}
GCNmChildGraphNode::GCNmChildGraphNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmChildGraphNode::GCNmChildGraphNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmChildGraphNode::GetChildGraphIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmChildGraphNode", "m_nChildGraphIdx");
}
void GCNmChildGraphNode::SetChildGraphIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmChildGraphNode", "m_nChildGraphIdx", false, value);
}
void* GCNmChildGraphNode::GetPtr() {
    return m_ptr;
}
std::string GCNmChildGraphNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmChildGraphNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmPoseNode GCNmChildGraphNode::GetParent() const {
    GCNmPoseNode value(m_ptr);
    return value;
}
void GCNmChildGraphNode::SetParent(GCNmPoseNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmChildGraphNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmChildGraphNode>("CNmChildGraphNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChildGraphIdx", &GCNmChildGraphNode::GetChildGraphIdx, &GCNmChildGraphNode::SetChildGraphIdx)
        .addProperty("Parent", &GCNmChildGraphNode::GetParent, &GCNmChildGraphNode::SetParent)
        .addFunction("ToPtr", &GCNmChildGraphNode::ToPtr)
        .addFunction("IsValid", &GCNmChildGraphNode::IsValid)
        .endClass();
}
GVMixPlateverbDesc_t::GVMixPlateverbDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixPlateverbDesc_t::GVMixPlateverbDesc_t(void *ptr) {
    m_ptr = ptr;
}
float GVMixPlateverbDesc_t::GetPrefilter() const {
    return GetSchemaValue<float>(m_ptr, "VMixPlateverbDesc_t", "m_flPrefilter");
}
void GVMixPlateverbDesc_t::SetPrefilter(float value) {
    SetSchemaValue(m_ptr, "VMixPlateverbDesc_t", "m_flPrefilter", true, value);
}
float GVMixPlateverbDesc_t::GetInputDiffusion1() const {
    return GetSchemaValue<float>(m_ptr, "VMixPlateverbDesc_t", "m_flInputDiffusion1");
}
void GVMixPlateverbDesc_t::SetInputDiffusion1(float value) {
    SetSchemaValue(m_ptr, "VMixPlateverbDesc_t", "m_flInputDiffusion1", true, value);
}
float GVMixPlateverbDesc_t::GetInputDiffusion2() const {
    return GetSchemaValue<float>(m_ptr, "VMixPlateverbDesc_t", "m_flInputDiffusion2");
}
void GVMixPlateverbDesc_t::SetInputDiffusion2(float value) {
    SetSchemaValue(m_ptr, "VMixPlateverbDesc_t", "m_flInputDiffusion2", true, value);
}
float GVMixPlateverbDesc_t::GetDecay() const {
    return GetSchemaValue<float>(m_ptr, "VMixPlateverbDesc_t", "m_flDecay");
}
void GVMixPlateverbDesc_t::SetDecay(float value) {
    SetSchemaValue(m_ptr, "VMixPlateverbDesc_t", "m_flDecay", true, value);
}
float GVMixPlateverbDesc_t::GetDamp() const {
    return GetSchemaValue<float>(m_ptr, "VMixPlateverbDesc_t", "m_flDamp");
}
void GVMixPlateverbDesc_t::SetDamp(float value) {
    SetSchemaValue(m_ptr, "VMixPlateverbDesc_t", "m_flDamp", true, value);
}
float GVMixPlateverbDesc_t::GetFeedbackDiffusion1() const {
    return GetSchemaValue<float>(m_ptr, "VMixPlateverbDesc_t", "m_flFeedbackDiffusion1");
}
void GVMixPlateverbDesc_t::SetFeedbackDiffusion1(float value) {
    SetSchemaValue(m_ptr, "VMixPlateverbDesc_t", "m_flFeedbackDiffusion1", true, value);
}
float GVMixPlateverbDesc_t::GetFeedbackDiffusion2() const {
    return GetSchemaValue<float>(m_ptr, "VMixPlateverbDesc_t", "m_flFeedbackDiffusion2");
}
void GVMixPlateverbDesc_t::SetFeedbackDiffusion2(float value) {
    SetSchemaValue(m_ptr, "VMixPlateverbDesc_t", "m_flFeedbackDiffusion2", true, value);
}
void* GVMixPlateverbDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixPlateverbDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixPlateverbDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixPlateverbDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixPlateverbDesc_t>("VMixPlateverbDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Prefilter", &GVMixPlateverbDesc_t::GetPrefilter, &GVMixPlateverbDesc_t::SetPrefilter)
        .addProperty("InputDiffusion1", &GVMixPlateverbDesc_t::GetInputDiffusion1, &GVMixPlateverbDesc_t::SetInputDiffusion1)
        .addProperty("InputDiffusion2", &GVMixPlateverbDesc_t::GetInputDiffusion2, &GVMixPlateverbDesc_t::SetInputDiffusion2)
        .addProperty("Decay", &GVMixPlateverbDesc_t::GetDecay, &GVMixPlateverbDesc_t::SetDecay)
        .addProperty("Damp", &GVMixPlateverbDesc_t::GetDamp, &GVMixPlateverbDesc_t::SetDamp)
        .addProperty("FeedbackDiffusion1", &GVMixPlateverbDesc_t::GetFeedbackDiffusion1, &GVMixPlateverbDesc_t::SetFeedbackDiffusion1)
        .addProperty("FeedbackDiffusion2", &GVMixPlateverbDesc_t::GetFeedbackDiffusion2, &GVMixPlateverbDesc_t::SetFeedbackDiffusion2)
        .addFunction("ToPtr", &GVMixPlateverbDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixPlateverbDesc_t::IsValid)
        .endClass();
}
GCMotionSearchDB::GCMotionSearchDB(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionSearchDB::GCMotionSearchDB(void *ptr) {
    m_ptr = ptr;
}
GCMotionSearchNode GCMotionSearchDB::GetRootNode() const {
    GCMotionSearchNode value(GetSchemaPtr(m_ptr, "CMotionSearchDB", "m_rootNode"));
    return value;
}
void GCMotionSearchDB::SetRootNode(GCMotionSearchNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'RootNode' is not possible.\n");
}
GCProductQuantizer GCMotionSearchDB::GetResidualQuantizer() const {
    GCProductQuantizer value(GetSchemaPtr(m_ptr, "CMotionSearchDB", "m_residualQuantizer"));
    return value;
}
void GCMotionSearchDB::SetResidualQuantizer(GCProductQuantizer value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ResidualQuantizer' is not possible.\n");
}
std::vector<GMotionDBIndex> GCMotionSearchDB::GetCodeIndices() const {
    CUtlVector<GMotionDBIndex>* vec = GetSchemaValue<CUtlVector<GMotionDBIndex>*>(m_ptr, "CMotionSearchDB", "m_codeIndices"); std::vector<GMotionDBIndex> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionSearchDB::SetCodeIndices(std::vector<GMotionDBIndex> value) {
    SetSchemaValueCUtlVector<GMotionDBIndex>(m_ptr, "CMotionSearchDB", "m_codeIndices", false, value);
}
void* GCMotionSearchDB::GetPtr() {
    return m_ptr;
}
std::string GCMotionSearchDB::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionSearchDB::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMotionSearchDB(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionSearchDB>("CMotionSearchDB")
        .addConstructor<void (*)(std::string)>()
        .addProperty("RootNode", &GCMotionSearchDB::GetRootNode, &GCMotionSearchDB::SetRootNode)
        .addProperty("ResidualQuantizer", &GCMotionSearchDB::GetResidualQuantizer, &GCMotionSearchDB::SetResidualQuantizer)
        .addProperty("CodeIndices", &GCMotionSearchDB::GetCodeIndices, &GCMotionSearchDB::SetCodeIndices)
        .addFunction("ToPtr", &GCMotionSearchDB::ToPtr)
        .addFunction("IsValid", &GCMotionSearchDB::IsValid)
        .endClass();
}
GVPhysics2ShapeDef_t::GVPhysics2ShapeDef_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVPhysics2ShapeDef_t::GVPhysics2ShapeDef_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<GRnSphereDesc_t> GVPhysics2ShapeDef_t::GetSpheres() const {
    CUtlVector<GRnSphereDesc_t>* vec = GetSchemaValue<CUtlVector<GRnSphereDesc_t>*>(m_ptr, "VPhysics2ShapeDef_t", "m_spheres"); std::vector<GRnSphereDesc_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysics2ShapeDef_t::SetSpheres(std::vector<GRnSphereDesc_t> value) {
    SetSchemaValueCUtlVector<GRnSphereDesc_t>(m_ptr, "VPhysics2ShapeDef_t", "m_spheres", true, value);
}
std::vector<GRnCapsuleDesc_t> GVPhysics2ShapeDef_t::GetCapsules() const {
    CUtlVector<GRnCapsuleDesc_t>* vec = GetSchemaValue<CUtlVector<GRnCapsuleDesc_t>*>(m_ptr, "VPhysics2ShapeDef_t", "m_capsules"); std::vector<GRnCapsuleDesc_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysics2ShapeDef_t::SetCapsules(std::vector<GRnCapsuleDesc_t> value) {
    SetSchemaValueCUtlVector<GRnCapsuleDesc_t>(m_ptr, "VPhysics2ShapeDef_t", "m_capsules", true, value);
}
std::vector<GRnHullDesc_t> GVPhysics2ShapeDef_t::GetHulls() const {
    CUtlVector<GRnHullDesc_t>* vec = GetSchemaValue<CUtlVector<GRnHullDesc_t>*>(m_ptr, "VPhysics2ShapeDef_t", "m_hulls"); std::vector<GRnHullDesc_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysics2ShapeDef_t::SetHulls(std::vector<GRnHullDesc_t> value) {
    SetSchemaValueCUtlVector<GRnHullDesc_t>(m_ptr, "VPhysics2ShapeDef_t", "m_hulls", true, value);
}
std::vector<GRnMeshDesc_t> GVPhysics2ShapeDef_t::GetMeshes() const {
    CUtlVector<GRnMeshDesc_t>* vec = GetSchemaValue<CUtlVector<GRnMeshDesc_t>*>(m_ptr, "VPhysics2ShapeDef_t", "m_meshes"); std::vector<GRnMeshDesc_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysics2ShapeDef_t::SetMeshes(std::vector<GRnMeshDesc_t> value) {
    SetSchemaValueCUtlVector<GRnMeshDesc_t>(m_ptr, "VPhysics2ShapeDef_t", "m_meshes", true, value);
}
std::vector<uint16> GVPhysics2ShapeDef_t::GetCollisionAttributeIndices() const {
    CUtlVector<uint16>* vec = GetSchemaValue<CUtlVector<uint16>*>(m_ptr, "VPhysics2ShapeDef_t", "m_CollisionAttributeIndices"); std::vector<uint16> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVPhysics2ShapeDef_t::SetCollisionAttributeIndices(std::vector<uint16> value) {
    SetSchemaValueCUtlVector<uint16>(m_ptr, "VPhysics2ShapeDef_t", "m_CollisionAttributeIndices", true, value);
}
void* GVPhysics2ShapeDef_t::GetPtr() {
    return m_ptr;
}
std::string GVPhysics2ShapeDef_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVPhysics2ShapeDef_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVPhysics2ShapeDef_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVPhysics2ShapeDef_t>("VPhysics2ShapeDef_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Spheres", &GVPhysics2ShapeDef_t::GetSpheres, &GVPhysics2ShapeDef_t::SetSpheres)
        .addProperty("Capsules", &GVPhysics2ShapeDef_t::GetCapsules, &GVPhysics2ShapeDef_t::SetCapsules)
        .addProperty("Hulls", &GVPhysics2ShapeDef_t::GetHulls, &GVPhysics2ShapeDef_t::SetHulls)
        .addProperty("Meshes", &GVPhysics2ShapeDef_t::GetMeshes, &GVPhysics2ShapeDef_t::SetMeshes)
        .addProperty("CollisionAttributeIndices", &GVPhysics2ShapeDef_t::GetCollisionAttributeIndices, &GVPhysics2ShapeDef_t::SetCollisionAttributeIndices)
        .addFunction("ToPtr", &GVPhysics2ShapeDef_t::ToPtr)
        .addFunction("IsValid", &GVPhysics2ShapeDef_t::IsValid)
        .endClass();
}
GWorldBuilderParams_t::GWorldBuilderParams_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GWorldBuilderParams_t::GWorldBuilderParams_t(void *ptr) {
    m_ptr = ptr;
}
float GWorldBuilderParams_t::GetMinDrawVolumeSize() const {
    return GetSchemaValue<float>(m_ptr, "WorldBuilderParams_t", "m_flMinDrawVolumeSize");
}
void GWorldBuilderParams_t::SetMinDrawVolumeSize(float value) {
    SetSchemaValue(m_ptr, "WorldBuilderParams_t", "m_flMinDrawVolumeSize", true, value);
}
bool GWorldBuilderParams_t::GetBuildBakedLighting() const {
    return GetSchemaValue<bool>(m_ptr, "WorldBuilderParams_t", "m_bBuildBakedLighting");
}
void GWorldBuilderParams_t::SetBuildBakedLighting(bool value) {
    SetSchemaValue(m_ptr, "WorldBuilderParams_t", "m_bBuildBakedLighting", true, value);
}
GBakedLightingInfo_t GWorldBuilderParams_t::GetBakedLightingInfo() const {
    GBakedLightingInfo_t value(GetSchemaPtr(m_ptr, "WorldBuilderParams_t", "m_bakedLightingInfo"));
    return value;
}
void GWorldBuilderParams_t::SetBakedLightingInfo(GBakedLightingInfo_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BakedLightingInfo' is not possible.\n");
}
uint64_t GWorldBuilderParams_t::GetCompileTimestamp() const {
    return GetSchemaValue<uint64_t>(m_ptr, "WorldBuilderParams_t", "m_nCompileTimestamp");
}
void GWorldBuilderParams_t::SetCompileTimestamp(uint64_t value) {
    SetSchemaValue(m_ptr, "WorldBuilderParams_t", "m_nCompileTimestamp", true, value);
}
uint64_t GWorldBuilderParams_t::GetCompileFingerprint() const {
    return GetSchemaValue<uint64_t>(m_ptr, "WorldBuilderParams_t", "m_nCompileFingerprint");
}
void GWorldBuilderParams_t::SetCompileFingerprint(uint64_t value) {
    SetSchemaValue(m_ptr, "WorldBuilderParams_t", "m_nCompileFingerprint", true, value);
}
void* GWorldBuilderParams_t::GetPtr() {
    return m_ptr;
}
std::string GWorldBuilderParams_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GWorldBuilderParams_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassWorldBuilderParams_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GWorldBuilderParams_t>("WorldBuilderParams_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MinDrawVolumeSize", &GWorldBuilderParams_t::GetMinDrawVolumeSize, &GWorldBuilderParams_t::SetMinDrawVolumeSize)
        .addProperty("BuildBakedLighting", &GWorldBuilderParams_t::GetBuildBakedLighting, &GWorldBuilderParams_t::SetBuildBakedLighting)
        .addProperty("BakedLightingInfo", &GWorldBuilderParams_t::GetBakedLightingInfo, &GWorldBuilderParams_t::SetBakedLightingInfo)
        .addProperty("CompileTimestamp", &GWorldBuilderParams_t::GetCompileTimestamp, &GWorldBuilderParams_t::SetCompileTimestamp)
        .addProperty("CompileFingerprint", &GWorldBuilderParams_t::GetCompileFingerprint, &GWorldBuilderParams_t::SetCompileFingerprint)
        .addFunction("ToPtr", &GWorldBuilderParams_t::ToPtr)
        .addFunction("IsValid", &GWorldBuilderParams_t::IsValid)
        .endClass();
}
GCFootAdjustmentUpdateNode::GCFootAdjustmentUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootAdjustmentUpdateNode::GCFootAdjustmentUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GCPoseHandle GCFootAdjustmentUpdateNode::GetBasePoseCacheHandle() const {
    GCPoseHandle value(GetSchemaPtr(m_ptr, "CFootAdjustmentUpdateNode", "m_hBasePoseCacheHandle"));
    return value;
}
void GCFootAdjustmentUpdateNode::SetBasePoseCacheHandle(GCPoseHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BasePoseCacheHandle' is not possible.\n");
}
GCAnimParamHandle GCFootAdjustmentUpdateNode::GetFacingTarget() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CFootAdjustmentUpdateNode", "m_facingTarget"));
    return value;
}
void GCFootAdjustmentUpdateNode::SetFacingTarget(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FacingTarget' is not possible.\n");
}
float GCFootAdjustmentUpdateNode::GetTurnTimeMin() const {
    return GetSchemaValue<float>(m_ptr, "CFootAdjustmentUpdateNode", "m_flTurnTimeMin");
}
void GCFootAdjustmentUpdateNode::SetTurnTimeMin(float value) {
    SetSchemaValue(m_ptr, "CFootAdjustmentUpdateNode", "m_flTurnTimeMin", false, value);
}
float GCFootAdjustmentUpdateNode::GetTurnTimeMax() const {
    return GetSchemaValue<float>(m_ptr, "CFootAdjustmentUpdateNode", "m_flTurnTimeMax");
}
void GCFootAdjustmentUpdateNode::SetTurnTimeMax(float value) {
    SetSchemaValue(m_ptr, "CFootAdjustmentUpdateNode", "m_flTurnTimeMax", false, value);
}
float GCFootAdjustmentUpdateNode::GetStepHeightMax() const {
    return GetSchemaValue<float>(m_ptr, "CFootAdjustmentUpdateNode", "m_flStepHeightMax");
}
void GCFootAdjustmentUpdateNode::SetStepHeightMax(float value) {
    SetSchemaValue(m_ptr, "CFootAdjustmentUpdateNode", "m_flStepHeightMax", false, value);
}
float GCFootAdjustmentUpdateNode::GetStepHeightMaxAngle() const {
    return GetSchemaValue<float>(m_ptr, "CFootAdjustmentUpdateNode", "m_flStepHeightMaxAngle");
}
void GCFootAdjustmentUpdateNode::SetStepHeightMaxAngle(float value) {
    SetSchemaValue(m_ptr, "CFootAdjustmentUpdateNode", "m_flStepHeightMaxAngle", false, value);
}
bool GCFootAdjustmentUpdateNode::GetResetChild() const {
    return GetSchemaValue<bool>(m_ptr, "CFootAdjustmentUpdateNode", "m_bResetChild");
}
void GCFootAdjustmentUpdateNode::SetResetChild(bool value) {
    SetSchemaValue(m_ptr, "CFootAdjustmentUpdateNode", "m_bResetChild", false, value);
}
bool GCFootAdjustmentUpdateNode::GetAnimationDriven() const {
    return GetSchemaValue<bool>(m_ptr, "CFootAdjustmentUpdateNode", "m_bAnimationDriven");
}
void GCFootAdjustmentUpdateNode::SetAnimationDriven(bool value) {
    SetSchemaValue(m_ptr, "CFootAdjustmentUpdateNode", "m_bAnimationDriven", false, value);
}
void* GCFootAdjustmentUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCFootAdjustmentUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootAdjustmentUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCFootAdjustmentUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCFootAdjustmentUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCFootAdjustmentUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootAdjustmentUpdateNode>("CFootAdjustmentUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BasePoseCacheHandle", &GCFootAdjustmentUpdateNode::GetBasePoseCacheHandle, &GCFootAdjustmentUpdateNode::SetBasePoseCacheHandle)
        .addProperty("FacingTarget", &GCFootAdjustmentUpdateNode::GetFacingTarget, &GCFootAdjustmentUpdateNode::SetFacingTarget)
        .addProperty("TurnTimeMin", &GCFootAdjustmentUpdateNode::GetTurnTimeMin, &GCFootAdjustmentUpdateNode::SetTurnTimeMin)
        .addProperty("TurnTimeMax", &GCFootAdjustmentUpdateNode::GetTurnTimeMax, &GCFootAdjustmentUpdateNode::SetTurnTimeMax)
        .addProperty("StepHeightMax", &GCFootAdjustmentUpdateNode::GetStepHeightMax, &GCFootAdjustmentUpdateNode::SetStepHeightMax)
        .addProperty("StepHeightMaxAngle", &GCFootAdjustmentUpdateNode::GetStepHeightMaxAngle, &GCFootAdjustmentUpdateNode::SetStepHeightMaxAngle)
        .addProperty("ResetChild", &GCFootAdjustmentUpdateNode::GetResetChild, &GCFootAdjustmentUpdateNode::SetResetChild)
        .addProperty("AnimationDriven", &GCFootAdjustmentUpdateNode::GetAnimationDriven, &GCFootAdjustmentUpdateNode::SetAnimationDriven)
        .addProperty("Parent", &GCFootAdjustmentUpdateNode::GetParent, &GCFootAdjustmentUpdateNode::SetParent)
        .addFunction("ToPtr", &GCFootAdjustmentUpdateNode::ToPtr)
        .addFunction("IsValid", &GCFootAdjustmentUpdateNode::IsValid)
        .endClass();
}
GCNmClipNode::GCNmClipNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmClipNode::GCNmClipNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmClipNode::GetPlayInReverseValueNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmClipNode", "m_nPlayInReverseValueNodeIdx");
}
void GCNmClipNode::SetPlayInReverseValueNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmClipNode", "m_nPlayInReverseValueNodeIdx", false, value);
}
int16_t GCNmClipNode::GetResetTimeValueNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmClipNode", "m_nResetTimeValueNodeIdx");
}
void GCNmClipNode::SetResetTimeValueNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmClipNode", "m_nResetTimeValueNodeIdx", false, value);
}
bool GCNmClipNode::GetSampleRootMotion() const {
    return GetSchemaValue<bool>(m_ptr, "CNmClipNode", "m_bSampleRootMotion");
}
void GCNmClipNode::SetSampleRootMotion(bool value) {
    SetSchemaValue(m_ptr, "CNmClipNode", "m_bSampleRootMotion", false, value);
}
bool GCNmClipNode::GetAllowLooping() const {
    return GetSchemaValue<bool>(m_ptr, "CNmClipNode", "m_bAllowLooping");
}
void GCNmClipNode::SetAllowLooping(bool value) {
    SetSchemaValue(m_ptr, "CNmClipNode", "m_bAllowLooping", false, value);
}
int16_t GCNmClipNode::GetDataSlotIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmClipNode", "m_nDataSlotIdx");
}
void GCNmClipNode::SetDataSlotIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmClipNode", "m_nDataSlotIdx", false, value);
}
void* GCNmClipNode::GetPtr() {
    return m_ptr;
}
std::string GCNmClipNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmClipNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmPoseNode GCNmClipNode::GetParent() const {
    GCNmPoseNode value(m_ptr);
    return value;
}
void GCNmClipNode::SetParent(GCNmPoseNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmClipNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmClipNode>("CNmClipNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("PlayInReverseValueNodeIdx", &GCNmClipNode::GetPlayInReverseValueNodeIdx, &GCNmClipNode::SetPlayInReverseValueNodeIdx)
        .addProperty("ResetTimeValueNodeIdx", &GCNmClipNode::GetResetTimeValueNodeIdx, &GCNmClipNode::SetResetTimeValueNodeIdx)
        .addProperty("SampleRootMotion", &GCNmClipNode::GetSampleRootMotion, &GCNmClipNode::SetSampleRootMotion)
        .addProperty("AllowLooping", &GCNmClipNode::GetAllowLooping, &GCNmClipNode::SetAllowLooping)
        .addProperty("DataSlotIdx", &GCNmClipNode::GetDataSlotIdx, &GCNmClipNode::SetDataSlotIdx)
        .addProperty("Parent", &GCNmClipNode::GetParent, &GCNmClipNode::SetParent)
        .addFunction("ToPtr", &GCNmClipNode::ToPtr)
        .addFunction("IsValid", &GCNmClipNode::IsValid)
        .endClass();
}
GCAnimMorphDifference::GCAnimMorphDifference(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimMorphDifference::GCAnimMorphDifference(void *ptr) {
    m_ptr = ptr;
}
void* GCAnimMorphDifference::GetPtr() {
    return m_ptr;
}
std::string GCAnimMorphDifference::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimMorphDifference::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimMorphDifference(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimMorphDifference>("CAnimMorphDifference")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GCAnimMorphDifference::ToPtr)
        .addFunction("IsValid", &GCAnimMorphDifference::IsValid)
        .endClass();
}
GIParticleCollection::GIParticleCollection(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GIParticleCollection::GIParticleCollection(void *ptr) {
    m_ptr = ptr;
}
void* GIParticleCollection::GetPtr() {
    return m_ptr;
}
std::string GIParticleCollection::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GIParticleCollection::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassIParticleCollection(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GIParticleCollection>("IParticleCollection")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GIParticleCollection::ToPtr)
        .addFunction("IsValid", &GIParticleCollection::IsValid)
        .endClass();
}
GCNmGraphDefinition__ChildGraphSlot_t::GCNmGraphDefinition__ChildGraphSlot_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmGraphDefinition__ChildGraphSlot_t::GCNmGraphDefinition__ChildGraphSlot_t(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmGraphDefinition__ChildGraphSlot_t::GetNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmGraphDefinition__ChildGraphSlot_t", "m_nNodeIdx");
}
void GCNmGraphDefinition__ChildGraphSlot_t::SetNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmGraphDefinition__ChildGraphSlot_t", "m_nNodeIdx", true, value);
}
int16_t GCNmGraphDefinition__ChildGraphSlot_t::GetDataSlotIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmGraphDefinition__ChildGraphSlot_t", "m_dataSlotIdx");
}
void GCNmGraphDefinition__ChildGraphSlot_t::SetDataSlotIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmGraphDefinition__ChildGraphSlot_t", "m_dataSlotIdx", true, value);
}
void* GCNmGraphDefinition__ChildGraphSlot_t::GetPtr() {
    return m_ptr;
}
std::string GCNmGraphDefinition__ChildGraphSlot_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmGraphDefinition__ChildGraphSlot_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmGraphDefinition__ChildGraphSlot_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmGraphDefinition__ChildGraphSlot_t>("CNmGraphDefinition__ChildGraphSlot_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("NodeIdx", &GCNmGraphDefinition__ChildGraphSlot_t::GetNodeIdx, &GCNmGraphDefinition__ChildGraphSlot_t::SetNodeIdx)
        .addProperty("DataSlotIdx", &GCNmGraphDefinition__ChildGraphSlot_t::GetDataSlotIdx, &GCNmGraphDefinition__ChildGraphSlot_t::SetDataSlotIdx)
        .addFunction("ToPtr", &GCNmGraphDefinition__ChildGraphSlot_t::ToPtr)
        .addFunction("IsValid", &GCNmGraphDefinition__ChildGraphSlot_t::IsValid)
        .endClass();
}
GCFutureVelocityMetricEvaluator::GCFutureVelocityMetricEvaluator(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFutureVelocityMetricEvaluator::GCFutureVelocityMetricEvaluator(void *ptr) {
    m_ptr = ptr;
}
float GCFutureVelocityMetricEvaluator::GetDistance() const {
    return GetSchemaValue<float>(m_ptr, "CFutureVelocityMetricEvaluator", "m_flDistance");
}
void GCFutureVelocityMetricEvaluator::SetDistance(float value) {
    SetSchemaValue(m_ptr, "CFutureVelocityMetricEvaluator", "m_flDistance", false, value);
}
float GCFutureVelocityMetricEvaluator::GetStoppingDistance() const {
    return GetSchemaValue<float>(m_ptr, "CFutureVelocityMetricEvaluator", "m_flStoppingDistance");
}
void GCFutureVelocityMetricEvaluator::SetStoppingDistance(float value) {
    SetSchemaValue(m_ptr, "CFutureVelocityMetricEvaluator", "m_flStoppingDistance", false, value);
}
float GCFutureVelocityMetricEvaluator::GetTargetSpeed() const {
    return GetSchemaValue<float>(m_ptr, "CFutureVelocityMetricEvaluator", "m_flTargetSpeed");
}
void GCFutureVelocityMetricEvaluator::SetTargetSpeed(float value) {
    SetSchemaValue(m_ptr, "CFutureVelocityMetricEvaluator", "m_flTargetSpeed", false, value);
}
uint64_t GCFutureVelocityMetricEvaluator::GetMode() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CFutureVelocityMetricEvaluator", "m_eMode");
}
void GCFutureVelocityMetricEvaluator::SetMode(uint64_t value) {
    SetSchemaValue(m_ptr, "CFutureVelocityMetricEvaluator", "m_eMode", false, value);
}
void* GCFutureVelocityMetricEvaluator::GetPtr() {
    return m_ptr;
}
std::string GCFutureVelocityMetricEvaluator::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFutureVelocityMetricEvaluator::IsValid() {
    return (m_ptr != nullptr);
}
GCMotionMetricEvaluator GCFutureVelocityMetricEvaluator::GetParent() const {
    GCMotionMetricEvaluator value(m_ptr);
    return value;
}
void GCFutureVelocityMetricEvaluator::SetParent(GCMotionMetricEvaluator value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCFutureVelocityMetricEvaluator(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFutureVelocityMetricEvaluator>("CFutureVelocityMetricEvaluator")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Distance", &GCFutureVelocityMetricEvaluator::GetDistance, &GCFutureVelocityMetricEvaluator::SetDistance)
        .addProperty("StoppingDistance", &GCFutureVelocityMetricEvaluator::GetStoppingDistance, &GCFutureVelocityMetricEvaluator::SetStoppingDistance)
        .addProperty("TargetSpeed", &GCFutureVelocityMetricEvaluator::GetTargetSpeed, &GCFutureVelocityMetricEvaluator::SetTargetSpeed)
        .addProperty("Mode", &GCFutureVelocityMetricEvaluator::GetMode, &GCFutureVelocityMetricEvaluator::SetMode)
        .addProperty("Parent", &GCFutureVelocityMetricEvaluator::GetParent, &GCFutureVelocityMetricEvaluator::SetParent)
        .addFunction("ToPtr", &GCFutureVelocityMetricEvaluator::ToPtr)
        .addFunction("IsValid", &GCFutureVelocityMetricEvaluator::IsValid)
        .endClass();
}
GCParticleProperty::GCParticleProperty(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCParticleProperty::GCParticleProperty(void *ptr) {
    m_ptr = ptr;
}
void* GCParticleProperty::GetPtr() {
    return m_ptr;
}
std::string GCParticleProperty::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCParticleProperty::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCParticleProperty(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCParticleProperty>("CParticleProperty")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GCParticleProperty::ToPtr)
        .addFunction("IsValid", &GCParticleProperty::IsValid)
        .endClass();
}
GVertexPositionNormal_t::GVertexPositionNormal_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVertexPositionNormal_t::GVertexPositionNormal_t(void *ptr) {
    m_ptr = ptr;
}
Vector GVertexPositionNormal_t::GetPosition() const {
    return GetSchemaValue<Vector>(m_ptr, "VertexPositionNormal_t", "m_vPosition");
}
void GVertexPositionNormal_t::SetPosition(Vector value) {
    SetSchemaValue(m_ptr, "VertexPositionNormal_t", "m_vPosition", true, value);
}
Vector GVertexPositionNormal_t::GetNormal() const {
    return GetSchemaValue<Vector>(m_ptr, "VertexPositionNormal_t", "m_vNormal");
}
void GVertexPositionNormal_t::SetNormal(Vector value) {
    SetSchemaValue(m_ptr, "VertexPositionNormal_t", "m_vNormal", true, value);
}
void* GVertexPositionNormal_t::GetPtr() {
    return m_ptr;
}
std::string GVertexPositionNormal_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVertexPositionNormal_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVertexPositionNormal_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVertexPositionNormal_t>("VertexPositionNormal_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Position", &GVertexPositionNormal_t::GetPosition, &GVertexPositionNormal_t::SetPosition)
        .addProperty("Normal", &GVertexPositionNormal_t::GetNormal, &GVertexPositionNormal_t::SetNormal)
        .addFunction("ToPtr", &GVertexPositionNormal_t::ToPtr)
        .addFunction("IsValid", &GVertexPositionNormal_t::IsValid)
        .endClass();
}
GFeEffectDesc_t::GFeEffectDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeEffectDesc_t::GFeEffectDesc_t(void *ptr) {
    m_ptr = ptr;
}
std::string GFeEffectDesc_t::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "FeEffectDesc_t", "sName").Get();
}
void GFeEffectDesc_t::SetName(std::string value) {
    SetSchemaValue(m_ptr, "FeEffectDesc_t", "sName", true, CUtlString(value.c_str()));
}
uint32_t GFeEffectDesc_t::GetNameHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeEffectDesc_t", "nNameHash");
}
void GFeEffectDesc_t::SetNameHash(uint32_t value) {
    SetSchemaValue(m_ptr, "FeEffectDesc_t", "nNameHash", true, value);
}
int32_t GFeEffectDesc_t::GetType() const {
    return GetSchemaValue<int32_t>(m_ptr, "FeEffectDesc_t", "nType");
}
void GFeEffectDesc_t::SetType(int32_t value) {
    SetSchemaValue(m_ptr, "FeEffectDesc_t", "nType", true, value);
}
void* GFeEffectDesc_t::GetPtr() {
    return m_ptr;
}
std::string GFeEffectDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeEffectDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeEffectDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeEffectDesc_t>("FeEffectDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GFeEffectDesc_t::GetName, &GFeEffectDesc_t::SetName)
        .addProperty("NameHash", &GFeEffectDesc_t::GetNameHash, &GFeEffectDesc_t::SetNameHash)
        .addProperty("Type", &GFeEffectDesc_t::GetType, &GFeEffectDesc_t::SetType)
        .addFunction("ToPtr", &GFeEffectDesc_t::ToPtr)
        .addFunction("IsValid", &GFeEffectDesc_t::IsValid)
        .endClass();
}
GCLODComponentUpdater::GCLODComponentUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCLODComponentUpdater::GCLODComponentUpdater(void *ptr) {
    m_ptr = ptr;
}
int32_t GCLODComponentUpdater::GetServerLOD() const {
    return GetSchemaValue<int32_t>(m_ptr, "CLODComponentUpdater", "m_nServerLOD");
}
void GCLODComponentUpdater::SetServerLOD(int32_t value) {
    SetSchemaValue(m_ptr, "CLODComponentUpdater", "m_nServerLOD", false, value);
}
void* GCLODComponentUpdater::GetPtr() {
    return m_ptr;
}
std::string GCLODComponentUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCLODComponentUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimComponentUpdater GCLODComponentUpdater::GetParent() const {
    GCAnimComponentUpdater value(m_ptr);
    return value;
}
void GCLODComponentUpdater::SetParent(GCAnimComponentUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCLODComponentUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCLODComponentUpdater>("CLODComponentUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ServerLOD", &GCLODComponentUpdater::GetServerLOD, &GCLODComponentUpdater::SetServerLOD)
        .addProperty("Parent", &GCLODComponentUpdater::GetParent, &GCLODComponentUpdater::SetParent)
        .addFunction("ToPtr", &GCLODComponentUpdater::ToPtr)
        .addFunction("IsValid", &GCLODComponentUpdater::IsValid)
        .endClass();
}
GCNmLegacyEvent::GCNmLegacyEvent(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmLegacyEvent::GCNmLegacyEvent(void *ptr) {
    m_ptr = ptr;
}
void* GCNmLegacyEvent::GetPtr() {
    return m_ptr;
}
std::string GCNmLegacyEvent::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmLegacyEvent::IsValid() {
    return (m_ptr != nullptr);
}
GCNmEvent GCNmLegacyEvent::GetParent() const {
    GCNmEvent value(m_ptr);
    return value;
}
void GCNmLegacyEvent::SetParent(GCNmEvent value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmLegacyEvent(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmLegacyEvent>("CNmLegacyEvent")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCNmLegacyEvent::GetParent, &GCNmLegacyEvent::SetParent)
        .addFunction("ToPtr", &GCNmLegacyEvent::ToPtr)
        .addFunction("IsValid", &GCNmLegacyEvent::IsValid)
        .endClass();
}
GMaterialParamVector_t::GMaterialParamVector_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GMaterialParamVector_t::GMaterialParamVector_t(void *ptr) {
    m_ptr = ptr;
}
Vector4D GMaterialParamVector_t::GetValue() const {
    return GetSchemaValue<Vector4D>(m_ptr, "MaterialParamVector_t", "m_value");
}
void GMaterialParamVector_t::SetValue(Vector4D value) {
    SetSchemaValue(m_ptr, "MaterialParamVector_t", "m_value", true, value);
}
void* GMaterialParamVector_t::GetPtr() {
    return m_ptr;
}
std::string GMaterialParamVector_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GMaterialParamVector_t::IsValid() {
    return (m_ptr != nullptr);
}
GMaterialParam_t GMaterialParamVector_t::GetParent() const {
    GMaterialParam_t value(m_ptr);
    return value;
}
void GMaterialParamVector_t::SetParent(GMaterialParam_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassMaterialParamVector_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GMaterialParamVector_t>("MaterialParamVector_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Value", &GMaterialParamVector_t::GetValue, &GMaterialParamVector_t::SetValue)
        .addProperty("Parent", &GMaterialParamVector_t::GetParent, &GMaterialParamVector_t::SetParent)
        .addFunction("ToPtr", &GMaterialParamVector_t::ToPtr)
        .addFunction("IsValid", &GMaterialParamVector_t::IsValid)
        .endClass();
}
GCMotionGraphGroup::GCMotionGraphGroup(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionGraphGroup::GCMotionGraphGroup(void *ptr) {
    m_ptr = ptr;
}
GCMotionSearchDB GCMotionGraphGroup::GetSearchDB() const {
    GCMotionSearchDB value(GetSchemaPtr(m_ptr, "CMotionGraphGroup", "m_searchDB"));
    return value;
}
void GCMotionGraphGroup::SetSearchDB(GCMotionSearchDB value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'SearchDB' is not possible.\n");
}
std::vector<GCMotionGraphConfig> GCMotionGraphGroup::GetMotionGraphConfigs() const {
    CUtlVector<GCMotionGraphConfig>* vec = GetSchemaValue<CUtlVector<GCMotionGraphConfig>*>(m_ptr, "CMotionGraphGroup", "m_motionGraphConfigs"); std::vector<GCMotionGraphConfig> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionGraphGroup::SetMotionGraphConfigs(std::vector<GCMotionGraphConfig> value) {
    SetSchemaValueCUtlVector<GCMotionGraphConfig>(m_ptr, "CMotionGraphGroup", "m_motionGraphConfigs", false, value);
}
std::vector<int32> GCMotionGraphGroup::GetSampleToConfig() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "CMotionGraphGroup", "m_sampleToConfig"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCMotionGraphGroup::SetSampleToConfig(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "CMotionGraphGroup", "m_sampleToConfig", false, value);
}
GAnimScriptHandle GCMotionGraphGroup::GetIsActiveScript() const {
    GAnimScriptHandle value(GetSchemaPtr(m_ptr, "CMotionGraphGroup", "m_hIsActiveScript"));
    return value;
}
void GCMotionGraphGroup::SetIsActiveScript(GAnimScriptHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'IsActiveScript' is not possible.\n");
}
void* GCMotionGraphGroup::GetPtr() {
    return m_ptr;
}
std::string GCMotionGraphGroup::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionGraphGroup::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMotionGraphGroup(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionGraphGroup>("CMotionGraphGroup")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SearchDB", &GCMotionGraphGroup::GetSearchDB, &GCMotionGraphGroup::SetSearchDB)
        .addProperty("MotionGraphConfigs", &GCMotionGraphGroup::GetMotionGraphConfigs, &GCMotionGraphGroup::SetMotionGraphConfigs)
        .addProperty("SampleToConfig", &GCMotionGraphGroup::GetSampleToConfig, &GCMotionGraphGroup::SetSampleToConfig)
        .addProperty("IsActiveScript", &GCMotionGraphGroup::GetIsActiveScript, &GCMotionGraphGroup::SetIsActiveScript)
        .addFunction("ToPtr", &GCMotionGraphGroup::ToPtr)
        .addFunction("IsValid", &GCMotionGraphGroup::IsValid)
        .endClass();
}
GHitReactFixedSettings_t::GHitReactFixedSettings_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GHitReactFixedSettings_t::GHitReactFixedSettings_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GHitReactFixedSettings_t::GetWeightListIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "HitReactFixedSettings_t", "m_nWeightListIndex");
}
void GHitReactFixedSettings_t::SetWeightListIndex(int32_t value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_nWeightListIndex", true, value);
}
int32_t GHitReactFixedSettings_t::GetEffectedBoneCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "HitReactFixedSettings_t", "m_nEffectedBoneCount");
}
void GHitReactFixedSettings_t::SetEffectedBoneCount(int32_t value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_nEffectedBoneCount", true, value);
}
float GHitReactFixedSettings_t::GetMaxImpactForce() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flMaxImpactForce");
}
void GHitReactFixedSettings_t::SetMaxImpactForce(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flMaxImpactForce", true, value);
}
float GHitReactFixedSettings_t::GetMinImpactForce() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flMinImpactForce");
}
void GHitReactFixedSettings_t::SetMinImpactForce(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flMinImpactForce", true, value);
}
float GHitReactFixedSettings_t::GetWhipImpactScale() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flWhipImpactScale");
}
void GHitReactFixedSettings_t::SetWhipImpactScale(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flWhipImpactScale", true, value);
}
float GHitReactFixedSettings_t::GetCounterRotationScale() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flCounterRotationScale");
}
void GHitReactFixedSettings_t::SetCounterRotationScale(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flCounterRotationScale", true, value);
}
float GHitReactFixedSettings_t::GetDistanceFadeScale() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flDistanceFadeScale");
}
void GHitReactFixedSettings_t::SetDistanceFadeScale(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flDistanceFadeScale", true, value);
}
float GHitReactFixedSettings_t::GetPropagationScale() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flPropagationScale");
}
void GHitReactFixedSettings_t::SetPropagationScale(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flPropagationScale", true, value);
}
float GHitReactFixedSettings_t::GetWhipDelay() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flWhipDelay");
}
void GHitReactFixedSettings_t::SetWhipDelay(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flWhipDelay", true, value);
}
float GHitReactFixedSettings_t::GetSpringStrength() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flSpringStrength");
}
void GHitReactFixedSettings_t::SetSpringStrength(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flSpringStrength", true, value);
}
float GHitReactFixedSettings_t::GetWhipSpringStrength() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flWhipSpringStrength");
}
void GHitReactFixedSettings_t::SetWhipSpringStrength(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flWhipSpringStrength", true, value);
}
float GHitReactFixedSettings_t::GetMaxAngleRadians() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flMaxAngleRadians");
}
void GHitReactFixedSettings_t::SetMaxAngleRadians(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flMaxAngleRadians", true, value);
}
int32_t GHitReactFixedSettings_t::GetHipBoneIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "HitReactFixedSettings_t", "m_nHipBoneIndex");
}
void GHitReactFixedSettings_t::SetHipBoneIndex(int32_t value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_nHipBoneIndex", true, value);
}
float GHitReactFixedSettings_t::GetHipBoneTranslationScale() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flHipBoneTranslationScale");
}
void GHitReactFixedSettings_t::SetHipBoneTranslationScale(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flHipBoneTranslationScale", true, value);
}
float GHitReactFixedSettings_t::GetHipDipSpringStrength() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flHipDipSpringStrength");
}
void GHitReactFixedSettings_t::SetHipDipSpringStrength(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flHipDipSpringStrength", true, value);
}
float GHitReactFixedSettings_t::GetHipDipImpactScale() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flHipDipImpactScale");
}
void GHitReactFixedSettings_t::SetHipDipImpactScale(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flHipDipImpactScale", true, value);
}
float GHitReactFixedSettings_t::GetHipDipDelay() const {
    return GetSchemaValue<float>(m_ptr, "HitReactFixedSettings_t", "m_flHipDipDelay");
}
void GHitReactFixedSettings_t::SetHipDipDelay(float value) {
    SetSchemaValue(m_ptr, "HitReactFixedSettings_t", "m_flHipDipDelay", true, value);
}
void* GHitReactFixedSettings_t::GetPtr() {
    return m_ptr;
}
std::string GHitReactFixedSettings_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GHitReactFixedSettings_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassHitReactFixedSettings_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GHitReactFixedSettings_t>("HitReactFixedSettings_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("WeightListIndex", &GHitReactFixedSettings_t::GetWeightListIndex, &GHitReactFixedSettings_t::SetWeightListIndex)
        .addProperty("EffectedBoneCount", &GHitReactFixedSettings_t::GetEffectedBoneCount, &GHitReactFixedSettings_t::SetEffectedBoneCount)
        .addProperty("MaxImpactForce", &GHitReactFixedSettings_t::GetMaxImpactForce, &GHitReactFixedSettings_t::SetMaxImpactForce)
        .addProperty("MinImpactForce", &GHitReactFixedSettings_t::GetMinImpactForce, &GHitReactFixedSettings_t::SetMinImpactForce)
        .addProperty("WhipImpactScale", &GHitReactFixedSettings_t::GetWhipImpactScale, &GHitReactFixedSettings_t::SetWhipImpactScale)
        .addProperty("CounterRotationScale", &GHitReactFixedSettings_t::GetCounterRotationScale, &GHitReactFixedSettings_t::SetCounterRotationScale)
        .addProperty("DistanceFadeScale", &GHitReactFixedSettings_t::GetDistanceFadeScale, &GHitReactFixedSettings_t::SetDistanceFadeScale)
        .addProperty("PropagationScale", &GHitReactFixedSettings_t::GetPropagationScale, &GHitReactFixedSettings_t::SetPropagationScale)
        .addProperty("WhipDelay", &GHitReactFixedSettings_t::GetWhipDelay, &GHitReactFixedSettings_t::SetWhipDelay)
        .addProperty("SpringStrength", &GHitReactFixedSettings_t::GetSpringStrength, &GHitReactFixedSettings_t::SetSpringStrength)
        .addProperty("WhipSpringStrength", &GHitReactFixedSettings_t::GetWhipSpringStrength, &GHitReactFixedSettings_t::SetWhipSpringStrength)
        .addProperty("MaxAngleRadians", &GHitReactFixedSettings_t::GetMaxAngleRadians, &GHitReactFixedSettings_t::SetMaxAngleRadians)
        .addProperty("HipBoneIndex", &GHitReactFixedSettings_t::GetHipBoneIndex, &GHitReactFixedSettings_t::SetHipBoneIndex)
        .addProperty("HipBoneTranslationScale", &GHitReactFixedSettings_t::GetHipBoneTranslationScale, &GHitReactFixedSettings_t::SetHipBoneTranslationScale)
        .addProperty("HipDipSpringStrength", &GHitReactFixedSettings_t::GetHipDipSpringStrength, &GHitReactFixedSettings_t::SetHipDipSpringStrength)
        .addProperty("HipDipImpactScale", &GHitReactFixedSettings_t::GetHipDipImpactScale, &GHitReactFixedSettings_t::SetHipDipImpactScale)
        .addProperty("HipDipDelay", &GHitReactFixedSettings_t::GetHipDipDelay, &GHitReactFixedSettings_t::SetHipDipDelay)
        .addFunction("ToPtr", &GHitReactFixedSettings_t::ToPtr)
        .addFunction("IsValid", &GHitReactFixedSettings_t::IsValid)
        .endClass();
}
GCRootUpdateNode::GCRootUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCRootUpdateNode::GCRootUpdateNode(void *ptr) {
    m_ptr = ptr;
}
void* GCRootUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCRootUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCRootUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCRootUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCRootUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCRootUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCRootUpdateNode>("CRootUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCRootUpdateNode::GetParent, &GCRootUpdateNode::SetParent)
        .addFunction("ToPtr", &GCRootUpdateNode::ToPtr)
        .addFunction("IsValid", &GCRootUpdateNode::IsValid)
        .endClass();
}
GCAnimMovement::GCAnimMovement(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimMovement::GCAnimMovement(void *ptr) {
    m_ptr = ptr;
}
int32_t GCAnimMovement::GetEndframe() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimMovement", "endframe");
}
void GCAnimMovement::SetEndframe(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimMovement", "endframe", false, value);
}
int32_t GCAnimMovement::GetMotionflags() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimMovement", "motionflags");
}
void GCAnimMovement::SetMotionflags(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimMovement", "motionflags", false, value);
}
float GCAnimMovement::Get0() const {
    return GetSchemaValue<float>(m_ptr, "CAnimMovement", "v0");
}
void GCAnimMovement::Set0(float value) {
    SetSchemaValue(m_ptr, "CAnimMovement", "v0", false, value);
}
float GCAnimMovement::Get1() const {
    return GetSchemaValue<float>(m_ptr, "CAnimMovement", "v1");
}
void GCAnimMovement::Set1(float value) {
    SetSchemaValue(m_ptr, "CAnimMovement", "v1", false, value);
}
float GCAnimMovement::GetAngle() const {
    return GetSchemaValue<float>(m_ptr, "CAnimMovement", "angle");
}
void GCAnimMovement::SetAngle(float value) {
    SetSchemaValue(m_ptr, "CAnimMovement", "angle", false, value);
}
Vector GCAnimMovement::GetVector() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimMovement", "vector");
}
void GCAnimMovement::SetVector(Vector value) {
    SetSchemaValue(m_ptr, "CAnimMovement", "vector", false, value);
}
Vector GCAnimMovement::GetPosition() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimMovement", "position");
}
void GCAnimMovement::SetPosition(Vector value) {
    SetSchemaValue(m_ptr, "CAnimMovement", "position", false, value);
}
void* GCAnimMovement::GetPtr() {
    return m_ptr;
}
std::string GCAnimMovement::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimMovement::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimMovement(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimMovement>("CAnimMovement")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Endframe", &GCAnimMovement::GetEndframe, &GCAnimMovement::SetEndframe)
        .addProperty("Motionflags", &GCAnimMovement::GetMotionflags, &GCAnimMovement::SetMotionflags)
        .addProperty("0", &GCAnimMovement::Get0, &GCAnimMovement::Set0)
        .addProperty("1", &GCAnimMovement::Get1, &GCAnimMovement::Set1)
        .addProperty("Angle", &GCAnimMovement::GetAngle, &GCAnimMovement::SetAngle)
        .addProperty("Vector", &GCAnimMovement::GetVector, &GCAnimMovement::SetVector)
        .addProperty("Position", &GCAnimMovement::GetPosition, &GCAnimMovement::SetPosition)
        .addFunction("ToPtr", &GCAnimMovement::ToPtr)
        .addFunction("IsValid", &GCAnimMovement::IsValid)
        .endClass();
}
GCConstraintSlave::GCConstraintSlave(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCConstraintSlave::GCConstraintSlave(void *ptr) {
    m_ptr = ptr;
}
Vector GCConstraintSlave::GetBasePosition() const {
    return GetSchemaValue<Vector>(m_ptr, "CConstraintSlave", "m_vBasePosition");
}
void GCConstraintSlave::SetBasePosition(Vector value) {
    SetSchemaValue(m_ptr, "CConstraintSlave", "m_vBasePosition", false, value);
}
uint32_t GCConstraintSlave::GetBoneHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CConstraintSlave", "m_nBoneHash");
}
void GCConstraintSlave::SetBoneHash(uint32_t value) {
    SetSchemaValue(m_ptr, "CConstraintSlave", "m_nBoneHash", false, value);
}
float GCConstraintSlave::GetWeight() const {
    return GetSchemaValue<float>(m_ptr, "CConstraintSlave", "m_flWeight");
}
void GCConstraintSlave::SetWeight(float value) {
    SetSchemaValue(m_ptr, "CConstraintSlave", "m_flWeight", false, value);
}
std::string GCConstraintSlave::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CConstraintSlave", "m_sName").Get();
}
void GCConstraintSlave::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CConstraintSlave", "m_sName", false, CUtlString(value.c_str()));
}
void* GCConstraintSlave::GetPtr() {
    return m_ptr;
}
std::string GCConstraintSlave::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCConstraintSlave::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCConstraintSlave(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCConstraintSlave>("CConstraintSlave")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BasePosition", &GCConstraintSlave::GetBasePosition, &GCConstraintSlave::SetBasePosition)
        .addProperty("BoneHash", &GCConstraintSlave::GetBoneHash, &GCConstraintSlave::SetBoneHash)
        .addProperty("Weight", &GCConstraintSlave::GetWeight, &GCConstraintSlave::SetWeight)
        .addProperty("Name", &GCConstraintSlave::GetName, &GCConstraintSlave::SetName)
        .addFunction("ToPtr", &GCConstraintSlave::ToPtr)
        .addFunction("IsValid", &GCConstraintSlave::IsValid)
        .endClass();
}
GCSeqBoneMaskList::GCSeqBoneMaskList(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSeqBoneMaskList::GCSeqBoneMaskList(void *ptr) {
    m_ptr = ptr;
}
std::vector<int16> GCSeqBoneMaskList::GetLocalBoneArray() const {
    CUtlVector<int16>* vec = GetSchemaValue<CUtlVector<int16>*>(m_ptr, "CSeqBoneMaskList", "m_nLocalBoneArray"); std::vector<int16> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqBoneMaskList::SetLocalBoneArray(std::vector<int16> value) {
    SetSchemaValueCUtlVector<int16>(m_ptr, "CSeqBoneMaskList", "m_nLocalBoneArray", false, value);
}
std::vector<float32> GCSeqBoneMaskList::GetBoneWeightArray() const {
    CUtlVector<float32>* vec = GetSchemaValue<CUtlVector<float32>*>(m_ptr, "CSeqBoneMaskList", "m_flBoneWeightArray"); std::vector<float32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSeqBoneMaskList::SetBoneWeightArray(std::vector<float32> value) {
    SetSchemaValueCUtlVector<float32>(m_ptr, "CSeqBoneMaskList", "m_flBoneWeightArray", false, value);
}
float GCSeqBoneMaskList::GetDefaultMorphCtrlWeight() const {
    return GetSchemaValue<float>(m_ptr, "CSeqBoneMaskList", "m_flDefaultMorphCtrlWeight");
}
void GCSeqBoneMaskList::SetDefaultMorphCtrlWeight(float value) {
    SetSchemaValue(m_ptr, "CSeqBoneMaskList", "m_flDefaultMorphCtrlWeight", false, value);
}
void* GCSeqBoneMaskList::GetPtr() {
    return m_ptr;
}
std::string GCSeqBoneMaskList::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSeqBoneMaskList::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSeqBoneMaskList(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSeqBoneMaskList>("CSeqBoneMaskList")
        .addConstructor<void (*)(std::string)>()
        .addProperty("LocalBoneArray", &GCSeqBoneMaskList::GetLocalBoneArray, &GCSeqBoneMaskList::SetLocalBoneArray)
        .addProperty("BoneWeightArray", &GCSeqBoneMaskList::GetBoneWeightArray, &GCSeqBoneMaskList::SetBoneWeightArray)
        .addProperty("DefaultMorphCtrlWeight", &GCSeqBoneMaskList::GetDefaultMorphCtrlWeight, &GCSeqBoneMaskList::SetDefaultMorphCtrlWeight)
        .addFunction("ToPtr", &GCSeqBoneMaskList::ToPtr)
        .addFunction("IsValid", &GCSeqBoneMaskList::IsValid)
        .endClass();
}
GPermModelDataAnimatedMaterialAttribute_t::GPermModelDataAnimatedMaterialAttribute_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GPermModelDataAnimatedMaterialAttribute_t::GPermModelDataAnimatedMaterialAttribute_t(void *ptr) {
    m_ptr = ptr;
}
std::string GPermModelDataAnimatedMaterialAttribute_t::GetAttributeName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "PermModelDataAnimatedMaterialAttribute_t", "m_AttributeName").Get();
}
void GPermModelDataAnimatedMaterialAttribute_t::SetAttributeName(std::string value) {
    SetSchemaValue(m_ptr, "PermModelDataAnimatedMaterialAttribute_t", "m_AttributeName", true, CUtlString(value.c_str()));
}
int32_t GPermModelDataAnimatedMaterialAttribute_t::GetNumChannels() const {
    return GetSchemaValue<int32_t>(m_ptr, "PermModelDataAnimatedMaterialAttribute_t", "m_nNumChannels");
}
void GPermModelDataAnimatedMaterialAttribute_t::SetNumChannels(int32_t value) {
    SetSchemaValue(m_ptr, "PermModelDataAnimatedMaterialAttribute_t", "m_nNumChannels", true, value);
}
void* GPermModelDataAnimatedMaterialAttribute_t::GetPtr() {
    return m_ptr;
}
std::string GPermModelDataAnimatedMaterialAttribute_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GPermModelDataAnimatedMaterialAttribute_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassPermModelDataAnimatedMaterialAttribute_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GPermModelDataAnimatedMaterialAttribute_t>("PermModelDataAnimatedMaterialAttribute_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("AttributeName", &GPermModelDataAnimatedMaterialAttribute_t::GetAttributeName, &GPermModelDataAnimatedMaterialAttribute_t::SetAttributeName)
        .addProperty("NumChannels", &GPermModelDataAnimatedMaterialAttribute_t::GetNumChannels, &GPermModelDataAnimatedMaterialAttribute_t::SetNumChannels)
        .addFunction("ToPtr", &GPermModelDataAnimatedMaterialAttribute_t::ToPtr)
        .addFunction("IsValid", &GPermModelDataAnimatedMaterialAttribute_t::IsValid)
        .endClass();
}
GScriptInfo_t::GScriptInfo_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GScriptInfo_t::GScriptInfo_t(void *ptr) {
    m_ptr = ptr;
}
std::string GScriptInfo_t::GetCode() const {
    return GetSchemaValue<CUtlString>(m_ptr, "ScriptInfo_t", "m_code").Get();
}
void GScriptInfo_t::SetCode(std::string value) {
    SetSchemaValue(m_ptr, "ScriptInfo_t", "m_code", true, CUtlString(value.c_str()));
}
std::vector<GCAnimParamHandle> GScriptInfo_t::GetParamsModified() const {
    CUtlVector<GCAnimParamHandle>* vec = GetSchemaValue<CUtlVector<GCAnimParamHandle>*>(m_ptr, "ScriptInfo_t", "m_paramsModified"); std::vector<GCAnimParamHandle> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GScriptInfo_t::SetParamsModified(std::vector<GCAnimParamHandle> value) {
    SetSchemaValueCUtlVector<GCAnimParamHandle>(m_ptr, "ScriptInfo_t", "m_paramsModified", true, value);
}
std::vector<int32> GScriptInfo_t::GetProxyReadParams() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "ScriptInfo_t", "m_proxyReadParams"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GScriptInfo_t::SetProxyReadParams(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "ScriptInfo_t", "m_proxyReadParams", true, value);
}
std::vector<int32> GScriptInfo_t::GetProxyWriteParams() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "ScriptInfo_t", "m_proxyWriteParams"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GScriptInfo_t::SetProxyWriteParams(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "ScriptInfo_t", "m_proxyWriteParams", true, value);
}
uint64_t GScriptInfo_t::GetScriptType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "ScriptInfo_t", "m_eScriptType");
}
void GScriptInfo_t::SetScriptType(uint64_t value) {
    SetSchemaValue(m_ptr, "ScriptInfo_t", "m_eScriptType", true, value);
}
void* GScriptInfo_t::GetPtr() {
    return m_ptr;
}
std::string GScriptInfo_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GScriptInfo_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassScriptInfo_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GScriptInfo_t>("ScriptInfo_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Code", &GScriptInfo_t::GetCode, &GScriptInfo_t::SetCode)
        .addProperty("ParamsModified", &GScriptInfo_t::GetParamsModified, &GScriptInfo_t::SetParamsModified)
        .addProperty("ProxyReadParams", &GScriptInfo_t::GetProxyReadParams, &GScriptInfo_t::SetProxyReadParams)
        .addProperty("ProxyWriteParams", &GScriptInfo_t::GetProxyWriteParams, &GScriptInfo_t::SetProxyWriteParams)
        .addProperty("ScriptType", &GScriptInfo_t::GetScriptType, &GScriptInfo_t::SetScriptType)
        .addFunction("ToPtr", &GScriptInfo_t::ToPtr)
        .addFunction("IsValid", &GScriptInfo_t::IsValid)
        .endClass();
}
GVPhysXRange_t::GVPhysXRange_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVPhysXRange_t::GVPhysXRange_t(void *ptr) {
    m_ptr = ptr;
}
float GVPhysXRange_t::GetMin() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXRange_t", "m_flMin");
}
void GVPhysXRange_t::SetMin(float value) {
    SetSchemaValue(m_ptr, "VPhysXRange_t", "m_flMin", true, value);
}
float GVPhysXRange_t::GetMax() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXRange_t", "m_flMax");
}
void GVPhysXRange_t::SetMax(float value) {
    SetSchemaValue(m_ptr, "VPhysXRange_t", "m_flMax", true, value);
}
void* GVPhysXRange_t::GetPtr() {
    return m_ptr;
}
std::string GVPhysXRange_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVPhysXRange_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVPhysXRange_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVPhysXRange_t>("VPhysXRange_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Min", &GVPhysXRange_t::GetMin, &GVPhysXRange_t::SetMin)
        .addProperty("Max", &GVPhysXRange_t::GetMax, &GVPhysXRange_t::SetMax)
        .addFunction("ToPtr", &GVPhysXRange_t::ToPtr)
        .addFunction("IsValid", &GVPhysXRange_t::IsValid)
        .endClass();
}
GCJiggleBoneUpdateNode::GCJiggleBoneUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCJiggleBoneUpdateNode::GCJiggleBoneUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GJiggleBoneSettingsList_t GCJiggleBoneUpdateNode::GetOpFixedData() const {
    GJiggleBoneSettingsList_t value(GetSchemaPtr(m_ptr, "CJiggleBoneUpdateNode", "m_opFixedData"));
    return value;
}
void GCJiggleBoneUpdateNode::SetOpFixedData(GJiggleBoneSettingsList_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'OpFixedData' is not possible.\n");
}
void* GCJiggleBoneUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCJiggleBoneUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCJiggleBoneUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCJiggleBoneUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCJiggleBoneUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCJiggleBoneUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCJiggleBoneUpdateNode>("CJiggleBoneUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OpFixedData", &GCJiggleBoneUpdateNode::GetOpFixedData, &GCJiggleBoneUpdateNode::SetOpFixedData)
        .addProperty("Parent", &GCJiggleBoneUpdateNode::GetParent, &GCJiggleBoneUpdateNode::SetParent)
        .addFunction("ToPtr", &GCJiggleBoneUpdateNode::ToPtr)
        .addFunction("IsValid", &GCJiggleBoneUpdateNode::IsValid)
        .endClass();
}
GCollisionGroupContext_t::GCollisionGroupContext_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCollisionGroupContext_t::GCollisionGroupContext_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GCollisionGroupContext_t::GetCollisionGroupNumber() const {
    return GetSchemaValue<int32_t>(m_ptr, "CollisionGroupContext_t", "m_nCollisionGroupNumber");
}
void GCollisionGroupContext_t::SetCollisionGroupNumber(int32_t value) {
    SetSchemaValue(m_ptr, "CollisionGroupContext_t", "m_nCollisionGroupNumber", true, value);
}
void* GCollisionGroupContext_t::GetPtr() {
    return m_ptr;
}
std::string GCollisionGroupContext_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCollisionGroupContext_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCollisionGroupContext_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCollisionGroupContext_t>("CollisionGroupContext_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CollisionGroupNumber", &GCollisionGroupContext_t::GetCollisionGroupNumber, &GCollisionGroupContext_t::SetCollisionGroupNumber)
        .addFunction("ToPtr", &GCollisionGroupContext_t::ToPtr)
        .addFunction("IsValid", &GCollisionGroupContext_t::IsValid)
        .endClass();
}
GCAudioPhonemeTag::GCAudioPhonemeTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAudioPhonemeTag::GCAudioPhonemeTag(void *ptr) {
    m_ptr = ptr;
}
float GCAudioPhonemeTag::GetStartTime() const {
    return GetSchemaValue<float>(m_ptr, "CAudioPhonemeTag", "m_flStartTime");
}
void GCAudioPhonemeTag::SetStartTime(float value) {
    SetSchemaValue(m_ptr, "CAudioPhonemeTag", "m_flStartTime", false, value);
}
float GCAudioPhonemeTag::GetEndTime() const {
    return GetSchemaValue<float>(m_ptr, "CAudioPhonemeTag", "m_flEndTime");
}
void GCAudioPhonemeTag::SetEndTime(float value) {
    SetSchemaValue(m_ptr, "CAudioPhonemeTag", "m_flEndTime", false, value);
}
int32_t GCAudioPhonemeTag::GetPhonemeCode() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAudioPhonemeTag", "m_nPhonemeCode");
}
void GCAudioPhonemeTag::SetPhonemeCode(int32_t value) {
    SetSchemaValue(m_ptr, "CAudioPhonemeTag", "m_nPhonemeCode", false, value);
}
void* GCAudioPhonemeTag::GetPtr() {
    return m_ptr;
}
std::string GCAudioPhonemeTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAudioPhonemeTag::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAudioPhonemeTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAudioPhonemeTag>("CAudioPhonemeTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StartTime", &GCAudioPhonemeTag::GetStartTime, &GCAudioPhonemeTag::SetStartTime)
        .addProperty("EndTime", &GCAudioPhonemeTag::GetEndTime, &GCAudioPhonemeTag::SetEndTime)
        .addProperty("PhonemeCode", &GCAudioPhonemeTag::GetPhonemeCode, &GCAudioPhonemeTag::SetPhonemeCode)
        .addFunction("ToPtr", &GCAudioPhonemeTag::ToPtr)
        .addFunction("IsValid", &GCAudioPhonemeTag::IsValid)
        .endClass();
}
GCAnimData::GCAnimData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimData::GCAnimData(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCAnimDesc> GCAnimData::GetAnimArray() const {
    CUtlVector<GCAnimDesc>* vec = GetSchemaValue<CUtlVector<GCAnimDesc>*>(m_ptr, "CAnimData", "m_animArray"); std::vector<GCAnimDesc> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimData::SetAnimArray(std::vector<GCAnimDesc> value) {
    SetSchemaValueCUtlVector<GCAnimDesc>(m_ptr, "CAnimData", "m_animArray", false, value);
}
std::vector<GCAnimDecoder> GCAnimData::GetDecoderArray() const {
    CUtlVector<GCAnimDecoder>* vec = GetSchemaValue<CUtlVector<GCAnimDecoder>*>(m_ptr, "CAnimData", "m_decoderArray"); std::vector<GCAnimDecoder> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimData::SetDecoderArray(std::vector<GCAnimDecoder> value) {
    SetSchemaValueCUtlVector<GCAnimDecoder>(m_ptr, "CAnimData", "m_decoderArray", false, value);
}
int32_t GCAnimData::GetMaxUniqueFrameIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimData", "m_nMaxUniqueFrameIndex");
}
void GCAnimData::SetMaxUniqueFrameIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimData", "m_nMaxUniqueFrameIndex", false, value);
}
std::vector<GCAnimFrameSegment> GCAnimData::GetSegmentArray() const {
    CUtlVector<GCAnimFrameSegment>* vec = GetSchemaValue<CUtlVector<GCAnimFrameSegment>*>(m_ptr, "CAnimData", "m_segmentArray"); std::vector<GCAnimFrameSegment> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimData::SetSegmentArray(std::vector<GCAnimFrameSegment> value) {
    SetSchemaValueCUtlVector<GCAnimFrameSegment>(m_ptr, "CAnimData", "m_segmentArray", false, value);
}
void* GCAnimData::GetPtr() {
    return m_ptr;
}
std::string GCAnimData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimData>("CAnimData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("AnimArray", &GCAnimData::GetAnimArray, &GCAnimData::SetAnimArray)
        .addProperty("DecoderArray", &GCAnimData::GetDecoderArray, &GCAnimData::SetDecoderArray)
        .addProperty("MaxUniqueFrameIndex", &GCAnimData::GetMaxUniqueFrameIndex, &GCAnimData::SetMaxUniqueFrameIndex)
        .addProperty("SegmentArray", &GCAnimData::GetSegmentArray, &GCAnimData::SetSegmentArray)
        .addFunction("ToPtr", &GCAnimData::ToPtr)
        .addFunction("IsValid", &GCAnimData::IsValid)
        .endClass();
}
GSosEditItemInfo_t::GSosEditItemInfo_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GSosEditItemInfo_t::GSosEditItemInfo_t(void *ptr) {
    m_ptr = ptr;
}
uint64_t GSosEditItemInfo_t::GetItemType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "SosEditItemInfo_t", "itemType");
}
void GSosEditItemInfo_t::SetItemType(uint64_t value) {
    SetSchemaValue(m_ptr, "SosEditItemInfo_t", "itemType", true, value);
}
std::string GSosEditItemInfo_t::GetItemName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "SosEditItemInfo_t", "itemName").Get();
}
void GSosEditItemInfo_t::SetItemName(std::string value) {
    SetSchemaValue(m_ptr, "SosEditItemInfo_t", "itemName", true, CUtlString(value.c_str()));
}
std::string GSosEditItemInfo_t::GetItemTypeName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "SosEditItemInfo_t", "itemTypeName").Get();
}
void GSosEditItemInfo_t::SetItemTypeName(std::string value) {
    SetSchemaValue(m_ptr, "SosEditItemInfo_t", "itemTypeName", true, CUtlString(value.c_str()));
}
std::string GSosEditItemInfo_t::GetItemKVString() const {
    return GetSchemaValue<CUtlString>(m_ptr, "SosEditItemInfo_t", "itemKVString").Get();
}
void GSosEditItemInfo_t::SetItemKVString(std::string value) {
    SetSchemaValue(m_ptr, "SosEditItemInfo_t", "itemKVString", true, CUtlString(value.c_str()));
}
Vector2D GSosEditItemInfo_t::GetItemPos() const {
    return GetSchemaValue<Vector2D>(m_ptr, "SosEditItemInfo_t", "itemPos");
}
void GSosEditItemInfo_t::SetItemPos(Vector2D value) {
    SetSchemaValue(m_ptr, "SosEditItemInfo_t", "itemPos", true, value);
}
void* GSosEditItemInfo_t::GetPtr() {
    return m_ptr;
}
std::string GSosEditItemInfo_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GSosEditItemInfo_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassSosEditItemInfo_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GSosEditItemInfo_t>("SosEditItemInfo_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ItemType", &GSosEditItemInfo_t::GetItemType, &GSosEditItemInfo_t::SetItemType)
        .addProperty("ItemName", &GSosEditItemInfo_t::GetItemName, &GSosEditItemInfo_t::SetItemName)
        .addProperty("ItemTypeName", &GSosEditItemInfo_t::GetItemTypeName, &GSosEditItemInfo_t::SetItemTypeName)
        .addProperty("ItemKVString", &GSosEditItemInfo_t::GetItemKVString, &GSosEditItemInfo_t::SetItemKVString)
        .addProperty("ItemPos", &GSosEditItemInfo_t::GetItemPos, &GSosEditItemInfo_t::SetItemPos)
        .addFunction("ToPtr", &GSosEditItemInfo_t::ToPtr)
        .addFunction("IsValid", &GSosEditItemInfo_t::IsValid)
        .endClass();
}
GFeFitInfluence_t::GFeFitInfluence_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeFitInfluence_t::GFeFitInfluence_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GFeFitInfluence_t::GetVertexNode() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeFitInfluence_t", "nVertexNode");
}
void GFeFitInfluence_t::SetVertexNode(uint32_t value) {
    SetSchemaValue(m_ptr, "FeFitInfluence_t", "nVertexNode", true, value);
}
float GFeFitInfluence_t::GetWeight() const {
    return GetSchemaValue<float>(m_ptr, "FeFitInfluence_t", "flWeight");
}
void GFeFitInfluence_t::SetWeight(float value) {
    SetSchemaValue(m_ptr, "FeFitInfluence_t", "flWeight", true, value);
}
uint32_t GFeFitInfluence_t::GetMatrixNode() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeFitInfluence_t", "nMatrixNode");
}
void GFeFitInfluence_t::SetMatrixNode(uint32_t value) {
    SetSchemaValue(m_ptr, "FeFitInfluence_t", "nMatrixNode", true, value);
}
void* GFeFitInfluence_t::GetPtr() {
    return m_ptr;
}
std::string GFeFitInfluence_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeFitInfluence_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeFitInfluence_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeFitInfluence_t>("FeFitInfluence_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("VertexNode", &GFeFitInfluence_t::GetVertexNode, &GFeFitInfluence_t::SetVertexNode)
        .addProperty("Weight", &GFeFitInfluence_t::GetWeight, &GFeFitInfluence_t::SetWeight)
        .addProperty("MatrixNode", &GFeFitInfluence_t::GetMatrixNode, &GFeFitInfluence_t::SetMatrixNode)
        .addFunction("ToPtr", &GFeFitInfluence_t::ToPtr)
        .addFunction("IsValid", &GFeFitInfluence_t::IsValid)
        .endClass();
}
GCInputStreamUpdateNode::GCInputStreamUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCInputStreamUpdateNode::GCInputStreamUpdateNode(void *ptr) {
    m_ptr = ptr;
}
void* GCInputStreamUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCInputStreamUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCInputStreamUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCLeafUpdateNode GCInputStreamUpdateNode::GetParent() const {
    GCLeafUpdateNode value(m_ptr);
    return value;
}
void GCInputStreamUpdateNode::SetParent(GCLeafUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCInputStreamUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCInputStreamUpdateNode>("CInputStreamUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCInputStreamUpdateNode::GetParent, &GCInputStreamUpdateNode::SetParent)
        .addFunction("ToPtr", &GCInputStreamUpdateNode::ToPtr)
        .addFunction("IsValid", &GCInputStreamUpdateNode::IsValid)
        .endClass();
}
GEventClientPollInput_t::GEventClientPollInput_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientPollInput_t::GEventClientPollInput_t(void *ptr) {
    m_ptr = ptr;
}
GEngineLoopState_t GEventClientPollInput_t::GetLoopState() const {
    GEngineLoopState_t value(GetSchemaPtr(m_ptr, "EventClientPollInput_t", "m_LoopState"));
    return value;
}
void GEventClientPollInput_t::SetLoopState(GEngineLoopState_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LoopState' is not possible.\n");
}
float GEventClientPollInput_t::GetRealTime() const {
    return GetSchemaValue<float>(m_ptr, "EventClientPollInput_t", "m_flRealTime");
}
void GEventClientPollInput_t::SetRealTime(float value) {
    SetSchemaValue(m_ptr, "EventClientPollInput_t", "m_flRealTime", true, value);
}
void* GEventClientPollInput_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientPollInput_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientPollInput_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientPollInput_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientPollInput_t>("EventClientPollInput_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("LoopState", &GEventClientPollInput_t::GetLoopState, &GEventClientPollInput_t::SetLoopState)
        .addProperty("RealTime", &GEventClientPollInput_t::GetRealTime, &GEventClientPollInput_t::SetRealTime)
        .addFunction("ToPtr", &GEventClientPollInput_t::ToPtr)
        .addFunction("IsValid", &GEventClientPollInput_t::IsValid)
        .endClass();
}
GFeSimdQuad_t::GFeSimdQuad_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeSimdQuad_t::GFeSimdQuad_t(void *ptr) {
    m_ptr = ptr;
}
float GFeSimdQuad_t::Get4Slack() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdQuad_t", "f4Slack");
}
void GFeSimdQuad_t::Set4Slack(float value) {
    SetSchemaValue(m_ptr, "FeSimdQuad_t", "f4Slack", true, value);
}
std::vector<float> GFeSimdQuad_t::Get4Weights() const {
    float* outValue = GetSchemaValue<float*>(m_ptr, "FeSimdQuad_t", "f4Weights"); std::vector<float> ret; for(int i = 0; i < 4; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeSimdQuad_t::Set4Weights(std::vector<float> value) {
    float* outValue = GetSchemaValue<float*>(m_ptr, "FeSimdQuad_t", "f4Weights"); for(int i = 0; i < 4; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeSimdQuad_t", "f4Weights", true, outValue);
}
void* GFeSimdQuad_t::GetPtr() {
    return m_ptr;
}
std::string GFeSimdQuad_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeSimdQuad_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeSimdQuad_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeSimdQuad_t>("FeSimdQuad_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("4Slack", &GFeSimdQuad_t::Get4Slack, &GFeSimdQuad_t::Set4Slack)
        .addProperty("4Weights", &GFeSimdQuad_t::Get4Weights, &GFeSimdQuad_t::Set4Weights)
        .addFunction("ToPtr", &GFeSimdQuad_t::ToPtr)
        .addFunction("IsValid", &GFeSimdQuad_t::IsValid)
        .endClass();
}
GCEmitTagActionUpdater::GCEmitTagActionUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCEmitTagActionUpdater::GCEmitTagActionUpdater(void *ptr) {
    m_ptr = ptr;
}
int32_t GCEmitTagActionUpdater::GetTagIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CEmitTagActionUpdater", "m_nTagIndex");
}
void GCEmitTagActionUpdater::SetTagIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CEmitTagActionUpdater", "m_nTagIndex", false, value);
}
bool GCEmitTagActionUpdater::GetIsZeroDuration() const {
    return GetSchemaValue<bool>(m_ptr, "CEmitTagActionUpdater", "m_bIsZeroDuration");
}
void GCEmitTagActionUpdater::SetIsZeroDuration(bool value) {
    SetSchemaValue(m_ptr, "CEmitTagActionUpdater", "m_bIsZeroDuration", false, value);
}
void* GCEmitTagActionUpdater::GetPtr() {
    return m_ptr;
}
std::string GCEmitTagActionUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCEmitTagActionUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimActionUpdater GCEmitTagActionUpdater::GetParent() const {
    GCAnimActionUpdater value(m_ptr);
    return value;
}
void GCEmitTagActionUpdater::SetParent(GCAnimActionUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCEmitTagActionUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCEmitTagActionUpdater>("CEmitTagActionUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("TagIndex", &GCEmitTagActionUpdater::GetTagIndex, &GCEmitTagActionUpdater::SetTagIndex)
        .addProperty("IsZeroDuration", &GCEmitTagActionUpdater::GetIsZeroDuration, &GCEmitTagActionUpdater::SetIsZeroDuration)
        .addProperty("Parent", &GCEmitTagActionUpdater::GetParent, &GCEmitTagActionUpdater::SetParent)
        .addFunction("ToPtr", &GCEmitTagActionUpdater::ToPtr)
        .addFunction("IsValid", &GCEmitTagActionUpdater::IsValid)
        .endClass();
}
GCAddUpdateNode::GCAddUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAddUpdateNode::GCAddUpdateNode(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCAddUpdateNode::GetFootMotionTiming() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CAddUpdateNode", "m_footMotionTiming");
}
void GCAddUpdateNode::SetFootMotionTiming(uint64_t value) {
    SetSchemaValue(m_ptr, "CAddUpdateNode", "m_footMotionTiming", false, value);
}
bool GCAddUpdateNode::GetApplyToFootMotion() const {
    return GetSchemaValue<bool>(m_ptr, "CAddUpdateNode", "m_bApplyToFootMotion");
}
void GCAddUpdateNode::SetApplyToFootMotion(bool value) {
    SetSchemaValue(m_ptr, "CAddUpdateNode", "m_bApplyToFootMotion", false, value);
}
bool GCAddUpdateNode::GetApplyChannelsSeparately() const {
    return GetSchemaValue<bool>(m_ptr, "CAddUpdateNode", "m_bApplyChannelsSeparately");
}
void GCAddUpdateNode::SetApplyChannelsSeparately(bool value) {
    SetSchemaValue(m_ptr, "CAddUpdateNode", "m_bApplyChannelsSeparately", false, value);
}
bool GCAddUpdateNode::GetUseModelSpace() const {
    return GetSchemaValue<bool>(m_ptr, "CAddUpdateNode", "m_bUseModelSpace");
}
void GCAddUpdateNode::SetUseModelSpace(bool value) {
    SetSchemaValue(m_ptr, "CAddUpdateNode", "m_bUseModelSpace", false, value);
}
bool GCAddUpdateNode::GetApplyScale() const {
    return GetSchemaValue<bool>(m_ptr, "CAddUpdateNode", "m_bApplyScale");
}
void GCAddUpdateNode::SetApplyScale(bool value) {
    SetSchemaValue(m_ptr, "CAddUpdateNode", "m_bApplyScale", false, value);
}
void* GCAddUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCAddUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAddUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCBinaryUpdateNode GCAddUpdateNode::GetParent() const {
    GCBinaryUpdateNode value(m_ptr);
    return value;
}
void GCAddUpdateNode::SetParent(GCBinaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCAddUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAddUpdateNode>("CAddUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FootMotionTiming", &GCAddUpdateNode::GetFootMotionTiming, &GCAddUpdateNode::SetFootMotionTiming)
        .addProperty("ApplyToFootMotion", &GCAddUpdateNode::GetApplyToFootMotion, &GCAddUpdateNode::SetApplyToFootMotion)
        .addProperty("ApplyChannelsSeparately", &GCAddUpdateNode::GetApplyChannelsSeparately, &GCAddUpdateNode::SetApplyChannelsSeparately)
        .addProperty("UseModelSpace", &GCAddUpdateNode::GetUseModelSpace, &GCAddUpdateNode::SetUseModelSpace)
        .addProperty("ApplyScale", &GCAddUpdateNode::GetApplyScale, &GCAddUpdateNode::SetApplyScale)
        .addProperty("Parent", &GCAddUpdateNode::GetParent, &GCAddUpdateNode::SetParent)
        .addFunction("ToPtr", &GCAddUpdateNode::ToPtr)
        .addFunction("IsValid", &GCAddUpdateNode::IsValid)
        .endClass();
}
GCAnimTagManagerUpdater::GCAnimTagManagerUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimTagManagerUpdater::GCAnimTagManagerUpdater(void *ptr) {
    m_ptr = ptr;
}
void* GCAnimTagManagerUpdater::GetPtr() {
    return m_ptr;
}
std::string GCAnimTagManagerUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimTagManagerUpdater::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimTagManagerUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimTagManagerUpdater>("CAnimTagManagerUpdater")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GCAnimTagManagerUpdater::ToPtr)
        .addFunction("IsValid", &GCAnimTagManagerUpdater::IsValid)
        .endClass();
}
GSampleCode::GSampleCode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GSampleCode::GSampleCode(void *ptr) {
    m_ptr = ptr;
}
std::vector<uint8_t> GSampleCode::GetSubCode() const {
    uint8_t* outValue = GetSchemaValue<uint8_t*>(m_ptr, "SampleCode", "m_subCode"); std::vector<uint8_t> ret; for(int i = 0; i < 8; i++) { ret.push_back(outValue[i]); } return ret;
}
void GSampleCode::SetSubCode(std::vector<uint8_t> value) {
    uint8_t* outValue = GetSchemaValue<uint8_t*>(m_ptr, "SampleCode", "m_subCode"); for(int i = 0; i < 8; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "SampleCode", "m_subCode", false, outValue);
}
void* GSampleCode::GetPtr() {
    return m_ptr;
}
std::string GSampleCode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GSampleCode::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassSampleCode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GSampleCode>("SampleCode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SubCode", &GSampleCode::GetSubCode, &GSampleCode::SetSubCode)
        .addFunction("ToPtr", &GSampleCode::ToPtr)
        .addFunction("IsValid", &GSampleCode::IsValid)
        .endClass();
}
GCExpressionActionUpdater::GCExpressionActionUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCExpressionActionUpdater::GCExpressionActionUpdater(void *ptr) {
    m_ptr = ptr;
}
GCAnimParamHandle GCExpressionActionUpdater::GetParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CExpressionActionUpdater", "m_hParam"));
    return value;
}
void GCExpressionActionUpdater::SetParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Param' is not possible.\n");
}
uint64_t GCExpressionActionUpdater::GetParamType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CExpressionActionUpdater", "m_eParamType");
}
void GCExpressionActionUpdater::SetParamType(uint64_t value) {
    SetSchemaValue(m_ptr, "CExpressionActionUpdater", "m_eParamType", false, value);
}
GAnimScriptHandle GCExpressionActionUpdater::GetScript() const {
    GAnimScriptHandle value(GetSchemaPtr(m_ptr, "CExpressionActionUpdater", "m_hScript"));
    return value;
}
void GCExpressionActionUpdater::SetScript(GAnimScriptHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Script' is not possible.\n");
}
void* GCExpressionActionUpdater::GetPtr() {
    return m_ptr;
}
std::string GCExpressionActionUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCExpressionActionUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimActionUpdater GCExpressionActionUpdater::GetParent() const {
    GCAnimActionUpdater value(m_ptr);
    return value;
}
void GCExpressionActionUpdater::SetParent(GCAnimActionUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCExpressionActionUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCExpressionActionUpdater>("CExpressionActionUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Param", &GCExpressionActionUpdater::GetParam, &GCExpressionActionUpdater::SetParam)
        .addProperty("ParamType", &GCExpressionActionUpdater::GetParamType, &GCExpressionActionUpdater::SetParamType)
        .addProperty("Script", &GCExpressionActionUpdater::GetScript, &GCExpressionActionUpdater::SetScript)
        .addProperty("Parent", &GCExpressionActionUpdater::GetParent, &GCExpressionActionUpdater::SetParent)
        .addFunction("ToPtr", &GCExpressionActionUpdater::ToPtr)
        .addFunction("IsValid", &GCExpressionActionUpdater::IsValid)
        .endClass();
}
GEventClientPostAdvanceTick_t::GEventClientPostAdvanceTick_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientPostAdvanceTick_t::GEventClientPostAdvanceTick_t(void *ptr) {
    m_ptr = ptr;
}
void* GEventClientPostAdvanceTick_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientPostAdvanceTick_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientPostAdvanceTick_t::IsValid() {
    return (m_ptr != nullptr);
}
GEventPostAdvanceTick_t GEventClientPostAdvanceTick_t::GetParent() const {
    GEventPostAdvanceTick_t value(m_ptr);
    return value;
}
void GEventClientPostAdvanceTick_t::SetParent(GEventPostAdvanceTick_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassEventClientPostAdvanceTick_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientPostAdvanceTick_t>("EventClientPostAdvanceTick_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GEventClientPostAdvanceTick_t::GetParent, &GEventClientPostAdvanceTick_t::SetParent)
        .addFunction("ToPtr", &GEventClientPostAdvanceTick_t::ToPtr)
        .addFunction("IsValid", &GEventClientPostAdvanceTick_t::IsValid)
        .endClass();
}
GBoneDemoCaptureSettings_t::GBoneDemoCaptureSettings_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GBoneDemoCaptureSettings_t::GBoneDemoCaptureSettings_t(void *ptr) {
    m_ptr = ptr;
}
std::string GBoneDemoCaptureSettings_t::GetBoneName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "BoneDemoCaptureSettings_t", "m_boneName").Get();
}
void GBoneDemoCaptureSettings_t::SetBoneName(std::string value) {
    SetSchemaValue(m_ptr, "BoneDemoCaptureSettings_t", "m_boneName", true, CUtlString(value.c_str()));
}
float GBoneDemoCaptureSettings_t::GetErrorSplineRotationMax() const {
    return GetSchemaValue<float>(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorSplineRotationMax");
}
void GBoneDemoCaptureSettings_t::SetErrorSplineRotationMax(float value) {
    SetSchemaValue(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorSplineRotationMax", true, value);
}
float GBoneDemoCaptureSettings_t::GetErrorSplineTranslationMax() const {
    return GetSchemaValue<float>(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorSplineTranslationMax");
}
void GBoneDemoCaptureSettings_t::SetErrorSplineTranslationMax(float value) {
    SetSchemaValue(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorSplineTranslationMax", true, value);
}
float GBoneDemoCaptureSettings_t::GetErrorSplineScaleMax() const {
    return GetSchemaValue<float>(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorSplineScaleMax");
}
void GBoneDemoCaptureSettings_t::SetErrorSplineScaleMax(float value) {
    SetSchemaValue(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorSplineScaleMax", true, value);
}
float GBoneDemoCaptureSettings_t::GetErrorQuantizationRotationMax() const {
    return GetSchemaValue<float>(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorQuantizationRotationMax");
}
void GBoneDemoCaptureSettings_t::SetErrorQuantizationRotationMax(float value) {
    SetSchemaValue(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorQuantizationRotationMax", true, value);
}
float GBoneDemoCaptureSettings_t::GetErrorQuantizationTranslationMax() const {
    return GetSchemaValue<float>(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorQuantizationTranslationMax");
}
void GBoneDemoCaptureSettings_t::SetErrorQuantizationTranslationMax(float value) {
    SetSchemaValue(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorQuantizationTranslationMax", true, value);
}
float GBoneDemoCaptureSettings_t::GetErrorQuantizationScaleMax() const {
    return GetSchemaValue<float>(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorQuantizationScaleMax");
}
void GBoneDemoCaptureSettings_t::SetErrorQuantizationScaleMax(float value) {
    SetSchemaValue(m_ptr, "BoneDemoCaptureSettings_t", "m_flErrorQuantizationScaleMax", true, value);
}
void* GBoneDemoCaptureSettings_t::GetPtr() {
    return m_ptr;
}
std::string GBoneDemoCaptureSettings_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GBoneDemoCaptureSettings_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassBoneDemoCaptureSettings_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GBoneDemoCaptureSettings_t>("BoneDemoCaptureSettings_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BoneName", &GBoneDemoCaptureSettings_t::GetBoneName, &GBoneDemoCaptureSettings_t::SetBoneName)
        .addProperty("ErrorSplineRotationMax", &GBoneDemoCaptureSettings_t::GetErrorSplineRotationMax, &GBoneDemoCaptureSettings_t::SetErrorSplineRotationMax)
        .addProperty("ErrorSplineTranslationMax", &GBoneDemoCaptureSettings_t::GetErrorSplineTranslationMax, &GBoneDemoCaptureSettings_t::SetErrorSplineTranslationMax)
        .addProperty("ErrorSplineScaleMax", &GBoneDemoCaptureSettings_t::GetErrorSplineScaleMax, &GBoneDemoCaptureSettings_t::SetErrorSplineScaleMax)
        .addProperty("ErrorQuantizationRotationMax", &GBoneDemoCaptureSettings_t::GetErrorQuantizationRotationMax, &GBoneDemoCaptureSettings_t::SetErrorQuantizationRotationMax)
        .addProperty("ErrorQuantizationTranslationMax", &GBoneDemoCaptureSettings_t::GetErrorQuantizationTranslationMax, &GBoneDemoCaptureSettings_t::SetErrorQuantizationTranslationMax)
        .addProperty("ErrorQuantizationScaleMax", &GBoneDemoCaptureSettings_t::GetErrorQuantizationScaleMax, &GBoneDemoCaptureSettings_t::SetErrorQuantizationScaleMax)
        .addFunction("ToPtr", &GBoneDemoCaptureSettings_t::ToPtr)
        .addFunction("IsValid", &GBoneDemoCaptureSettings_t::IsValid)
        .endClass();
}
GVPhysXBodyPart_t::GVPhysXBodyPart_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVPhysXBodyPart_t::GVPhysXBodyPart_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GVPhysXBodyPart_t::GetFlags() const {
    return GetSchemaValue<uint32_t>(m_ptr, "VPhysXBodyPart_t", "m_nFlags");
}
void GVPhysXBodyPart_t::SetFlags(uint32_t value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_nFlags", true, value);
}
float GVPhysXBodyPart_t::GetMass() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXBodyPart_t", "m_flMass");
}
void GVPhysXBodyPart_t::SetMass(float value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_flMass", true, value);
}
GVPhysics2ShapeDef_t GVPhysXBodyPart_t::GetRnShape() const {
    GVPhysics2ShapeDef_t value(GetSchemaPtr(m_ptr, "VPhysXBodyPart_t", "m_rnShape"));
    return value;
}
void GVPhysXBodyPart_t::SetRnShape(GVPhysics2ShapeDef_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'RnShape' is not possible.\n");
}
uint16_t GVPhysXBodyPart_t::GetCollisionAttributeIndex() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXBodyPart_t", "m_nCollisionAttributeIndex");
}
void GVPhysXBodyPart_t::SetCollisionAttributeIndex(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_nCollisionAttributeIndex", true, value);
}
uint16_t GVPhysXBodyPart_t::GetReserved() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXBodyPart_t", "m_nReserved");
}
void GVPhysXBodyPart_t::SetReserved(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_nReserved", true, value);
}
float GVPhysXBodyPart_t::GetInertiaScale() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXBodyPart_t", "m_flInertiaScale");
}
void GVPhysXBodyPart_t::SetInertiaScale(float value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_flInertiaScale", true, value);
}
float GVPhysXBodyPart_t::GetLinearDamping() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXBodyPart_t", "m_flLinearDamping");
}
void GVPhysXBodyPart_t::SetLinearDamping(float value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_flLinearDamping", true, value);
}
float GVPhysXBodyPart_t::GetAngularDamping() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXBodyPart_t", "m_flAngularDamping");
}
void GVPhysXBodyPart_t::SetAngularDamping(float value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_flAngularDamping", true, value);
}
bool GVPhysXBodyPart_t::GetOverrideMassCenter() const {
    return GetSchemaValue<bool>(m_ptr, "VPhysXBodyPart_t", "m_bOverrideMassCenter");
}
void GVPhysXBodyPart_t::SetOverrideMassCenter(bool value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_bOverrideMassCenter", true, value);
}
Vector GVPhysXBodyPart_t::GetMassCenterOverride() const {
    return GetSchemaValue<Vector>(m_ptr, "VPhysXBodyPart_t", "m_vMassCenterOverride");
}
void GVPhysXBodyPart_t::SetMassCenterOverride(Vector value) {
    SetSchemaValue(m_ptr, "VPhysXBodyPart_t", "m_vMassCenterOverride", true, value);
}
void* GVPhysXBodyPart_t::GetPtr() {
    return m_ptr;
}
std::string GVPhysXBodyPart_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVPhysXBodyPart_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVPhysXBodyPart_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVPhysXBodyPart_t>("VPhysXBodyPart_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GVPhysXBodyPart_t::GetFlags, &GVPhysXBodyPart_t::SetFlags)
        .addProperty("Mass", &GVPhysXBodyPart_t::GetMass, &GVPhysXBodyPart_t::SetMass)
        .addProperty("RnShape", &GVPhysXBodyPart_t::GetRnShape, &GVPhysXBodyPart_t::SetRnShape)
        .addProperty("CollisionAttributeIndex", &GVPhysXBodyPart_t::GetCollisionAttributeIndex, &GVPhysXBodyPart_t::SetCollisionAttributeIndex)
        .addProperty("Reserved", &GVPhysXBodyPart_t::GetReserved, &GVPhysXBodyPart_t::SetReserved)
        .addProperty("InertiaScale", &GVPhysXBodyPart_t::GetInertiaScale, &GVPhysXBodyPart_t::SetInertiaScale)
        .addProperty("LinearDamping", &GVPhysXBodyPart_t::GetLinearDamping, &GVPhysXBodyPart_t::SetLinearDamping)
        .addProperty("AngularDamping", &GVPhysXBodyPart_t::GetAngularDamping, &GVPhysXBodyPart_t::SetAngularDamping)
        .addProperty("OverrideMassCenter", &GVPhysXBodyPart_t::GetOverrideMassCenter, &GVPhysXBodyPart_t::SetOverrideMassCenter)
        .addProperty("MassCenterOverride", &GVPhysXBodyPart_t::GetMassCenterOverride, &GVPhysXBodyPart_t::SetMassCenterOverride)
        .addFunction("ToPtr", &GVPhysXBodyPart_t::ToPtr)
        .addFunction("IsValid", &GVPhysXBodyPart_t::IsValid)
        .endClass();
}
GCDecalInfo::GCDecalInfo(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCDecalInfo::GCDecalInfo(void *ptr) {
    m_ptr = ptr;
}
float GCDecalInfo::GetAnimationScale() const {
    return GetSchemaValue<float>(m_ptr, "CDecalInfo", "m_flAnimationScale");
}
void GCDecalInfo::SetAnimationScale(float value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_flAnimationScale", false, value);
}
float GCDecalInfo::GetAnimationLifeSpan() const {
    return GetSchemaValue<float>(m_ptr, "CDecalInfo", "m_flAnimationLifeSpan");
}
void GCDecalInfo::SetAnimationLifeSpan(float value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_flAnimationLifeSpan", false, value);
}
float GCDecalInfo::GetPlaceTime() const {
    return GetSchemaValue<float>(m_ptr, "CDecalInfo", "m_flPlaceTime");
}
void GCDecalInfo::SetPlaceTime(float value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_flPlaceTime", false, value);
}
float GCDecalInfo::GetFadeStartTime() const {
    return GetSchemaValue<float>(m_ptr, "CDecalInfo", "m_flFadeStartTime");
}
void GCDecalInfo::SetFadeStartTime(float value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_flFadeStartTime", false, value);
}
float GCDecalInfo::GetFadeDuration() const {
    return GetSchemaValue<float>(m_ptr, "CDecalInfo", "m_flFadeDuration");
}
void GCDecalInfo::SetFadeDuration(float value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_flFadeDuration", false, value);
}
int32_t GCDecalInfo::GetVBSlot() const {
    return GetSchemaValue<int32_t>(m_ptr, "CDecalInfo", "m_nVBSlot");
}
void GCDecalInfo::SetVBSlot(int32_t value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_nVBSlot", false, value);
}
int32_t GCDecalInfo::GetBoneIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CDecalInfo", "m_nBoneIndex");
}
void GCDecalInfo::SetBoneIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_nBoneIndex", false, value);
}
Vector GCDecalInfo::GetPosition() const {
    return GetSchemaValue<Vector>(m_ptr, "CDecalInfo", "m_vPosition");
}
void GCDecalInfo::SetPosition(Vector value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_vPosition", false, value);
}
float GCDecalInfo::GetBoundingRadiusSqr() const {
    return GetSchemaValue<float>(m_ptr, "CDecalInfo", "m_flBoundingRadiusSqr");
}
void GCDecalInfo::SetBoundingRadiusSqr(float value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_flBoundingRadiusSqr", false, value);
}
GCDecalInfo GCDecalInfo::GetNext() const {
    GCDecalInfo value(*GetSchemaValuePtr<void*>(m_ptr, "CDecalInfo", "m_pNext"));
    return value;
}
void GCDecalInfo::SetNext(GCDecalInfo value) {
    SetSchemaValue(m_ptr, "CDecalInfo","m_pNext", false, (char*)value.GetPtr());
}
GCDecalInfo GCDecalInfo::GetPrev() const {
    GCDecalInfo value(*GetSchemaValuePtr<void*>(m_ptr, "CDecalInfo", "m_pPrev"));
    return value;
}
void GCDecalInfo::SetPrev(GCDecalInfo value) {
    SetSchemaValue(m_ptr, "CDecalInfo","m_pPrev", false, (char*)value.GetPtr());
}
int32_t GCDecalInfo::GetDecalMaterialIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CDecalInfo", "m_nDecalMaterialIndex");
}
void GCDecalInfo::SetDecalMaterialIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CDecalInfo", "m_nDecalMaterialIndex", false, value);
}
void* GCDecalInfo::GetPtr() {
    return m_ptr;
}
std::string GCDecalInfo::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCDecalInfo::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCDecalInfo(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCDecalInfo>("CDecalInfo")
        .addConstructor<void (*)(std::string)>()
        .addProperty("AnimationScale", &GCDecalInfo::GetAnimationScale, &GCDecalInfo::SetAnimationScale)
        .addProperty("AnimationLifeSpan", &GCDecalInfo::GetAnimationLifeSpan, &GCDecalInfo::SetAnimationLifeSpan)
        .addProperty("PlaceTime", &GCDecalInfo::GetPlaceTime, &GCDecalInfo::SetPlaceTime)
        .addProperty("FadeStartTime", &GCDecalInfo::GetFadeStartTime, &GCDecalInfo::SetFadeStartTime)
        .addProperty("FadeDuration", &GCDecalInfo::GetFadeDuration, &GCDecalInfo::SetFadeDuration)
        .addProperty("VBSlot", &GCDecalInfo::GetVBSlot, &GCDecalInfo::SetVBSlot)
        .addProperty("BoneIndex", &GCDecalInfo::GetBoneIndex, &GCDecalInfo::SetBoneIndex)
        .addProperty("Position", &GCDecalInfo::GetPosition, &GCDecalInfo::SetPosition)
        .addProperty("BoundingRadiusSqr", &GCDecalInfo::GetBoundingRadiusSqr, &GCDecalInfo::SetBoundingRadiusSqr)
        .addProperty("Next", &GCDecalInfo::GetNext, &GCDecalInfo::SetNext)
        .addProperty("Prev", &GCDecalInfo::GetPrev, &GCDecalInfo::SetPrev)
        .addProperty("DecalMaterialIndex", &GCDecalInfo::GetDecalMaterialIndex, &GCDecalInfo::SetDecalMaterialIndex)
        .addFunction("ToPtr", &GCDecalInfo::ToPtr)
        .addFunction("IsValid", &GCDecalInfo::IsValid)
        .endClass();
}
GParticleControlPointConfiguration_t::GParticleControlPointConfiguration_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GParticleControlPointConfiguration_t::GParticleControlPointConfiguration_t(void *ptr) {
    m_ptr = ptr;
}
std::string GParticleControlPointConfiguration_t::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "ParticleControlPointConfiguration_t", "m_name").Get();
}
void GParticleControlPointConfiguration_t::SetName(std::string value) {
    SetSchemaValue(m_ptr, "ParticleControlPointConfiguration_t", "m_name", true, CUtlString(value.c_str()));
}
std::vector<GParticleControlPointDriver_t> GParticleControlPointConfiguration_t::GetDrivers() const {
    CUtlVector<GParticleControlPointDriver_t>* vec = GetSchemaValue<CUtlVector<GParticleControlPointDriver_t>*>(m_ptr, "ParticleControlPointConfiguration_t", "m_drivers"); std::vector<GParticleControlPointDriver_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GParticleControlPointConfiguration_t::SetDrivers(std::vector<GParticleControlPointDriver_t> value) {
    SetSchemaValueCUtlVector<GParticleControlPointDriver_t>(m_ptr, "ParticleControlPointConfiguration_t", "m_drivers", true, value);
}
GParticlePreviewState_t GParticleControlPointConfiguration_t::GetPreviewState() const {
    GParticlePreviewState_t value(GetSchemaPtr(m_ptr, "ParticleControlPointConfiguration_t", "m_previewState"));
    return value;
}
void GParticleControlPointConfiguration_t::SetPreviewState(GParticlePreviewState_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'PreviewState' is not possible.\n");
}
void* GParticleControlPointConfiguration_t::GetPtr() {
    return m_ptr;
}
std::string GParticleControlPointConfiguration_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GParticleControlPointConfiguration_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassParticleControlPointConfiguration_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GParticleControlPointConfiguration_t>("ParticleControlPointConfiguration_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GParticleControlPointConfiguration_t::GetName, &GParticleControlPointConfiguration_t::SetName)
        .addProperty("Drivers", &GParticleControlPointConfiguration_t::GetDrivers, &GParticleControlPointConfiguration_t::SetDrivers)
        .addProperty("PreviewState", &GParticleControlPointConfiguration_t::GetPreviewState, &GParticleControlPointConfiguration_t::SetPreviewState)
        .addFunction("ToPtr", &GParticleControlPointConfiguration_t::ToPtr)
        .addFunction("IsValid", &GParticleControlPointConfiguration_t::IsValid)
        .endClass();
}
GVMixUtilityDesc_t::GVMixUtilityDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixUtilityDesc_t::GVMixUtilityDesc_t(void *ptr) {
    m_ptr = ptr;
}
uint64_t GVMixUtilityDesc_t::GetOp() const {
    return GetSchemaValue<uint64_t>(m_ptr, "VMixUtilityDesc_t", "m_nOp");
}
void GVMixUtilityDesc_t::SetOp(uint64_t value) {
    SetSchemaValue(m_ptr, "VMixUtilityDesc_t", "m_nOp", true, value);
}
float GVMixUtilityDesc_t::GetInputPan() const {
    return GetSchemaValue<float>(m_ptr, "VMixUtilityDesc_t", "m_flInputPan");
}
void GVMixUtilityDesc_t::SetInputPan(float value) {
    SetSchemaValue(m_ptr, "VMixUtilityDesc_t", "m_flInputPan", true, value);
}
float GVMixUtilityDesc_t::GetOutputBalance() const {
    return GetSchemaValue<float>(m_ptr, "VMixUtilityDesc_t", "m_flOutputBalance");
}
void GVMixUtilityDesc_t::SetOutputBalance(float value) {
    SetSchemaValue(m_ptr, "VMixUtilityDesc_t", "m_flOutputBalance", true, value);
}
float GVMixUtilityDesc_t::GetFldbOutputGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixUtilityDesc_t", "m_fldbOutputGain");
}
void GVMixUtilityDesc_t::SetFldbOutputGain(float value) {
    SetSchemaValue(m_ptr, "VMixUtilityDesc_t", "m_fldbOutputGain", true, value);
}
bool GVMixUtilityDesc_t::GetBassMono() const {
    return GetSchemaValue<bool>(m_ptr, "VMixUtilityDesc_t", "m_bBassMono");
}
void GVMixUtilityDesc_t::SetBassMono(bool value) {
    SetSchemaValue(m_ptr, "VMixUtilityDesc_t", "m_bBassMono", true, value);
}
float GVMixUtilityDesc_t::GetBassFreq() const {
    return GetSchemaValue<float>(m_ptr, "VMixUtilityDesc_t", "m_flBassFreq");
}
void GVMixUtilityDesc_t::SetBassFreq(float value) {
    SetSchemaValue(m_ptr, "VMixUtilityDesc_t", "m_flBassFreq", true, value);
}
void* GVMixUtilityDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixUtilityDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixUtilityDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixUtilityDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixUtilityDesc_t>("VMixUtilityDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Op", &GVMixUtilityDesc_t::GetOp, &GVMixUtilityDesc_t::SetOp)
        .addProperty("InputPan", &GVMixUtilityDesc_t::GetInputPan, &GVMixUtilityDesc_t::SetInputPan)
        .addProperty("OutputBalance", &GVMixUtilityDesc_t::GetOutputBalance, &GVMixUtilityDesc_t::SetOutputBalance)
        .addProperty("FldbOutputGain", &GVMixUtilityDesc_t::GetFldbOutputGain, &GVMixUtilityDesc_t::SetFldbOutputGain)
        .addProperty("BassMono", &GVMixUtilityDesc_t::GetBassMono, &GVMixUtilityDesc_t::SetBassMono)
        .addProperty("BassFreq", &GVMixUtilityDesc_t::GetBassFreq, &GVMixUtilityDesc_t::SetBassFreq)
        .addFunction("ToPtr", &GVMixUtilityDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixUtilityDesc_t::IsValid)
        .endClass();
}
GCMotionGraphConfig::GCMotionGraphConfig(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionGraphConfig::GCMotionGraphConfig(void *ptr) {
    m_ptr = ptr;
}
std::vector<float> GCMotionGraphConfig::GetParamValues() const {
    float* outValue = GetSchemaValue<float*>(m_ptr, "CMotionGraphConfig", "m_paramValues"); std::vector<float> ret; for(int i = 0; i < 4; i++) { ret.push_back(outValue[i]); } return ret;
}
void GCMotionGraphConfig::SetParamValues(std::vector<float> value) {
    float* outValue = GetSchemaValue<float*>(m_ptr, "CMotionGraphConfig", "m_paramValues"); for(int i = 0; i < 4; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "CMotionGraphConfig", "m_paramValues", false, outValue);
}
float GCMotionGraphConfig::GetDuration() const {
    return GetSchemaValue<float>(m_ptr, "CMotionGraphConfig", "m_flDuration");
}
void GCMotionGraphConfig::SetDuration(float value) {
    SetSchemaValue(m_ptr, "CMotionGraphConfig", "m_flDuration", false, value);
}
GMotionIndex GCMotionGraphConfig::GetMotionIndex() const {
    GMotionIndex value(GetSchemaPtr(m_ptr, "CMotionGraphConfig", "m_nMotionIndex"));
    return value;
}
void GCMotionGraphConfig::SetMotionIndex(GMotionIndex value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'MotionIndex' is not possible.\n");
}
int32_t GCMotionGraphConfig::GetSampleStart() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMotionGraphConfig", "m_nSampleStart");
}
void GCMotionGraphConfig::SetSampleStart(int32_t value) {
    SetSchemaValue(m_ptr, "CMotionGraphConfig", "m_nSampleStart", false, value);
}
int32_t GCMotionGraphConfig::GetSampleCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMotionGraphConfig", "m_nSampleCount");
}
void GCMotionGraphConfig::SetSampleCount(int32_t value) {
    SetSchemaValue(m_ptr, "CMotionGraphConfig", "m_nSampleCount", false, value);
}
void* GCMotionGraphConfig::GetPtr() {
    return m_ptr;
}
std::string GCMotionGraphConfig::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionGraphConfig::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMotionGraphConfig(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionGraphConfig>("CMotionGraphConfig")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ParamValues", &GCMotionGraphConfig::GetParamValues, &GCMotionGraphConfig::SetParamValues)
        .addProperty("Duration", &GCMotionGraphConfig::GetDuration, &GCMotionGraphConfig::SetDuration)
        .addProperty("MotionIndex", &GCMotionGraphConfig::GetMotionIndex, &GCMotionGraphConfig::SetMotionIndex)
        .addProperty("SampleStart", &GCMotionGraphConfig::GetSampleStart, &GCMotionGraphConfig::SetSampleStart)
        .addProperty("SampleCount", &GCMotionGraphConfig::GetSampleCount, &GCMotionGraphConfig::SetSampleCount)
        .addFunction("ToPtr", &GCMotionGraphConfig::ToPtr)
        .addFunction("IsValid", &GCMotionGraphConfig::IsValid)
        .endClass();
}
GCMovementComponentUpdater::GCMovementComponentUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMovementComponentUpdater::GCMovementComponentUpdater(void *ptr) {
    m_ptr = ptr;
}
GCAnimInputDamping GCMovementComponentUpdater::GetFacingDamping() const {
    GCAnimInputDamping value(GetSchemaPtr(m_ptr, "CMovementComponentUpdater", "m_facingDamping"));
    return value;
}
void GCMovementComponentUpdater::SetFacingDamping(GCAnimInputDamping value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'FacingDamping' is not possible.\n");
}
int32_t GCMovementComponentUpdater::GetDefaultMotorIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMovementComponentUpdater", "m_nDefaultMotorIndex");
}
void GCMovementComponentUpdater::SetDefaultMotorIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CMovementComponentUpdater", "m_nDefaultMotorIndex", false, value);
}
float GCMovementComponentUpdater::GetDefaultRunSpeed() const {
    return GetSchemaValue<float>(m_ptr, "CMovementComponentUpdater", "m_flDefaultRunSpeed");
}
void GCMovementComponentUpdater::SetDefaultRunSpeed(float value) {
    SetSchemaValue(m_ptr, "CMovementComponentUpdater", "m_flDefaultRunSpeed", false, value);
}
bool GCMovementComponentUpdater::GetMoveVarsDisabled() const {
    return GetSchemaValue<bool>(m_ptr, "CMovementComponentUpdater", "m_bMoveVarsDisabled");
}
void GCMovementComponentUpdater::SetMoveVarsDisabled(bool value) {
    SetSchemaValue(m_ptr, "CMovementComponentUpdater", "m_bMoveVarsDisabled", false, value);
}
bool GCMovementComponentUpdater::GetNetworkPath() const {
    return GetSchemaValue<bool>(m_ptr, "CMovementComponentUpdater", "m_bNetworkPath");
}
void GCMovementComponentUpdater::SetNetworkPath(bool value) {
    SetSchemaValue(m_ptr, "CMovementComponentUpdater", "m_bNetworkPath", false, value);
}
bool GCMovementComponentUpdater::GetNetworkFacing() const {
    return GetSchemaValue<bool>(m_ptr, "CMovementComponentUpdater", "m_bNetworkFacing");
}
void GCMovementComponentUpdater::SetNetworkFacing(bool value) {
    SetSchemaValue(m_ptr, "CMovementComponentUpdater", "m_bNetworkFacing", false, value);
}
std::vector<GCAnimParamHandle> GCMovementComponentUpdater::GetParamHandles() const {
    GCAnimParamHandle* outValue = GetSchemaValue<GCAnimParamHandle*>(m_ptr, "CMovementComponentUpdater", "m_paramHandles"); std::vector<GCAnimParamHandle> ret; for(int i = 0; i < 30; i++) { ret.push_back(outValue[i]); } return ret;
}
void GCMovementComponentUpdater::SetParamHandles(std::vector<GCAnimParamHandle> value) {
    GCAnimParamHandle* outValue = GetSchemaValue<GCAnimParamHandle*>(m_ptr, "CMovementComponentUpdater", "m_paramHandles"); for(int i = 0; i < 30; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "CMovementComponentUpdater", "m_paramHandles", false, outValue);
}
void* GCMovementComponentUpdater::GetPtr() {
    return m_ptr;
}
std::string GCMovementComponentUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMovementComponentUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimComponentUpdater GCMovementComponentUpdater::GetParent() const {
    GCAnimComponentUpdater value(m_ptr);
    return value;
}
void GCMovementComponentUpdater::SetParent(GCAnimComponentUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCMovementComponentUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMovementComponentUpdater>("CMovementComponentUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FacingDamping", &GCMovementComponentUpdater::GetFacingDamping, &GCMovementComponentUpdater::SetFacingDamping)
        .addProperty("DefaultMotorIndex", &GCMovementComponentUpdater::GetDefaultMotorIndex, &GCMovementComponentUpdater::SetDefaultMotorIndex)
        .addProperty("DefaultRunSpeed", &GCMovementComponentUpdater::GetDefaultRunSpeed, &GCMovementComponentUpdater::SetDefaultRunSpeed)
        .addProperty("MoveVarsDisabled", &GCMovementComponentUpdater::GetMoveVarsDisabled, &GCMovementComponentUpdater::SetMoveVarsDisabled)
        .addProperty("NetworkPath", &GCMovementComponentUpdater::GetNetworkPath, &GCMovementComponentUpdater::SetNetworkPath)
        .addProperty("NetworkFacing", &GCMovementComponentUpdater::GetNetworkFacing, &GCMovementComponentUpdater::SetNetworkFacing)
        .addProperty("ParamHandles", &GCMovementComponentUpdater::GetParamHandles, &GCMovementComponentUpdater::SetParamHandles)
        .addProperty("Parent", &GCMovementComponentUpdater::GetParent, &GCMovementComponentUpdater::SetParent)
        .addFunction("ToPtr", &GCMovementComponentUpdater::ToPtr)
        .addFunction("IsValid", &GCMovementComponentUpdater::IsValid)
        .endClass();
}
GPointDefinition_t::GPointDefinition_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GPointDefinition_t::GPointDefinition_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GPointDefinition_t::GetControlPoint() const {
    return GetSchemaValue<int32_t>(m_ptr, "PointDefinition_t", "m_nControlPoint");
}
void GPointDefinition_t::SetControlPoint(int32_t value) {
    SetSchemaValue(m_ptr, "PointDefinition_t", "m_nControlPoint", true, value);
}
bool GPointDefinition_t::GetLocalCoords() const {
    return GetSchemaValue<bool>(m_ptr, "PointDefinition_t", "m_bLocalCoords");
}
void GPointDefinition_t::SetLocalCoords(bool value) {
    SetSchemaValue(m_ptr, "PointDefinition_t", "m_bLocalCoords", true, value);
}
Vector GPointDefinition_t::GetOffset() const {
    return GetSchemaValue<Vector>(m_ptr, "PointDefinition_t", "m_vOffset");
}
void GPointDefinition_t::SetOffset(Vector value) {
    SetSchemaValue(m_ptr, "PointDefinition_t", "m_vOffset", true, value);
}
void* GPointDefinition_t::GetPtr() {
    return m_ptr;
}
std::string GPointDefinition_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GPointDefinition_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassPointDefinition_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GPointDefinition_t>("PointDefinition_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ControlPoint", &GPointDefinition_t::GetControlPoint, &GPointDefinition_t::SetControlPoint)
        .addProperty("LocalCoords", &GPointDefinition_t::GetLocalCoords, &GPointDefinition_t::SetLocalCoords)
        .addProperty("Offset", &GPointDefinition_t::GetOffset, &GPointDefinition_t::SetOffset)
        .addFunction("ToPtr", &GPointDefinition_t::ToPtr)
        .addFunction("IsValid", &GPointDefinition_t::IsValid)
        .endClass();
}
GVMixEffectChainDesc_t::GVMixEffectChainDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixEffectChainDesc_t::GVMixEffectChainDesc_t(void *ptr) {
    m_ptr = ptr;
}
float GVMixEffectChainDesc_t::GetCrossfadeTime() const {
    return GetSchemaValue<float>(m_ptr, "VMixEffectChainDesc_t", "m_flCrossfadeTime");
}
void GVMixEffectChainDesc_t::SetCrossfadeTime(float value) {
    SetSchemaValue(m_ptr, "VMixEffectChainDesc_t", "m_flCrossfadeTime", true, value);
}
void* GVMixEffectChainDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixEffectChainDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixEffectChainDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixEffectChainDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixEffectChainDesc_t>("VMixEffectChainDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("CrossfadeTime", &GVMixEffectChainDesc_t::GetCrossfadeTime, &GVMixEffectChainDesc_t::SetCrossfadeTime)
        .addFunction("ToPtr", &GVMixEffectChainDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixEffectChainDesc_t::IsValid)
        .endClass();
}
GCHitReactUpdateNode::GCHitReactUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCHitReactUpdateNode::GCHitReactUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GHitReactFixedSettings_t GCHitReactUpdateNode::GetOpFixedSettings() const {
    GHitReactFixedSettings_t value(GetSchemaPtr(m_ptr, "CHitReactUpdateNode", "m_opFixedSettings"));
    return value;
}
void GCHitReactUpdateNode::SetOpFixedSettings(GHitReactFixedSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'OpFixedSettings' is not possible.\n");
}
GCAnimParamHandle GCHitReactUpdateNode::GetTriggerParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CHitReactUpdateNode", "m_triggerParam"));
    return value;
}
void GCHitReactUpdateNode::SetTriggerParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TriggerParam' is not possible.\n");
}
GCAnimParamHandle GCHitReactUpdateNode::GetHitBoneParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CHitReactUpdateNode", "m_hitBoneParam"));
    return value;
}
void GCHitReactUpdateNode::SetHitBoneParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'HitBoneParam' is not possible.\n");
}
GCAnimParamHandle GCHitReactUpdateNode::GetHitOffsetParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CHitReactUpdateNode", "m_hitOffsetParam"));
    return value;
}
void GCHitReactUpdateNode::SetHitOffsetParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'HitOffsetParam' is not possible.\n");
}
GCAnimParamHandle GCHitReactUpdateNode::GetHitDirectionParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CHitReactUpdateNode", "m_hitDirectionParam"));
    return value;
}
void GCHitReactUpdateNode::SetHitDirectionParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'HitDirectionParam' is not possible.\n");
}
GCAnimParamHandle GCHitReactUpdateNode::GetHitStrengthParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CHitReactUpdateNode", "m_hitStrengthParam"));
    return value;
}
void GCHitReactUpdateNode::SetHitStrengthParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'HitStrengthParam' is not possible.\n");
}
float GCHitReactUpdateNode::GetMinDelayBetweenHits() const {
    return GetSchemaValue<float>(m_ptr, "CHitReactUpdateNode", "m_flMinDelayBetweenHits");
}
void GCHitReactUpdateNode::SetMinDelayBetweenHits(float value) {
    SetSchemaValue(m_ptr, "CHitReactUpdateNode", "m_flMinDelayBetweenHits", false, value);
}
bool GCHitReactUpdateNode::GetResetChild() const {
    return GetSchemaValue<bool>(m_ptr, "CHitReactUpdateNode", "m_bResetChild");
}
void GCHitReactUpdateNode::SetResetChild(bool value) {
    SetSchemaValue(m_ptr, "CHitReactUpdateNode", "m_bResetChild", false, value);
}
void* GCHitReactUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCHitReactUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCHitReactUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCHitReactUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCHitReactUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCHitReactUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCHitReactUpdateNode>("CHitReactUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OpFixedSettings", &GCHitReactUpdateNode::GetOpFixedSettings, &GCHitReactUpdateNode::SetOpFixedSettings)
        .addProperty("TriggerParam", &GCHitReactUpdateNode::GetTriggerParam, &GCHitReactUpdateNode::SetTriggerParam)
        .addProperty("HitBoneParam", &GCHitReactUpdateNode::GetHitBoneParam, &GCHitReactUpdateNode::SetHitBoneParam)
        .addProperty("HitOffsetParam", &GCHitReactUpdateNode::GetHitOffsetParam, &GCHitReactUpdateNode::SetHitOffsetParam)
        .addProperty("HitDirectionParam", &GCHitReactUpdateNode::GetHitDirectionParam, &GCHitReactUpdateNode::SetHitDirectionParam)
        .addProperty("HitStrengthParam", &GCHitReactUpdateNode::GetHitStrengthParam, &GCHitReactUpdateNode::SetHitStrengthParam)
        .addProperty("MinDelayBetweenHits", &GCHitReactUpdateNode::GetMinDelayBetweenHits, &GCHitReactUpdateNode::SetMinDelayBetweenHits)
        .addProperty("ResetChild", &GCHitReactUpdateNode::GetResetChild, &GCHitReactUpdateNode::SetResetChild)
        .addProperty("Parent", &GCHitReactUpdateNode::GetParent, &GCHitReactUpdateNode::SetParent)
        .addFunction("ToPtr", &GCHitReactUpdateNode::ToPtr)
        .addFunction("IsValid", &GCHitReactUpdateNode::IsValid)
        .endClass();
}
GEntInput_t::GEntInput_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEntInput_t::GEntInput_t(void *ptr) {
    m_ptr = ptr;
}
void* GEntInput_t::GetPtr() {
    return m_ptr;
}
std::string GEntInput_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEntInput_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEntInput_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEntInput_t>("EntInput_t")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GEntInput_t::ToPtr)
        .addFunction("IsValid", &GEntInput_t::IsValid)
        .endClass();
}
GCNmVirtualParameterFloatNode::GCNmVirtualParameterFloatNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmVirtualParameterFloatNode::GCNmVirtualParameterFloatNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmVirtualParameterFloatNode::GetChildNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmVirtualParameterFloatNode", "m_nChildNodeIdx");
}
void GCNmVirtualParameterFloatNode::SetChildNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmVirtualParameterFloatNode", "m_nChildNodeIdx", false, value);
}
void* GCNmVirtualParameterFloatNode::GetPtr() {
    return m_ptr;
}
std::string GCNmVirtualParameterFloatNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmVirtualParameterFloatNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmFloatValueNode GCNmVirtualParameterFloatNode::GetParent() const {
    GCNmFloatValueNode value(m_ptr);
    return value;
}
void GCNmVirtualParameterFloatNode::SetParent(GCNmFloatValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmVirtualParameterFloatNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmVirtualParameterFloatNode>("CNmVirtualParameterFloatNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChildNodeIdx", &GCNmVirtualParameterFloatNode::GetChildNodeIdx, &GCNmVirtualParameterFloatNode::SetChildNodeIdx)
        .addProperty("Parent", &GCNmVirtualParameterFloatNode::GetParent, &GCNmVirtualParameterFloatNode::SetParent)
        .addFunction("ToPtr", &GCNmVirtualParameterFloatNode::ToPtr)
        .addFunction("IsValid", &GCNmVirtualParameterFloatNode::IsValid)
        .endClass();
}
GCParticleSystemDefinition::GCParticleSystemDefinition(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCParticleSystemDefinition::GCParticleSystemDefinition(void *ptr) {
    m_ptr = ptr;
}
int32_t GCParticleSystemDefinition::GetBehaviorVersion() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nBehaviorVersion");
}
void GCParticleSystemDefinition::SetBehaviorVersion(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nBehaviorVersion", false, value);
}
std::vector<GCParticleFunctionPreEmission*> GCParticleSystemDefinition::GetPreEmissionOperators() const {
    CUtlVector<GCParticleFunctionPreEmission*>* vec = GetSchemaValue<CUtlVector<GCParticleFunctionPreEmission*>*>(m_ptr, "CParticleSystemDefinition", "m_PreEmissionOperators"); std::vector<GCParticleFunctionPreEmission*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetPreEmissionOperators(std::vector<GCParticleFunctionPreEmission*> value) {
    SetSchemaValueCUtlVector<GCParticleFunctionPreEmission*>(m_ptr, "CParticleSystemDefinition", "m_PreEmissionOperators", false, value);
}
std::vector<GCParticleFunctionEmitter*> GCParticleSystemDefinition::GetEmitters() const {
    CUtlVector<GCParticleFunctionEmitter*>* vec = GetSchemaValue<CUtlVector<GCParticleFunctionEmitter*>*>(m_ptr, "CParticleSystemDefinition", "m_Emitters"); std::vector<GCParticleFunctionEmitter*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetEmitters(std::vector<GCParticleFunctionEmitter*> value) {
    SetSchemaValueCUtlVector<GCParticleFunctionEmitter*>(m_ptr, "CParticleSystemDefinition", "m_Emitters", false, value);
}
std::vector<GCParticleFunctionInitializer*> GCParticleSystemDefinition::GetInitializers() const {
    CUtlVector<GCParticleFunctionInitializer*>* vec = GetSchemaValue<CUtlVector<GCParticleFunctionInitializer*>*>(m_ptr, "CParticleSystemDefinition", "m_Initializers"); std::vector<GCParticleFunctionInitializer*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetInitializers(std::vector<GCParticleFunctionInitializer*> value) {
    SetSchemaValueCUtlVector<GCParticleFunctionInitializer*>(m_ptr, "CParticleSystemDefinition", "m_Initializers", false, value);
}
std::vector<GCParticleFunctionOperator*> GCParticleSystemDefinition::GetOperators() const {
    CUtlVector<GCParticleFunctionOperator*>* vec = GetSchemaValue<CUtlVector<GCParticleFunctionOperator*>*>(m_ptr, "CParticleSystemDefinition", "m_Operators"); std::vector<GCParticleFunctionOperator*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetOperators(std::vector<GCParticleFunctionOperator*> value) {
    SetSchemaValueCUtlVector<GCParticleFunctionOperator*>(m_ptr, "CParticleSystemDefinition", "m_Operators", false, value);
}
std::vector<GCParticleFunctionForce*> GCParticleSystemDefinition::GetForceGenerators() const {
    CUtlVector<GCParticleFunctionForce*>* vec = GetSchemaValue<CUtlVector<GCParticleFunctionForce*>*>(m_ptr, "CParticleSystemDefinition", "m_ForceGenerators"); std::vector<GCParticleFunctionForce*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetForceGenerators(std::vector<GCParticleFunctionForce*> value) {
    SetSchemaValueCUtlVector<GCParticleFunctionForce*>(m_ptr, "CParticleSystemDefinition", "m_ForceGenerators", false, value);
}
std::vector<GCParticleFunctionConstraint*> GCParticleSystemDefinition::GetConstraints() const {
    CUtlVector<GCParticleFunctionConstraint*>* vec = GetSchemaValue<CUtlVector<GCParticleFunctionConstraint*>*>(m_ptr, "CParticleSystemDefinition", "m_Constraints"); std::vector<GCParticleFunctionConstraint*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetConstraints(std::vector<GCParticleFunctionConstraint*> value) {
    SetSchemaValueCUtlVector<GCParticleFunctionConstraint*>(m_ptr, "CParticleSystemDefinition", "m_Constraints", false, value);
}
std::vector<GCParticleFunctionRenderer*> GCParticleSystemDefinition::GetRenderers() const {
    CUtlVector<GCParticleFunctionRenderer*>* vec = GetSchemaValue<CUtlVector<GCParticleFunctionRenderer*>*>(m_ptr, "CParticleSystemDefinition", "m_Renderers"); std::vector<GCParticleFunctionRenderer*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetRenderers(std::vector<GCParticleFunctionRenderer*> value) {
    SetSchemaValueCUtlVector<GCParticleFunctionRenderer*>(m_ptr, "CParticleSystemDefinition", "m_Renderers", false, value);
}
std::vector<GParticleChildrenInfo_t> GCParticleSystemDefinition::GetChildren() const {
    CUtlVector<GParticleChildrenInfo_t>* vec = GetSchemaValue<CUtlVector<GParticleChildrenInfo_t>*>(m_ptr, "CParticleSystemDefinition", "m_Children"); std::vector<GParticleChildrenInfo_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetChildren(std::vector<GParticleChildrenInfo_t> value) {
    SetSchemaValueCUtlVector<GParticleChildrenInfo_t>(m_ptr, "CParticleSystemDefinition", "m_Children", false, value);
}
int32_t GCParticleSystemDefinition::GetFirstMultipleOverride_BackwardCompat() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nFirstMultipleOverride_BackwardCompat");
}
void GCParticleSystemDefinition::SetFirstMultipleOverride_BackwardCompat(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nFirstMultipleOverride_BackwardCompat", false, value);
}
int32_t GCParticleSystemDefinition::GetInitialParticles() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nInitialParticles");
}
void GCParticleSystemDefinition::SetInitialParticles(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nInitialParticles", false, value);
}
int32_t GCParticleSystemDefinition::GetMaxParticles() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nMaxParticles");
}
void GCParticleSystemDefinition::SetMaxParticles(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nMaxParticles", false, value);
}
int32_t GCParticleSystemDefinition::GetGroupID() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nGroupID");
}
void GCParticleSystemDefinition::SetGroupID(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nGroupID", false, value);
}
Vector GCParticleSystemDefinition::GetBoundingBoxMin() const {
    return GetSchemaValue<Vector>(m_ptr, "CParticleSystemDefinition", "m_BoundingBoxMin");
}
void GCParticleSystemDefinition::SetBoundingBoxMin(Vector value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_BoundingBoxMin", false, value);
}
Vector GCParticleSystemDefinition::GetBoundingBoxMax() const {
    return GetSchemaValue<Vector>(m_ptr, "CParticleSystemDefinition", "m_BoundingBoxMax");
}
void GCParticleSystemDefinition::SetBoundingBoxMax(Vector value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_BoundingBoxMax", false, value);
}
float GCParticleSystemDefinition::GetDepthSortBias() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flDepthSortBias");
}
void GCParticleSystemDefinition::SetDepthSortBias(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flDepthSortBias", false, value);
}
int32_t GCParticleSystemDefinition::GetSortOverridePositionCP() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nSortOverridePositionCP");
}
void GCParticleSystemDefinition::SetSortOverridePositionCP(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nSortOverridePositionCP", false, value);
}
bool GCParticleSystemDefinition::GetInfiniteBounds() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bInfiniteBounds");
}
void GCParticleSystemDefinition::SetInfiniteBounds(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bInfiniteBounds", false, value);
}
bool GCParticleSystemDefinition::GetEnableNamedValues() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bEnableNamedValues");
}
void GCParticleSystemDefinition::SetEnableNamedValues(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bEnableNamedValues", false, value);
}
std::string GCParticleSystemDefinition::GetNamedValueDomain() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CParticleSystemDefinition", "m_NamedValueDomain").Get();
}
void GCParticleSystemDefinition::SetNamedValueDomain(std::string value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_NamedValueDomain", false, CUtlString(value.c_str()));
}
std::vector<GParticleNamedValueSource_t*> GCParticleSystemDefinition::GetNamedValueLocals() const {
    CUtlVector<GParticleNamedValueSource_t*>* vec = GetSchemaValue<CUtlVector<GParticleNamedValueSource_t*>*>(m_ptr, "CParticleSystemDefinition", "m_NamedValueLocals"); std::vector<GParticleNamedValueSource_t*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetNamedValueLocals(std::vector<GParticleNamedValueSource_t*> value) {
    SetSchemaValueCUtlVector<GParticleNamedValueSource_t*>(m_ptr, "CParticleSystemDefinition", "m_NamedValueLocals", false, value);
}
Color GCParticleSystemDefinition::GetConstantColor() const {
    return GetSchemaValue<Color>(m_ptr, "CParticleSystemDefinition", "m_ConstantColor");
}
void GCParticleSystemDefinition::SetConstantColor(Color value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_ConstantColor", false, value);
}
Vector GCParticleSystemDefinition::GetConstantNormal() const {
    return GetSchemaValue<Vector>(m_ptr, "CParticleSystemDefinition", "m_ConstantNormal");
}
void GCParticleSystemDefinition::SetConstantNormal(Vector value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_ConstantNormal", false, value);
}
float GCParticleSystemDefinition::GetConstantRadius() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flConstantRadius");
}
void GCParticleSystemDefinition::SetConstantRadius(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flConstantRadius", false, value);
}
float GCParticleSystemDefinition::GetConstantRotation() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flConstantRotation");
}
void GCParticleSystemDefinition::SetConstantRotation(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flConstantRotation", false, value);
}
float GCParticleSystemDefinition::GetConstantRotationSpeed() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flConstantRotationSpeed");
}
void GCParticleSystemDefinition::SetConstantRotationSpeed(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flConstantRotationSpeed", false, value);
}
float GCParticleSystemDefinition::GetConstantLifespan() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flConstantLifespan");
}
void GCParticleSystemDefinition::SetConstantLifespan(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flConstantLifespan", false, value);
}
int32_t GCParticleSystemDefinition::GetConstantSequenceNumber() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nConstantSequenceNumber");
}
void GCParticleSystemDefinition::SetConstantSequenceNumber(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nConstantSequenceNumber", false, value);
}
int32_t GCParticleSystemDefinition::GetConstantSequenceNumber1() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nConstantSequenceNumber1");
}
void GCParticleSystemDefinition::SetConstantSequenceNumber1(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nConstantSequenceNumber1", false, value);
}
int32_t GCParticleSystemDefinition::GetSnapshotControlPoint() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nSnapshotControlPoint");
}
void GCParticleSystemDefinition::SetSnapshotControlPoint(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nSnapshotControlPoint", false, value);
}
float GCParticleSystemDefinition::GetCullRadius() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flCullRadius");
}
void GCParticleSystemDefinition::SetCullRadius(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flCullRadius", false, value);
}
float GCParticleSystemDefinition::GetCullFillCost() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flCullFillCost");
}
void GCParticleSystemDefinition::SetCullFillCost(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flCullFillCost", false, value);
}
int32_t GCParticleSystemDefinition::GetCullControlPoint() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nCullControlPoint");
}
void GCParticleSystemDefinition::SetCullControlPoint(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nCullControlPoint", false, value);
}
int32_t GCParticleSystemDefinition::GetFallbackMaxCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nFallbackMaxCount");
}
void GCParticleSystemDefinition::SetFallbackMaxCount(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nFallbackMaxCount", false, value);
}
float GCParticleSystemDefinition::GetPreSimulationTime() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flPreSimulationTime");
}
void GCParticleSystemDefinition::SetPreSimulationTime(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flPreSimulationTime", false, value);
}
float GCParticleSystemDefinition::GetStopSimulationAfterTime() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flStopSimulationAfterTime");
}
void GCParticleSystemDefinition::SetStopSimulationAfterTime(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flStopSimulationAfterTime", false, value);
}
float GCParticleSystemDefinition::GetMaximumTimeStep() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flMaximumTimeStep");
}
void GCParticleSystemDefinition::SetMaximumTimeStep(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flMaximumTimeStep", false, value);
}
float GCParticleSystemDefinition::GetMaximumSimTime() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flMaximumSimTime");
}
void GCParticleSystemDefinition::SetMaximumSimTime(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flMaximumSimTime", false, value);
}
float GCParticleSystemDefinition::GetMinimumSimTime() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flMinimumSimTime");
}
void GCParticleSystemDefinition::SetMinimumSimTime(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flMinimumSimTime", false, value);
}
float GCParticleSystemDefinition::GetMinimumTimeStep() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flMinimumTimeStep");
}
void GCParticleSystemDefinition::SetMinimumTimeStep(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flMinimumTimeStep", false, value);
}
int32_t GCParticleSystemDefinition::GetMinimumFrames() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nMinimumFrames");
}
void GCParticleSystemDefinition::SetMinimumFrames(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nMinimumFrames", false, value);
}
int32_t GCParticleSystemDefinition::GetMinCPULevel() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nMinCPULevel");
}
void GCParticleSystemDefinition::SetMinCPULevel(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nMinCPULevel", false, value);
}
int32_t GCParticleSystemDefinition::GetMinGPULevel() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nMinGPULevel");
}
void GCParticleSystemDefinition::SetMinGPULevel(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nMinGPULevel", false, value);
}
float GCParticleSystemDefinition::GetNoDrawTimeToGoToSleep() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flNoDrawTimeToGoToSleep");
}
void GCParticleSystemDefinition::SetNoDrawTimeToGoToSleep(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flNoDrawTimeToGoToSleep", false, value);
}
float GCParticleSystemDefinition::GetMaxDrawDistance() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flMaxDrawDistance");
}
void GCParticleSystemDefinition::SetMaxDrawDistance(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flMaxDrawDistance", false, value);
}
float GCParticleSystemDefinition::GetStartFadeDistance() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flStartFadeDistance");
}
void GCParticleSystemDefinition::SetStartFadeDistance(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flStartFadeDistance", false, value);
}
float GCParticleSystemDefinition::GetMaxCreationDistance() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flMaxCreationDistance");
}
void GCParticleSystemDefinition::SetMaxCreationDistance(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flMaxCreationDistance", false, value);
}
int32_t GCParticleSystemDefinition::GetAggregationMinAvailableParticles() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nAggregationMinAvailableParticles");
}
void GCParticleSystemDefinition::SetAggregationMinAvailableParticles(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nAggregationMinAvailableParticles", false, value);
}
float GCParticleSystemDefinition::GetAggregateRadius() const {
    return GetSchemaValue<float>(m_ptr, "CParticleSystemDefinition", "m_flAggregateRadius");
}
void GCParticleSystemDefinition::SetAggregateRadius(float value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_flAggregateRadius", false, value);
}
bool GCParticleSystemDefinition::GetShouldBatch() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bShouldBatch");
}
void GCParticleSystemDefinition::SetShouldBatch(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bShouldBatch", false, value);
}
bool GCParticleSystemDefinition::GetShouldHitboxesFallbackToRenderBounds() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bShouldHitboxesFallbackToRenderBounds");
}
void GCParticleSystemDefinition::SetShouldHitboxesFallbackToRenderBounds(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bShouldHitboxesFallbackToRenderBounds", false, value);
}
bool GCParticleSystemDefinition::GetShouldHitboxesFallbackToSnapshot() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bShouldHitboxesFallbackToSnapshot");
}
void GCParticleSystemDefinition::SetShouldHitboxesFallbackToSnapshot(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bShouldHitboxesFallbackToSnapshot", false, value);
}
bool GCParticleSystemDefinition::GetShouldHitboxesFallbackToCollisionHulls() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bShouldHitboxesFallbackToCollisionHulls");
}
void GCParticleSystemDefinition::SetShouldHitboxesFallbackToCollisionHulls(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bShouldHitboxesFallbackToCollisionHulls", false, value);
}
uint64_t GCParticleSystemDefinition::GetViewModelEffect() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CParticleSystemDefinition", "m_nViewModelEffect");
}
void GCParticleSystemDefinition::SetViewModelEffect(uint64_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nViewModelEffect", false, value);
}
bool GCParticleSystemDefinition::GetScreenSpaceEffect() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bScreenSpaceEffect");
}
void GCParticleSystemDefinition::SetScreenSpaceEffect(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bScreenSpaceEffect", false, value);
}
std::string GCParticleSystemDefinition::GetTargetLayerID() const {
    return GetSchemaValue<CUtlSymbolLarge>(m_ptr, "CParticleSystemDefinition", "m_pszTargetLayerID").String();
}
void GCParticleSystemDefinition::SetTargetLayerID(std::string value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_pszTargetLayerID", false, CUtlSymbolLarge(value.c_str()));
}
int32_t GCParticleSystemDefinition::GetSkipRenderControlPoint() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nSkipRenderControlPoint");
}
void GCParticleSystemDefinition::SetSkipRenderControlPoint(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nSkipRenderControlPoint", false, value);
}
int32_t GCParticleSystemDefinition::GetAllowRenderControlPoint() const {
    return GetSchemaValue<int32_t>(m_ptr, "CParticleSystemDefinition", "m_nAllowRenderControlPoint");
}
void GCParticleSystemDefinition::SetAllowRenderControlPoint(int32_t value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_nAllowRenderControlPoint", false, value);
}
bool GCParticleSystemDefinition::GetShouldSort() const {
    return GetSchemaValue<bool>(m_ptr, "CParticleSystemDefinition", "m_bShouldSort");
}
void GCParticleSystemDefinition::SetShouldSort(bool value) {
    SetSchemaValue(m_ptr, "CParticleSystemDefinition", "m_bShouldSort", false, value);
}
std::vector<GParticleControlPointConfiguration_t> GCParticleSystemDefinition::GetControlPointConfigurations() const {
    CUtlVector<GParticleControlPointConfiguration_t>* vec = GetSchemaValue<CUtlVector<GParticleControlPointConfiguration_t>*>(m_ptr, "CParticleSystemDefinition", "m_controlPointConfigurations"); std::vector<GParticleControlPointConfiguration_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCParticleSystemDefinition::SetControlPointConfigurations(std::vector<GParticleControlPointConfiguration_t> value) {
    SetSchemaValueCUtlVector<GParticleControlPointConfiguration_t>(m_ptr, "CParticleSystemDefinition", "m_controlPointConfigurations", false, value);
}
void* GCParticleSystemDefinition::GetPtr() {
    return m_ptr;
}
std::string GCParticleSystemDefinition::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCParticleSystemDefinition::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCParticleSystemDefinition(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCParticleSystemDefinition>("CParticleSystemDefinition")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BehaviorVersion", &GCParticleSystemDefinition::GetBehaviorVersion, &GCParticleSystemDefinition::SetBehaviorVersion)
        .addProperty("PreEmissionOperators", &GCParticleSystemDefinition::GetPreEmissionOperators, &GCParticleSystemDefinition::SetPreEmissionOperators)
        .addProperty("Emitters", &GCParticleSystemDefinition::GetEmitters, &GCParticleSystemDefinition::SetEmitters)
        .addProperty("Initializers", &GCParticleSystemDefinition::GetInitializers, &GCParticleSystemDefinition::SetInitializers)
        .addProperty("Operators", &GCParticleSystemDefinition::GetOperators, &GCParticleSystemDefinition::SetOperators)
        .addProperty("ForceGenerators", &GCParticleSystemDefinition::GetForceGenerators, &GCParticleSystemDefinition::SetForceGenerators)
        .addProperty("Constraints", &GCParticleSystemDefinition::GetConstraints, &GCParticleSystemDefinition::SetConstraints)
        .addProperty("Renderers", &GCParticleSystemDefinition::GetRenderers, &GCParticleSystemDefinition::SetRenderers)
        .addProperty("Children", &GCParticleSystemDefinition::GetChildren, &GCParticleSystemDefinition::SetChildren)
        .addProperty("FirstMultipleOverride_BackwardCompat", &GCParticleSystemDefinition::GetFirstMultipleOverride_BackwardCompat, &GCParticleSystemDefinition::SetFirstMultipleOverride_BackwardCompat)
        .addProperty("InitialParticles", &GCParticleSystemDefinition::GetInitialParticles, &GCParticleSystemDefinition::SetInitialParticles)
        .addProperty("MaxParticles", &GCParticleSystemDefinition::GetMaxParticles, &GCParticleSystemDefinition::SetMaxParticles)
        .addProperty("GroupID", &GCParticleSystemDefinition::GetGroupID, &GCParticleSystemDefinition::SetGroupID)
        .addProperty("BoundingBoxMin", &GCParticleSystemDefinition::GetBoundingBoxMin, &GCParticleSystemDefinition::SetBoundingBoxMin)
        .addProperty("BoundingBoxMax", &GCParticleSystemDefinition::GetBoundingBoxMax, &GCParticleSystemDefinition::SetBoundingBoxMax)
        .addProperty("DepthSortBias", &GCParticleSystemDefinition::GetDepthSortBias, &GCParticleSystemDefinition::SetDepthSortBias)
        .addProperty("SortOverridePositionCP", &GCParticleSystemDefinition::GetSortOverridePositionCP, &GCParticleSystemDefinition::SetSortOverridePositionCP)
        .addProperty("InfiniteBounds", &GCParticleSystemDefinition::GetInfiniteBounds, &GCParticleSystemDefinition::SetInfiniteBounds)
        .addProperty("EnableNamedValues", &GCParticleSystemDefinition::GetEnableNamedValues, &GCParticleSystemDefinition::SetEnableNamedValues)
        .addProperty("NamedValueDomain", &GCParticleSystemDefinition::GetNamedValueDomain, &GCParticleSystemDefinition::SetNamedValueDomain)
        .addProperty("NamedValueLocals", &GCParticleSystemDefinition::GetNamedValueLocals, &GCParticleSystemDefinition::SetNamedValueLocals)
        .addProperty("ConstantColor", &GCParticleSystemDefinition::GetConstantColor, &GCParticleSystemDefinition::SetConstantColor)
        .addProperty("ConstantNormal", &GCParticleSystemDefinition::GetConstantNormal, &GCParticleSystemDefinition::SetConstantNormal)
        .addProperty("ConstantRadius", &GCParticleSystemDefinition::GetConstantRadius, &GCParticleSystemDefinition::SetConstantRadius)
        .addProperty("ConstantRotation", &GCParticleSystemDefinition::GetConstantRotation, &GCParticleSystemDefinition::SetConstantRotation)
        .addProperty("ConstantRotationSpeed", &GCParticleSystemDefinition::GetConstantRotationSpeed, &GCParticleSystemDefinition::SetConstantRotationSpeed)
        .addProperty("ConstantLifespan", &GCParticleSystemDefinition::GetConstantLifespan, &GCParticleSystemDefinition::SetConstantLifespan)
        .addProperty("ConstantSequenceNumber", &GCParticleSystemDefinition::GetConstantSequenceNumber, &GCParticleSystemDefinition::SetConstantSequenceNumber)
        .addProperty("ConstantSequenceNumber1", &GCParticleSystemDefinition::GetConstantSequenceNumber1, &GCParticleSystemDefinition::SetConstantSequenceNumber1)
        .addProperty("SnapshotControlPoint", &GCParticleSystemDefinition::GetSnapshotControlPoint, &GCParticleSystemDefinition::SetSnapshotControlPoint)
        .addProperty("CullRadius", &GCParticleSystemDefinition::GetCullRadius, &GCParticleSystemDefinition::SetCullRadius)
        .addProperty("CullFillCost", &GCParticleSystemDefinition::GetCullFillCost, &GCParticleSystemDefinition::SetCullFillCost)
        .addProperty("CullControlPoint", &GCParticleSystemDefinition::GetCullControlPoint, &GCParticleSystemDefinition::SetCullControlPoint)
        .addProperty("FallbackMaxCount", &GCParticleSystemDefinition::GetFallbackMaxCount, &GCParticleSystemDefinition::SetFallbackMaxCount)
        .addProperty("PreSimulationTime", &GCParticleSystemDefinition::GetPreSimulationTime, &GCParticleSystemDefinition::SetPreSimulationTime)
        .addProperty("StopSimulationAfterTime", &GCParticleSystemDefinition::GetStopSimulationAfterTime, &GCParticleSystemDefinition::SetStopSimulationAfterTime)
        .addProperty("MaximumTimeStep", &GCParticleSystemDefinition::GetMaximumTimeStep, &GCParticleSystemDefinition::SetMaximumTimeStep)
        .addProperty("MaximumSimTime", &GCParticleSystemDefinition::GetMaximumSimTime, &GCParticleSystemDefinition::SetMaximumSimTime)
        .addProperty("MinimumSimTime", &GCParticleSystemDefinition::GetMinimumSimTime, &GCParticleSystemDefinition::SetMinimumSimTime)
        .addProperty("MinimumTimeStep", &GCParticleSystemDefinition::GetMinimumTimeStep, &GCParticleSystemDefinition::SetMinimumTimeStep)
        .addProperty("MinimumFrames", &GCParticleSystemDefinition::GetMinimumFrames, &GCParticleSystemDefinition::SetMinimumFrames)
        .addProperty("MinCPULevel", &GCParticleSystemDefinition::GetMinCPULevel, &GCParticleSystemDefinition::SetMinCPULevel)
        .addProperty("MinGPULevel", &GCParticleSystemDefinition::GetMinGPULevel, &GCParticleSystemDefinition::SetMinGPULevel)
        .addProperty("NoDrawTimeToGoToSleep", &GCParticleSystemDefinition::GetNoDrawTimeToGoToSleep, &GCParticleSystemDefinition::SetNoDrawTimeToGoToSleep)
        .addProperty("MaxDrawDistance", &GCParticleSystemDefinition::GetMaxDrawDistance, &GCParticleSystemDefinition::SetMaxDrawDistance)
        .addProperty("StartFadeDistance", &GCParticleSystemDefinition::GetStartFadeDistance, &GCParticleSystemDefinition::SetStartFadeDistance)
        .addProperty("MaxCreationDistance", &GCParticleSystemDefinition::GetMaxCreationDistance, &GCParticleSystemDefinition::SetMaxCreationDistance)
        .addProperty("AggregationMinAvailableParticles", &GCParticleSystemDefinition::GetAggregationMinAvailableParticles, &GCParticleSystemDefinition::SetAggregationMinAvailableParticles)
        .addProperty("AggregateRadius", &GCParticleSystemDefinition::GetAggregateRadius, &GCParticleSystemDefinition::SetAggregateRadius)
        .addProperty("ShouldBatch", &GCParticleSystemDefinition::GetShouldBatch, &GCParticleSystemDefinition::SetShouldBatch)
        .addProperty("ShouldHitboxesFallbackToRenderBounds", &GCParticleSystemDefinition::GetShouldHitboxesFallbackToRenderBounds, &GCParticleSystemDefinition::SetShouldHitboxesFallbackToRenderBounds)
        .addProperty("ShouldHitboxesFallbackToSnapshot", &GCParticleSystemDefinition::GetShouldHitboxesFallbackToSnapshot, &GCParticleSystemDefinition::SetShouldHitboxesFallbackToSnapshot)
        .addProperty("ShouldHitboxesFallbackToCollisionHulls", &GCParticleSystemDefinition::GetShouldHitboxesFallbackToCollisionHulls, &GCParticleSystemDefinition::SetShouldHitboxesFallbackToCollisionHulls)
        .addProperty("ViewModelEffect", &GCParticleSystemDefinition::GetViewModelEffect, &GCParticleSystemDefinition::SetViewModelEffect)
        .addProperty("ScreenSpaceEffect", &GCParticleSystemDefinition::GetScreenSpaceEffect, &GCParticleSystemDefinition::SetScreenSpaceEffect)
        .addProperty("TargetLayerID", &GCParticleSystemDefinition::GetTargetLayerID, &GCParticleSystemDefinition::SetTargetLayerID)
        .addProperty("SkipRenderControlPoint", &GCParticleSystemDefinition::GetSkipRenderControlPoint, &GCParticleSystemDefinition::SetSkipRenderControlPoint)
        .addProperty("AllowRenderControlPoint", &GCParticleSystemDefinition::GetAllowRenderControlPoint, &GCParticleSystemDefinition::SetAllowRenderControlPoint)
        .addProperty("ShouldSort", &GCParticleSystemDefinition::GetShouldSort, &GCParticleSystemDefinition::SetShouldSort)
        .addProperty("ControlPointConfigurations", &GCParticleSystemDefinition::GetControlPointConfigurations, &GCParticleSystemDefinition::SetControlPointConfigurations)
        .addFunction("ToPtr", &GCParticleSystemDefinition::ToPtr)
        .addFunction("IsValid", &GCParticleSystemDefinition::IsValid)
        .endClass();
}
GCVoiceContainerSelector::GCVoiceContainerSelector(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCVoiceContainerSelector::GCVoiceContainerSelector(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCVoiceContainerSelector::GetMode() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CVoiceContainerSelector", "m_mode");
}
void GCVoiceContainerSelector::SetMode(uint64_t value) {
    SetSchemaValue(m_ptr, "CVoiceContainerSelector", "m_mode", false, value);
}
bool GCVoiceContainerSelector::GetRetrigger() const {
    return GetSchemaValue<bool>(m_ptr, "CVoiceContainerSelector", "m_bRetrigger");
}
void GCVoiceContainerSelector::SetRetrigger(bool value) {
    SetSchemaValue(m_ptr, "CVoiceContainerSelector", "m_bRetrigger", false, value);
}
void* GCVoiceContainerSelector::GetPtr() {
    return m_ptr;
}
std::string GCVoiceContainerSelector::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCVoiceContainerSelector::IsValid() {
    return (m_ptr != nullptr);
}
GCVoiceContainerBase GCVoiceContainerSelector::GetParent() const {
    GCVoiceContainerBase value(m_ptr);
    return value;
}
void GCVoiceContainerSelector::SetParent(GCVoiceContainerBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCVoiceContainerSelector(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCVoiceContainerSelector>("CVoiceContainerSelector")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Mode", &GCVoiceContainerSelector::GetMode, &GCVoiceContainerSelector::SetMode)
        .addProperty("Retrigger", &GCVoiceContainerSelector::GetRetrigger, &GCVoiceContainerSelector::SetRetrigger)
        .addProperty("Parent", &GCVoiceContainerSelector::GetParent, &GCVoiceContainerSelector::SetParent)
        .addFunction("ToPtr", &GCVoiceContainerSelector::ToPtr)
        .addFunction("IsValid", &GCVoiceContainerSelector::IsValid)
        .endClass();
}
GCRegionSVM::GCRegionSVM(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCRegionSVM::GCRegionSVM(void *ptr) {
    m_ptr = ptr;
}
std::vector<GRnPlane_t> GCRegionSVM::GetPlanes() const {
    CUtlVector<GRnPlane_t>* vec = GetSchemaValue<CUtlVector<GRnPlane_t>*>(m_ptr, "CRegionSVM", "m_Planes"); std::vector<GRnPlane_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCRegionSVM::SetPlanes(std::vector<GRnPlane_t> value) {
    SetSchemaValueCUtlVector<GRnPlane_t>(m_ptr, "CRegionSVM", "m_Planes", false, value);
}
std::vector<uint32> GCRegionSVM::GetNodes() const {
    CUtlVector<uint32>* vec = GetSchemaValue<CUtlVector<uint32>*>(m_ptr, "CRegionSVM", "m_Nodes"); std::vector<uint32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCRegionSVM::SetNodes(std::vector<uint32> value) {
    SetSchemaValueCUtlVector<uint32>(m_ptr, "CRegionSVM", "m_Nodes", false, value);
}
void* GCRegionSVM::GetPtr() {
    return m_ptr;
}
std::string GCRegionSVM::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCRegionSVM::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCRegionSVM(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCRegionSVM>("CRegionSVM")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Planes", &GCRegionSVM::GetPlanes, &GCRegionSVM::SetPlanes)
        .addProperty("Nodes", &GCRegionSVM::GetNodes, &GCRegionSVM::SetNodes)
        .addFunction("ToPtr", &GCRegionSVM::ToPtr)
        .addFunction("IsValid", &GCRegionSVM::IsValid)
        .endClass();
}
GCSetParameterActionUpdater::GCSetParameterActionUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSetParameterActionUpdater::GCSetParameterActionUpdater(void *ptr) {
    m_ptr = ptr;
}
GCAnimParamHandle GCSetParameterActionUpdater::GetParam() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CSetParameterActionUpdater", "m_hParam"));
    return value;
}
void GCSetParameterActionUpdater::SetParam(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Param' is not possible.\n");
}
void* GCSetParameterActionUpdater::GetPtr() {
    return m_ptr;
}
std::string GCSetParameterActionUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSetParameterActionUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimActionUpdater GCSetParameterActionUpdater::GetParent() const {
    GCAnimActionUpdater value(m_ptr);
    return value;
}
void GCSetParameterActionUpdater::SetParent(GCAnimActionUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSetParameterActionUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSetParameterActionUpdater>("CSetParameterActionUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Param", &GCSetParameterActionUpdater::GetParam, &GCSetParameterActionUpdater::SetParam)
        .addProperty("Parent", &GCSetParameterActionUpdater::GetParent, &GCSetParameterActionUpdater::SetParent)
        .addFunction("ToPtr", &GCSetParameterActionUpdater::ToPtr)
        .addFunction("IsValid", &GCSetParameterActionUpdater::IsValid)
        .endClass();
}
GCAnimUpdateSharedData::GCAnimUpdateSharedData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimUpdateSharedData::GCAnimUpdateSharedData(void *ptr) {
    m_ptr = ptr;
}
GCAnimGraphSettingsManager GCAnimUpdateSharedData::GetSettings() const {
    GCAnimGraphSettingsManager value(GetSchemaPtr(m_ptr, "CAnimUpdateSharedData", "m_settings"));
    return value;
}
void GCAnimUpdateSharedData::SetSettings(GCAnimGraphSettingsManager value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Settings' is not possible.\n");
}
GCAnimNodePath GCAnimUpdateSharedData::GetRootNodePath() const {
    GCAnimNodePath value(GetSchemaPtr(m_ptr, "CAnimUpdateSharedData", "m_rootNodePath"));
    return value;
}
void GCAnimUpdateSharedData::SetRootNodePath(GCAnimNodePath value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'RootNodePath' is not possible.\n");
}
void* GCAnimUpdateSharedData::GetPtr() {
    return m_ptr;
}
std::string GCAnimUpdateSharedData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimUpdateSharedData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimUpdateSharedData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimUpdateSharedData>("CAnimUpdateSharedData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Settings", &GCAnimUpdateSharedData::GetSettings, &GCAnimUpdateSharedData::SetSettings)
        .addProperty("RootNodePath", &GCAnimUpdateSharedData::GetRootNodePath, &GCAnimUpdateSharedData::SetRootNodePath)
        .addFunction("ToPtr", &GCAnimUpdateSharedData::ToPtr)
        .addFunction("IsValid", &GCAnimUpdateSharedData::IsValid)
        .endClass();
}
GEventClientSimulate_t::GEventClientSimulate_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientSimulate_t::GEventClientSimulate_t(void *ptr) {
    m_ptr = ptr;
}
void* GEventClientSimulate_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientSimulate_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientSimulate_t::IsValid() {
    return (m_ptr != nullptr);
}
GEventSimulate_t GEventClientSimulate_t::GetParent() const {
    GEventSimulate_t value(m_ptr);
    return value;
}
void GEventClientSimulate_t::SetParent(GEventSimulate_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassEventClientSimulate_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientSimulate_t>("EventClientSimulate_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GEventClientSimulate_t::GetParent, &GEventClientSimulate_t::SetParent)
        .addFunction("ToPtr", &GEventClientSimulate_t::ToPtr)
        .addFunction("IsValid", &GEventClientSimulate_t::IsValid)
        .endClass();
}
GCVoiceContainerAmpedDecayingSineWave::GCVoiceContainerAmpedDecayingSineWave(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCVoiceContainerAmpedDecayingSineWave::GCVoiceContainerAmpedDecayingSineWave(void *ptr) {
    m_ptr = ptr;
}
float GCVoiceContainerAmpedDecayingSineWave::GetGainAmount() const {
    return GetSchemaValue<float>(m_ptr, "CVoiceContainerAmpedDecayingSineWave", "m_flGainAmount");
}
void GCVoiceContainerAmpedDecayingSineWave::SetGainAmount(float value) {
    SetSchemaValue(m_ptr, "CVoiceContainerAmpedDecayingSineWave", "m_flGainAmount", false, value);
}
void* GCVoiceContainerAmpedDecayingSineWave::GetPtr() {
    return m_ptr;
}
std::string GCVoiceContainerAmpedDecayingSineWave::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCVoiceContainerAmpedDecayingSineWave::IsValid() {
    return (m_ptr != nullptr);
}
GCVoiceContainerDecayingSineWave GCVoiceContainerAmpedDecayingSineWave::GetParent() const {
    GCVoiceContainerDecayingSineWave value(m_ptr);
    return value;
}
void GCVoiceContainerAmpedDecayingSineWave::SetParent(GCVoiceContainerDecayingSineWave value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCVoiceContainerAmpedDecayingSineWave(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCVoiceContainerAmpedDecayingSineWave>("CVoiceContainerAmpedDecayingSineWave")
        .addConstructor<void (*)(std::string)>()
        .addProperty("GainAmount", &GCVoiceContainerAmpedDecayingSineWave::GetGainAmount, &GCVoiceContainerAmpedDecayingSineWave::SetGainAmount)
        .addProperty("Parent", &GCVoiceContainerAmpedDecayingSineWave::GetParent, &GCVoiceContainerAmpedDecayingSineWave::SetParent)
        .addFunction("ToPtr", &GCVoiceContainerAmpedDecayingSineWave::ToPtr)
        .addFunction("IsValid", &GCVoiceContainerAmpedDecayingSineWave::IsValid)
        .endClass();
}
GClutterTile_t::GClutterTile_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GClutterTile_t::GClutterTile_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GClutterTile_t::GetFirstInstance() const {
    return GetSchemaValue<uint32_t>(m_ptr, "ClutterTile_t", "m_nFirstInstance");
}
void GClutterTile_t::SetFirstInstance(uint32_t value) {
    SetSchemaValue(m_ptr, "ClutterTile_t", "m_nFirstInstance", true, value);
}
uint32_t GClutterTile_t::GetLastInstance() const {
    return GetSchemaValue<uint32_t>(m_ptr, "ClutterTile_t", "m_nLastInstance");
}
void GClutterTile_t::SetLastInstance(uint32_t value) {
    SetSchemaValue(m_ptr, "ClutterTile_t", "m_nLastInstance", true, value);
}
GAABB_t GClutterTile_t::GetBoundsWs() const {
    GAABB_t value(GetSchemaPtr(m_ptr, "ClutterTile_t", "m_BoundsWs"));
    return value;
}
void GClutterTile_t::SetBoundsWs(GAABB_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BoundsWs' is not possible.\n");
}
void* GClutterTile_t::GetPtr() {
    return m_ptr;
}
std::string GClutterTile_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GClutterTile_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassClutterTile_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GClutterTile_t>("ClutterTile_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FirstInstance", &GClutterTile_t::GetFirstInstance, &GClutterTile_t::SetFirstInstance)
        .addProperty("LastInstance", &GClutterTile_t::GetLastInstance, &GClutterTile_t::SetLastInstance)
        .addProperty("BoundsWs", &GClutterTile_t::GetBoundsWs, &GClutterTile_t::SetBoundsWs)
        .addFunction("ToPtr", &GClutterTile_t::ToPtr)
        .addFunction("IsValid", &GClutterTile_t::IsValid)
        .endClass();
}
GPointDefinitionWithTimeValues_t::GPointDefinitionWithTimeValues_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GPointDefinitionWithTimeValues_t::GPointDefinitionWithTimeValues_t(void *ptr) {
    m_ptr = ptr;
}
float GPointDefinitionWithTimeValues_t::GetTimeDuration() const {
    return GetSchemaValue<float>(m_ptr, "PointDefinitionWithTimeValues_t", "m_flTimeDuration");
}
void GPointDefinitionWithTimeValues_t::SetTimeDuration(float value) {
    SetSchemaValue(m_ptr, "PointDefinitionWithTimeValues_t", "m_flTimeDuration", true, value);
}
void* GPointDefinitionWithTimeValues_t::GetPtr() {
    return m_ptr;
}
std::string GPointDefinitionWithTimeValues_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GPointDefinitionWithTimeValues_t::IsValid() {
    return (m_ptr != nullptr);
}
GPointDefinition_t GPointDefinitionWithTimeValues_t::GetParent() const {
    GPointDefinition_t value(m_ptr);
    return value;
}
void GPointDefinitionWithTimeValues_t::SetParent(GPointDefinition_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassPointDefinitionWithTimeValues_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GPointDefinitionWithTimeValues_t>("PointDefinitionWithTimeValues_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("TimeDuration", &GPointDefinitionWithTimeValues_t::GetTimeDuration, &GPointDefinitionWithTimeValues_t::SetTimeDuration)
        .addProperty("Parent", &GPointDefinitionWithTimeValues_t::GetParent, &GPointDefinitionWithTimeValues_t::SetParent)
        .addFunction("ToPtr", &GPointDefinitionWithTimeValues_t::ToPtr)
        .addFunction("IsValid", &GPointDefinitionWithTimeValues_t::IsValid)
        .endClass();
}
GFeVertexMapBuild_t::GFeVertexMapBuild_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeVertexMapBuild_t::GFeVertexMapBuild_t(void *ptr) {
    m_ptr = ptr;
}
std::string GFeVertexMapBuild_t::GetVertexMapName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "FeVertexMapBuild_t", "m_VertexMapName").Get();
}
void GFeVertexMapBuild_t::SetVertexMapName(std::string value) {
    SetSchemaValue(m_ptr, "FeVertexMapBuild_t", "m_VertexMapName", true, CUtlString(value.c_str()));
}
uint32_t GFeVertexMapBuild_t::GetNameHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeVertexMapBuild_t", "m_nNameHash");
}
void GFeVertexMapBuild_t::SetNameHash(uint32_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapBuild_t", "m_nNameHash", true, value);
}
Color GFeVertexMapBuild_t::GetColor() const {
    return GetSchemaValue<Color>(m_ptr, "FeVertexMapBuild_t", "m_Color");
}
void GFeVertexMapBuild_t::SetColor(Color value) {
    SetSchemaValue(m_ptr, "FeVertexMapBuild_t", "m_Color", true, value);
}
float GFeVertexMapBuild_t::GetVolumetricSolveStrength() const {
    return GetSchemaValue<float>(m_ptr, "FeVertexMapBuild_t", "m_flVolumetricSolveStrength");
}
void GFeVertexMapBuild_t::SetVolumetricSolveStrength(float value) {
    SetSchemaValue(m_ptr, "FeVertexMapBuild_t", "m_flVolumetricSolveStrength", true, value);
}
int32_t GFeVertexMapBuild_t::GetScaleSourceNode() const {
    return GetSchemaValue<int32_t>(m_ptr, "FeVertexMapBuild_t", "m_nScaleSourceNode");
}
void GFeVertexMapBuild_t::SetScaleSourceNode(int32_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapBuild_t", "m_nScaleSourceNode", true, value);
}
std::vector<float32> GFeVertexMapBuild_t::GetWeights() const {
    CUtlVector<float32>* vec = GetSchemaValue<CUtlVector<float32>*>(m_ptr, "FeVertexMapBuild_t", "m_Weights"); std::vector<float32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GFeVertexMapBuild_t::SetWeights(std::vector<float32> value) {
    SetSchemaValueCUtlVector<float32>(m_ptr, "FeVertexMapBuild_t", "m_Weights", true, value);
}
void* GFeVertexMapBuild_t::GetPtr() {
    return m_ptr;
}
std::string GFeVertexMapBuild_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeVertexMapBuild_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeVertexMapBuild_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeVertexMapBuild_t>("FeVertexMapBuild_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("VertexMapName", &GFeVertexMapBuild_t::GetVertexMapName, &GFeVertexMapBuild_t::SetVertexMapName)
        .addProperty("NameHash", &GFeVertexMapBuild_t::GetNameHash, &GFeVertexMapBuild_t::SetNameHash)
        .addProperty("Color", &GFeVertexMapBuild_t::GetColor, &GFeVertexMapBuild_t::SetColor)
        .addProperty("VolumetricSolveStrength", &GFeVertexMapBuild_t::GetVolumetricSolveStrength, &GFeVertexMapBuild_t::SetVolumetricSolveStrength)
        .addProperty("ScaleSourceNode", &GFeVertexMapBuild_t::GetScaleSourceNode, &GFeVertexMapBuild_t::SetScaleSourceNode)
        .addProperty("Weights", &GFeVertexMapBuild_t::GetWeights, &GFeVertexMapBuild_t::SetWeights)
        .addFunction("ToPtr", &GFeVertexMapBuild_t::ToPtr)
        .addFunction("IsValid", &GFeVertexMapBuild_t::IsValid)
        .endClass();
}
GCAnimDesc::GCAnimDesc(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimDesc::GCAnimDesc(void *ptr) {
    m_ptr = ptr;
}
GCAnimDesc_Flag GCAnimDesc::GetFlags() const {
    GCAnimDesc_Flag value(GetSchemaPtr(m_ptr, "CAnimDesc", "m_flags"));
    return value;
}
void GCAnimDesc::SetFlags(GCAnimDesc_Flag value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Flags' is not possible.\n");
}
float GCAnimDesc::GetFps() const {
    return GetSchemaValue<float>(m_ptr, "CAnimDesc", "fps");
}
void GCAnimDesc::SetFps(float value) {
    SetSchemaValue(m_ptr, "CAnimDesc", "fps", false, value);
}
GCAnimEncodedFrames GCAnimDesc::GetData() const {
    GCAnimEncodedFrames value(GetSchemaPtr(m_ptr, "CAnimDesc", "m_Data"));
    return value;
}
void GCAnimDesc::SetData(GCAnimEncodedFrames value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Data' is not possible.\n");
}
std::vector<GCAnimMovement> GCAnimDesc::GetMovementArray() const {
    CUtlVector<GCAnimMovement>* vec = GetSchemaValue<CUtlVector<GCAnimMovement>*>(m_ptr, "CAnimDesc", "m_movementArray"); std::vector<GCAnimMovement> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDesc::SetMovementArray(std::vector<GCAnimMovement> value) {
    SetSchemaValueCUtlVector<GCAnimMovement>(m_ptr, "CAnimDesc", "m_movementArray", false, value);
}
std::vector<GCAnimEventDefinition> GCAnimDesc::GetEventArray() const {
    CUtlVector<GCAnimEventDefinition>* vec = GetSchemaValue<CUtlVector<GCAnimEventDefinition>*>(m_ptr, "CAnimDesc", "m_eventArray"); std::vector<GCAnimEventDefinition> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDesc::SetEventArray(std::vector<GCAnimEventDefinition> value) {
    SetSchemaValueCUtlVector<GCAnimEventDefinition>(m_ptr, "CAnimDesc", "m_eventArray", false, value);
}
std::vector<GCAnimActivity> GCAnimDesc::GetActivityArray() const {
    CUtlVector<GCAnimActivity>* vec = GetSchemaValue<CUtlVector<GCAnimActivity>*>(m_ptr, "CAnimDesc", "m_activityArray"); std::vector<GCAnimActivity> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDesc::SetActivityArray(std::vector<GCAnimActivity> value) {
    SetSchemaValueCUtlVector<GCAnimActivity>(m_ptr, "CAnimDesc", "m_activityArray", false, value);
}
std::vector<GCAnimLocalHierarchy> GCAnimDesc::GetHierarchyArray() const {
    CUtlVector<GCAnimLocalHierarchy>* vec = GetSchemaValue<CUtlVector<GCAnimLocalHierarchy>*>(m_ptr, "CAnimDesc", "m_hierarchyArray"); std::vector<GCAnimLocalHierarchy> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDesc::SetHierarchyArray(std::vector<GCAnimLocalHierarchy> value) {
    SetSchemaValueCUtlVector<GCAnimLocalHierarchy>(m_ptr, "CAnimDesc", "m_hierarchyArray", false, value);
}
float GCAnimDesc::GetFramestalltime() const {
    return GetSchemaValue<float>(m_ptr, "CAnimDesc", "framestalltime");
}
void GCAnimDesc::SetFramestalltime(float value) {
    SetSchemaValue(m_ptr, "CAnimDesc", "framestalltime", false, value);
}
Vector GCAnimDesc::GetRootMin() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimDesc", "m_vecRootMin");
}
void GCAnimDesc::SetRootMin(Vector value) {
    SetSchemaValue(m_ptr, "CAnimDesc", "m_vecRootMin", false, value);
}
Vector GCAnimDesc::GetRootMax() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimDesc", "m_vecRootMax");
}
void GCAnimDesc::SetRootMax(Vector value) {
    SetSchemaValue(m_ptr, "CAnimDesc", "m_vecRootMax", false, value);
}
std::vector<Vector> GCAnimDesc::GetBoneWorldMin() const {
    CUtlVector<Vector>* vec = GetSchemaValue<CUtlVector<Vector>*>(m_ptr, "CAnimDesc", "m_vecBoneWorldMin"); std::vector<Vector> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDesc::SetBoneWorldMin(std::vector<Vector> value) {
    SetSchemaValueCUtlVector<Vector>(m_ptr, "CAnimDesc", "m_vecBoneWorldMin", false, value);
}
std::vector<Vector> GCAnimDesc::GetBoneWorldMax() const {
    CUtlVector<Vector>* vec = GetSchemaValue<CUtlVector<Vector>*>(m_ptr, "CAnimDesc", "m_vecBoneWorldMax"); std::vector<Vector> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimDesc::SetBoneWorldMax(std::vector<Vector> value) {
    SetSchemaValueCUtlVector<Vector>(m_ptr, "CAnimDesc", "m_vecBoneWorldMax", false, value);
}
GCAnimSequenceParams GCAnimDesc::GetSequenceParams() const {
    GCAnimSequenceParams value(GetSchemaPtr(m_ptr, "CAnimDesc", "m_sequenceParams"));
    return value;
}
void GCAnimDesc::SetSequenceParams(GCAnimSequenceParams value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'SequenceParams' is not possible.\n");
}
void* GCAnimDesc::GetPtr() {
    return m_ptr;
}
std::string GCAnimDesc::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimDesc::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimDesc(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimDesc>("CAnimDesc")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GCAnimDesc::GetFlags, &GCAnimDesc::SetFlags)
        .addProperty("Fps", &GCAnimDesc::GetFps, &GCAnimDesc::SetFps)
        .addProperty("Data", &GCAnimDesc::GetData, &GCAnimDesc::SetData)
        .addProperty("MovementArray", &GCAnimDesc::GetMovementArray, &GCAnimDesc::SetMovementArray)
        .addProperty("EventArray", &GCAnimDesc::GetEventArray, &GCAnimDesc::SetEventArray)
        .addProperty("ActivityArray", &GCAnimDesc::GetActivityArray, &GCAnimDesc::SetActivityArray)
        .addProperty("HierarchyArray", &GCAnimDesc::GetHierarchyArray, &GCAnimDesc::SetHierarchyArray)
        .addProperty("Framestalltime", &GCAnimDesc::GetFramestalltime, &GCAnimDesc::SetFramestalltime)
        .addProperty("RootMin", &GCAnimDesc::GetRootMin, &GCAnimDesc::SetRootMin)
        .addProperty("RootMax", &GCAnimDesc::GetRootMax, &GCAnimDesc::SetRootMax)
        .addProperty("BoneWorldMin", &GCAnimDesc::GetBoneWorldMin, &GCAnimDesc::SetBoneWorldMin)
        .addProperty("BoneWorldMax", &GCAnimDesc::GetBoneWorldMax, &GCAnimDesc::SetBoneWorldMax)
        .addProperty("SequenceParams", &GCAnimDesc::GetSequenceParams, &GCAnimDesc::SetSequenceParams)
        .addFunction("ToPtr", &GCAnimDesc::ToPtr)
        .addFunction("IsValid", &GCAnimDesc::IsValid)
        .endClass();
}
GCTwistConstraint::GCTwistConstraint(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCTwistConstraint::GCTwistConstraint(void *ptr) {
    m_ptr = ptr;
}
bool GCTwistConstraint::GetInverse() const {
    return GetSchemaValue<bool>(m_ptr, "CTwistConstraint", "m_bInverse");
}
void GCTwistConstraint::SetInverse(bool value) {
    SetSchemaValue(m_ptr, "CTwistConstraint", "m_bInverse", false, value);
}
void* GCTwistConstraint::GetPtr() {
    return m_ptr;
}
std::string GCTwistConstraint::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCTwistConstraint::IsValid() {
    return (m_ptr != nullptr);
}
GCBaseConstraint GCTwistConstraint::GetParent() const {
    GCBaseConstraint value(m_ptr);
    return value;
}
void GCTwistConstraint::SetParent(GCBaseConstraint value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCTwistConstraint(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCTwistConstraint>("CTwistConstraint")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Inverse", &GCTwistConstraint::GetInverse, &GCTwistConstraint::SetInverse)
        .addProperty("Parent", &GCTwistConstraint::GetParent, &GCTwistConstraint::SetParent)
        .addFunction("ToPtr", &GCTwistConstraint::ToPtr)
        .addFunction("IsValid", &GCTwistConstraint::IsValid)
        .endClass();
}
GCNewParticleEffect::GCNewParticleEffect(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNewParticleEffect::GCNewParticleEffect(void *ptr) {
    m_ptr = ptr;
}
GCNewParticleEffect GCNewParticleEffect::GetNext() const {
    GCNewParticleEffect value(*GetSchemaValuePtr<void*>(m_ptr, "CNewParticleEffect", "m_pNext"));
    return value;
}
void GCNewParticleEffect::SetNext(GCNewParticleEffect value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect","m_pNext", false, (char*)value.GetPtr());
}
GCNewParticleEffect GCNewParticleEffect::GetPrev() const {
    GCNewParticleEffect value(*GetSchemaValuePtr<void*>(m_ptr, "CNewParticleEffect", "m_pPrev"));
    return value;
}
void GCNewParticleEffect::SetPrev(GCNewParticleEffect value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect","m_pPrev", false, (char*)value.GetPtr());
}
GIParticleCollection GCNewParticleEffect::GetParticles() const {
    GIParticleCollection value(*GetSchemaValuePtr<void*>(m_ptr, "CNewParticleEffect", "m_pParticles"));
    return value;
}
void GCNewParticleEffect::SetParticles(GIParticleCollection value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect","m_pParticles", false, (char*)value.GetPtr());
}
std::string GCNewParticleEffect::GetDebugName() const {
    return GetSchemaValuePtr<char>(m_ptr, "CNewParticleEffect", "m_pDebugName");
}
void GCNewParticleEffect::SetDebugName(std::string value) {
    WriteSchemaPtrValue(m_ptr, "CNewParticleEffect", "m_pDebugName", false, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), value.size());
}
Vector GCNewParticleEffect::GetSortOrigin() const {
    return GetSchemaValue<Vector>(m_ptr, "CNewParticleEffect", "m_vSortOrigin");
}
void GCNewParticleEffect::SetSortOrigin(Vector value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_vSortOrigin", false, value);
}
float GCNewParticleEffect::GetScale() const {
    return GetSchemaValue<float>(m_ptr, "CNewParticleEffect", "m_flScale");
}
void GCNewParticleEffect::SetScale(float value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_flScale", false, value);
}
GPARTICLE_EHANDLE__ GCNewParticleEffect::GetOwner() const {
    GPARTICLE_EHANDLE__ value(*GetSchemaValuePtr<void*>(m_ptr, "CNewParticleEffect", "m_hOwner"));
    return value;
}
void GCNewParticleEffect::SetOwner(GPARTICLE_EHANDLE__ value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect","m_hOwner", false, (char*)value.GetPtr());
}
GCParticleProperty GCNewParticleEffect::GetOwningParticleProperty() const {
    GCParticleProperty value(*GetSchemaValuePtr<void*>(m_ptr, "CNewParticleEffect", "m_pOwningParticleProperty"));
    return value;
}
void GCNewParticleEffect::SetOwningParticleProperty(GCParticleProperty value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect","m_pOwningParticleProperty", false, (char*)value.GetPtr());
}
float GCNewParticleEffect::GetFreezeTransitionStart() const {
    return GetSchemaValue<float>(m_ptr, "CNewParticleEffect", "m_flFreezeTransitionStart");
}
void GCNewParticleEffect::SetFreezeTransitionStart(float value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_flFreezeTransitionStart", false, value);
}
float GCNewParticleEffect::GetFreezeTransitionDuration() const {
    return GetSchemaValue<float>(m_ptr, "CNewParticleEffect", "m_flFreezeTransitionDuration");
}
void GCNewParticleEffect::SetFreezeTransitionDuration(float value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_flFreezeTransitionDuration", false, value);
}
float GCNewParticleEffect::GetFreezeTransitionOverride() const {
    return GetSchemaValue<float>(m_ptr, "CNewParticleEffect", "m_flFreezeTransitionOverride");
}
void GCNewParticleEffect::SetFreezeTransitionOverride(float value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_flFreezeTransitionOverride", false, value);
}
bool GCNewParticleEffect::GetFreezeTransitionActive() const {
    return GetSchemaValue<bool>(m_ptr, "CNewParticleEffect", "m_bFreezeTransitionActive");
}
void GCNewParticleEffect::SetFreezeTransitionActive(bool value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_bFreezeTransitionActive", false, value);
}
bool GCNewParticleEffect::GetFreezeTargetState() const {
    return GetSchemaValue<bool>(m_ptr, "CNewParticleEffect", "m_bFreezeTargetState");
}
void GCNewParticleEffect::SetFreezeTargetState(bool value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_bFreezeTargetState", false, value);
}
bool GCNewParticleEffect::GetCanFreeze() const {
    return GetSchemaValue<bool>(m_ptr, "CNewParticleEffect", "m_bCanFreeze");
}
void GCNewParticleEffect::SetCanFreeze(bool value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_bCanFreeze", false, value);
}
Vector GCNewParticleEffect::GetLastMin() const {
    return GetSchemaValue<Vector>(m_ptr, "CNewParticleEffect", "m_LastMin");
}
void GCNewParticleEffect::SetLastMin(Vector value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_LastMin", false, value);
}
Vector GCNewParticleEffect::GetLastMax() const {
    return GetSchemaValue<Vector>(m_ptr, "CNewParticleEffect", "m_LastMax");
}
void GCNewParticleEffect::SetLastMax(Vector value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_LastMax", false, value);
}
int32_t GCNewParticleEffect::GetSplitScreenUser() const {
    return GetSchemaValue<int32_t>(m_ptr, "CNewParticleEffect", "m_nSplitScreenUser");
}
void GCNewParticleEffect::SetSplitScreenUser(int32_t value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_nSplitScreenUser", false, value);
}
Vector GCNewParticleEffect::GetAggregationCenter() const {
    return GetSchemaValue<Vector>(m_ptr, "CNewParticleEffect", "m_vecAggregationCenter");
}
void GCNewParticleEffect::SetAggregationCenter(Vector value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_vecAggregationCenter", false, value);
}
int32_t GCNewParticleEffect::GetRefCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CNewParticleEffect", "m_RefCount");
}
void GCNewParticleEffect::SetRefCount(int32_t value) {
    SetSchemaValue(m_ptr, "CNewParticleEffect", "m_RefCount", false, value);
}
void* GCNewParticleEffect::GetPtr() {
    return m_ptr;
}
std::string GCNewParticleEffect::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNewParticleEffect::IsValid() {
    return (m_ptr != nullptr);
}
GIParticleEffect GCNewParticleEffect::GetParent() const {
    GIParticleEffect value(m_ptr);
    return value;
}
void GCNewParticleEffect::SetParent(GIParticleEffect value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNewParticleEffect(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNewParticleEffect>("CNewParticleEffect")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Next", &GCNewParticleEffect::GetNext, &GCNewParticleEffect::SetNext)
        .addProperty("Prev", &GCNewParticleEffect::GetPrev, &GCNewParticleEffect::SetPrev)
        .addProperty("Particles", &GCNewParticleEffect::GetParticles, &GCNewParticleEffect::SetParticles)
        .addProperty("DebugName", &GCNewParticleEffect::GetDebugName, &GCNewParticleEffect::SetDebugName)
        .addProperty("SortOrigin", &GCNewParticleEffect::GetSortOrigin, &GCNewParticleEffect::SetSortOrigin)
        .addProperty("Scale", &GCNewParticleEffect::GetScale, &GCNewParticleEffect::SetScale)
        .addProperty("Owner", &GCNewParticleEffect::GetOwner, &GCNewParticleEffect::SetOwner)
        .addProperty("OwningParticleProperty", &GCNewParticleEffect::GetOwningParticleProperty, &GCNewParticleEffect::SetOwningParticleProperty)
        .addProperty("FreezeTransitionStart", &GCNewParticleEffect::GetFreezeTransitionStart, &GCNewParticleEffect::SetFreezeTransitionStart)
        .addProperty("FreezeTransitionDuration", &GCNewParticleEffect::GetFreezeTransitionDuration, &GCNewParticleEffect::SetFreezeTransitionDuration)
        .addProperty("FreezeTransitionOverride", &GCNewParticleEffect::GetFreezeTransitionOverride, &GCNewParticleEffect::SetFreezeTransitionOverride)
        .addProperty("FreezeTransitionActive", &GCNewParticleEffect::GetFreezeTransitionActive, &GCNewParticleEffect::SetFreezeTransitionActive)
        .addProperty("FreezeTargetState", &GCNewParticleEffect::GetFreezeTargetState, &GCNewParticleEffect::SetFreezeTargetState)
        .addProperty("CanFreeze", &GCNewParticleEffect::GetCanFreeze, &GCNewParticleEffect::SetCanFreeze)
        .addProperty("LastMin", &GCNewParticleEffect::GetLastMin, &GCNewParticleEffect::SetLastMin)
        .addProperty("LastMax", &GCNewParticleEffect::GetLastMax, &GCNewParticleEffect::SetLastMax)
        .addProperty("SplitScreenUser", &GCNewParticleEffect::GetSplitScreenUser, &GCNewParticleEffect::SetSplitScreenUser)
        .addProperty("AggregationCenter", &GCNewParticleEffect::GetAggregationCenter, &GCNewParticleEffect::SetAggregationCenter)
        .addProperty("RefCount", &GCNewParticleEffect::GetRefCount, &GCNewParticleEffect::SetRefCount)
        .addProperty("Parent", &GCNewParticleEffect::GetParent, &GCNewParticleEffect::SetParent)
        .addFunction("ToPtr", &GCNewParticleEffect::ToPtr)
        .addFunction("IsValid", &GCNewParticleEffect::IsValid)
        .endClass();
}
GCFeIndexedJiggleBone::GCFeIndexedJiggleBone(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFeIndexedJiggleBone::GCFeIndexedJiggleBone(void *ptr) {
    m_ptr = ptr;
}
uint32_t GCFeIndexedJiggleBone::GetNode() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CFeIndexedJiggleBone", "m_nNode");
}
void GCFeIndexedJiggleBone::SetNode(uint32_t value) {
    SetSchemaValue(m_ptr, "CFeIndexedJiggleBone", "m_nNode", false, value);
}
uint32_t GCFeIndexedJiggleBone::GetJiggleParent() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CFeIndexedJiggleBone", "m_nJiggleParent");
}
void GCFeIndexedJiggleBone::SetJiggleParent(uint32_t value) {
    SetSchemaValue(m_ptr, "CFeIndexedJiggleBone", "m_nJiggleParent", false, value);
}
GCFeJiggleBone GCFeIndexedJiggleBone::GetJiggleBone() const {
    GCFeJiggleBone value(GetSchemaPtr(m_ptr, "CFeIndexedJiggleBone", "m_jiggleBone"));
    return value;
}
void GCFeIndexedJiggleBone::SetJiggleBone(GCFeJiggleBone value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'JiggleBone' is not possible.\n");
}
void* GCFeIndexedJiggleBone::GetPtr() {
    return m_ptr;
}
std::string GCFeIndexedJiggleBone::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFeIndexedJiggleBone::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFeIndexedJiggleBone(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFeIndexedJiggleBone>("CFeIndexedJiggleBone")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Node", &GCFeIndexedJiggleBone::GetNode, &GCFeIndexedJiggleBone::SetNode)
        .addProperty("JiggleParent", &GCFeIndexedJiggleBone::GetJiggleParent, &GCFeIndexedJiggleBone::SetJiggleParent)
        .addProperty("JiggleBone", &GCFeIndexedJiggleBone::GetJiggleBone, &GCFeIndexedJiggleBone::SetJiggleBone)
        .addFunction("ToPtr", &GCFeIndexedJiggleBone::ToPtr)
        .addFunction("IsValid", &GCFeIndexedJiggleBone::IsValid)
        .endClass();
}
GCFloatAnimParameter::GCFloatAnimParameter(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFloatAnimParameter::GCFloatAnimParameter(void *ptr) {
    m_ptr = ptr;
}
float GCFloatAnimParameter::GetDefaultValue() const {
    return GetSchemaValue<float>(m_ptr, "CFloatAnimParameter", "m_fDefaultValue");
}
void GCFloatAnimParameter::SetDefaultValue(float value) {
    SetSchemaValue(m_ptr, "CFloatAnimParameter", "m_fDefaultValue", false, value);
}
float GCFloatAnimParameter::GetMinValue() const {
    return GetSchemaValue<float>(m_ptr, "CFloatAnimParameter", "m_fMinValue");
}
void GCFloatAnimParameter::SetMinValue(float value) {
    SetSchemaValue(m_ptr, "CFloatAnimParameter", "m_fMinValue", false, value);
}
float GCFloatAnimParameter::GetMaxValue() const {
    return GetSchemaValue<float>(m_ptr, "CFloatAnimParameter", "m_fMaxValue");
}
void GCFloatAnimParameter::SetMaxValue(float value) {
    SetSchemaValue(m_ptr, "CFloatAnimParameter", "m_fMaxValue", false, value);
}
bool GCFloatAnimParameter::GetInterpolate() const {
    return GetSchemaValue<bool>(m_ptr, "CFloatAnimParameter", "m_bInterpolate");
}
void GCFloatAnimParameter::SetInterpolate(bool value) {
    SetSchemaValue(m_ptr, "CFloatAnimParameter", "m_bInterpolate", false, value);
}
void* GCFloatAnimParameter::GetPtr() {
    return m_ptr;
}
std::string GCFloatAnimParameter::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFloatAnimParameter::IsValid() {
    return (m_ptr != nullptr);
}
GCConcreteAnimParameter GCFloatAnimParameter::GetParent() const {
    GCConcreteAnimParameter value(m_ptr);
    return value;
}
void GCFloatAnimParameter::SetParent(GCConcreteAnimParameter value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCFloatAnimParameter(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFloatAnimParameter>("CFloatAnimParameter")
        .addConstructor<void (*)(std::string)>()
        .addProperty("DefaultValue", &GCFloatAnimParameter::GetDefaultValue, &GCFloatAnimParameter::SetDefaultValue)
        .addProperty("MinValue", &GCFloatAnimParameter::GetMinValue, &GCFloatAnimParameter::SetMinValue)
        .addProperty("MaxValue", &GCFloatAnimParameter::GetMaxValue, &GCFloatAnimParameter::SetMaxValue)
        .addProperty("Interpolate", &GCFloatAnimParameter::GetInterpolate, &GCFloatAnimParameter::SetInterpolate)
        .addProperty("Parent", &GCFloatAnimParameter::GetParent, &GCFloatAnimParameter::SetParent)
        .addFunction("ToPtr", &GCFloatAnimParameter::ToPtr)
        .addFunction("IsValid", &GCFloatAnimParameter::IsValid)
        .endClass();
}
GRnBlendVertex_t::GRnBlendVertex_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnBlendVertex_t::GRnBlendVertex_t(void *ptr) {
    m_ptr = ptr;
}
uint16_t GRnBlendVertex_t::GetWeight0() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nWeight0");
}
void GRnBlendVertex_t::SetWeight0(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nWeight0", true, value);
}
uint16_t GRnBlendVertex_t::GetIndex0() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nIndex0");
}
void GRnBlendVertex_t::SetIndex0(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nIndex0", true, value);
}
uint16_t GRnBlendVertex_t::GetWeight1() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nWeight1");
}
void GRnBlendVertex_t::SetWeight1(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nWeight1", true, value);
}
uint16_t GRnBlendVertex_t::GetIndex1() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nIndex1");
}
void GRnBlendVertex_t::SetIndex1(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nIndex1", true, value);
}
uint16_t GRnBlendVertex_t::GetWeight2() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nWeight2");
}
void GRnBlendVertex_t::SetWeight2(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nWeight2", true, value);
}
uint16_t GRnBlendVertex_t::GetIndex2() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nIndex2");
}
void GRnBlendVertex_t::SetIndex2(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nIndex2", true, value);
}
uint16_t GRnBlendVertex_t::GetFlags() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nFlags");
}
void GRnBlendVertex_t::SetFlags(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nFlags", true, value);
}
uint16_t GRnBlendVertex_t::GetTargetIndex() const {
    return GetSchemaValue<uint16_t>(m_ptr, "RnBlendVertex_t", "m_nTargetIndex");
}
void GRnBlendVertex_t::SetTargetIndex(uint16_t value) {
    SetSchemaValue(m_ptr, "RnBlendVertex_t", "m_nTargetIndex", true, value);
}
void* GRnBlendVertex_t::GetPtr() {
    return m_ptr;
}
std::string GRnBlendVertex_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnBlendVertex_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassRnBlendVertex_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnBlendVertex_t>("RnBlendVertex_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Weight0", &GRnBlendVertex_t::GetWeight0, &GRnBlendVertex_t::SetWeight0)
        .addProperty("Index0", &GRnBlendVertex_t::GetIndex0, &GRnBlendVertex_t::SetIndex0)
        .addProperty("Weight1", &GRnBlendVertex_t::GetWeight1, &GRnBlendVertex_t::SetWeight1)
        .addProperty("Index1", &GRnBlendVertex_t::GetIndex1, &GRnBlendVertex_t::SetIndex1)
        .addProperty("Weight2", &GRnBlendVertex_t::GetWeight2, &GRnBlendVertex_t::SetWeight2)
        .addProperty("Index2", &GRnBlendVertex_t::GetIndex2, &GRnBlendVertex_t::SetIndex2)
        .addProperty("Flags", &GRnBlendVertex_t::GetFlags, &GRnBlendVertex_t::SetFlags)
        .addProperty("TargetIndex", &GRnBlendVertex_t::GetTargetIndex, &GRnBlendVertex_t::SetTargetIndex)
        .addFunction("ToPtr", &GRnBlendVertex_t::ToPtr)
        .addFunction("IsValid", &GRnBlendVertex_t::IsValid)
        .endClass();
}
GCVirtualAnimParameter::GCVirtualAnimParameter(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCVirtualAnimParameter::GCVirtualAnimParameter(void *ptr) {
    m_ptr = ptr;
}
std::string GCVirtualAnimParameter::GetExpressionString() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CVirtualAnimParameter", "m_expressionString").Get();
}
void GCVirtualAnimParameter::SetExpressionString(std::string value) {
    SetSchemaValue(m_ptr, "CVirtualAnimParameter", "m_expressionString", false, CUtlString(value.c_str()));
}
uint64_t GCVirtualAnimParameter::GetParamType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CVirtualAnimParameter", "m_eParamType");
}
void GCVirtualAnimParameter::SetParamType(uint64_t value) {
    SetSchemaValue(m_ptr, "CVirtualAnimParameter", "m_eParamType", false, value);
}
void* GCVirtualAnimParameter::GetPtr() {
    return m_ptr;
}
std::string GCVirtualAnimParameter::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCVirtualAnimParameter::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimParameterBase GCVirtualAnimParameter::GetParent() const {
    GCAnimParameterBase value(m_ptr);
    return value;
}
void GCVirtualAnimParameter::SetParent(GCAnimParameterBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCVirtualAnimParameter(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCVirtualAnimParameter>("CVirtualAnimParameter")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ExpressionString", &GCVirtualAnimParameter::GetExpressionString, &GCVirtualAnimParameter::SetExpressionString)
        .addProperty("ParamType", &GCVirtualAnimParameter::GetParamType, &GCVirtualAnimParameter::SetParamType)
        .addProperty("Parent", &GCVirtualAnimParameter::GetParent, &GCVirtualAnimParameter::SetParent)
        .addFunction("ToPtr", &GCVirtualAnimParameter::ToPtr)
        .addFunction("IsValid", &GCVirtualAnimParameter::IsValid)
        .endClass();
}
GCHitBoxSetList::GCHitBoxSetList(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCHitBoxSetList::GCHitBoxSetList(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCHitBoxSet> GCHitBoxSetList::GetHitBoxSets() const {
    CUtlVector<GCHitBoxSet>* vec = GetSchemaValue<CUtlVector<GCHitBoxSet>*>(m_ptr, "CHitBoxSetList", "m_HitBoxSets"); std::vector<GCHitBoxSet> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCHitBoxSetList::SetHitBoxSets(std::vector<GCHitBoxSet> value) {
    SetSchemaValueCUtlVector<GCHitBoxSet>(m_ptr, "CHitBoxSetList", "m_HitBoxSets", false, value);
}
void* GCHitBoxSetList::GetPtr() {
    return m_ptr;
}
std::string GCHitBoxSetList::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCHitBoxSetList::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCHitBoxSetList(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCHitBoxSetList>("CHitBoxSetList")
        .addConstructor<void (*)(std::string)>()
        .addProperty("HitBoxSets", &GCHitBoxSetList::GetHitBoxSets, &GCHitBoxSetList::SetHitBoxSets)
        .addFunction("ToPtr", &GCHitBoxSetList::ToPtr)
        .addFunction("IsValid", &GCHitBoxSetList::IsValid)
        .endClass();
}
GMaterialParamString_t::GMaterialParamString_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GMaterialParamString_t::GMaterialParamString_t(void *ptr) {
    m_ptr = ptr;
}
std::string GMaterialParamString_t::GetValue() const {
    return GetSchemaValue<CUtlString>(m_ptr, "MaterialParamString_t", "m_value").Get();
}
void GMaterialParamString_t::SetValue(std::string value) {
    SetSchemaValue(m_ptr, "MaterialParamString_t", "m_value", true, CUtlString(value.c_str()));
}
void* GMaterialParamString_t::GetPtr() {
    return m_ptr;
}
std::string GMaterialParamString_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GMaterialParamString_t::IsValid() {
    return (m_ptr != nullptr);
}
GMaterialParam_t GMaterialParamString_t::GetParent() const {
    GMaterialParam_t value(m_ptr);
    return value;
}
void GMaterialParamString_t::SetParent(GMaterialParam_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassMaterialParamString_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GMaterialParamString_t>("MaterialParamString_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Value", &GMaterialParamString_t::GetValue, &GMaterialParamString_t::SetValue)
        .addProperty("Parent", &GMaterialParamString_t::GetParent, &GMaterialParamString_t::SetParent)
        .addFunction("ToPtr", &GMaterialParamString_t::ToPtr)
        .addFunction("IsValid", &GMaterialParamString_t::IsValid)
        .endClass();
}
GVsInputSignature_t::GVsInputSignature_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVsInputSignature_t::GVsInputSignature_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<GVsInputSignatureElement_t> GVsInputSignature_t::GetElems() const {
    CUtlVector<GVsInputSignatureElement_t>* vec = GetSchemaValue<CUtlVector<GVsInputSignatureElement_t>*>(m_ptr, "VsInputSignature_t", "m_elems"); std::vector<GVsInputSignatureElement_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GVsInputSignature_t::SetElems(std::vector<GVsInputSignatureElement_t> value) {
    SetSchemaValueCUtlVector<GVsInputSignatureElement_t>(m_ptr, "VsInputSignature_t", "m_elems", true, value);
}
void* GVsInputSignature_t::GetPtr() {
    return m_ptr;
}
std::string GVsInputSignature_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVsInputSignature_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVsInputSignature_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVsInputSignature_t>("VsInputSignature_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Elems", &GVsInputSignature_t::GetElems, &GVsInputSignature_t::SetElems)
        .addFunction("ToPtr", &GVsInputSignature_t::ToPtr)
        .addFunction("IsValid", &GVsInputSignature_t::IsValid)
        .endClass();
}
GInfoOverlayData_t::GInfoOverlayData_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GInfoOverlayData_t::GInfoOverlayData_t(void *ptr) {
    m_ptr = ptr;
}
float GInfoOverlayData_t::GetWidth() const {
    return GetSchemaValue<float>(m_ptr, "InfoOverlayData_t", "m_flWidth");
}
void GInfoOverlayData_t::SetWidth(float value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_flWidth", true, value);
}
float GInfoOverlayData_t::GetHeight() const {
    return GetSchemaValue<float>(m_ptr, "InfoOverlayData_t", "m_flHeight");
}
void GInfoOverlayData_t::SetHeight(float value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_flHeight", true, value);
}
float GInfoOverlayData_t::GetDepth() const {
    return GetSchemaValue<float>(m_ptr, "InfoOverlayData_t", "m_flDepth");
}
void GInfoOverlayData_t::SetDepth(float value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_flDepth", true, value);
}
Vector2D GInfoOverlayData_t::GetUVStart() const {
    return GetSchemaValue<Vector2D>(m_ptr, "InfoOverlayData_t", "m_vUVStart");
}
void GInfoOverlayData_t::SetUVStart(Vector2D value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_vUVStart", true, value);
}
Vector2D GInfoOverlayData_t::GetUVEnd() const {
    return GetSchemaValue<Vector2D>(m_ptr, "InfoOverlayData_t", "m_vUVEnd");
}
void GInfoOverlayData_t::SetUVEnd(Vector2D value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_vUVEnd", true, value);
}
int32_t GInfoOverlayData_t::GetRenderOrder() const {
    return GetSchemaValue<int32_t>(m_ptr, "InfoOverlayData_t", "m_nRenderOrder");
}
void GInfoOverlayData_t::SetRenderOrder(int32_t value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_nRenderOrder", true, value);
}
Vector4D GInfoOverlayData_t::GetTintColor() const {
    return GetSchemaValue<Vector4D>(m_ptr, "InfoOverlayData_t", "m_vTintColor");
}
void GInfoOverlayData_t::SetTintColor(Vector4D value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_vTintColor", true, value);
}
int32_t GInfoOverlayData_t::GetSequenceOverride() const {
    return GetSchemaValue<int32_t>(m_ptr, "InfoOverlayData_t", "m_nSequenceOverride");
}
void GInfoOverlayData_t::SetSequenceOverride(int32_t value) {
    SetSchemaValue(m_ptr, "InfoOverlayData_t", "m_nSequenceOverride", true, value);
}
void* GInfoOverlayData_t::GetPtr() {
    return m_ptr;
}
std::string GInfoOverlayData_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GInfoOverlayData_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassInfoOverlayData_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GInfoOverlayData_t>("InfoOverlayData_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Width", &GInfoOverlayData_t::GetWidth, &GInfoOverlayData_t::SetWidth)
        .addProperty("Height", &GInfoOverlayData_t::GetHeight, &GInfoOverlayData_t::SetHeight)
        .addProperty("Depth", &GInfoOverlayData_t::GetDepth, &GInfoOverlayData_t::SetDepth)
        .addProperty("UVStart", &GInfoOverlayData_t::GetUVStart, &GInfoOverlayData_t::SetUVStart)
        .addProperty("UVEnd", &GInfoOverlayData_t::GetUVEnd, &GInfoOverlayData_t::SetUVEnd)
        .addProperty("RenderOrder", &GInfoOverlayData_t::GetRenderOrder, &GInfoOverlayData_t::SetRenderOrder)
        .addProperty("TintColor", &GInfoOverlayData_t::GetTintColor, &GInfoOverlayData_t::SetTintColor)
        .addProperty("SequenceOverride", &GInfoOverlayData_t::GetSequenceOverride, &GInfoOverlayData_t::SetSequenceOverride)
        .addFunction("ToPtr", &GInfoOverlayData_t::ToPtr)
        .addFunction("IsValid", &GInfoOverlayData_t::IsValid)
        .endClass();
}
GCastSphereSATParams_t::GCastSphereSATParams_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCastSphereSATParams_t::GCastSphereSATParams_t(void *ptr) {
    m_ptr = ptr;
}
Vector GCastSphereSATParams_t::GetRayStart() const {
    return GetSchemaValue<Vector>(m_ptr, "CastSphereSATParams_t", "m_vRayStart");
}
void GCastSphereSATParams_t::SetRayStart(Vector value) {
    SetSchemaValue(m_ptr, "CastSphereSATParams_t", "m_vRayStart", true, value);
}
Vector GCastSphereSATParams_t::GetRayDelta() const {
    return GetSchemaValue<Vector>(m_ptr, "CastSphereSATParams_t", "m_vRayDelta");
}
void GCastSphereSATParams_t::SetRayDelta(Vector value) {
    SetSchemaValue(m_ptr, "CastSphereSATParams_t", "m_vRayDelta", true, value);
}
float GCastSphereSATParams_t::GetRadius() const {
    return GetSchemaValue<float>(m_ptr, "CastSphereSATParams_t", "m_flRadius");
}
void GCastSphereSATParams_t::SetRadius(float value) {
    SetSchemaValue(m_ptr, "CastSphereSATParams_t", "m_flRadius", true, value);
}
float GCastSphereSATParams_t::GetMaxFraction() const {
    return GetSchemaValue<float>(m_ptr, "CastSphereSATParams_t", "m_flMaxFraction");
}
void GCastSphereSATParams_t::SetMaxFraction(float value) {
    SetSchemaValue(m_ptr, "CastSphereSATParams_t", "m_flMaxFraction", true, value);
}
float GCastSphereSATParams_t::GetScale() const {
    return GetSchemaValue<float>(m_ptr, "CastSphereSATParams_t", "m_flScale");
}
void GCastSphereSATParams_t::SetScale(float value) {
    SetSchemaValue(m_ptr, "CastSphereSATParams_t", "m_flScale", true, value);
}
GRnHull_t GCastSphereSATParams_t::GetHull() const {
    GRnHull_t value(*GetSchemaValuePtr<void*>(m_ptr, "CastSphereSATParams_t", "m_pHull"));
    return value;
}
void GCastSphereSATParams_t::SetHull(GRnHull_t value) {
    SetSchemaValue(m_ptr, "CastSphereSATParams_t","m_pHull", true, (char*)value.GetPtr());
}
void* GCastSphereSATParams_t::GetPtr() {
    return m_ptr;
}
std::string GCastSphereSATParams_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCastSphereSATParams_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCastSphereSATParams_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCastSphereSATParams_t>("CastSphereSATParams_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("RayStart", &GCastSphereSATParams_t::GetRayStart, &GCastSphereSATParams_t::SetRayStart)
        .addProperty("RayDelta", &GCastSphereSATParams_t::GetRayDelta, &GCastSphereSATParams_t::SetRayDelta)
        .addProperty("Radius", &GCastSphereSATParams_t::GetRadius, &GCastSphereSATParams_t::SetRadius)
        .addProperty("MaxFraction", &GCastSphereSATParams_t::GetMaxFraction, &GCastSphereSATParams_t::SetMaxFraction)
        .addProperty("Scale", &GCastSphereSATParams_t::GetScale, &GCastSphereSATParams_t::SetScale)
        .addProperty("Hull", &GCastSphereSATParams_t::GetHull, &GCastSphereSATParams_t::SetHull)
        .addFunction("ToPtr", &GCastSphereSATParams_t::ToPtr)
        .addFunction("IsValid", &GCastSphereSATParams_t::IsValid)
        .endClass();
}
GCBindPoseUpdateNode::GCBindPoseUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBindPoseUpdateNode::GCBindPoseUpdateNode(void *ptr) {
    m_ptr = ptr;
}
void* GCBindPoseUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCBindPoseUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBindPoseUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCLeafUpdateNode GCBindPoseUpdateNode::GetParent() const {
    GCLeafUpdateNode value(m_ptr);
    return value;
}
void GCBindPoseUpdateNode::SetParent(GCLeafUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCBindPoseUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBindPoseUpdateNode>("CBindPoseUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCBindPoseUpdateNode::GetParent, &GCBindPoseUpdateNode::SetParent)
        .addFunction("ToPtr", &GCBindPoseUpdateNode::ToPtr)
        .addFunction("IsValid", &GCBindPoseUpdateNode::IsValid)
        .endClass();
}
GVMixFreeverbDesc_t::GVMixFreeverbDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixFreeverbDesc_t::GVMixFreeverbDesc_t(void *ptr) {
    m_ptr = ptr;
}
float GVMixFreeverbDesc_t::GetRoomSize() const {
    return GetSchemaValue<float>(m_ptr, "VMixFreeverbDesc_t", "m_flRoomSize");
}
void GVMixFreeverbDesc_t::SetRoomSize(float value) {
    SetSchemaValue(m_ptr, "VMixFreeverbDesc_t", "m_flRoomSize", true, value);
}
float GVMixFreeverbDesc_t::GetDamp() const {
    return GetSchemaValue<float>(m_ptr, "VMixFreeverbDesc_t", "m_flDamp");
}
void GVMixFreeverbDesc_t::SetDamp(float value) {
    SetSchemaValue(m_ptr, "VMixFreeverbDesc_t", "m_flDamp", true, value);
}
float GVMixFreeverbDesc_t::GetWidth() const {
    return GetSchemaValue<float>(m_ptr, "VMixFreeverbDesc_t", "m_flWidth");
}
void GVMixFreeverbDesc_t::SetWidth(float value) {
    SetSchemaValue(m_ptr, "VMixFreeverbDesc_t", "m_flWidth", true, value);
}
float GVMixFreeverbDesc_t::GetLateReflections() const {
    return GetSchemaValue<float>(m_ptr, "VMixFreeverbDesc_t", "m_flLateReflections");
}
void GVMixFreeverbDesc_t::SetLateReflections(float value) {
    SetSchemaValue(m_ptr, "VMixFreeverbDesc_t", "m_flLateReflections", true, value);
}
void* GVMixFreeverbDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixFreeverbDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixFreeverbDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixFreeverbDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixFreeverbDesc_t>("VMixFreeverbDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("RoomSize", &GVMixFreeverbDesc_t::GetRoomSize, &GVMixFreeverbDesc_t::SetRoomSize)
        .addProperty("Damp", &GVMixFreeverbDesc_t::GetDamp, &GVMixFreeverbDesc_t::SetDamp)
        .addProperty("Width", &GVMixFreeverbDesc_t::GetWidth, &GVMixFreeverbDesc_t::SetWidth)
        .addProperty("LateReflections", &GVMixFreeverbDesc_t::GetLateReflections, &GVMixFreeverbDesc_t::SetLateReflections)
        .addFunction("ToPtr", &GVMixFreeverbDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixFreeverbDesc_t::IsValid)
        .endClass();
}
GCCurrentVelocityMetricEvaluator::GCCurrentVelocityMetricEvaluator(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCCurrentVelocityMetricEvaluator::GCCurrentVelocityMetricEvaluator(void *ptr) {
    m_ptr = ptr;
}
void* GCCurrentVelocityMetricEvaluator::GetPtr() {
    return m_ptr;
}
std::string GCCurrentVelocityMetricEvaluator::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCCurrentVelocityMetricEvaluator::IsValid() {
    return (m_ptr != nullptr);
}
GCMotionMetricEvaluator GCCurrentVelocityMetricEvaluator::GetParent() const {
    GCMotionMetricEvaluator value(m_ptr);
    return value;
}
void GCCurrentVelocityMetricEvaluator::SetParent(GCMotionMetricEvaluator value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCCurrentVelocityMetricEvaluator(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCCurrentVelocityMetricEvaluator>("CCurrentVelocityMetricEvaluator")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCCurrentVelocityMetricEvaluator::GetParent, &GCCurrentVelocityMetricEvaluator::SetParent)
        .addFunction("ToPtr", &GCCurrentVelocityMetricEvaluator::ToPtr)
        .addFunction("IsValid", &GCCurrentVelocityMetricEvaluator::IsValid)
        .endClass();
}
GCVoxelVisibility::GCVoxelVisibility(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCVoxelVisibility::GCVoxelVisibility(void *ptr) {
    m_ptr = ptr;
}
uint32_t GCVoxelVisibility::GetBaseClusterCount() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CVoxelVisibility", "m_nBaseClusterCount");
}
void GCVoxelVisibility::SetBaseClusterCount(uint32_t value) {
    SetSchemaValue(m_ptr, "CVoxelVisibility", "m_nBaseClusterCount", false, value);
}
uint32_t GCVoxelVisibility::GetPVSBytesPerCluster() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CVoxelVisibility", "m_nPVSBytesPerCluster");
}
void GCVoxelVisibility::SetPVSBytesPerCluster(uint32_t value) {
    SetSchemaValue(m_ptr, "CVoxelVisibility", "m_nPVSBytesPerCluster", false, value);
}
Vector GCVoxelVisibility::GetMinBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "CVoxelVisibility", "m_vMinBounds");
}
void GCVoxelVisibility::SetMinBounds(Vector value) {
    SetSchemaValue(m_ptr, "CVoxelVisibility", "m_vMinBounds", false, value);
}
Vector GCVoxelVisibility::GetMaxBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "CVoxelVisibility", "m_vMaxBounds");
}
void GCVoxelVisibility::SetMaxBounds(Vector value) {
    SetSchemaValue(m_ptr, "CVoxelVisibility", "m_vMaxBounds", false, value);
}
float GCVoxelVisibility::GetGridSize() const {
    return GetSchemaValue<float>(m_ptr, "CVoxelVisibility", "m_flGridSize");
}
void GCVoxelVisibility::SetGridSize(float value) {
    SetSchemaValue(m_ptr, "CVoxelVisibility", "m_flGridSize", false, value);
}
uint32_t GCVoxelVisibility::GetSkyVisibilityCluster() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CVoxelVisibility", "m_nSkyVisibilityCluster");
}
void GCVoxelVisibility::SetSkyVisibilityCluster(uint32_t value) {
    SetSchemaValue(m_ptr, "CVoxelVisibility", "m_nSkyVisibilityCluster", false, value);
}
uint32_t GCVoxelVisibility::GetSunVisibilityCluster() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CVoxelVisibility", "m_nSunVisibilityCluster");
}
void GCVoxelVisibility::SetSunVisibilityCluster(uint32_t value) {
    SetSchemaValue(m_ptr, "CVoxelVisibility", "m_nSunVisibilityCluster", false, value);
}
GVoxelVisBlockOffset_t GCVoxelVisibility::GetNodeBlock() const {
    GVoxelVisBlockOffset_t value(GetSchemaPtr(m_ptr, "CVoxelVisibility", "m_NodeBlock"));
    return value;
}
void GCVoxelVisibility::SetNodeBlock(GVoxelVisBlockOffset_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'NodeBlock' is not possible.\n");
}
GVoxelVisBlockOffset_t GCVoxelVisibility::GetRegionBlock() const {
    GVoxelVisBlockOffset_t value(GetSchemaPtr(m_ptr, "CVoxelVisibility", "m_RegionBlock"));
    return value;
}
void GCVoxelVisibility::SetRegionBlock(GVoxelVisBlockOffset_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'RegionBlock' is not possible.\n");
}
GVoxelVisBlockOffset_t GCVoxelVisibility::GetEnclosedClusterListBlock() const {
    GVoxelVisBlockOffset_t value(GetSchemaPtr(m_ptr, "CVoxelVisibility", "m_EnclosedClusterListBlock"));
    return value;
}
void GCVoxelVisibility::SetEnclosedClusterListBlock(GVoxelVisBlockOffset_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'EnclosedClusterListBlock' is not possible.\n");
}
GVoxelVisBlockOffset_t GCVoxelVisibility::GetEnclosedClustersBlock() const {
    GVoxelVisBlockOffset_t value(GetSchemaPtr(m_ptr, "CVoxelVisibility", "m_EnclosedClustersBlock"));
    return value;
}
void GCVoxelVisibility::SetEnclosedClustersBlock(GVoxelVisBlockOffset_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'EnclosedClustersBlock' is not possible.\n");
}
GVoxelVisBlockOffset_t GCVoxelVisibility::GetMasksBlock() const {
    GVoxelVisBlockOffset_t value(GetSchemaPtr(m_ptr, "CVoxelVisibility", "m_MasksBlock"));
    return value;
}
void GCVoxelVisibility::SetMasksBlock(GVoxelVisBlockOffset_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'MasksBlock' is not possible.\n");
}
GVoxelVisBlockOffset_t GCVoxelVisibility::GetVisBlocks() const {
    GVoxelVisBlockOffset_t value(GetSchemaPtr(m_ptr, "CVoxelVisibility", "m_nVisBlocks"));
    return value;
}
void GCVoxelVisibility::SetVisBlocks(GVoxelVisBlockOffset_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'VisBlocks' is not possible.\n");
}
void* GCVoxelVisibility::GetPtr() {
    return m_ptr;
}
std::string GCVoxelVisibility::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCVoxelVisibility::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCVoxelVisibility(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCVoxelVisibility>("CVoxelVisibility")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BaseClusterCount", &GCVoxelVisibility::GetBaseClusterCount, &GCVoxelVisibility::SetBaseClusterCount)
        .addProperty("PVSBytesPerCluster", &GCVoxelVisibility::GetPVSBytesPerCluster, &GCVoxelVisibility::SetPVSBytesPerCluster)
        .addProperty("MinBounds", &GCVoxelVisibility::GetMinBounds, &GCVoxelVisibility::SetMinBounds)
        .addProperty("MaxBounds", &GCVoxelVisibility::GetMaxBounds, &GCVoxelVisibility::SetMaxBounds)
        .addProperty("GridSize", &GCVoxelVisibility::GetGridSize, &GCVoxelVisibility::SetGridSize)
        .addProperty("SkyVisibilityCluster", &GCVoxelVisibility::GetSkyVisibilityCluster, &GCVoxelVisibility::SetSkyVisibilityCluster)
        .addProperty("SunVisibilityCluster", &GCVoxelVisibility::GetSunVisibilityCluster, &GCVoxelVisibility::SetSunVisibilityCluster)
        .addProperty("NodeBlock", &GCVoxelVisibility::GetNodeBlock, &GCVoxelVisibility::SetNodeBlock)
        .addProperty("RegionBlock", &GCVoxelVisibility::GetRegionBlock, &GCVoxelVisibility::SetRegionBlock)
        .addProperty("EnclosedClusterListBlock", &GCVoxelVisibility::GetEnclosedClusterListBlock, &GCVoxelVisibility::SetEnclosedClusterListBlock)
        .addProperty("EnclosedClustersBlock", &GCVoxelVisibility::GetEnclosedClustersBlock, &GCVoxelVisibility::SetEnclosedClustersBlock)
        .addProperty("MasksBlock", &GCVoxelVisibility::GetMasksBlock, &GCVoxelVisibility::SetMasksBlock)
        .addProperty("VisBlocks", &GCVoxelVisibility::GetVisBlocks, &GCVoxelVisibility::SetVisBlocks)
        .addFunction("ToPtr", &GCVoxelVisibility::ToPtr)
        .addFunction("IsValid", &GCVoxelVisibility::IsValid)
        .endClass();
}
GSelectedEditItemInfo_t::GSelectedEditItemInfo_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GSelectedEditItemInfo_t::GSelectedEditItemInfo_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<GSosEditItemInfo_t> GSelectedEditItemInfo_t::GetEditItems() const {
    CUtlVector<GSosEditItemInfo_t>* vec = GetSchemaValue<CUtlVector<GSosEditItemInfo_t>*>(m_ptr, "SelectedEditItemInfo_t", "m_EditItems"); std::vector<GSosEditItemInfo_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GSelectedEditItemInfo_t::SetEditItems(std::vector<GSosEditItemInfo_t> value) {
    SetSchemaValueCUtlVector<GSosEditItemInfo_t>(m_ptr, "SelectedEditItemInfo_t", "m_EditItems", true, value);
}
void* GSelectedEditItemInfo_t::GetPtr() {
    return m_ptr;
}
std::string GSelectedEditItemInfo_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GSelectedEditItemInfo_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassSelectedEditItemInfo_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GSelectedEditItemInfo_t>("SelectedEditItemInfo_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("EditItems", &GSelectedEditItemInfo_t::GetEditItems, &GSelectedEditItemInfo_t::SetEditItems)
        .addFunction("ToPtr", &GSelectedEditItemInfo_t::ToPtr)
        .addFunction("IsValid", &GSelectedEditItemInfo_t::IsValid)
        .endClass();
}
GChainToSolveData_t::GChainToSolveData_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GChainToSolveData_t::GChainToSolveData_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GChainToSolveData_t::GetChainIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "ChainToSolveData_t", "m_nChainIndex");
}
void GChainToSolveData_t::SetChainIndex(int32_t value) {
    SetSchemaValue(m_ptr, "ChainToSolveData_t", "m_nChainIndex", true, value);
}
GIKSolverSettings_t GChainToSolveData_t::GetSolverSettings() const {
    GIKSolverSettings_t value(GetSchemaPtr(m_ptr, "ChainToSolveData_t", "m_SolverSettings"));
    return value;
}
void GChainToSolveData_t::SetSolverSettings(GIKSolverSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'SolverSettings' is not possible.\n");
}
GIKTargetSettings_t GChainToSolveData_t::GetTargetSettings() const {
    GIKTargetSettings_t value(GetSchemaPtr(m_ptr, "ChainToSolveData_t", "m_TargetSettings"));
    return value;
}
void GChainToSolveData_t::SetTargetSettings(GIKTargetSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TargetSettings' is not possible.\n");
}
uint64_t GChainToSolveData_t::GetDebugSetting() const {
    return GetSchemaValue<uint64_t>(m_ptr, "ChainToSolveData_t", "m_DebugSetting");
}
void GChainToSolveData_t::SetDebugSetting(uint64_t value) {
    SetSchemaValue(m_ptr, "ChainToSolveData_t", "m_DebugSetting", true, value);
}
float GChainToSolveData_t::GetDebugNormalizedValue() const {
    return GetSchemaValue<float>(m_ptr, "ChainToSolveData_t", "m_flDebugNormalizedValue");
}
void GChainToSolveData_t::SetDebugNormalizedValue(float value) {
    SetSchemaValue(m_ptr, "ChainToSolveData_t", "m_flDebugNormalizedValue", true, value);
}
Vector GChainToSolveData_t::GetDebugOffset() const {
    return GetSchemaValue<Vector>(m_ptr, "ChainToSolveData_t", "m_vDebugOffset");
}
void GChainToSolveData_t::SetDebugOffset(Vector value) {
    SetSchemaValue(m_ptr, "ChainToSolveData_t", "m_vDebugOffset", true, value);
}
void* GChainToSolveData_t::GetPtr() {
    return m_ptr;
}
std::string GChainToSolveData_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GChainToSolveData_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassChainToSolveData_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GChainToSolveData_t>("ChainToSolveData_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChainIndex", &GChainToSolveData_t::GetChainIndex, &GChainToSolveData_t::SetChainIndex)
        .addProperty("SolverSettings", &GChainToSolveData_t::GetSolverSettings, &GChainToSolveData_t::SetSolverSettings)
        .addProperty("TargetSettings", &GChainToSolveData_t::GetTargetSettings, &GChainToSolveData_t::SetTargetSettings)
        .addProperty("DebugSetting", &GChainToSolveData_t::GetDebugSetting, &GChainToSolveData_t::SetDebugSetting)
        .addProperty("DebugNormalizedValue", &GChainToSolveData_t::GetDebugNormalizedValue, &GChainToSolveData_t::SetDebugNormalizedValue)
        .addProperty("DebugOffset", &GChainToSolveData_t::GetDebugOffset, &GChainToSolveData_t::SetDebugOffset)
        .addFunction("ToPtr", &GChainToSolveData_t::ToPtr)
        .addFunction("IsValid", &GChainToSolveData_t::IsValid)
        .endClass();
}
GCGlowSprite::GCGlowSprite(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCGlowSprite::GCGlowSprite(void *ptr) {
    m_ptr = ptr;
}
Vector GCGlowSprite::GetColor() const {
    return GetSchemaValue<Vector>(m_ptr, "CGlowSprite", "m_vColor");
}
void GCGlowSprite::SetColor(Vector value) {
    SetSchemaValue(m_ptr, "CGlowSprite", "m_vColor", false, value);
}
float GCGlowSprite::GetHorzSize() const {
    return GetSchemaValue<float>(m_ptr, "CGlowSprite", "m_flHorzSize");
}
void GCGlowSprite::SetHorzSize(float value) {
    SetSchemaValue(m_ptr, "CGlowSprite", "m_flHorzSize", false, value);
}
float GCGlowSprite::GetVertSize() const {
    return GetSchemaValue<float>(m_ptr, "CGlowSprite", "m_flVertSize");
}
void GCGlowSprite::SetVertSize(float value) {
    SetSchemaValue(m_ptr, "CGlowSprite", "m_flVertSize", false, value);
}
void* GCGlowSprite::GetPtr() {
    return m_ptr;
}
std::string GCGlowSprite::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCGlowSprite::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCGlowSprite(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCGlowSprite>("CGlowSprite")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Color", &GCGlowSprite::GetColor, &GCGlowSprite::SetColor)
        .addProperty("HorzSize", &GCGlowSprite::GetHorzSize, &GCGlowSprite::SetHorzSize)
        .addProperty("VertSize", &GCGlowSprite::GetVertSize, &GCGlowSprite::SetVertSize)
        .addFunction("ToPtr", &GCGlowSprite::ToPtr)
        .addFunction("IsValid", &GCGlowSprite::IsValid)
        .endClass();
}
GCSSDSMsg_PostLayer::GCSSDSMsg_PostLayer(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSSDSMsg_PostLayer::GCSSDSMsg_PostLayer(void *ptr) {
    m_ptr = ptr;
}
void* GCSSDSMsg_PostLayer::GetPtr() {
    return m_ptr;
}
std::string GCSSDSMsg_PostLayer::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSSDSMsg_PostLayer::IsValid() {
    return (m_ptr != nullptr);
}
GCSSDSMsg_LayerBase GCSSDSMsg_PostLayer::GetParent() const {
    GCSSDSMsg_LayerBase value(m_ptr);
    return value;
}
void GCSSDSMsg_PostLayer::SetParent(GCSSDSMsg_LayerBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSSDSMsg_PostLayer(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSSDSMsg_PostLayer>("CSSDSMsg_PostLayer")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCSSDSMsg_PostLayer::GetParent, &GCSSDSMsg_PostLayer::SetParent)
        .addFunction("ToPtr", &GCSSDSMsg_PostLayer::ToPtr)
        .addFunction("IsValid", &GCSSDSMsg_PostLayer::IsValid)
        .endClass();
}
GCAnimBone::GCAnimBone(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimBone::GCAnimBone(void *ptr) {
    m_ptr = ptr;
}
int32_t GCAnimBone::GetParent() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimBone", "m_parent");
}
void GCAnimBone::SetParent(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimBone", "m_parent", false, value);
}
Vector GCAnimBone::GetPos() const {
    return GetSchemaValue<Vector>(m_ptr, "CAnimBone", "m_pos");
}
void GCAnimBone::SetPos(Vector value) {
    SetSchemaValue(m_ptr, "CAnimBone", "m_pos", false, value);
}
float GCAnimBone::GetScale() const {
    return GetSchemaValue<float>(m_ptr, "CAnimBone", "m_scale");
}
void GCAnimBone::SetScale(float value) {
    SetSchemaValue(m_ptr, "CAnimBone", "m_scale", false, value);
}
int32_t GCAnimBone::GetFlags() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimBone", "m_flags");
}
void GCAnimBone::SetFlags(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimBone", "m_flags", false, value);
}
void* GCAnimBone::GetPtr() {
    return m_ptr;
}
std::string GCAnimBone::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimBone::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimBone(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimBone>("CAnimBone")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCAnimBone::GetParent, &GCAnimBone::SetParent)
        .addProperty("Pos", &GCAnimBone::GetPos, &GCAnimBone::SetPos)
        .addProperty("Scale", &GCAnimBone::GetScale, &GCAnimBone::SetScale)
        .addProperty("Flags", &GCAnimBone::GetFlags, &GCAnimBone::SetFlags)
        .addFunction("ToPtr", &GCAnimBone::ToPtr)
        .addFunction("IsValid", &GCAnimBone::IsValid)
        .endClass();
}
GVPhysXConstraint2_t::GVPhysXConstraint2_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVPhysXConstraint2_t::GVPhysXConstraint2_t(void *ptr) {
    m_ptr = ptr;
}
uint32_t GVPhysXConstraint2_t::GetFlags() const {
    return GetSchemaValue<uint32_t>(m_ptr, "VPhysXConstraint2_t", "m_nFlags");
}
void GVPhysXConstraint2_t::SetFlags(uint32_t value) {
    SetSchemaValue(m_ptr, "VPhysXConstraint2_t", "m_nFlags", true, value);
}
uint16_t GVPhysXConstraint2_t::GetParent() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXConstraint2_t", "m_nParent");
}
void GVPhysXConstraint2_t::SetParent(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXConstraint2_t", "m_nParent", true, value);
}
uint16_t GVPhysXConstraint2_t::GetChild() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXConstraint2_t", "m_nChild");
}
void GVPhysXConstraint2_t::SetChild(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXConstraint2_t", "m_nChild", true, value);
}
GVPhysXConstraintParams_t GVPhysXConstraint2_t::GetParams() const {
    GVPhysXConstraintParams_t value(GetSchemaPtr(m_ptr, "VPhysXConstraint2_t", "m_params"));
    return value;
}
void GVPhysXConstraint2_t::SetParams(GVPhysXConstraintParams_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Params' is not possible.\n");
}
void* GVPhysXConstraint2_t::GetPtr() {
    return m_ptr;
}
std::string GVPhysXConstraint2_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVPhysXConstraint2_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVPhysXConstraint2_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVPhysXConstraint2_t>("VPhysXConstraint2_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GVPhysXConstraint2_t::GetFlags, &GVPhysXConstraint2_t::SetFlags)
        .addProperty("Parent", &GVPhysXConstraint2_t::GetParent, &GVPhysXConstraint2_t::SetParent)
        .addProperty("Child", &GVPhysXConstraint2_t::GetChild, &GVPhysXConstraint2_t::SetChild)
        .addProperty("Params", &GVPhysXConstraint2_t::GetParams, &GVPhysXConstraint2_t::SetParams)
        .addFunction("ToPtr", &GVPhysXConstraint2_t::ToPtr)
        .addFunction("IsValid", &GVPhysXConstraint2_t::IsValid)
        .endClass();
}
GCEditableMotionGraph::GCEditableMotionGraph(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCEditableMotionGraph::GCEditableMotionGraph(void *ptr) {
    m_ptr = ptr;
}
void* GCEditableMotionGraph::GetPtr() {
    return m_ptr;
}
std::string GCEditableMotionGraph::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCEditableMotionGraph::IsValid() {
    return (m_ptr != nullptr);
}
GCMotionGraph GCEditableMotionGraph::GetParent() const {
    GCMotionGraph value(m_ptr);
    return value;
}
void GCEditableMotionGraph::SetParent(GCMotionGraph value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCEditableMotionGraph(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCEditableMotionGraph>("CEditableMotionGraph")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCEditableMotionGraph::GetParent, &GCEditableMotionGraph::SetParent)
        .addFunction("ToPtr", &GCEditableMotionGraph::ToPtr)
        .addFunction("IsValid", &GCEditableMotionGraph::IsValid)
        .endClass();
}
GCAnimKeyData::GCAnimKeyData(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimKeyData::GCAnimKeyData(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCAnimBone> GCAnimKeyData::GetBoneArray() const {
    CUtlVector<GCAnimBone>* vec = GetSchemaValue<CUtlVector<GCAnimBone>*>(m_ptr, "CAnimKeyData", "m_boneArray"); std::vector<GCAnimBone> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimKeyData::SetBoneArray(std::vector<GCAnimBone> value) {
    SetSchemaValueCUtlVector<GCAnimBone>(m_ptr, "CAnimKeyData", "m_boneArray", false, value);
}
std::vector<GCAnimUser> GCAnimKeyData::GetUserArray() const {
    CUtlVector<GCAnimUser>* vec = GetSchemaValue<CUtlVector<GCAnimUser>*>(m_ptr, "CAnimKeyData", "m_userArray"); std::vector<GCAnimUser> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimKeyData::SetUserArray(std::vector<GCAnimUser> value) {
    SetSchemaValueCUtlVector<GCAnimUser>(m_ptr, "CAnimKeyData", "m_userArray", false, value);
}
int32_t GCAnimKeyData::GetChannelElements() const {
    return GetSchemaValue<int32_t>(m_ptr, "CAnimKeyData", "m_nChannelElements");
}
void GCAnimKeyData::SetChannelElements(int32_t value) {
    SetSchemaValue(m_ptr, "CAnimKeyData", "m_nChannelElements", false, value);
}
std::vector<GCAnimDataChannelDesc> GCAnimKeyData::GetDataChannelArray() const {
    CUtlVector<GCAnimDataChannelDesc>* vec = GetSchemaValue<CUtlVector<GCAnimDataChannelDesc>*>(m_ptr, "CAnimKeyData", "m_dataChannelArray"); std::vector<GCAnimDataChannelDesc> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCAnimKeyData::SetDataChannelArray(std::vector<GCAnimDataChannelDesc> value) {
    SetSchemaValueCUtlVector<GCAnimDataChannelDesc>(m_ptr, "CAnimKeyData", "m_dataChannelArray", false, value);
}
void* GCAnimKeyData::GetPtr() {
    return m_ptr;
}
std::string GCAnimKeyData::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimKeyData::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimKeyData(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimKeyData>("CAnimKeyData")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BoneArray", &GCAnimKeyData::GetBoneArray, &GCAnimKeyData::SetBoneArray)
        .addProperty("UserArray", &GCAnimKeyData::GetUserArray, &GCAnimKeyData::SetUserArray)
        .addProperty("ChannelElements", &GCAnimKeyData::GetChannelElements, &GCAnimKeyData::SetChannelElements)
        .addProperty("DataChannelArray", &GCAnimKeyData::GetDataChannelArray, &GCAnimKeyData::SetDataChannelArray)
        .addFunction("ToPtr", &GCAnimKeyData::ToPtr)
        .addFunction("IsValid", &GCAnimKeyData::IsValid)
        .endClass();
}
GEventPreDataUpdate_t::GEventPreDataUpdate_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventPreDataUpdate_t::GEventPreDataUpdate_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GEventPreDataUpdate_t::GetCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "EventPreDataUpdate_t", "m_nCount");
}
void GEventPreDataUpdate_t::SetCount(int32_t value) {
    SetSchemaValue(m_ptr, "EventPreDataUpdate_t", "m_nCount", true, value);
}
void* GEventPreDataUpdate_t::GetPtr() {
    return m_ptr;
}
std::string GEventPreDataUpdate_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventPreDataUpdate_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventPreDataUpdate_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventPreDataUpdate_t>("EventPreDataUpdate_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Count", &GEventPreDataUpdate_t::GetCount, &GEventPreDataUpdate_t::SetCount)
        .addFunction("ToPtr", &GEventPreDataUpdate_t::ToPtr)
        .addFunction("IsValid", &GEventPreDataUpdate_t::IsValid)
        .endClass();
}
GWorld_t::GWorld_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GWorld_t::GWorld_t(void *ptr) {
    m_ptr = ptr;
}
GWorldBuilderParams_t GWorld_t::GetBuilderParams() const {
    GWorldBuilderParams_t value(GetSchemaPtr(m_ptr, "World_t", "m_builderParams"));
    return value;
}
void GWorld_t::SetBuilderParams(GWorldBuilderParams_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BuilderParams' is not possible.\n");
}
std::vector<GNodeData_t> GWorld_t::GetWorldNodes() const {
    CUtlVector<GNodeData_t>* vec = GetSchemaValue<CUtlVector<GNodeData_t>*>(m_ptr, "World_t", "m_worldNodes"); std::vector<GNodeData_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorld_t::SetWorldNodes(std::vector<GNodeData_t> value) {
    SetSchemaValueCUtlVector<GNodeData_t>(m_ptr, "World_t", "m_worldNodes", true, value);
}
GBakedLightingInfo_t GWorld_t::GetWorldLightingInfo() const {
    GBakedLightingInfo_t value(GetSchemaPtr(m_ptr, "World_t", "m_worldLightingInfo"));
    return value;
}
void GWorld_t::SetWorldLightingInfo(GBakedLightingInfo_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'WorldLightingInfo' is not possible.\n");
}
void* GWorld_t::GetPtr() {
    return m_ptr;
}
std::string GWorld_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GWorld_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassWorld_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GWorld_t>("World_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BuilderParams", &GWorld_t::GetBuilderParams, &GWorld_t::SetBuilderParams)
        .addProperty("WorldNodes", &GWorld_t::GetWorldNodes, &GWorld_t::SetWorldNodes)
        .addProperty("WorldLightingInfo", &GWorld_t::GetWorldLightingInfo, &GWorld_t::SetWorldLightingInfo)
        .addFunction("ToPtr", &GWorld_t::ToPtr)
        .addFunction("IsValid", &GWorld_t::IsValid)
        .endClass();
}
GCVectorAnimParameter::GCVectorAnimParameter(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCVectorAnimParameter::GCVectorAnimParameter(void *ptr) {
    m_ptr = ptr;
}
Vector GCVectorAnimParameter::GetDefaultValue() const {
    return GetSchemaValue<Vector>(m_ptr, "CVectorAnimParameter", "m_defaultValue");
}
void GCVectorAnimParameter::SetDefaultValue(Vector value) {
    SetSchemaValue(m_ptr, "CVectorAnimParameter", "m_defaultValue", false, value);
}
bool GCVectorAnimParameter::GetInterpolate() const {
    return GetSchemaValue<bool>(m_ptr, "CVectorAnimParameter", "m_bInterpolate");
}
void GCVectorAnimParameter::SetInterpolate(bool value) {
    SetSchemaValue(m_ptr, "CVectorAnimParameter", "m_bInterpolate", false, value);
}
void* GCVectorAnimParameter::GetPtr() {
    return m_ptr;
}
std::string GCVectorAnimParameter::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCVectorAnimParameter::IsValid() {
    return (m_ptr != nullptr);
}
GCConcreteAnimParameter GCVectorAnimParameter::GetParent() const {
    GCConcreteAnimParameter value(m_ptr);
    return value;
}
void GCVectorAnimParameter::SetParent(GCConcreteAnimParameter value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCVectorAnimParameter(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCVectorAnimParameter>("CVectorAnimParameter")
        .addConstructor<void (*)(std::string)>()
        .addProperty("DefaultValue", &GCVectorAnimParameter::GetDefaultValue, &GCVectorAnimParameter::SetDefaultValue)
        .addProperty("Interpolate", &GCVectorAnimParameter::GetInterpolate, &GCVectorAnimParameter::SetInterpolate)
        .addProperty("Parent", &GCVectorAnimParameter::GetParent, &GCVectorAnimParameter::SetParent)
        .addFunction("ToPtr", &GCVectorAnimParameter::ToPtr)
        .addFunction("IsValid", &GCVectorAnimParameter::IsValid)
        .endClass();
}
GCNmControlParameterBoolNode::GCNmControlParameterBoolNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmControlParameterBoolNode::GCNmControlParameterBoolNode(void *ptr) {
    m_ptr = ptr;
}
void* GCNmControlParameterBoolNode::GetPtr() {
    return m_ptr;
}
std::string GCNmControlParameterBoolNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmControlParameterBoolNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmBoolValueNode GCNmControlParameterBoolNode::GetParent() const {
    GCNmBoolValueNode value(m_ptr);
    return value;
}
void GCNmControlParameterBoolNode::SetParent(GCNmBoolValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmControlParameterBoolNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmControlParameterBoolNode>("CNmControlParameterBoolNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCNmControlParameterBoolNode::GetParent, &GCNmControlParameterBoolNode::SetParent)
        .addFunction("ToPtr", &GCNmControlParameterBoolNode::ToPtr)
        .addFunction("IsValid", &GCNmControlParameterBoolNode::IsValid)
        .endClass();
}
GCStateMachineUpdateNode::GCStateMachineUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCStateMachineUpdateNode::GCStateMachineUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GCAnimStateMachineUpdater GCStateMachineUpdateNode::GetStateMachine() const {
    GCAnimStateMachineUpdater value(GetSchemaPtr(m_ptr, "CStateMachineUpdateNode", "m_stateMachine"));
    return value;
}
void GCStateMachineUpdateNode::SetStateMachine(GCAnimStateMachineUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'StateMachine' is not possible.\n");
}
std::vector<GCStateNodeStateData> GCStateMachineUpdateNode::GetStateData() const {
    CUtlVector<GCStateNodeStateData>* vec = GetSchemaValue<CUtlVector<GCStateNodeStateData>*>(m_ptr, "CStateMachineUpdateNode", "m_stateData"); std::vector<GCStateNodeStateData> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCStateMachineUpdateNode::SetStateData(std::vector<GCStateNodeStateData> value) {
    SetSchemaValueCUtlVector<GCStateNodeStateData>(m_ptr, "CStateMachineUpdateNode", "m_stateData", false, value);
}
std::vector<GCStateNodeTransitionData> GCStateMachineUpdateNode::GetTransitionData() const {
    CUtlVector<GCStateNodeTransitionData>* vec = GetSchemaValue<CUtlVector<GCStateNodeTransitionData>*>(m_ptr, "CStateMachineUpdateNode", "m_transitionData"); std::vector<GCStateNodeTransitionData> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCStateMachineUpdateNode::SetTransitionData(std::vector<GCStateNodeTransitionData> value) {
    SetSchemaValueCUtlVector<GCStateNodeTransitionData>(m_ptr, "CStateMachineUpdateNode", "m_transitionData", false, value);
}
bool GCStateMachineUpdateNode::GetBlockWaningTags() const {
    return GetSchemaValue<bool>(m_ptr, "CStateMachineUpdateNode", "m_bBlockWaningTags");
}
void GCStateMachineUpdateNode::SetBlockWaningTags(bool value) {
    SetSchemaValue(m_ptr, "CStateMachineUpdateNode", "m_bBlockWaningTags", false, value);
}
bool GCStateMachineUpdateNode::GetLockStateWhenWaning() const {
    return GetSchemaValue<bool>(m_ptr, "CStateMachineUpdateNode", "m_bLockStateWhenWaning");
}
void GCStateMachineUpdateNode::SetLockStateWhenWaning(bool value) {
    SetSchemaValue(m_ptr, "CStateMachineUpdateNode", "m_bLockStateWhenWaning", false, value);
}
void* GCStateMachineUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCStateMachineUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCStateMachineUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimUpdateNodeBase GCStateMachineUpdateNode::GetParent() const {
    GCAnimUpdateNodeBase value(m_ptr);
    return value;
}
void GCStateMachineUpdateNode::SetParent(GCAnimUpdateNodeBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCStateMachineUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCStateMachineUpdateNode>("CStateMachineUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StateMachine", &GCStateMachineUpdateNode::GetStateMachine, &GCStateMachineUpdateNode::SetStateMachine)
        .addProperty("StateData", &GCStateMachineUpdateNode::GetStateData, &GCStateMachineUpdateNode::SetStateData)
        .addProperty("TransitionData", &GCStateMachineUpdateNode::GetTransitionData, &GCStateMachineUpdateNode::SetTransitionData)
        .addProperty("BlockWaningTags", &GCStateMachineUpdateNode::GetBlockWaningTags, &GCStateMachineUpdateNode::SetBlockWaningTags)
        .addProperty("LockStateWhenWaning", &GCStateMachineUpdateNode::GetLockStateWhenWaning, &GCStateMachineUpdateNode::SetLockStateWhenWaning)
        .addProperty("Parent", &GCStateMachineUpdateNode::GetParent, &GCStateMachineUpdateNode::SetParent)
        .addFunction("ToPtr", &GCStateMachineUpdateNode::ToPtr)
        .addFunction("IsValid", &GCStateMachineUpdateNode::IsValid)
        .endClass();
}
GCHitBoxSet::GCHitBoxSet(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCHitBoxSet::GCHitBoxSet(void *ptr) {
    m_ptr = ptr;
}
std::string GCHitBoxSet::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CHitBoxSet", "m_name").Get();
}
void GCHitBoxSet::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CHitBoxSet", "m_name", false, CUtlString(value.c_str()));
}
uint32_t GCHitBoxSet::GetNameHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CHitBoxSet", "m_nNameHash");
}
void GCHitBoxSet::SetNameHash(uint32_t value) {
    SetSchemaValue(m_ptr, "CHitBoxSet", "m_nNameHash", false, value);
}
std::vector<GCHitBox> GCHitBoxSet::GetHitBoxes() const {
    CUtlVector<GCHitBox>* vec = GetSchemaValue<CUtlVector<GCHitBox>*>(m_ptr, "CHitBoxSet", "m_HitBoxes"); std::vector<GCHitBox> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCHitBoxSet::SetHitBoxes(std::vector<GCHitBox> value) {
    SetSchemaValueCUtlVector<GCHitBox>(m_ptr, "CHitBoxSet", "m_HitBoxes", false, value);
}
std::string GCHitBoxSet::GetSourceFilename() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CHitBoxSet", "m_SourceFilename").Get();
}
void GCHitBoxSet::SetSourceFilename(std::string value) {
    SetSchemaValue(m_ptr, "CHitBoxSet", "m_SourceFilename", false, CUtlString(value.c_str()));
}
void* GCHitBoxSet::GetPtr() {
    return m_ptr;
}
std::string GCHitBoxSet::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCHitBoxSet::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCHitBoxSet(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCHitBoxSet>("CHitBoxSet")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCHitBoxSet::GetName, &GCHitBoxSet::SetName)
        .addProperty("NameHash", &GCHitBoxSet::GetNameHash, &GCHitBoxSet::SetNameHash)
        .addProperty("HitBoxes", &GCHitBoxSet::GetHitBoxes, &GCHitBoxSet::SetHitBoxes)
        .addProperty("SourceFilename", &GCHitBoxSet::GetSourceFilename, &GCHitBoxSet::SetSourceFilename)
        .addFunction("ToPtr", &GCHitBoxSet::ToPtr)
        .addFunction("IsValid", &GCHitBoxSet::IsValid)
        .endClass();
}
GCExampleSchemaVData_PolymorphicDerivedB::GCExampleSchemaVData_PolymorphicDerivedB(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCExampleSchemaVData_PolymorphicDerivedB::GCExampleSchemaVData_PolymorphicDerivedB(void *ptr) {
    m_ptr = ptr;
}
int32_t GCExampleSchemaVData_PolymorphicDerivedB::GetDerivedB() const {
    return GetSchemaValue<int32_t>(m_ptr, "CExampleSchemaVData_PolymorphicDerivedB", "m_nDerivedB");
}
void GCExampleSchemaVData_PolymorphicDerivedB::SetDerivedB(int32_t value) {
    SetSchemaValue(m_ptr, "CExampleSchemaVData_PolymorphicDerivedB", "m_nDerivedB", false, value);
}
void* GCExampleSchemaVData_PolymorphicDerivedB::GetPtr() {
    return m_ptr;
}
std::string GCExampleSchemaVData_PolymorphicDerivedB::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCExampleSchemaVData_PolymorphicDerivedB::IsValid() {
    return (m_ptr != nullptr);
}
GCExampleSchemaVData_PolymorphicBase GCExampleSchemaVData_PolymorphicDerivedB::GetParent() const {
    GCExampleSchemaVData_PolymorphicBase value(m_ptr);
    return value;
}
void GCExampleSchemaVData_PolymorphicDerivedB::SetParent(GCExampleSchemaVData_PolymorphicBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCExampleSchemaVData_PolymorphicDerivedB(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCExampleSchemaVData_PolymorphicDerivedB>("CExampleSchemaVData_PolymorphicDerivedB")
        .addConstructor<void (*)(std::string)>()
        .addProperty("DerivedB", &GCExampleSchemaVData_PolymorphicDerivedB::GetDerivedB, &GCExampleSchemaVData_PolymorphicDerivedB::SetDerivedB)
        .addProperty("Parent", &GCExampleSchemaVData_PolymorphicDerivedB::GetParent, &GCExampleSchemaVData_PolymorphicDerivedB::SetParent)
        .addFunction("ToPtr", &GCExampleSchemaVData_PolymorphicDerivedB::ToPtr)
        .addFunction("IsValid", &GCExampleSchemaVData_PolymorphicDerivedB::IsValid)
        .endClass();
}
GFeSimdTri_t::GFeSimdTri_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeSimdTri_t::GFeSimdTri_t(void *ptr) {
    m_ptr = ptr;
}
float GFeSimdTri_t::GetW1() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdTri_t", "w1");
}
void GFeSimdTri_t::SetW1(float value) {
    SetSchemaValue(m_ptr, "FeSimdTri_t", "w1", true, value);
}
float GFeSimdTri_t::GetW2() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdTri_t", "w2");
}
void GFeSimdTri_t::SetW2(float value) {
    SetSchemaValue(m_ptr, "FeSimdTri_t", "w2", true, value);
}
float GFeSimdTri_t::Get1x() const {
    return GetSchemaValue<float>(m_ptr, "FeSimdTri_t", "v1x");
}
void GFeSimdTri_t::Set1x(float value) {
    SetSchemaValue(m_ptr, "FeSimdTri_t", "v1x", true, value);
}
void* GFeSimdTri_t::GetPtr() {
    return m_ptr;
}
std::string GFeSimdTri_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeSimdTri_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeSimdTri_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeSimdTri_t>("FeSimdTri_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("W1", &GFeSimdTri_t::GetW1, &GFeSimdTri_t::SetW1)
        .addProperty("W2", &GFeSimdTri_t::GetW2, &GFeSimdTri_t::SetW2)
        .addProperty("1x", &GFeSimdTri_t::Get1x, &GFeSimdTri_t::Set1x)
        .addFunction("ToPtr", &GFeSimdTri_t::ToPtr)
        .addFunction("IsValid", &GFeSimdTri_t::IsValid)
        .endClass();
}
GPostProcessingResource_t::GPostProcessingResource_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GPostProcessingResource_t::GPostProcessingResource_t(void *ptr) {
    m_ptr = ptr;
}
bool GPostProcessingResource_t::GetHasTonemapParams() const {
    return GetSchemaValue<bool>(m_ptr, "PostProcessingResource_t", "m_bHasTonemapParams");
}
void GPostProcessingResource_t::SetHasTonemapParams(bool value) {
    SetSchemaValue(m_ptr, "PostProcessingResource_t", "m_bHasTonemapParams", true, value);
}
GPostProcessingTonemapParameters_t GPostProcessingResource_t::GetToneMapParams() const {
    GPostProcessingTonemapParameters_t value(GetSchemaPtr(m_ptr, "PostProcessingResource_t", "m_toneMapParams"));
    return value;
}
void GPostProcessingResource_t::SetToneMapParams(GPostProcessingTonemapParameters_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ToneMapParams' is not possible.\n");
}
bool GPostProcessingResource_t::GetHasBloomParams() const {
    return GetSchemaValue<bool>(m_ptr, "PostProcessingResource_t", "m_bHasBloomParams");
}
void GPostProcessingResource_t::SetHasBloomParams(bool value) {
    SetSchemaValue(m_ptr, "PostProcessingResource_t", "m_bHasBloomParams", true, value);
}
GPostProcessingBloomParameters_t GPostProcessingResource_t::GetBloomParams() const {
    GPostProcessingBloomParameters_t value(GetSchemaPtr(m_ptr, "PostProcessingResource_t", "m_bloomParams"));
    return value;
}
void GPostProcessingResource_t::SetBloomParams(GPostProcessingBloomParameters_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'BloomParams' is not possible.\n");
}
bool GPostProcessingResource_t::GetHasVignetteParams() const {
    return GetSchemaValue<bool>(m_ptr, "PostProcessingResource_t", "m_bHasVignetteParams");
}
void GPostProcessingResource_t::SetHasVignetteParams(bool value) {
    SetSchemaValue(m_ptr, "PostProcessingResource_t", "m_bHasVignetteParams", true, value);
}
GPostProcessingVignetteParameters_t GPostProcessingResource_t::GetVignetteParams() const {
    GPostProcessingVignetteParameters_t value(GetSchemaPtr(m_ptr, "PostProcessingResource_t", "m_vignetteParams"));
    return value;
}
void GPostProcessingResource_t::SetVignetteParams(GPostProcessingVignetteParameters_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'VignetteParams' is not possible.\n");
}
bool GPostProcessingResource_t::GetHasLocalContrastParams() const {
    return GetSchemaValue<bool>(m_ptr, "PostProcessingResource_t", "m_bHasLocalContrastParams");
}
void GPostProcessingResource_t::SetHasLocalContrastParams(bool value) {
    SetSchemaValue(m_ptr, "PostProcessingResource_t", "m_bHasLocalContrastParams", true, value);
}
GPostProcessingLocalContrastParameters_t GPostProcessingResource_t::GetLocalConstrastParams() const {
    GPostProcessingLocalContrastParameters_t value(GetSchemaPtr(m_ptr, "PostProcessingResource_t", "m_localConstrastParams"));
    return value;
}
void GPostProcessingResource_t::SetLocalConstrastParams(GPostProcessingLocalContrastParameters_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LocalConstrastParams' is not possible.\n");
}
int32_t GPostProcessingResource_t::GetColorCorrectionVolumeDim() const {
    return GetSchemaValue<int32_t>(m_ptr, "PostProcessingResource_t", "m_nColorCorrectionVolumeDim");
}
void GPostProcessingResource_t::SetColorCorrectionVolumeDim(int32_t value) {
    SetSchemaValue(m_ptr, "PostProcessingResource_t", "m_nColorCorrectionVolumeDim", true, value);
}
bool GPostProcessingResource_t::GetHasColorCorrection() const {
    return GetSchemaValue<bool>(m_ptr, "PostProcessingResource_t", "m_bHasColorCorrection");
}
void GPostProcessingResource_t::SetHasColorCorrection(bool value) {
    SetSchemaValue(m_ptr, "PostProcessingResource_t", "m_bHasColorCorrection", true, value);
}
void* GPostProcessingResource_t::GetPtr() {
    return m_ptr;
}
std::string GPostProcessingResource_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GPostProcessingResource_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassPostProcessingResource_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GPostProcessingResource_t>("PostProcessingResource_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("HasTonemapParams", &GPostProcessingResource_t::GetHasTonemapParams, &GPostProcessingResource_t::SetHasTonemapParams)
        .addProperty("ToneMapParams", &GPostProcessingResource_t::GetToneMapParams, &GPostProcessingResource_t::SetToneMapParams)
        .addProperty("HasBloomParams", &GPostProcessingResource_t::GetHasBloomParams, &GPostProcessingResource_t::SetHasBloomParams)
        .addProperty("BloomParams", &GPostProcessingResource_t::GetBloomParams, &GPostProcessingResource_t::SetBloomParams)
        .addProperty("HasVignetteParams", &GPostProcessingResource_t::GetHasVignetteParams, &GPostProcessingResource_t::SetHasVignetteParams)
        .addProperty("VignetteParams", &GPostProcessingResource_t::GetVignetteParams, &GPostProcessingResource_t::SetVignetteParams)
        .addProperty("HasLocalContrastParams", &GPostProcessingResource_t::GetHasLocalContrastParams, &GPostProcessingResource_t::SetHasLocalContrastParams)
        .addProperty("LocalConstrastParams", &GPostProcessingResource_t::GetLocalConstrastParams, &GPostProcessingResource_t::SetLocalConstrastParams)
        .addProperty("ColorCorrectionVolumeDim", &GPostProcessingResource_t::GetColorCorrectionVolumeDim, &GPostProcessingResource_t::SetColorCorrectionVolumeDim)
        .addProperty("HasColorCorrection", &GPostProcessingResource_t::GetHasColorCorrection, &GPostProcessingResource_t::SetHasColorCorrection)
        .addFunction("ToPtr", &GPostProcessingResource_t::ToPtr)
        .addFunction("IsValid", &GPostProcessingResource_t::IsValid)
        .endClass();
}
GCNmStateNode::GCNmStateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmStateNode::GCNmStateNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmStateNode::GetChildNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmStateNode", "m_nChildNodeIdx");
}
void GCNmStateNode::SetChildNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmStateNode", "m_nChildNodeIdx", false, value);
}
int16_t GCNmStateNode::GetLayerWeightNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmStateNode", "m_nLayerWeightNodeIdx");
}
void GCNmStateNode::SetLayerWeightNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmStateNode", "m_nLayerWeightNodeIdx", false, value);
}
int16_t GCNmStateNode::GetLayerRootMotionWeightNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmStateNode", "m_nLayerRootMotionWeightNodeIdx");
}
void GCNmStateNode::SetLayerRootMotionWeightNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmStateNode", "m_nLayerRootMotionWeightNodeIdx", false, value);
}
int16_t GCNmStateNode::GetLayerBoneMaskNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmStateNode", "m_nLayerBoneMaskNodeIdx");
}
void GCNmStateNode::SetLayerBoneMaskNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmStateNode", "m_nLayerBoneMaskNodeIdx", false, value);
}
bool GCNmStateNode::GetIsOffState() const {
    return GetSchemaValue<bool>(m_ptr, "CNmStateNode", "m_bIsOffState");
}
void GCNmStateNode::SetIsOffState(bool value) {
    SetSchemaValue(m_ptr, "CNmStateNode", "m_bIsOffState", false, value);
}
void* GCNmStateNode::GetPtr() {
    return m_ptr;
}
std::string GCNmStateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmStateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmPoseNode GCNmStateNode::GetParent() const {
    GCNmPoseNode value(m_ptr);
    return value;
}
void GCNmStateNode::SetParent(GCNmPoseNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmStateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmStateNode>("CNmStateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChildNodeIdx", &GCNmStateNode::GetChildNodeIdx, &GCNmStateNode::SetChildNodeIdx)
        .addProperty("LayerWeightNodeIdx", &GCNmStateNode::GetLayerWeightNodeIdx, &GCNmStateNode::SetLayerWeightNodeIdx)
        .addProperty("LayerRootMotionWeightNodeIdx", &GCNmStateNode::GetLayerRootMotionWeightNodeIdx, &GCNmStateNode::SetLayerRootMotionWeightNodeIdx)
        .addProperty("LayerBoneMaskNodeIdx", &GCNmStateNode::GetLayerBoneMaskNodeIdx, &GCNmStateNode::SetLayerBoneMaskNodeIdx)
        .addProperty("IsOffState", &GCNmStateNode::GetIsOffState, &GCNmStateNode::SetIsOffState)
        .addProperty("Parent", &GCNmStateNode::GetParent, &GCNmStateNode::SetParent)
        .addFunction("ToPtr", &GCNmStateNode::ToPtr)
        .addFunction("IsValid", &GCNmStateNode::IsValid)
        .endClass();
}
GNodeData_t::GNodeData_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GNodeData_t::GNodeData_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GNodeData_t::GetParent() const {
    return GetSchemaValue<int32_t>(m_ptr, "NodeData_t", "m_nParent");
}
void GNodeData_t::SetParent(int32_t value) {
    SetSchemaValue(m_ptr, "NodeData_t", "m_nParent", true, value);
}
Vector GNodeData_t::GetOrigin() const {
    return GetSchemaValue<Vector>(m_ptr, "NodeData_t", "m_vOrigin");
}
void GNodeData_t::SetOrigin(Vector value) {
    SetSchemaValue(m_ptr, "NodeData_t", "m_vOrigin", true, value);
}
Vector GNodeData_t::GetMinBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "NodeData_t", "m_vMinBounds");
}
void GNodeData_t::SetMinBounds(Vector value) {
    SetSchemaValue(m_ptr, "NodeData_t", "m_vMinBounds", true, value);
}
Vector GNodeData_t::GetMaxBounds() const {
    return GetSchemaValue<Vector>(m_ptr, "NodeData_t", "m_vMaxBounds");
}
void GNodeData_t::SetMaxBounds(Vector value) {
    SetSchemaValue(m_ptr, "NodeData_t", "m_vMaxBounds", true, value);
}
float GNodeData_t::GetMinimumDistance() const {
    return GetSchemaValue<float>(m_ptr, "NodeData_t", "m_flMinimumDistance");
}
void GNodeData_t::SetMinimumDistance(float value) {
    SetSchemaValue(m_ptr, "NodeData_t", "m_flMinimumDistance", true, value);
}
std::vector<int32> GNodeData_t::GetChildNodeIndices() const {
    CUtlVector<int32>* vec = GetSchemaValue<CUtlVector<int32>*>(m_ptr, "NodeData_t", "m_ChildNodeIndices"); std::vector<int32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GNodeData_t::SetChildNodeIndices(std::vector<int32> value) {
    SetSchemaValueCUtlVector<int32>(m_ptr, "NodeData_t", "m_ChildNodeIndices", true, value);
}
std::string GNodeData_t::GetWorldNodePrefix() const {
    return GetSchemaValue<CUtlString>(m_ptr, "NodeData_t", "m_worldNodePrefix").Get();
}
void GNodeData_t::SetWorldNodePrefix(std::string value) {
    SetSchemaValue(m_ptr, "NodeData_t", "m_worldNodePrefix", true, CUtlString(value.c_str()));
}
void* GNodeData_t::GetPtr() {
    return m_ptr;
}
std::string GNodeData_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GNodeData_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassNodeData_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GNodeData_t>("NodeData_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GNodeData_t::GetParent, &GNodeData_t::SetParent)
        .addProperty("Origin", &GNodeData_t::GetOrigin, &GNodeData_t::SetOrigin)
        .addProperty("MinBounds", &GNodeData_t::GetMinBounds, &GNodeData_t::SetMinBounds)
        .addProperty("MaxBounds", &GNodeData_t::GetMaxBounds, &GNodeData_t::SetMaxBounds)
        .addProperty("MinimumDistance", &GNodeData_t::GetMinimumDistance, &GNodeData_t::SetMinimumDistance)
        .addProperty("ChildNodeIndices", &GNodeData_t::GetChildNodeIndices, &GNodeData_t::SetChildNodeIndices)
        .addProperty("WorldNodePrefix", &GNodeData_t::GetWorldNodePrefix, &GNodeData_t::SetWorldNodePrefix)
        .addFunction("ToPtr", &GNodeData_t::ToPtr)
        .addFunction("IsValid", &GNodeData_t::IsValid)
        .endClass();
}
GCTaskStatusAnimTag::GCTaskStatusAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCTaskStatusAnimTag::GCTaskStatusAnimTag(void *ptr) {
    m_ptr = ptr;
}
void* GCTaskStatusAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCTaskStatusAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCTaskStatusAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimTagBase GCTaskStatusAnimTag::GetParent() const {
    GCAnimTagBase value(m_ptr);
    return value;
}
void GCTaskStatusAnimTag::SetParent(GCAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCTaskStatusAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCTaskStatusAnimTag>("CTaskStatusAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCTaskStatusAnimTag::GetParent, &GCTaskStatusAnimTag::SetParent)
        .addFunction("ToPtr", &GCTaskStatusAnimTag::ToPtr)
        .addFunction("IsValid", &GCTaskStatusAnimTag::IsValid)
        .endClass();
}
GCMaterialDrawDescriptor::GCMaterialDrawDescriptor(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMaterialDrawDescriptor::GCMaterialDrawDescriptor(void *ptr) {
    m_ptr = ptr;
}
float GCMaterialDrawDescriptor::GetUvDensity() const {
    return GetSchemaValue<float>(m_ptr, "CMaterialDrawDescriptor", "m_flUvDensity");
}
void GCMaterialDrawDescriptor::SetUvDensity(float value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_flUvDensity", false, value);
}
Vector GCMaterialDrawDescriptor::GetTintColor() const {
    return GetSchemaValue<Vector>(m_ptr, "CMaterialDrawDescriptor", "m_vTintColor");
}
void GCMaterialDrawDescriptor::SetTintColor(Vector value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_vTintColor", false, value);
}
float GCMaterialDrawDescriptor::GetAlpha() const {
    return GetSchemaValue<float>(m_ptr, "CMaterialDrawDescriptor", "m_flAlpha");
}
void GCMaterialDrawDescriptor::SetAlpha(float value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_flAlpha", false, value);
}
uint32_t GCMaterialDrawDescriptor::GetFirstMeshlet() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CMaterialDrawDescriptor", "m_nFirstMeshlet");
}
void GCMaterialDrawDescriptor::SetFirstMeshlet(uint32_t value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_nFirstMeshlet", false, value);
}
uint16_t GCMaterialDrawDescriptor::GetNumMeshlets() const {
    return GetSchemaValue<uint16_t>(m_ptr, "CMaterialDrawDescriptor", "m_nNumMeshlets");
}
void GCMaterialDrawDescriptor::SetNumMeshlets(uint16_t value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_nNumMeshlets", false, value);
}
uint64_t GCMaterialDrawDescriptor::GetPrimitiveType() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CMaterialDrawDescriptor", "m_nPrimitiveType");
}
void GCMaterialDrawDescriptor::SetPrimitiveType(uint64_t value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_nPrimitiveType", false, value);
}
int32_t GCMaterialDrawDescriptor::GetBaseVertex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMaterialDrawDescriptor", "m_nBaseVertex");
}
void GCMaterialDrawDescriptor::SetBaseVertex(int32_t value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_nBaseVertex", false, value);
}
int32_t GCMaterialDrawDescriptor::GetVertexCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMaterialDrawDescriptor", "m_nVertexCount");
}
void GCMaterialDrawDescriptor::SetVertexCount(int32_t value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_nVertexCount", false, value);
}
int32_t GCMaterialDrawDescriptor::GetStartIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMaterialDrawDescriptor", "m_nStartIndex");
}
void GCMaterialDrawDescriptor::SetStartIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_nStartIndex", false, value);
}
int32_t GCMaterialDrawDescriptor::GetIndexCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "CMaterialDrawDescriptor", "m_nIndexCount");
}
void GCMaterialDrawDescriptor::SetIndexCount(int32_t value) {
    SetSchemaValue(m_ptr, "CMaterialDrawDescriptor", "m_nIndexCount", false, value);
}
GCRenderBufferBinding GCMaterialDrawDescriptor::GetIndexBuffer() const {
    GCRenderBufferBinding value(GetSchemaPtr(m_ptr, "CMaterialDrawDescriptor", "m_indexBuffer"));
    return value;
}
void GCMaterialDrawDescriptor::SetIndexBuffer(GCRenderBufferBinding value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'IndexBuffer' is not possible.\n");
}
void* GCMaterialDrawDescriptor::GetPtr() {
    return m_ptr;
}
std::string GCMaterialDrawDescriptor::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMaterialDrawDescriptor::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCMaterialDrawDescriptor(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMaterialDrawDescriptor>("CMaterialDrawDescriptor")
        .addConstructor<void (*)(std::string)>()
        .addProperty("UvDensity", &GCMaterialDrawDescriptor::GetUvDensity, &GCMaterialDrawDescriptor::SetUvDensity)
        .addProperty("TintColor", &GCMaterialDrawDescriptor::GetTintColor, &GCMaterialDrawDescriptor::SetTintColor)
        .addProperty("Alpha", &GCMaterialDrawDescriptor::GetAlpha, &GCMaterialDrawDescriptor::SetAlpha)
        .addProperty("FirstMeshlet", &GCMaterialDrawDescriptor::GetFirstMeshlet, &GCMaterialDrawDescriptor::SetFirstMeshlet)
        .addProperty("NumMeshlets", &GCMaterialDrawDescriptor::GetNumMeshlets, &GCMaterialDrawDescriptor::SetNumMeshlets)
        .addProperty("PrimitiveType", &GCMaterialDrawDescriptor::GetPrimitiveType, &GCMaterialDrawDescriptor::SetPrimitiveType)
        .addProperty("BaseVertex", &GCMaterialDrawDescriptor::GetBaseVertex, &GCMaterialDrawDescriptor::SetBaseVertex)
        .addProperty("VertexCount", &GCMaterialDrawDescriptor::GetVertexCount, &GCMaterialDrawDescriptor::SetVertexCount)
        .addProperty("StartIndex", &GCMaterialDrawDescriptor::GetStartIndex, &GCMaterialDrawDescriptor::SetStartIndex)
        .addProperty("IndexCount", &GCMaterialDrawDescriptor::GetIndexCount, &GCMaterialDrawDescriptor::SetIndexCount)
        .addProperty("IndexBuffer", &GCMaterialDrawDescriptor::GetIndexBuffer, &GCMaterialDrawDescriptor::SetIndexBuffer)
        .addFunction("ToPtr", &GCMaterialDrawDescriptor::ToPtr)
        .addFunction("IsValid", &GCMaterialDrawDescriptor::IsValid)
        .endClass();
}
GEventServerProcessNetworking_t::GEventServerProcessNetworking_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventServerProcessNetworking_t::GEventServerProcessNetworking_t(void *ptr) {
    m_ptr = ptr;
}
void* GEventServerProcessNetworking_t::GetPtr() {
    return m_ptr;
}
std::string GEventServerProcessNetworking_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventServerProcessNetworking_t::IsValid() {
    return (m_ptr != nullptr);
}
GEventSimulate_t GEventServerProcessNetworking_t::GetParent() const {
    GEventSimulate_t value(m_ptr);
    return value;
}
void GEventServerProcessNetworking_t::SetParent(GEventSimulate_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassEventServerProcessNetworking_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventServerProcessNetworking_t>("EventServerProcessNetworking_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GEventServerProcessNetworking_t::GetParent, &GEventServerProcessNetworking_t::SetParent)
        .addFunction("ToPtr", &GEventServerProcessNetworking_t::ToPtr)
        .addFunction("IsValid", &GEventServerProcessNetworking_t::IsValid)
        .endClass();
}
GCInterpolatedValue::GCInterpolatedValue(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCInterpolatedValue::GCInterpolatedValue(void *ptr) {
    m_ptr = ptr;
}
float GCInterpolatedValue::GetStartTime() const {
    return GetSchemaValue<float>(m_ptr, "CInterpolatedValue", "m_flStartTime");
}
void GCInterpolatedValue::SetStartTime(float value) {
    SetSchemaValue(m_ptr, "CInterpolatedValue", "m_flStartTime", false, value);
}
float GCInterpolatedValue::GetEndTime() const {
    return GetSchemaValue<float>(m_ptr, "CInterpolatedValue", "m_flEndTime");
}
void GCInterpolatedValue::SetEndTime(float value) {
    SetSchemaValue(m_ptr, "CInterpolatedValue", "m_flEndTime", false, value);
}
float GCInterpolatedValue::GetStartValue() const {
    return GetSchemaValue<float>(m_ptr, "CInterpolatedValue", "m_flStartValue");
}
void GCInterpolatedValue::SetStartValue(float value) {
    SetSchemaValue(m_ptr, "CInterpolatedValue", "m_flStartValue", false, value);
}
float GCInterpolatedValue::GetEndValue() const {
    return GetSchemaValue<float>(m_ptr, "CInterpolatedValue", "m_flEndValue");
}
void GCInterpolatedValue::SetEndValue(float value) {
    SetSchemaValue(m_ptr, "CInterpolatedValue", "m_flEndValue", false, value);
}
int32_t GCInterpolatedValue::GetInterpType() const {
    return GetSchemaValue<int32_t>(m_ptr, "CInterpolatedValue", "m_nInterpType");
}
void GCInterpolatedValue::SetInterpType(int32_t value) {
    SetSchemaValue(m_ptr, "CInterpolatedValue", "m_nInterpType", false, value);
}
void* GCInterpolatedValue::GetPtr() {
    return m_ptr;
}
std::string GCInterpolatedValue::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCInterpolatedValue::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCInterpolatedValue(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCInterpolatedValue>("CInterpolatedValue")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StartTime", &GCInterpolatedValue::GetStartTime, &GCInterpolatedValue::SetStartTime)
        .addProperty("EndTime", &GCInterpolatedValue::GetEndTime, &GCInterpolatedValue::SetEndTime)
        .addProperty("StartValue", &GCInterpolatedValue::GetStartValue, &GCInterpolatedValue::SetStartValue)
        .addProperty("EndValue", &GCInterpolatedValue::GetEndValue, &GCInterpolatedValue::SetEndValue)
        .addProperty("InterpType", &GCInterpolatedValue::GetInterpType, &GCInterpolatedValue::SetInterpType)
        .addFunction("ToPtr", &GCInterpolatedValue::ToPtr)
        .addFunction("IsValid", &GCInterpolatedValue::IsValid)
        .endClass();
}
GCMotionGraphUpdateNode::GCMotionGraphUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCMotionGraphUpdateNode::GCMotionGraphUpdateNode(void *ptr) {
    m_ptr = ptr;
}
void* GCMotionGraphUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCMotionGraphUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCMotionGraphUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCLeafUpdateNode GCMotionGraphUpdateNode::GetParent() const {
    GCLeafUpdateNode value(m_ptr);
    return value;
}
void GCMotionGraphUpdateNode::SetParent(GCLeafUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCMotionGraphUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCMotionGraphUpdateNode>("CMotionGraphUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GCMotionGraphUpdateNode::GetParent, &GCMotionGraphUpdateNode::SetParent)
        .addFunction("ToPtr", &GCMotionGraphUpdateNode::ToPtr)
        .addFunction("IsValid", &GCMotionGraphUpdateNode::IsValid)
        .endClass();
}
GCLookAtUpdateNode::GCLookAtUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCLookAtUpdateNode::GCLookAtUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GLookAtOpFixedSettings_t GCLookAtUpdateNode::GetOpFixedSettings() const {
    GLookAtOpFixedSettings_t value(GetSchemaPtr(m_ptr, "CLookAtUpdateNode", "m_opFixedSettings"));
    return value;
}
void GCLookAtUpdateNode::SetOpFixedSettings(GLookAtOpFixedSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'OpFixedSettings' is not possible.\n");
}
uint64_t GCLookAtUpdateNode::GetTarget() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CLookAtUpdateNode", "m_target");
}
void GCLookAtUpdateNode::SetTarget(uint64_t value) {
    SetSchemaValue(m_ptr, "CLookAtUpdateNode", "m_target", false, value);
}
GCAnimParamHandle GCLookAtUpdateNode::GetParamIndex() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CLookAtUpdateNode", "m_paramIndex"));
    return value;
}
void GCLookAtUpdateNode::SetParamIndex(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParamIndex' is not possible.\n");
}
GCAnimParamHandle GCLookAtUpdateNode::GetWeightParamIndex() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CLookAtUpdateNode", "m_weightParamIndex"));
    return value;
}
void GCLookAtUpdateNode::SetWeightParamIndex(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'WeightParamIndex' is not possible.\n");
}
bool GCLookAtUpdateNode::GetResetChild() const {
    return GetSchemaValue<bool>(m_ptr, "CLookAtUpdateNode", "m_bResetChild");
}
void GCLookAtUpdateNode::SetResetChild(bool value) {
    SetSchemaValue(m_ptr, "CLookAtUpdateNode", "m_bResetChild", false, value);
}
bool GCLookAtUpdateNode::GetLockWhenWaning() const {
    return GetSchemaValue<bool>(m_ptr, "CLookAtUpdateNode", "m_bLockWhenWaning");
}
void GCLookAtUpdateNode::SetLockWhenWaning(bool value) {
    SetSchemaValue(m_ptr, "CLookAtUpdateNode", "m_bLockWhenWaning", false, value);
}
void* GCLookAtUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCLookAtUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCLookAtUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCLookAtUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCLookAtUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCLookAtUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCLookAtUpdateNode>("CLookAtUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OpFixedSettings", &GCLookAtUpdateNode::GetOpFixedSettings, &GCLookAtUpdateNode::SetOpFixedSettings)
        .addProperty("Target", &GCLookAtUpdateNode::GetTarget, &GCLookAtUpdateNode::SetTarget)
        .addProperty("ParamIndex", &GCLookAtUpdateNode::GetParamIndex, &GCLookAtUpdateNode::SetParamIndex)
        .addProperty("WeightParamIndex", &GCLookAtUpdateNode::GetWeightParamIndex, &GCLookAtUpdateNode::SetWeightParamIndex)
        .addProperty("ResetChild", &GCLookAtUpdateNode::GetResetChild, &GCLookAtUpdateNode::SetResetChild)
        .addProperty("LockWhenWaning", &GCLookAtUpdateNode::GetLockWhenWaning, &GCLookAtUpdateNode::SetLockWhenWaning)
        .addProperty("Parent", &GCLookAtUpdateNode::GetParent, &GCLookAtUpdateNode::SetParent)
        .addFunction("ToPtr", &GCLookAtUpdateNode::ToPtr)
        .addFunction("IsValid", &GCLookAtUpdateNode::IsValid)
        .endClass();
}
GCFlexController::GCFlexController(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFlexController::GCFlexController(void *ptr) {
    m_ptr = ptr;
}
std::string GCFlexController::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFlexController", "m_szName").Get();
}
void GCFlexController::SetName(std::string value) {
    SetSchemaValue(m_ptr, "CFlexController", "m_szName", false, CUtlString(value.c_str()));
}
std::string GCFlexController::GetType() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFlexController", "m_szType").Get();
}
void GCFlexController::SetType(std::string value) {
    SetSchemaValue(m_ptr, "CFlexController", "m_szType", false, CUtlString(value.c_str()));
}
float GCFlexController::GetMin() const {
    return GetSchemaValue<float>(m_ptr, "CFlexController", "min");
}
void GCFlexController::SetMin(float value) {
    SetSchemaValue(m_ptr, "CFlexController", "min", false, value);
}
float GCFlexController::GetMax() const {
    return GetSchemaValue<float>(m_ptr, "CFlexController", "max");
}
void GCFlexController::SetMax(float value) {
    SetSchemaValue(m_ptr, "CFlexController", "max", false, value);
}
void* GCFlexController::GetPtr() {
    return m_ptr;
}
std::string GCFlexController::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFlexController::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFlexController(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFlexController>("CFlexController")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GCFlexController::GetName, &GCFlexController::SetName)
        .addProperty("Type", &GCFlexController::GetType, &GCFlexController::SetType)
        .addProperty("Min", &GCFlexController::GetMin, &GCFlexController::SetMin)
        .addProperty("Max", &GCFlexController::GetMax, &GCFlexController::SetMax)
        .addFunction("ToPtr", &GCFlexController::ToPtr)
        .addFunction("IsValid", &GCFlexController::IsValid)
        .endClass();
}
GCExampleSchemaVData_PolymorphicDerivedA::GCExampleSchemaVData_PolymorphicDerivedA(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCExampleSchemaVData_PolymorphicDerivedA::GCExampleSchemaVData_PolymorphicDerivedA(void *ptr) {
    m_ptr = ptr;
}
int32_t GCExampleSchemaVData_PolymorphicDerivedA::GetDerivedA() const {
    return GetSchemaValue<int32_t>(m_ptr, "CExampleSchemaVData_PolymorphicDerivedA", "m_nDerivedA");
}
void GCExampleSchemaVData_PolymorphicDerivedA::SetDerivedA(int32_t value) {
    SetSchemaValue(m_ptr, "CExampleSchemaVData_PolymorphicDerivedA", "m_nDerivedA", false, value);
}
void* GCExampleSchemaVData_PolymorphicDerivedA::GetPtr() {
    return m_ptr;
}
std::string GCExampleSchemaVData_PolymorphicDerivedA::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCExampleSchemaVData_PolymorphicDerivedA::IsValid() {
    return (m_ptr != nullptr);
}
GCExampleSchemaVData_PolymorphicBase GCExampleSchemaVData_PolymorphicDerivedA::GetParent() const {
    GCExampleSchemaVData_PolymorphicBase value(m_ptr);
    return value;
}
void GCExampleSchemaVData_PolymorphicDerivedA::SetParent(GCExampleSchemaVData_PolymorphicBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCExampleSchemaVData_PolymorphicDerivedA(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCExampleSchemaVData_PolymorphicDerivedA>("CExampleSchemaVData_PolymorphicDerivedA")
        .addConstructor<void (*)(std::string)>()
        .addProperty("DerivedA", &GCExampleSchemaVData_PolymorphicDerivedA::GetDerivedA, &GCExampleSchemaVData_PolymorphicDerivedA::SetDerivedA)
        .addProperty("Parent", &GCExampleSchemaVData_PolymorphicDerivedA::GetParent, &GCExampleSchemaVData_PolymorphicDerivedA::SetParent)
        .addFunction("ToPtr", &GCExampleSchemaVData_PolymorphicDerivedA::ToPtr)
        .addFunction("IsValid", &GCExampleSchemaVData_PolymorphicDerivedA::IsValid)
        .endClass();
}
GEntityKeyValueData_t::GEntityKeyValueData_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEntityKeyValueData_t::GEntityKeyValueData_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<GEntityIOConnectionData_t> GEntityKeyValueData_t::GetConnections() const {
    CUtlVector<GEntityIOConnectionData_t>* vec = GetSchemaValue<CUtlVector<GEntityIOConnectionData_t>*>(m_ptr, "EntityKeyValueData_t", "m_connections"); std::vector<GEntityIOConnectionData_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GEntityKeyValueData_t::SetConnections(std::vector<GEntityIOConnectionData_t> value) {
    SetSchemaValueCUtlVector<GEntityIOConnectionData_t>(m_ptr, "EntityKeyValueData_t", "m_connections", true, value);
}
void* GEntityKeyValueData_t::GetPtr() {
    return m_ptr;
}
std::string GEntityKeyValueData_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEntityKeyValueData_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEntityKeyValueData_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEntityKeyValueData_t>("EntityKeyValueData_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Connections", &GEntityKeyValueData_t::GetConnections, &GEntityKeyValueData_t::SetConnections)
        .addFunction("ToPtr", &GEntityKeyValueData_t::ToPtr)
        .addFunction("IsValid", &GEntityKeyValueData_t::IsValid)
        .endClass();
}
GCFootStride::GCFootStride(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFootStride::GCFootStride(void *ptr) {
    m_ptr = ptr;
}
GCFootCycleDefinition GCFootStride::GetDefinition() const {
    GCFootCycleDefinition value(GetSchemaPtr(m_ptr, "CFootStride", "m_definition"));
    return value;
}
void GCFootStride::SetDefinition(GCFootCycleDefinition value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Definition' is not possible.\n");
}
GCFootTrajectories GCFootStride::GetTrajectories() const {
    GCFootTrajectories value(GetSchemaPtr(m_ptr, "CFootStride", "m_trajectories"));
    return value;
}
void GCFootStride::SetTrajectories(GCFootTrajectories value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Trajectories' is not possible.\n");
}
void* GCFootStride::GetPtr() {
    return m_ptr;
}
std::string GCFootStride::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFootStride::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFootStride(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFootStride>("CFootStride")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Definition", &GCFootStride::GetDefinition, &GCFootStride::SetDefinition)
        .addProperty("Trajectories", &GCFootStride::GetTrajectories, &GCFootStride::SetTrajectories)
        .addFunction("ToPtr", &GCFootStride::ToPtr)
        .addFunction("IsValid", &GCFootStride::IsValid)
        .endClass();
}
GCAnimationGroup::GCAnimationGroup(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAnimationGroup::GCAnimationGroup(void *ptr) {
    m_ptr = ptr;
}
uint32_t GCAnimationGroup::GetFlags() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CAnimationGroup", "m_nFlags");
}
void GCAnimationGroup::SetFlags(uint32_t value) {
    SetSchemaValue(m_ptr, "CAnimationGroup", "m_nFlags", false, value);
}
GCAnimKeyData GCAnimationGroup::GetDecodeKey() const {
    GCAnimKeyData value(GetSchemaPtr(m_ptr, "CAnimationGroup", "m_decodeKey"));
    return value;
}
void GCAnimationGroup::SetDecodeKey(GCAnimKeyData value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'DecodeKey' is not possible.\n");
}
void* GCAnimationGroup::GetPtr() {
    return m_ptr;
}
std::string GCAnimationGroup::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAnimationGroup::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCAnimationGroup(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAnimationGroup>("CAnimationGroup")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Flags", &GCAnimationGroup::GetFlags, &GCAnimationGroup::SetFlags)
        .addProperty("DecodeKey", &GCAnimationGroup::GetDecodeKey, &GCAnimationGroup::SetDecodeKey)
        .addFunction("ToPtr", &GCAnimationGroup::ToPtr)
        .addFunction("IsValid", &GCAnimationGroup::IsValid)
        .endClass();
}
GCSubtractUpdateNode::GCSubtractUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSubtractUpdateNode::GCSubtractUpdateNode(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCSubtractUpdateNode::GetFootMotionTiming() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CSubtractUpdateNode", "m_footMotionTiming");
}
void GCSubtractUpdateNode::SetFootMotionTiming(uint64_t value) {
    SetSchemaValue(m_ptr, "CSubtractUpdateNode", "m_footMotionTiming", false, value);
}
bool GCSubtractUpdateNode::GetApplyToFootMotion() const {
    return GetSchemaValue<bool>(m_ptr, "CSubtractUpdateNode", "m_bApplyToFootMotion");
}
void GCSubtractUpdateNode::SetApplyToFootMotion(bool value) {
    SetSchemaValue(m_ptr, "CSubtractUpdateNode", "m_bApplyToFootMotion", false, value);
}
bool GCSubtractUpdateNode::GetApplyChannelsSeparately() const {
    return GetSchemaValue<bool>(m_ptr, "CSubtractUpdateNode", "m_bApplyChannelsSeparately");
}
void GCSubtractUpdateNode::SetApplyChannelsSeparately(bool value) {
    SetSchemaValue(m_ptr, "CSubtractUpdateNode", "m_bApplyChannelsSeparately", false, value);
}
bool GCSubtractUpdateNode::GetUseModelSpace() const {
    return GetSchemaValue<bool>(m_ptr, "CSubtractUpdateNode", "m_bUseModelSpace");
}
void GCSubtractUpdateNode::SetUseModelSpace(bool value) {
    SetSchemaValue(m_ptr, "CSubtractUpdateNode", "m_bUseModelSpace", false, value);
}
void* GCSubtractUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCSubtractUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSubtractUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCBinaryUpdateNode GCSubtractUpdateNode::GetParent() const {
    GCBinaryUpdateNode value(m_ptr);
    return value;
}
void GCSubtractUpdateNode::SetParent(GCBinaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSubtractUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSubtractUpdateNode>("CSubtractUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FootMotionTiming", &GCSubtractUpdateNode::GetFootMotionTiming, &GCSubtractUpdateNode::SetFootMotionTiming)
        .addProperty("ApplyToFootMotion", &GCSubtractUpdateNode::GetApplyToFootMotion, &GCSubtractUpdateNode::SetApplyToFootMotion)
        .addProperty("ApplyChannelsSeparately", &GCSubtractUpdateNode::GetApplyChannelsSeparately, &GCSubtractUpdateNode::SetApplyChannelsSeparately)
        .addProperty("UseModelSpace", &GCSubtractUpdateNode::GetUseModelSpace, &GCSubtractUpdateNode::SetUseModelSpace)
        .addProperty("Parent", &GCSubtractUpdateNode::GetParent, &GCSubtractUpdateNode::SetParent)
        .addFunction("ToPtr", &GCSubtractUpdateNode::ToPtr)
        .addFunction("IsValid", &GCSubtractUpdateNode::IsValid)
        .endClass();
}
GFeTaperedCapsuleStretch_t::GFeTaperedCapsuleStretch_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeTaperedCapsuleStretch_t::GFeTaperedCapsuleStretch_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<uint16_t> GFeTaperedCapsuleStretch_t::GetNode() const {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeTaperedCapsuleStretch_t", "nNode"); std::vector<uint16_t> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeTaperedCapsuleStretch_t::SetNode(std::vector<uint16_t> value) {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeTaperedCapsuleStretch_t", "nNode"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeTaperedCapsuleStretch_t", "nNode", true, outValue);
}
uint16_t GFeTaperedCapsuleStretch_t::GetCollisionMask() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeTaperedCapsuleStretch_t", "nCollisionMask");
}
void GFeTaperedCapsuleStretch_t::SetCollisionMask(uint16_t value) {
    SetSchemaValue(m_ptr, "FeTaperedCapsuleStretch_t", "nCollisionMask", true, value);
}
uint16_t GFeTaperedCapsuleStretch_t::GetDummy() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeTaperedCapsuleStretch_t", "nDummy");
}
void GFeTaperedCapsuleStretch_t::SetDummy(uint16_t value) {
    SetSchemaValue(m_ptr, "FeTaperedCapsuleStretch_t", "nDummy", true, value);
}
std::vector<float> GFeTaperedCapsuleStretch_t::GetRadius() const {
    float* outValue = GetSchemaValue<float*>(m_ptr, "FeTaperedCapsuleStretch_t", "flRadius"); std::vector<float> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeTaperedCapsuleStretch_t::SetRadius(std::vector<float> value) {
    float* outValue = GetSchemaValue<float*>(m_ptr, "FeTaperedCapsuleStretch_t", "flRadius"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeTaperedCapsuleStretch_t", "flRadius", true, outValue);
}
void* GFeTaperedCapsuleStretch_t::GetPtr() {
    return m_ptr;
}
std::string GFeTaperedCapsuleStretch_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeTaperedCapsuleStretch_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeTaperedCapsuleStretch_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeTaperedCapsuleStretch_t>("FeTaperedCapsuleStretch_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Node", &GFeTaperedCapsuleStretch_t::GetNode, &GFeTaperedCapsuleStretch_t::SetNode)
        .addProperty("CollisionMask", &GFeTaperedCapsuleStretch_t::GetCollisionMask, &GFeTaperedCapsuleStretch_t::SetCollisionMask)
        .addProperty("Dummy", &GFeTaperedCapsuleStretch_t::GetDummy, &GFeTaperedCapsuleStretch_t::SetDummy)
        .addProperty("Radius", &GFeTaperedCapsuleStretch_t::GetRadius, &GFeTaperedCapsuleStretch_t::SetRadius)
        .addFunction("ToPtr", &GFeTaperedCapsuleStretch_t::ToPtr)
        .addFunction("IsValid", &GFeTaperedCapsuleStretch_t::IsValid)
        .endClass();
}
GWorldNodeOnDiskBufferData_t::GWorldNodeOnDiskBufferData_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GWorldNodeOnDiskBufferData_t::GWorldNodeOnDiskBufferData_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GWorldNodeOnDiskBufferData_t::GetElementCount() const {
    return GetSchemaValue<int32_t>(m_ptr, "WorldNodeOnDiskBufferData_t", "m_nElementCount");
}
void GWorldNodeOnDiskBufferData_t::SetElementCount(int32_t value) {
    SetSchemaValue(m_ptr, "WorldNodeOnDiskBufferData_t", "m_nElementCount", true, value);
}
int32_t GWorldNodeOnDiskBufferData_t::GetElementSizeInBytes() const {
    return GetSchemaValue<int32_t>(m_ptr, "WorldNodeOnDiskBufferData_t", "m_nElementSizeInBytes");
}
void GWorldNodeOnDiskBufferData_t::SetElementSizeInBytes(int32_t value) {
    SetSchemaValue(m_ptr, "WorldNodeOnDiskBufferData_t", "m_nElementSizeInBytes", true, value);
}
std::vector<GRenderInputLayoutField_t> GWorldNodeOnDiskBufferData_t::GetInputLayoutFields() const {
    CUtlVector<GRenderInputLayoutField_t>* vec = GetSchemaValue<CUtlVector<GRenderInputLayoutField_t>*>(m_ptr, "WorldNodeOnDiskBufferData_t", "m_inputLayoutFields"); std::vector<GRenderInputLayoutField_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNodeOnDiskBufferData_t::SetInputLayoutFields(std::vector<GRenderInputLayoutField_t> value) {
    SetSchemaValueCUtlVector<GRenderInputLayoutField_t>(m_ptr, "WorldNodeOnDiskBufferData_t", "m_inputLayoutFields", true, value);
}
std::vector<uint8> GWorldNodeOnDiskBufferData_t::GetData() const {
    CUtlVector<uint8>* vec = GetSchemaValue<CUtlVector<uint8>*>(m_ptr, "WorldNodeOnDiskBufferData_t", "m_pData"); std::vector<uint8> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GWorldNodeOnDiskBufferData_t::SetData(std::vector<uint8> value) {
    SetSchemaValueCUtlVector<uint8>(m_ptr, "WorldNodeOnDiskBufferData_t", "m_pData", true, value);
}
void* GWorldNodeOnDiskBufferData_t::GetPtr() {
    return m_ptr;
}
std::string GWorldNodeOnDiskBufferData_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GWorldNodeOnDiskBufferData_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassWorldNodeOnDiskBufferData_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GWorldNodeOnDiskBufferData_t>("WorldNodeOnDiskBufferData_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ElementCount", &GWorldNodeOnDiskBufferData_t::GetElementCount, &GWorldNodeOnDiskBufferData_t::SetElementCount)
        .addProperty("ElementSizeInBytes", &GWorldNodeOnDiskBufferData_t::GetElementSizeInBytes, &GWorldNodeOnDiskBufferData_t::SetElementSizeInBytes)
        .addProperty("InputLayoutFields", &GWorldNodeOnDiskBufferData_t::GetInputLayoutFields, &GWorldNodeOnDiskBufferData_t::SetInputLayoutFields)
        .addProperty("Data", &GWorldNodeOnDiskBufferData_t::GetData, &GWorldNodeOnDiskBufferData_t::SetData)
        .addFunction("ToPtr", &GWorldNodeOnDiskBufferData_t::ToPtr)
        .addFunction("IsValid", &GWorldNodeOnDiskBufferData_t::IsValid)
        .endClass();
}
GEntComponentInfo_t::GEntComponentInfo_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEntComponentInfo_t::GEntComponentInfo_t(void *ptr) {
    m_ptr = ptr;
}
std::string GEntComponentInfo_t::GetName() const {
    return GetSchemaValuePtr<char>(m_ptr, "EntComponentInfo_t", "m_pName");
}
void GEntComponentInfo_t::SetName(std::string value) {
    WriteSchemaPtrValue(m_ptr, "EntComponentInfo_t", "m_pName", true, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), value.size());
}
std::string GEntComponentInfo_t::GetCPPClassname() const {
    return GetSchemaValuePtr<char>(m_ptr, "EntComponentInfo_t", "m_pCPPClassname");
}
void GEntComponentInfo_t::SetCPPClassname(std::string value) {
    WriteSchemaPtrValue(m_ptr, "EntComponentInfo_t", "m_pCPPClassname", true, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), value.size());
}
std::string GEntComponentInfo_t::GetNetworkDataReferencedDescription() const {
    return GetSchemaValuePtr<char>(m_ptr, "EntComponentInfo_t", "m_pNetworkDataReferencedDescription");
}
void GEntComponentInfo_t::SetNetworkDataReferencedDescription(std::string value) {
    WriteSchemaPtrValue(m_ptr, "EntComponentInfo_t", "m_pNetworkDataReferencedDescription", true, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), value.size());
}
std::string GEntComponentInfo_t::GetNetworkDataReferencedPtrPropDescription() const {
    return GetSchemaValuePtr<char>(m_ptr, "EntComponentInfo_t", "m_pNetworkDataReferencedPtrPropDescription");
}
void GEntComponentInfo_t::SetNetworkDataReferencedPtrPropDescription(std::string value) {
    WriteSchemaPtrValue(m_ptr, "EntComponentInfo_t", "m_pNetworkDataReferencedPtrPropDescription", true, reinterpret_cast<byte*>(const_cast<char*>(value.c_str())), value.size());
}
int32_t GEntComponentInfo_t::GetRuntimeIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "EntComponentInfo_t", "m_nRuntimeIndex");
}
void GEntComponentInfo_t::SetRuntimeIndex(int32_t value) {
    SetSchemaValue(m_ptr, "EntComponentInfo_t", "m_nRuntimeIndex", true, value);
}
uint32_t GEntComponentInfo_t::GetFlags() const {
    return GetSchemaValue<uint32_t>(m_ptr, "EntComponentInfo_t", "m_nFlags");
}
void GEntComponentInfo_t::SetFlags(uint32_t value) {
    SetSchemaValue(m_ptr, "EntComponentInfo_t", "m_nFlags", true, value);
}
GCEntityComponentHelper GEntComponentInfo_t::GetBaseClassComponentHelper() const {
    GCEntityComponentHelper value(*GetSchemaValuePtr<void*>(m_ptr, "EntComponentInfo_t", "m_pBaseClassComponentHelper"));
    return value;
}
void GEntComponentInfo_t::SetBaseClassComponentHelper(GCEntityComponentHelper value) {
    SetSchemaValue(m_ptr, "EntComponentInfo_t","m_pBaseClassComponentHelper", true, (char*)value.GetPtr());
}
void* GEntComponentInfo_t::GetPtr() {
    return m_ptr;
}
std::string GEntComponentInfo_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEntComponentInfo_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEntComponentInfo_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEntComponentInfo_t>("EntComponentInfo_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GEntComponentInfo_t::GetName, &GEntComponentInfo_t::SetName)
        .addProperty("CPPClassname", &GEntComponentInfo_t::GetCPPClassname, &GEntComponentInfo_t::SetCPPClassname)
        .addProperty("NetworkDataReferencedDescription", &GEntComponentInfo_t::GetNetworkDataReferencedDescription, &GEntComponentInfo_t::SetNetworkDataReferencedDescription)
        .addProperty("NetworkDataReferencedPtrPropDescription", &GEntComponentInfo_t::GetNetworkDataReferencedPtrPropDescription, &GEntComponentInfo_t::SetNetworkDataReferencedPtrPropDescription)
        .addProperty("RuntimeIndex", &GEntComponentInfo_t::GetRuntimeIndex, &GEntComponentInfo_t::SetRuntimeIndex)
        .addProperty("Flags", &GEntComponentInfo_t::GetFlags, &GEntComponentInfo_t::SetFlags)
        .addProperty("BaseClassComponentHelper", &GEntComponentInfo_t::GetBaseClassComponentHelper, &GEntComponentInfo_t::SetBaseClassComponentHelper)
        .addFunction("ToPtr", &GEntComponentInfo_t::ToPtr)
        .addFunction("IsValid", &GEntComponentInfo_t::IsValid)
        .endClass();
}
GCClientGapTypeQueryRegistration::GCClientGapTypeQueryRegistration(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCClientGapTypeQueryRegistration::GCClientGapTypeQueryRegistration(void *ptr) {
    m_ptr = ptr;
}
void* GCClientGapTypeQueryRegistration::GetPtr() {
    return m_ptr;
}
std::string GCClientGapTypeQueryRegistration::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCClientGapTypeQueryRegistration::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCClientGapTypeQueryRegistration(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCClientGapTypeQueryRegistration>("CClientGapTypeQueryRegistration")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GCClientGapTypeQueryRegistration::ToPtr)
        .addFunction("IsValid", &GCClientGapTypeQueryRegistration::IsValid)
        .endClass();
}
GCNmVirtualParameterTargetNode::GCNmVirtualParameterTargetNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmVirtualParameterTargetNode::GCNmVirtualParameterTargetNode(void *ptr) {
    m_ptr = ptr;
}
int16_t GCNmVirtualParameterTargetNode::GetChildNodeIdx() const {
    return GetSchemaValue<int16_t>(m_ptr, "CNmVirtualParameterTargetNode", "m_nChildNodeIdx");
}
void GCNmVirtualParameterTargetNode::SetChildNodeIdx(int16_t value) {
    SetSchemaValue(m_ptr, "CNmVirtualParameterTargetNode", "m_nChildNodeIdx", false, value);
}
void* GCNmVirtualParameterTargetNode::GetPtr() {
    return m_ptr;
}
std::string GCNmVirtualParameterTargetNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmVirtualParameterTargetNode::IsValid() {
    return (m_ptr != nullptr);
}
GCNmTargetValueNode GCNmVirtualParameterTargetNode::GetParent() const {
    GCNmTargetValueNode value(m_ptr);
    return value;
}
void GCNmVirtualParameterTargetNode::SetParent(GCNmTargetValueNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCNmVirtualParameterTargetNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmVirtualParameterTargetNode>("CNmVirtualParameterTargetNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ChildNodeIdx", &GCNmVirtualParameterTargetNode::GetChildNodeIdx, &GCNmVirtualParameterTargetNode::SetChildNodeIdx)
        .addProperty("Parent", &GCNmVirtualParameterTargetNode::GetParent, &GCNmVirtualParameterTargetNode::SetParent)
        .addFunction("ToPtr", &GCNmVirtualParameterTargetNode::ToPtr)
        .addFunction("IsValid", &GCNmVirtualParameterTargetNode::IsValid)
        .endClass();
}
GCAudioAnimTag::GCAudioAnimTag(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCAudioAnimTag::GCAudioAnimTag(void *ptr) {
    m_ptr = ptr;
}
std::string GCAudioAnimTag::GetClipName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CAudioAnimTag", "m_clipName").Get();
}
void GCAudioAnimTag::SetClipName(std::string value) {
    SetSchemaValue(m_ptr, "CAudioAnimTag", "m_clipName", false, CUtlString(value.c_str()));
}
std::string GCAudioAnimTag::GetAttachmentName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CAudioAnimTag", "m_attachmentName").Get();
}
void GCAudioAnimTag::SetAttachmentName(std::string value) {
    SetSchemaValue(m_ptr, "CAudioAnimTag", "m_attachmentName", false, CUtlString(value.c_str()));
}
float GCAudioAnimTag::GetVolume() const {
    return GetSchemaValue<float>(m_ptr, "CAudioAnimTag", "m_flVolume");
}
void GCAudioAnimTag::SetVolume(float value) {
    SetSchemaValue(m_ptr, "CAudioAnimTag", "m_flVolume", false, value);
}
bool GCAudioAnimTag::GetStopWhenTagEnds() const {
    return GetSchemaValue<bool>(m_ptr, "CAudioAnimTag", "m_bStopWhenTagEnds");
}
void GCAudioAnimTag::SetStopWhenTagEnds(bool value) {
    SetSchemaValue(m_ptr, "CAudioAnimTag", "m_bStopWhenTagEnds", false, value);
}
bool GCAudioAnimTag::GetStopWhenGraphEnds() const {
    return GetSchemaValue<bool>(m_ptr, "CAudioAnimTag", "m_bStopWhenGraphEnds");
}
void GCAudioAnimTag::SetStopWhenGraphEnds(bool value) {
    SetSchemaValue(m_ptr, "CAudioAnimTag", "m_bStopWhenGraphEnds", false, value);
}
bool GCAudioAnimTag::GetPlayOnServer() const {
    return GetSchemaValue<bool>(m_ptr, "CAudioAnimTag", "m_bPlayOnServer");
}
void GCAudioAnimTag::SetPlayOnServer(bool value) {
    SetSchemaValue(m_ptr, "CAudioAnimTag", "m_bPlayOnServer", false, value);
}
bool GCAudioAnimTag::GetPlayOnClient() const {
    return GetSchemaValue<bool>(m_ptr, "CAudioAnimTag", "m_bPlayOnClient");
}
void GCAudioAnimTag::SetPlayOnClient(bool value) {
    SetSchemaValue(m_ptr, "CAudioAnimTag", "m_bPlayOnClient", false, value);
}
void* GCAudioAnimTag::GetPtr() {
    return m_ptr;
}
std::string GCAudioAnimTag::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCAudioAnimTag::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimTagBase GCAudioAnimTag::GetParent() const {
    GCAnimTagBase value(m_ptr);
    return value;
}
void GCAudioAnimTag::SetParent(GCAnimTagBase value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCAudioAnimTag(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCAudioAnimTag>("CAudioAnimTag")
        .addConstructor<void (*)(std::string)>()
        .addProperty("ClipName", &GCAudioAnimTag::GetClipName, &GCAudioAnimTag::SetClipName)
        .addProperty("AttachmentName", &GCAudioAnimTag::GetAttachmentName, &GCAudioAnimTag::SetAttachmentName)
        .addProperty("Volume", &GCAudioAnimTag::GetVolume, &GCAudioAnimTag::SetVolume)
        .addProperty("StopWhenTagEnds", &GCAudioAnimTag::GetStopWhenTagEnds, &GCAudioAnimTag::SetStopWhenTagEnds)
        .addProperty("StopWhenGraphEnds", &GCAudioAnimTag::GetStopWhenGraphEnds, &GCAudioAnimTag::SetStopWhenGraphEnds)
        .addProperty("PlayOnServer", &GCAudioAnimTag::GetPlayOnServer, &GCAudioAnimTag::SetPlayOnServer)
        .addProperty("PlayOnClient", &GCAudioAnimTag::GetPlayOnClient, &GCAudioAnimTag::SetPlayOnClient)
        .addProperty("Parent", &GCAudioAnimTag::GetParent, &GCAudioAnimTag::SetParent)
        .addFunction("ToPtr", &GCAudioAnimTag::ToPtr)
        .addFunction("IsValid", &GCAudioAnimTag::IsValid)
        .endClass();
}
GCRenderMesh::GCRenderMesh(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCRenderMesh::GCRenderMesh(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCBaseConstraint*> GCRenderMesh::GetConstraints() const {
    CUtlVector<GCBaseConstraint*>* vec = GetSchemaValue<CUtlVector<GCBaseConstraint*>*>(m_ptr, "CRenderMesh", "m_constraints"); std::vector<GCBaseConstraint*> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCRenderMesh::SetConstraints(std::vector<GCBaseConstraint*> value) {
    SetSchemaValueCUtlVector<GCBaseConstraint*>(m_ptr, "CRenderMesh", "m_constraints", false, value);
}
GCRenderSkeleton GCRenderMesh::GetSkeleton() const {
    GCRenderSkeleton value(GetSchemaPtr(m_ptr, "CRenderMesh", "m_skeleton"));
    return value;
}
void GCRenderMesh::SetSkeleton(GCRenderSkeleton value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Skeleton' is not possible.\n");
}
GDynamicMeshDeformParams_t GCRenderMesh::GetMeshDeformParams() const {
    GDynamicMeshDeformParams_t value(GetSchemaPtr(m_ptr, "CRenderMesh", "m_meshDeformParams"));
    return value;
}
void GCRenderMesh::SetMeshDeformParams(GDynamicMeshDeformParams_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'MeshDeformParams' is not possible.\n");
}
GCRenderGroom GCRenderMesh::GetGroomData() const {
    GCRenderGroom value(*GetSchemaValuePtr<void*>(m_ptr, "CRenderMesh", "m_pGroomData"));
    return value;
}
void GCRenderMesh::SetGroomData(GCRenderGroom value) {
    SetSchemaValue(m_ptr, "CRenderMesh","m_pGroomData", false, (char*)value.GetPtr());
}
void* GCRenderMesh::GetPtr() {
    return m_ptr;
}
std::string GCRenderMesh::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCRenderMesh::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCRenderMesh(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCRenderMesh>("CRenderMesh")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Constraints", &GCRenderMesh::GetConstraints, &GCRenderMesh::SetConstraints)
        .addProperty("Skeleton", &GCRenderMesh::GetSkeleton, &GCRenderMesh::SetSkeleton)
        .addProperty("MeshDeformParams", &GCRenderMesh::GetMeshDeformParams, &GCRenderMesh::SetMeshDeformParams)
        .addProperty("GroomData", &GCRenderMesh::GetGroomData, &GCRenderMesh::SetGroomData)
        .addFunction("ToPtr", &GCRenderMesh::ToPtr)
        .addFunction("IsValid", &GCRenderMesh::IsValid)
        .endClass();
}
Gconstraint_hingeparams_t::Gconstraint_hingeparams_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
Gconstraint_hingeparams_t::Gconstraint_hingeparams_t(void *ptr) {
    m_ptr = ptr;
}
Vector Gconstraint_hingeparams_t::GetWorldPosition() const {
    return GetSchemaValue<Vector>(m_ptr, "constraint_hingeparams_t", "worldPosition");
}
void Gconstraint_hingeparams_t::SetWorldPosition(Vector value) {
    SetSchemaValue(m_ptr, "constraint_hingeparams_t", "worldPosition", true, value);
}
Vector Gconstraint_hingeparams_t::GetWorldAxisDirection() const {
    return GetSchemaValue<Vector>(m_ptr, "constraint_hingeparams_t", "worldAxisDirection");
}
void Gconstraint_hingeparams_t::SetWorldAxisDirection(Vector value) {
    SetSchemaValue(m_ptr, "constraint_hingeparams_t", "worldAxisDirection", true, value);
}
Gconstraint_axislimit_t Gconstraint_hingeparams_t::GetHingeAxis() const {
    Gconstraint_axislimit_t value(GetSchemaPtr(m_ptr, "constraint_hingeparams_t", "hingeAxis"));
    return value;
}
void Gconstraint_hingeparams_t::SetHingeAxis(Gconstraint_axislimit_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'HingeAxis' is not possible.\n");
}
Gconstraint_breakableparams_t Gconstraint_hingeparams_t::GetConstraint() const {
    Gconstraint_breakableparams_t value(GetSchemaPtr(m_ptr, "constraint_hingeparams_t", "constraint"));
    return value;
}
void Gconstraint_hingeparams_t::SetConstraint(Gconstraint_breakableparams_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Constraint' is not possible.\n");
}
void* Gconstraint_hingeparams_t::GetPtr() {
    return m_ptr;
}
std::string Gconstraint_hingeparams_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool Gconstraint_hingeparams_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassconstraint_hingeparams_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<Gconstraint_hingeparams_t>("constraint_hingeparams_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("WorldPosition", &Gconstraint_hingeparams_t::GetWorldPosition, &Gconstraint_hingeparams_t::SetWorldPosition)
        .addProperty("WorldAxisDirection", &Gconstraint_hingeparams_t::GetWorldAxisDirection, &Gconstraint_hingeparams_t::SetWorldAxisDirection)
        .addProperty("HingeAxis", &Gconstraint_hingeparams_t::GetHingeAxis, &Gconstraint_hingeparams_t::SetHingeAxis)
        .addProperty("Constraint", &Gconstraint_hingeparams_t::GetConstraint, &Gconstraint_hingeparams_t::SetConstraint)
        .addFunction("ToPtr", &Gconstraint_hingeparams_t::ToPtr)
        .addFunction("IsValid", &Gconstraint_hingeparams_t::IsValid)
        .endClass();
}
GNmCompressionSettings_t::GNmCompressionSettings_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GNmCompressionSettings_t::GNmCompressionSettings_t(void *ptr) {
    m_ptr = ptr;
}
GNmCompressionSettings_t GNmCompressionSettings_t::GetTranslationRangeX() const {
    GNmCompressionSettings_t value(GetSchemaPtr(m_ptr, "NmCompressionSettings_t", "m_translationRangeX"));
    return value;
}
void GNmCompressionSettings_t::SetTranslationRangeX(GNmCompressionSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TranslationRangeX' is not possible.\n");
}
GNmCompressionSettings_t GNmCompressionSettings_t::GetTranslationRangeY() const {
    GNmCompressionSettings_t value(GetSchemaPtr(m_ptr, "NmCompressionSettings_t", "m_translationRangeY"));
    return value;
}
void GNmCompressionSettings_t::SetTranslationRangeY(GNmCompressionSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TranslationRangeY' is not possible.\n");
}
GNmCompressionSettings_t GNmCompressionSettings_t::GetTranslationRangeZ() const {
    GNmCompressionSettings_t value(GetSchemaPtr(m_ptr, "NmCompressionSettings_t", "m_translationRangeZ"));
    return value;
}
void GNmCompressionSettings_t::SetTranslationRangeZ(GNmCompressionSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TranslationRangeZ' is not possible.\n");
}
GNmCompressionSettings_t GNmCompressionSettings_t::GetScaleRange() const {
    GNmCompressionSettings_t value(GetSchemaPtr(m_ptr, "NmCompressionSettings_t", "m_scaleRange"));
    return value;
}
void GNmCompressionSettings_t::SetScaleRange(GNmCompressionSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ScaleRange' is not possible.\n");
}
bool GNmCompressionSettings_t::GetIsRotationStatic() const {
    return GetSchemaValue<bool>(m_ptr, "NmCompressionSettings_t", "m_bIsRotationStatic");
}
void GNmCompressionSettings_t::SetIsRotationStatic(bool value) {
    SetSchemaValue(m_ptr, "NmCompressionSettings_t", "m_bIsRotationStatic", true, value);
}
bool GNmCompressionSettings_t::GetIsTranslationStatic() const {
    return GetSchemaValue<bool>(m_ptr, "NmCompressionSettings_t", "m_bIsTranslationStatic");
}
void GNmCompressionSettings_t::SetIsTranslationStatic(bool value) {
    SetSchemaValue(m_ptr, "NmCompressionSettings_t", "m_bIsTranslationStatic", true, value);
}
bool GNmCompressionSettings_t::GetIsScaleStatic() const {
    return GetSchemaValue<bool>(m_ptr, "NmCompressionSettings_t", "m_bIsScaleStatic");
}
void GNmCompressionSettings_t::SetIsScaleStatic(bool value) {
    SetSchemaValue(m_ptr, "NmCompressionSettings_t", "m_bIsScaleStatic", true, value);
}
void* GNmCompressionSettings_t::GetPtr() {
    return m_ptr;
}
std::string GNmCompressionSettings_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GNmCompressionSettings_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassNmCompressionSettings_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GNmCompressionSettings_t>("NmCompressionSettings_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("TranslationRangeX", &GNmCompressionSettings_t::GetTranslationRangeX, &GNmCompressionSettings_t::SetTranslationRangeX)
        .addProperty("TranslationRangeY", &GNmCompressionSettings_t::GetTranslationRangeY, &GNmCompressionSettings_t::SetTranslationRangeY)
        .addProperty("TranslationRangeZ", &GNmCompressionSettings_t::GetTranslationRangeZ, &GNmCompressionSettings_t::SetTranslationRangeZ)
        .addProperty("ScaleRange", &GNmCompressionSettings_t::GetScaleRange, &GNmCompressionSettings_t::SetScaleRange)
        .addProperty("IsRotationStatic", &GNmCompressionSettings_t::GetIsRotationStatic, &GNmCompressionSettings_t::SetIsRotationStatic)
        .addProperty("IsTranslationStatic", &GNmCompressionSettings_t::GetIsTranslationStatic, &GNmCompressionSettings_t::SetIsTranslationStatic)
        .addProperty("IsScaleStatic", &GNmCompressionSettings_t::GetIsScaleStatic, &GNmCompressionSettings_t::SetIsScaleStatic)
        .addFunction("ToPtr", &GNmCompressionSettings_t::ToPtr)
        .addFunction("IsValid", &GNmCompressionSettings_t::IsValid)
        .endClass();
}
GCTurnHelperUpdateNode::GCTurnHelperUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCTurnHelperUpdateNode::GCTurnHelperUpdateNode(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCTurnHelperUpdateNode::GetFacingTarget() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CTurnHelperUpdateNode", "m_facingTarget");
}
void GCTurnHelperUpdateNode::SetFacingTarget(uint64_t value) {
    SetSchemaValue(m_ptr, "CTurnHelperUpdateNode", "m_facingTarget", false, value);
}
float GCTurnHelperUpdateNode::GetTurnStartTimeOffset() const {
    return GetSchemaValue<float>(m_ptr, "CTurnHelperUpdateNode", "m_turnStartTimeOffset");
}
void GCTurnHelperUpdateNode::SetTurnStartTimeOffset(float value) {
    SetSchemaValue(m_ptr, "CTurnHelperUpdateNode", "m_turnStartTimeOffset", false, value);
}
float GCTurnHelperUpdateNode::GetTurnDuration() const {
    return GetSchemaValue<float>(m_ptr, "CTurnHelperUpdateNode", "m_turnDuration");
}
void GCTurnHelperUpdateNode::SetTurnDuration(float value) {
    SetSchemaValue(m_ptr, "CTurnHelperUpdateNode", "m_turnDuration", false, value);
}
bool GCTurnHelperUpdateNode::GetMatchChildDuration() const {
    return GetSchemaValue<bool>(m_ptr, "CTurnHelperUpdateNode", "m_bMatchChildDuration");
}
void GCTurnHelperUpdateNode::SetMatchChildDuration(bool value) {
    SetSchemaValue(m_ptr, "CTurnHelperUpdateNode", "m_bMatchChildDuration", false, value);
}
float GCTurnHelperUpdateNode::GetManualTurnOffset() const {
    return GetSchemaValue<float>(m_ptr, "CTurnHelperUpdateNode", "m_manualTurnOffset");
}
void GCTurnHelperUpdateNode::SetManualTurnOffset(float value) {
    SetSchemaValue(m_ptr, "CTurnHelperUpdateNode", "m_manualTurnOffset", false, value);
}
bool GCTurnHelperUpdateNode::GetUseManualTurnOffset() const {
    return GetSchemaValue<bool>(m_ptr, "CTurnHelperUpdateNode", "m_bUseManualTurnOffset");
}
void GCTurnHelperUpdateNode::SetUseManualTurnOffset(bool value) {
    SetSchemaValue(m_ptr, "CTurnHelperUpdateNode", "m_bUseManualTurnOffset", false, value);
}
void* GCTurnHelperUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCTurnHelperUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCTurnHelperUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCTurnHelperUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCTurnHelperUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCTurnHelperUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCTurnHelperUpdateNode>("CTurnHelperUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FacingTarget", &GCTurnHelperUpdateNode::GetFacingTarget, &GCTurnHelperUpdateNode::SetFacingTarget)
        .addProperty("TurnStartTimeOffset", &GCTurnHelperUpdateNode::GetTurnStartTimeOffset, &GCTurnHelperUpdateNode::SetTurnStartTimeOffset)
        .addProperty("TurnDuration", &GCTurnHelperUpdateNode::GetTurnDuration, &GCTurnHelperUpdateNode::SetTurnDuration)
        .addProperty("MatchChildDuration", &GCTurnHelperUpdateNode::GetMatchChildDuration, &GCTurnHelperUpdateNode::SetMatchChildDuration)
        .addProperty("ManualTurnOffset", &GCTurnHelperUpdateNode::GetManualTurnOffset, &GCTurnHelperUpdateNode::SetManualTurnOffset)
        .addProperty("UseManualTurnOffset", &GCTurnHelperUpdateNode::GetUseManualTurnOffset, &GCTurnHelperUpdateNode::SetUseManualTurnOffset)
        .addProperty("Parent", &GCTurnHelperUpdateNode::GetParent, &GCTurnHelperUpdateNode::SetParent)
        .addFunction("ToPtr", &GCTurnHelperUpdateNode::ToPtr)
        .addFunction("IsValid", &GCTurnHelperUpdateNode::IsValid)
        .endClass();
}
GCSosGroupActionTimeLimitSchema::GCSosGroupActionTimeLimitSchema(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSosGroupActionTimeLimitSchema::GCSosGroupActionTimeLimitSchema(void *ptr) {
    m_ptr = ptr;
}
float GCSosGroupActionTimeLimitSchema::GetMaxDuration() const {
    return GetSchemaValue<float>(m_ptr, "CSosGroupActionTimeLimitSchema", "m_flMaxDuration");
}
void GCSosGroupActionTimeLimitSchema::SetMaxDuration(float value) {
    SetSchemaValue(m_ptr, "CSosGroupActionTimeLimitSchema", "m_flMaxDuration", false, value);
}
void* GCSosGroupActionTimeLimitSchema::GetPtr() {
    return m_ptr;
}
std::string GCSosGroupActionTimeLimitSchema::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSosGroupActionTimeLimitSchema::IsValid() {
    return (m_ptr != nullptr);
}
GCSosGroupActionSchema GCSosGroupActionTimeLimitSchema::GetParent() const {
    GCSosGroupActionSchema value(m_ptr);
    return value;
}
void GCSosGroupActionTimeLimitSchema::SetParent(GCSosGroupActionSchema value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCSosGroupActionTimeLimitSchema(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSosGroupActionTimeLimitSchema>("CSosGroupActionTimeLimitSchema")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MaxDuration", &GCSosGroupActionTimeLimitSchema::GetMaxDuration, &GCSosGroupActionTimeLimitSchema::SetMaxDuration)
        .addProperty("Parent", &GCSosGroupActionTimeLimitSchema::GetParent, &GCSosGroupActionTimeLimitSchema::SetParent)
        .addFunction("ToPtr", &GCSosGroupActionTimeLimitSchema::ToPtr)
        .addFunction("IsValid", &GCSosGroupActionTimeLimitSchema::IsValid)
        .endClass();
}
GCFollowTargetUpdateNode::GCFollowTargetUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFollowTargetUpdateNode::GCFollowTargetUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GFollowTargetOpFixedSettings_t GCFollowTargetUpdateNode::GetOpFixedData() const {
    GFollowTargetOpFixedSettings_t value(GetSchemaPtr(m_ptr, "CFollowTargetUpdateNode", "m_opFixedData"));
    return value;
}
void GCFollowTargetUpdateNode::SetOpFixedData(GFollowTargetOpFixedSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'OpFixedData' is not possible.\n");
}
GCAnimParamHandle GCFollowTargetUpdateNode::GetParameterPosition() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CFollowTargetUpdateNode", "m_hParameterPosition"));
    return value;
}
void GCFollowTargetUpdateNode::SetParameterPosition(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterPosition' is not possible.\n");
}
GCAnimParamHandle GCFollowTargetUpdateNode::GetParameterOrientation() const {
    GCAnimParamHandle value(GetSchemaPtr(m_ptr, "CFollowTargetUpdateNode", "m_hParameterOrientation"));
    return value;
}
void GCFollowTargetUpdateNode::SetParameterOrientation(GCAnimParamHandle value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'ParameterOrientation' is not possible.\n");
}
void* GCFollowTargetUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCFollowTargetUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFollowTargetUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCFollowTargetUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCFollowTargetUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCFollowTargetUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFollowTargetUpdateNode>("CFollowTargetUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OpFixedData", &GCFollowTargetUpdateNode::GetOpFixedData, &GCFollowTargetUpdateNode::SetOpFixedData)
        .addProperty("ParameterPosition", &GCFollowTargetUpdateNode::GetParameterPosition, &GCFollowTargetUpdateNode::SetParameterPosition)
        .addProperty("ParameterOrientation", &GCFollowTargetUpdateNode::GetParameterOrientation, &GCFollowTargetUpdateNode::SetParameterOrientation)
        .addProperty("Parent", &GCFollowTargetUpdateNode::GetParent, &GCFollowTargetUpdateNode::SetParent)
        .addFunction("ToPtr", &GCFollowTargetUpdateNode::ToPtr)
        .addFunction("IsValid", &GCFollowTargetUpdateNode::IsValid)
        .endClass();
}
GEventClientAdvanceNonRenderedFrame_t::GEventClientAdvanceNonRenderedFrame_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GEventClientAdvanceNonRenderedFrame_t::GEventClientAdvanceNonRenderedFrame_t(void *ptr) {
    m_ptr = ptr;
}
void* GEventClientAdvanceNonRenderedFrame_t::GetPtr() {
    return m_ptr;
}
std::string GEventClientAdvanceNonRenderedFrame_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GEventClientAdvanceNonRenderedFrame_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassEventClientAdvanceNonRenderedFrame_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GEventClientAdvanceNonRenderedFrame_t>("EventClientAdvanceNonRenderedFrame_t")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GEventClientAdvanceNonRenderedFrame_t::ToPtr)
        .addFunction("IsValid", &GEventClientAdvanceNonRenderedFrame_t::IsValid)
        .endClass();
}
GCSosSoundEventGroupListSchema::GCSosSoundEventGroupListSchema(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCSosSoundEventGroupListSchema::GCSosSoundEventGroupListSchema(void *ptr) {
    m_ptr = ptr;
}
std::vector<GCSosSoundEventGroupSchema> GCSosSoundEventGroupListSchema::GetGroupList() const {
    CUtlVector<GCSosSoundEventGroupSchema>* vec = GetSchemaValue<CUtlVector<GCSosSoundEventGroupSchema>*>(m_ptr, "CSosSoundEventGroupListSchema", "m_groupList"); std::vector<GCSosSoundEventGroupSchema> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCSosSoundEventGroupListSchema::SetGroupList(std::vector<GCSosSoundEventGroupSchema> value) {
    SetSchemaValueCUtlVector<GCSosSoundEventGroupSchema>(m_ptr, "CSosSoundEventGroupListSchema", "m_groupList", false, value);
}
void* GCSosSoundEventGroupListSchema::GetPtr() {
    return m_ptr;
}
std::string GCSosSoundEventGroupListSchema::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCSosSoundEventGroupListSchema::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCSosSoundEventGroupListSchema(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCSosSoundEventGroupListSchema>("CSosSoundEventGroupListSchema")
        .addConstructor<void (*)(std::string)>()
        .addProperty("GroupList", &GCSosSoundEventGroupListSchema::GetGroupList, &GCSosSoundEventGroupListSchema::SetGroupList)
        .addFunction("ToPtr", &GCSosSoundEventGroupListSchema::ToPtr)
        .addFunction("IsValid", &GCSosSoundEventGroupListSchema::IsValid)
        .endClass();
}
GCNmClip::GCNmClip(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmClip::GCNmClip(void *ptr) {
    m_ptr = ptr;
}
uint32_t GCNmClip::GetNumFrames() const {
    return GetSchemaValue<uint32_t>(m_ptr, "CNmClip", "m_nNumFrames");
}
void GCNmClip::SetNumFrames(uint32_t value) {
    SetSchemaValue(m_ptr, "CNmClip", "m_nNumFrames", false, value);
}
float GCNmClip::GetDuration() const {
    return GetSchemaValue<float>(m_ptr, "CNmClip", "m_flDuration");
}
void GCNmClip::SetDuration(float value) {
    SetSchemaValue(m_ptr, "CNmClip", "m_flDuration", false, value);
}
std::vector<GNmCompressionSettings_t> GCNmClip::GetTrackCompressionSettings() const {
    CUtlVector<GNmCompressionSettings_t>* vec = GetSchemaValue<CUtlVector<GNmCompressionSettings_t>*>(m_ptr, "CNmClip", "m_trackCompressionSettings"); std::vector<GNmCompressionSettings_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCNmClip::SetTrackCompressionSettings(std::vector<GNmCompressionSettings_t> value) {
    SetSchemaValueCUtlVector<GNmCompressionSettings_t>(m_ptr, "CNmClip", "m_trackCompressionSettings", false, value);
}
std::vector<uint32> GCNmClip::GetCompressedPoseOffsets() const {
    CUtlVector<uint32>* vec = GetSchemaValue<CUtlVector<uint32>*>(m_ptr, "CNmClip", "m_compressedPoseOffsets"); std::vector<uint32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCNmClip::SetCompressedPoseOffsets(std::vector<uint32> value) {
    SetSchemaValueCUtlVector<uint32>(m_ptr, "CNmClip", "m_compressedPoseOffsets", false, value);
}
GCNmSyncTrack GCNmClip::GetSyncTrack() const {
    GCNmSyncTrack value(GetSchemaPtr(m_ptr, "CNmClip", "m_syncTrack"));
    return value;
}
void GCNmClip::SetSyncTrack(GCNmSyncTrack value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'SyncTrack' is not possible.\n");
}
GCNmRootMotionData GCNmClip::GetRootMotion() const {
    GCNmRootMotionData value(GetSchemaPtr(m_ptr, "CNmClip", "m_rootMotion"));
    return value;
}
void GCNmClip::SetRootMotion(GCNmRootMotionData value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'RootMotion' is not possible.\n");
}
bool GCNmClip::GetIsAdditive() const {
    return GetSchemaValue<bool>(m_ptr, "CNmClip", "m_bIsAdditive");
}
void GCNmClip::SetIsAdditive(bool value) {
    SetSchemaValue(m_ptr, "CNmClip", "m_bIsAdditive", false, value);
}
void* GCNmClip::GetPtr() {
    return m_ptr;
}
std::string GCNmClip::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmClip::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmClip(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmClip>("CNmClip")
        .addConstructor<void (*)(std::string)>()
        .addProperty("NumFrames", &GCNmClip::GetNumFrames, &GCNmClip::SetNumFrames)
        .addProperty("Duration", &GCNmClip::GetDuration, &GCNmClip::SetDuration)
        .addProperty("TrackCompressionSettings", &GCNmClip::GetTrackCompressionSettings, &GCNmClip::SetTrackCompressionSettings)
        .addProperty("CompressedPoseOffsets", &GCNmClip::GetCompressedPoseOffsets, &GCNmClip::SetCompressedPoseOffsets)
        .addProperty("SyncTrack", &GCNmClip::GetSyncTrack, &GCNmClip::SetSyncTrack)
        .addProperty("RootMotion", &GCNmClip::GetRootMotion, &GCNmClip::SetRootMotion)
        .addProperty("IsAdditive", &GCNmClip::GetIsAdditive, &GCNmClip::SetIsAdditive)
        .addFunction("ToPtr", &GCNmClip::ToPtr)
        .addFunction("IsValid", &GCNmClip::IsValid)
        .endClass();
}
GCFlexDesc::GCFlexDesc(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCFlexDesc::GCFlexDesc(void *ptr) {
    m_ptr = ptr;
}
std::string GCFlexDesc::GetFacs() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CFlexDesc", "m_szFacs").Get();
}
void GCFlexDesc::SetFacs(std::string value) {
    SetSchemaValue(m_ptr, "CFlexDesc", "m_szFacs", false, CUtlString(value.c_str()));
}
void* GCFlexDesc::GetPtr() {
    return m_ptr;
}
std::string GCFlexDesc::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCFlexDesc::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCFlexDesc(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCFlexDesc>("CFlexDesc")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Facs", &GCFlexDesc::GetFacs, &GCFlexDesc::SetFacs)
        .addFunction("ToPtr", &GCFlexDesc::ToPtr)
        .addFunction("IsValid", &GCFlexDesc::IsValid)
        .endClass();
}
GCStateMachineComponentUpdater::GCStateMachineComponentUpdater(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCStateMachineComponentUpdater::GCStateMachineComponentUpdater(void *ptr) {
    m_ptr = ptr;
}
GCAnimStateMachineUpdater GCStateMachineComponentUpdater::GetStateMachine() const {
    GCAnimStateMachineUpdater value(GetSchemaPtr(m_ptr, "CStateMachineComponentUpdater", "m_stateMachine"));
    return value;
}
void GCStateMachineComponentUpdater::SetStateMachine(GCAnimStateMachineUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'StateMachine' is not possible.\n");
}
void* GCStateMachineComponentUpdater::GetPtr() {
    return m_ptr;
}
std::string GCStateMachineComponentUpdater::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCStateMachineComponentUpdater::IsValid() {
    return (m_ptr != nullptr);
}
GCAnimComponentUpdater GCStateMachineComponentUpdater::GetParent() const {
    GCAnimComponentUpdater value(m_ptr);
    return value;
}
void GCStateMachineComponentUpdater::SetParent(GCAnimComponentUpdater value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCStateMachineComponentUpdater(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCStateMachineComponentUpdater>("CStateMachineComponentUpdater")
        .addConstructor<void (*)(std::string)>()
        .addProperty("StateMachine", &GCStateMachineComponentUpdater::GetStateMachine, &GCStateMachineComponentUpdater::SetStateMachine)
        .addProperty("Parent", &GCStateMachineComponentUpdater::GetParent, &GCStateMachineComponentUpdater::SetParent)
        .addFunction("ToPtr", &GCStateMachineComponentUpdater::ToPtr)
        .addFunction("IsValid", &GCStateMachineComponentUpdater::IsValid)
        .endClass();
}
GCompMatMutatorCondition_t::GCompMatMutatorCondition_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCompMatMutatorCondition_t::GCompMatMutatorCondition_t(void *ptr) {
    m_ptr = ptr;
}
uint64_t GCompMatMutatorCondition_t::GetMutatorCondition() const {
    return GetSchemaValue<uint64_t>(m_ptr, "CompMatMutatorCondition_t", "m_nMutatorCondition");
}
void GCompMatMutatorCondition_t::SetMutatorCondition(uint64_t value) {
    SetSchemaValue(m_ptr, "CompMatMutatorCondition_t", "m_nMutatorCondition", true, value);
}
std::string GCompMatMutatorCondition_t::GetStrMutatorConditionContainerName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CompMatMutatorCondition_t", "m_strMutatorConditionContainerName").Get();
}
void GCompMatMutatorCondition_t::SetStrMutatorConditionContainerName(std::string value) {
    SetSchemaValue(m_ptr, "CompMatMutatorCondition_t", "m_strMutatorConditionContainerName", true, CUtlString(value.c_str()));
}
std::string GCompMatMutatorCondition_t::GetStrMutatorConditionContainerVarName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CompMatMutatorCondition_t", "m_strMutatorConditionContainerVarName").Get();
}
void GCompMatMutatorCondition_t::SetStrMutatorConditionContainerVarName(std::string value) {
    SetSchemaValue(m_ptr, "CompMatMutatorCondition_t", "m_strMutatorConditionContainerVarName", true, CUtlString(value.c_str()));
}
std::string GCompMatMutatorCondition_t::GetStrMutatorConditionContainerVarValue() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CompMatMutatorCondition_t", "m_strMutatorConditionContainerVarValue").Get();
}
void GCompMatMutatorCondition_t::SetStrMutatorConditionContainerVarValue(std::string value) {
    SetSchemaValue(m_ptr, "CompMatMutatorCondition_t", "m_strMutatorConditionContainerVarValue", true, CUtlString(value.c_str()));
}
bool GCompMatMutatorCondition_t::GetPassWhenTrue() const {
    return GetSchemaValue<bool>(m_ptr, "CompMatMutatorCondition_t", "m_bPassWhenTrue");
}
void GCompMatMutatorCondition_t::SetPassWhenTrue(bool value) {
    SetSchemaValue(m_ptr, "CompMatMutatorCondition_t", "m_bPassWhenTrue", true, value);
}
void* GCompMatMutatorCondition_t::GetPtr() {
    return m_ptr;
}
std::string GCompMatMutatorCondition_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCompMatMutatorCondition_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCompMatMutatorCondition_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCompMatMutatorCondition_t>("CompMatMutatorCondition_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("MutatorCondition", &GCompMatMutatorCondition_t::GetMutatorCondition, &GCompMatMutatorCondition_t::SetMutatorCondition)
        .addProperty("StrMutatorConditionContainerName", &GCompMatMutatorCondition_t::GetStrMutatorConditionContainerName, &GCompMatMutatorCondition_t::SetStrMutatorConditionContainerName)
        .addProperty("StrMutatorConditionContainerVarName", &GCompMatMutatorCondition_t::GetStrMutatorConditionContainerVarName, &GCompMatMutatorCondition_t::SetStrMutatorConditionContainerVarName)
        .addProperty("StrMutatorConditionContainerVarValue", &GCompMatMutatorCondition_t::GetStrMutatorConditionContainerVarValue, &GCompMatMutatorCondition_t::SetStrMutatorConditionContainerVarValue)
        .addProperty("PassWhenTrue", &GCompMatMutatorCondition_t::GetPassWhenTrue, &GCompMatMutatorCondition_t::SetPassWhenTrue)
        .addFunction("ToPtr", &GCompMatMutatorCondition_t::ToPtr)
        .addFunction("IsValid", &GCompMatMutatorCondition_t::IsValid)
        .endClass();
}
GFakeEntity_tAPI::GFakeEntity_tAPI(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFakeEntity_tAPI::GFakeEntity_tAPI(void *ptr) {
    m_ptr = ptr;
}
void* GFakeEntity_tAPI::GetPtr() {
    return m_ptr;
}
std::string GFakeEntity_tAPI::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFakeEntity_tAPI::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFakeEntity_tAPI(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFakeEntity_tAPI>("FakeEntity_tAPI")
        .addConstructor<void (*)(std::string)>()
        .addFunction("ToPtr", &GFakeEntity_tAPI::ToPtr)
        .addFunction("IsValid", &GFakeEntity_tAPI::IsValid)
        .endClass();
}
GCBoneConstraintPoseSpaceMorph__Input_t::GCBoneConstraintPoseSpaceMorph__Input_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBoneConstraintPoseSpaceMorph__Input_t::GCBoneConstraintPoseSpaceMorph__Input_t(void *ptr) {
    m_ptr = ptr;
}
Vector GCBoneConstraintPoseSpaceMorph__Input_t::GetInputValue() const {
    return GetSchemaValue<Vector>(m_ptr, "CBoneConstraintPoseSpaceMorph__Input_t", "m_inputValue");
}
void GCBoneConstraintPoseSpaceMorph__Input_t::SetInputValue(Vector value) {
    SetSchemaValue(m_ptr, "CBoneConstraintPoseSpaceMorph__Input_t", "m_inputValue", true, value);
}
std::vector<float32> GCBoneConstraintPoseSpaceMorph__Input_t::GetOutputWeightList() const {
    CUtlVector<float32>* vec = GetSchemaValue<CUtlVector<float32>*>(m_ptr, "CBoneConstraintPoseSpaceMorph__Input_t", "m_outputWeightList"); std::vector<float32> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCBoneConstraintPoseSpaceMorph__Input_t::SetOutputWeightList(std::vector<float32> value) {
    SetSchemaValueCUtlVector<float32>(m_ptr, "CBoneConstraintPoseSpaceMorph__Input_t", "m_outputWeightList", true, value);
}
void* GCBoneConstraintPoseSpaceMorph__Input_t::GetPtr() {
    return m_ptr;
}
std::string GCBoneConstraintPoseSpaceMorph__Input_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBoneConstraintPoseSpaceMorph__Input_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCBoneConstraintPoseSpaceMorph__Input_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBoneConstraintPoseSpaceMorph__Input_t>("CBoneConstraintPoseSpaceMorph__Input_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("InputValue", &GCBoneConstraintPoseSpaceMorph__Input_t::GetInputValue, &GCBoneConstraintPoseSpaceMorph__Input_t::SetInputValue)
        .addProperty("OutputWeightList", &GCBoneConstraintPoseSpaceMorph__Input_t::GetOutputWeightList, &GCBoneConstraintPoseSpaceMorph__Input_t::SetOutputWeightList)
        .addFunction("ToPtr", &GCBoneConstraintPoseSpaceMorph__Input_t::ToPtr)
        .addFunction("IsValid", &GCBoneConstraintPoseSpaceMorph__Input_t::IsValid)
        .endClass();
}
GCTwoBoneIKUpdateNode::GCTwoBoneIKUpdateNode(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCTwoBoneIKUpdateNode::GCTwoBoneIKUpdateNode(void *ptr) {
    m_ptr = ptr;
}
GTwoBoneIKSettings_t GCTwoBoneIKUpdateNode::GetOpFixedData() const {
    GTwoBoneIKSettings_t value(GetSchemaPtr(m_ptr, "CTwoBoneIKUpdateNode", "m_opFixedData"));
    return value;
}
void GCTwoBoneIKUpdateNode::SetOpFixedData(GTwoBoneIKSettings_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'OpFixedData' is not possible.\n");
}
void* GCTwoBoneIKUpdateNode::GetPtr() {
    return m_ptr;
}
std::string GCTwoBoneIKUpdateNode::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCTwoBoneIKUpdateNode::IsValid() {
    return (m_ptr != nullptr);
}
GCUnaryUpdateNode GCTwoBoneIKUpdateNode::GetParent() const {
    GCUnaryUpdateNode value(m_ptr);
    return value;
}
void GCTwoBoneIKUpdateNode::SetParent(GCUnaryUpdateNode value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassCTwoBoneIKUpdateNode(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCTwoBoneIKUpdateNode>("CTwoBoneIKUpdateNode")
        .addConstructor<void (*)(std::string)>()
        .addProperty("OpFixedData", &GCTwoBoneIKUpdateNode::GetOpFixedData, &GCTwoBoneIKUpdateNode::SetOpFixedData)
        .addProperty("Parent", &GCTwoBoneIKUpdateNode::GetParent, &GCTwoBoneIKUpdateNode::SetParent)
        .addFunction("ToPtr", &GCTwoBoneIKUpdateNode::ToPtr)
        .addFunction("IsValid", &GCTwoBoneIKUpdateNode::IsValid)
        .endClass();
}
GVMixDynamicsDesc_t::GVMixDynamicsDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVMixDynamicsDesc_t::GVMixDynamicsDesc_t(void *ptr) {
    m_ptr = ptr;
}
float GVMixDynamicsDesc_t::GetFldbGain() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_fldbGain");
}
void GVMixDynamicsDesc_t::SetFldbGain(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_fldbGain", true, value);
}
float GVMixDynamicsDesc_t::GetFldbNoiseGateThreshold() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_fldbNoiseGateThreshold");
}
void GVMixDynamicsDesc_t::SetFldbNoiseGateThreshold(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_fldbNoiseGateThreshold", true, value);
}
float GVMixDynamicsDesc_t::GetFldbCompressionThreshold() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_fldbCompressionThreshold");
}
void GVMixDynamicsDesc_t::SetFldbCompressionThreshold(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_fldbCompressionThreshold", true, value);
}
float GVMixDynamicsDesc_t::GetFldbLimiterThreshold() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_fldbLimiterThreshold");
}
void GVMixDynamicsDesc_t::SetFldbLimiterThreshold(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_fldbLimiterThreshold", true, value);
}
float GVMixDynamicsDesc_t::GetFldbKneeWidth() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_fldbKneeWidth");
}
void GVMixDynamicsDesc_t::SetFldbKneeWidth(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_fldbKneeWidth", true, value);
}
float GVMixDynamicsDesc_t::GetRatio() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_flRatio");
}
void GVMixDynamicsDesc_t::SetRatio(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_flRatio", true, value);
}
float GVMixDynamicsDesc_t::GetLimiterRatio() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_flLimiterRatio");
}
void GVMixDynamicsDesc_t::SetLimiterRatio(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_flLimiterRatio", true, value);
}
float GVMixDynamicsDesc_t::GetAttackTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_flAttackTimeMS");
}
void GVMixDynamicsDesc_t::SetAttackTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_flAttackTimeMS", true, value);
}
float GVMixDynamicsDesc_t::GetReleaseTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_flReleaseTimeMS");
}
void GVMixDynamicsDesc_t::SetReleaseTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_flReleaseTimeMS", true, value);
}
float GVMixDynamicsDesc_t::GetRMSTimeMS() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_flRMSTimeMS");
}
void GVMixDynamicsDesc_t::SetRMSTimeMS(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_flRMSTimeMS", true, value);
}
float GVMixDynamicsDesc_t::GetWetMix() const {
    return GetSchemaValue<float>(m_ptr, "VMixDynamicsDesc_t", "m_flWetMix");
}
void GVMixDynamicsDesc_t::SetWetMix(float value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_flWetMix", true, value);
}
bool GVMixDynamicsDesc_t::GetPeakMode() const {
    return GetSchemaValue<bool>(m_ptr, "VMixDynamicsDesc_t", "m_bPeakMode");
}
void GVMixDynamicsDesc_t::SetPeakMode(bool value) {
    SetSchemaValue(m_ptr, "VMixDynamicsDesc_t", "m_bPeakMode", true, value);
}
void* GVMixDynamicsDesc_t::GetPtr() {
    return m_ptr;
}
std::string GVMixDynamicsDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVMixDynamicsDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVMixDynamicsDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVMixDynamicsDesc_t>("VMixDynamicsDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("FldbGain", &GVMixDynamicsDesc_t::GetFldbGain, &GVMixDynamicsDesc_t::SetFldbGain)
        .addProperty("FldbNoiseGateThreshold", &GVMixDynamicsDesc_t::GetFldbNoiseGateThreshold, &GVMixDynamicsDesc_t::SetFldbNoiseGateThreshold)
        .addProperty("FldbCompressionThreshold", &GVMixDynamicsDesc_t::GetFldbCompressionThreshold, &GVMixDynamicsDesc_t::SetFldbCompressionThreshold)
        .addProperty("FldbLimiterThreshold", &GVMixDynamicsDesc_t::GetFldbLimiterThreshold, &GVMixDynamicsDesc_t::SetFldbLimiterThreshold)
        .addProperty("FldbKneeWidth", &GVMixDynamicsDesc_t::GetFldbKneeWidth, &GVMixDynamicsDesc_t::SetFldbKneeWidth)
        .addProperty("Ratio", &GVMixDynamicsDesc_t::GetRatio, &GVMixDynamicsDesc_t::SetRatio)
        .addProperty("LimiterRatio", &GVMixDynamicsDesc_t::GetLimiterRatio, &GVMixDynamicsDesc_t::SetLimiterRatio)
        .addProperty("AttackTimeMS", &GVMixDynamicsDesc_t::GetAttackTimeMS, &GVMixDynamicsDesc_t::SetAttackTimeMS)
        .addProperty("ReleaseTimeMS", &GVMixDynamicsDesc_t::GetReleaseTimeMS, &GVMixDynamicsDesc_t::SetReleaseTimeMS)
        .addProperty("RMSTimeMS", &GVMixDynamicsDesc_t::GetRMSTimeMS, &GVMixDynamicsDesc_t::SetRMSTimeMS)
        .addProperty("WetMix", &GVMixDynamicsDesc_t::GetWetMix, &GVMixDynamicsDesc_t::SetWetMix)
        .addProperty("PeakMode", &GVMixDynamicsDesc_t::GetPeakMode, &GVMixDynamicsDesc_t::SetPeakMode)
        .addFunction("ToPtr", &GVMixDynamicsDesc_t::ToPtr)
        .addFunction("IsValid", &GVMixDynamicsDesc_t::IsValid)
        .endClass();
}
GFeVertexMapDesc_t::GFeVertexMapDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeVertexMapDesc_t::GFeVertexMapDesc_t(void *ptr) {
    m_ptr = ptr;
}
std::string GFeVertexMapDesc_t::GetName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "FeVertexMapDesc_t", "sName").Get();
}
void GFeVertexMapDesc_t::SetName(std::string value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "sName", true, CUtlString(value.c_str()));
}
uint32_t GFeVertexMapDesc_t::GetNameHash() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeVertexMapDesc_t", "nNameHash");
}
void GFeVertexMapDesc_t::SetNameHash(uint32_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nNameHash", true, value);
}
uint32_t GFeVertexMapDesc_t::GetColor() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeVertexMapDesc_t", "nColor");
}
void GFeVertexMapDesc_t::SetColor(uint32_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nColor", true, value);
}
uint32_t GFeVertexMapDesc_t::GetFlags() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeVertexMapDesc_t", "nFlags");
}
void GFeVertexMapDesc_t::SetFlags(uint32_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nFlags", true, value);
}
uint16_t GFeVertexMapDesc_t::GetVertexBase() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeVertexMapDesc_t", "nVertexBase");
}
void GFeVertexMapDesc_t::SetVertexBase(uint16_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nVertexBase", true, value);
}
uint16_t GFeVertexMapDesc_t::GetVertexCount() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeVertexMapDesc_t", "nVertexCount");
}
void GFeVertexMapDesc_t::SetVertexCount(uint16_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nVertexCount", true, value);
}
uint32_t GFeVertexMapDesc_t::GetMapOffset() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeVertexMapDesc_t", "nMapOffset");
}
void GFeVertexMapDesc_t::SetMapOffset(uint32_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nMapOffset", true, value);
}
uint32_t GFeVertexMapDesc_t::GetNodeListOffset() const {
    return GetSchemaValue<uint32_t>(m_ptr, "FeVertexMapDesc_t", "nNodeListOffset");
}
void GFeVertexMapDesc_t::SetNodeListOffset(uint32_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nNodeListOffset", true, value);
}
Vector GFeVertexMapDesc_t::GetCenterOfMass() const {
    return GetSchemaValue<Vector>(m_ptr, "FeVertexMapDesc_t", "vCenterOfMass");
}
void GFeVertexMapDesc_t::SetCenterOfMass(Vector value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "vCenterOfMass", true, value);
}
float GFeVertexMapDesc_t::GetVolumetricSolveStrength() const {
    return GetSchemaValue<float>(m_ptr, "FeVertexMapDesc_t", "flVolumetricSolveStrength");
}
void GFeVertexMapDesc_t::SetVolumetricSolveStrength(float value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "flVolumetricSolveStrength", true, value);
}
int16_t GFeVertexMapDesc_t::GetScaleSourceNode() const {
    return GetSchemaValue<int16_t>(m_ptr, "FeVertexMapDesc_t", "nScaleSourceNode");
}
void GFeVertexMapDesc_t::SetScaleSourceNode(int16_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nScaleSourceNode", true, value);
}
uint16_t GFeVertexMapDesc_t::GetNodeListCount() const {
    return GetSchemaValue<uint16_t>(m_ptr, "FeVertexMapDesc_t", "nNodeListCount");
}
void GFeVertexMapDesc_t::SetNodeListCount(uint16_t value) {
    SetSchemaValue(m_ptr, "FeVertexMapDesc_t", "nNodeListCount", true, value);
}
void* GFeVertexMapDesc_t::GetPtr() {
    return m_ptr;
}
std::string GFeVertexMapDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeVertexMapDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeVertexMapDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeVertexMapDesc_t>("FeVertexMapDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Name", &GFeVertexMapDesc_t::GetName, &GFeVertexMapDesc_t::SetName)
        .addProperty("NameHash", &GFeVertexMapDesc_t::GetNameHash, &GFeVertexMapDesc_t::SetNameHash)
        .addProperty("Color", &GFeVertexMapDesc_t::GetColor, &GFeVertexMapDesc_t::SetColor)
        .addProperty("Flags", &GFeVertexMapDesc_t::GetFlags, &GFeVertexMapDesc_t::SetFlags)
        .addProperty("VertexBase", &GFeVertexMapDesc_t::GetVertexBase, &GFeVertexMapDesc_t::SetVertexBase)
        .addProperty("VertexCount", &GFeVertexMapDesc_t::GetVertexCount, &GFeVertexMapDesc_t::SetVertexCount)
        .addProperty("MapOffset", &GFeVertexMapDesc_t::GetMapOffset, &GFeVertexMapDesc_t::SetMapOffset)
        .addProperty("NodeListOffset", &GFeVertexMapDesc_t::GetNodeListOffset, &GFeVertexMapDesc_t::SetNodeListOffset)
        .addProperty("CenterOfMass", &GFeVertexMapDesc_t::GetCenterOfMass, &GFeVertexMapDesc_t::SetCenterOfMass)
        .addProperty("VolumetricSolveStrength", &GFeVertexMapDesc_t::GetVolumetricSolveStrength, &GFeVertexMapDesc_t::SetVolumetricSolveStrength)
        .addProperty("ScaleSourceNode", &GFeVertexMapDesc_t::GetScaleSourceNode, &GFeVertexMapDesc_t::SetScaleSourceNode)
        .addProperty("NodeListCount", &GFeVertexMapDesc_t::GetNodeListCount, &GFeVertexMapDesc_t::SetNodeListCount)
        .addFunction("ToPtr", &GFeVertexMapDesc_t::ToPtr)
        .addFunction("IsValid", &GFeVertexMapDesc_t::IsValid)
        .endClass();
}
GFeSourceEdge_t::GFeSourceEdge_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GFeSourceEdge_t::GFeSourceEdge_t(void *ptr) {
    m_ptr = ptr;
}
std::vector<uint16_t> GFeSourceEdge_t::GetNode() const {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeSourceEdge_t", "nNode"); std::vector<uint16_t> ret; for(int i = 0; i < 2; i++) { ret.push_back(outValue[i]); } return ret;
}
void GFeSourceEdge_t::SetNode(std::vector<uint16_t> value) {
    uint16_t* outValue = GetSchemaValue<uint16_t*>(m_ptr, "FeSourceEdge_t", "nNode"); for(int i = 0; i < 2; i++) { outValue[i] = value[i]; } SetSchemaValue(m_ptr, "FeSourceEdge_t", "nNode", true, outValue);
}
void* GFeSourceEdge_t::GetPtr() {
    return m_ptr;
}
std::string GFeSourceEdge_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GFeSourceEdge_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassFeSourceEdge_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GFeSourceEdge_t>("FeSourceEdge_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Node", &GFeSourceEdge_t::GetNode, &GFeSourceEdge_t::SetNode)
        .addFunction("ToPtr", &GFeSourceEdge_t::ToPtr)
        .addFunction("IsValid", &GFeSourceEdge_t::IsValid)
        .endClass();
}
GCompositeMaterialEditorPoint_t::GCompositeMaterialEditorPoint_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCompositeMaterialEditorPoint_t::GCompositeMaterialEditorPoint_t(void *ptr) {
    m_ptr = ptr;
}
int32_t GCompositeMaterialEditorPoint_t::GetSequenceIndex() const {
    return GetSchemaValue<int32_t>(m_ptr, "CompositeMaterialEditorPoint_t", "m_nSequenceIndex");
}
void GCompositeMaterialEditorPoint_t::SetSequenceIndex(int32_t value) {
    SetSchemaValue(m_ptr, "CompositeMaterialEditorPoint_t", "m_nSequenceIndex", true, value);
}
float GCompositeMaterialEditorPoint_t::GetCycle() const {
    return GetSchemaValue<float>(m_ptr, "CompositeMaterialEditorPoint_t", "m_flCycle");
}
void GCompositeMaterialEditorPoint_t::SetCycle(float value) {
    SetSchemaValue(m_ptr, "CompositeMaterialEditorPoint_t", "m_flCycle", true, value);
}
bool GCompositeMaterialEditorPoint_t::GetEnableChildModel() const {
    return GetSchemaValue<bool>(m_ptr, "CompositeMaterialEditorPoint_t", "m_bEnableChildModel");
}
void GCompositeMaterialEditorPoint_t::SetEnableChildModel(bool value) {
    SetSchemaValue(m_ptr, "CompositeMaterialEditorPoint_t", "m_bEnableChildModel", true, value);
}
std::vector<GCompositeMaterialAssemblyProcedure_t> GCompositeMaterialEditorPoint_t::GetCompositeMaterialAssemblyProcedures() const {
    CUtlVector<GCompositeMaterialAssemblyProcedure_t>* vec = GetSchemaValue<CUtlVector<GCompositeMaterialAssemblyProcedure_t>*>(m_ptr, "CompositeMaterialEditorPoint_t", "m_vecCompositeMaterialAssemblyProcedures"); std::vector<GCompositeMaterialAssemblyProcedure_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCompositeMaterialEditorPoint_t::SetCompositeMaterialAssemblyProcedures(std::vector<GCompositeMaterialAssemblyProcedure_t> value) {
    SetSchemaValueCUtlVector<GCompositeMaterialAssemblyProcedure_t>(m_ptr, "CompositeMaterialEditorPoint_t", "m_vecCompositeMaterialAssemblyProcedures", true, value);
}
std::vector<GCompositeMaterial_t> GCompositeMaterialEditorPoint_t::GetCompositeMaterials() const {
    CUtlVector<GCompositeMaterial_t>* vec = GetSchemaValue<CUtlVector<GCompositeMaterial_t>*>(m_ptr, "CompositeMaterialEditorPoint_t", "m_vecCompositeMaterials"); std::vector<GCompositeMaterial_t> outVec; for(int i = 0; i < vec->Count(); i++) { outVec.push_back(vec->Element(i)); } return outVec;
}
void GCompositeMaterialEditorPoint_t::SetCompositeMaterials(std::vector<GCompositeMaterial_t> value) {
    SetSchemaValueCUtlVector<GCompositeMaterial_t>(m_ptr, "CompositeMaterialEditorPoint_t", "m_vecCompositeMaterials", true, value);
}
void* GCompositeMaterialEditorPoint_t::GetPtr() {
    return m_ptr;
}
std::string GCompositeMaterialEditorPoint_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCompositeMaterialEditorPoint_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCompositeMaterialEditorPoint_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCompositeMaterialEditorPoint_t>("CompositeMaterialEditorPoint_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("SequenceIndex", &GCompositeMaterialEditorPoint_t::GetSequenceIndex, &GCompositeMaterialEditorPoint_t::SetSequenceIndex)
        .addProperty("Cycle", &GCompositeMaterialEditorPoint_t::GetCycle, &GCompositeMaterialEditorPoint_t::SetCycle)
        .addProperty("EnableChildModel", &GCompositeMaterialEditorPoint_t::GetEnableChildModel, &GCompositeMaterialEditorPoint_t::SetEnableChildModel)
        .addProperty("CompositeMaterialAssemblyProcedures", &GCompositeMaterialEditorPoint_t::GetCompositeMaterialAssemblyProcedures, &GCompositeMaterialEditorPoint_t::SetCompositeMaterialAssemblyProcedures)
        .addProperty("CompositeMaterials", &GCompositeMaterialEditorPoint_t::GetCompositeMaterials, &GCompositeMaterialEditorPoint_t::SetCompositeMaterials)
        .addFunction("ToPtr", &GCompositeMaterialEditorPoint_t::ToPtr)
        .addFunction("IsValid", &GCompositeMaterialEditorPoint_t::IsValid)
        .endClass();
}
GVPhysXJoint_t::GVPhysXJoint_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GVPhysXJoint_t::GVPhysXJoint_t(void *ptr) {
    m_ptr = ptr;
}
uint16_t GVPhysXJoint_t::GetType() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXJoint_t", "m_nType");
}
void GVPhysXJoint_t::SetType(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_nType", true, value);
}
uint16_t GVPhysXJoint_t::GetBody1() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXJoint_t", "m_nBody1");
}
void GVPhysXJoint_t::SetBody1(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_nBody1", true, value);
}
uint16_t GVPhysXJoint_t::GetBody2() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXJoint_t", "m_nBody2");
}
void GVPhysXJoint_t::SetBody2(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_nBody2", true, value);
}
uint16_t GVPhysXJoint_t::GetFlags() const {
    return GetSchemaValue<uint16_t>(m_ptr, "VPhysXJoint_t", "m_nFlags");
}
void GVPhysXJoint_t::SetFlags(uint16_t value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_nFlags", true, value);
}
bool GVPhysXJoint_t::GetEnableCollision() const {
    return GetSchemaValue<bool>(m_ptr, "VPhysXJoint_t", "m_bEnableCollision");
}
void GVPhysXJoint_t::SetEnableCollision(bool value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_bEnableCollision", true, value);
}
bool GVPhysXJoint_t::GetEnableLinearLimit() const {
    return GetSchemaValue<bool>(m_ptr, "VPhysXJoint_t", "m_bEnableLinearLimit");
}
void GVPhysXJoint_t::SetEnableLinearLimit(bool value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_bEnableLinearLimit", true, value);
}
GVPhysXRange_t GVPhysXJoint_t::GetLinearLimit() const {
    GVPhysXRange_t value(GetSchemaPtr(m_ptr, "VPhysXJoint_t", "m_LinearLimit"));
    return value;
}
void GVPhysXJoint_t::SetLinearLimit(GVPhysXRange_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'LinearLimit' is not possible.\n");
}
bool GVPhysXJoint_t::GetEnableLinearMotor() const {
    return GetSchemaValue<bool>(m_ptr, "VPhysXJoint_t", "m_bEnableLinearMotor");
}
void GVPhysXJoint_t::SetEnableLinearMotor(bool value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_bEnableLinearMotor", true, value);
}
Vector GVPhysXJoint_t::GetLinearTargetVelocity() const {
    return GetSchemaValue<Vector>(m_ptr, "VPhysXJoint_t", "m_vLinearTargetVelocity");
}
void GVPhysXJoint_t::SetLinearTargetVelocity(Vector value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_vLinearTargetVelocity", true, value);
}
float GVPhysXJoint_t::GetMaxForce() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXJoint_t", "m_flMaxForce");
}
void GVPhysXJoint_t::SetMaxForce(float value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_flMaxForce", true, value);
}
bool GVPhysXJoint_t::GetEnableSwingLimit() const {
    return GetSchemaValue<bool>(m_ptr, "VPhysXJoint_t", "m_bEnableSwingLimit");
}
void GVPhysXJoint_t::SetEnableSwingLimit(bool value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_bEnableSwingLimit", true, value);
}
GVPhysXRange_t GVPhysXJoint_t::GetSwingLimit() const {
    GVPhysXRange_t value(GetSchemaPtr(m_ptr, "VPhysXJoint_t", "m_SwingLimit"));
    return value;
}
void GVPhysXJoint_t::SetSwingLimit(GVPhysXRange_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'SwingLimit' is not possible.\n");
}
bool GVPhysXJoint_t::GetEnableTwistLimit() const {
    return GetSchemaValue<bool>(m_ptr, "VPhysXJoint_t", "m_bEnableTwistLimit");
}
void GVPhysXJoint_t::SetEnableTwistLimit(bool value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_bEnableTwistLimit", true, value);
}
GVPhysXRange_t GVPhysXJoint_t::GetTwistLimit() const {
    GVPhysXRange_t value(GetSchemaPtr(m_ptr, "VPhysXJoint_t", "m_TwistLimit"));
    return value;
}
void GVPhysXJoint_t::SetTwistLimit(GVPhysXRange_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'TwistLimit' is not possible.\n");
}
bool GVPhysXJoint_t::GetEnableAngularMotor() const {
    return GetSchemaValue<bool>(m_ptr, "VPhysXJoint_t", "m_bEnableAngularMotor");
}
void GVPhysXJoint_t::SetEnableAngularMotor(bool value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_bEnableAngularMotor", true, value);
}
Vector GVPhysXJoint_t::GetAngularTargetVelocity() const {
    return GetSchemaValue<Vector>(m_ptr, "VPhysXJoint_t", "m_vAngularTargetVelocity");
}
void GVPhysXJoint_t::SetAngularTargetVelocity(Vector value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_vAngularTargetVelocity", true, value);
}
float GVPhysXJoint_t::GetMaxTorque() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXJoint_t", "m_flMaxTorque");
}
void GVPhysXJoint_t::SetMaxTorque(float value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_flMaxTorque", true, value);
}
float GVPhysXJoint_t::GetLinearFrequency() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXJoint_t", "m_flLinearFrequency");
}
void GVPhysXJoint_t::SetLinearFrequency(float value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_flLinearFrequency", true, value);
}
float GVPhysXJoint_t::GetLinearDampingRatio() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXJoint_t", "m_flLinearDampingRatio");
}
void GVPhysXJoint_t::SetLinearDampingRatio(float value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_flLinearDampingRatio", true, value);
}
float GVPhysXJoint_t::GetAngularFrequency() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXJoint_t", "m_flAngularFrequency");
}
void GVPhysXJoint_t::SetAngularFrequency(float value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_flAngularFrequency", true, value);
}
float GVPhysXJoint_t::GetAngularDampingRatio() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXJoint_t", "m_flAngularDampingRatio");
}
void GVPhysXJoint_t::SetAngularDampingRatio(float value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_flAngularDampingRatio", true, value);
}
float GVPhysXJoint_t::GetFriction() const {
    return GetSchemaValue<float>(m_ptr, "VPhysXJoint_t", "m_flFriction");
}
void GVPhysXJoint_t::SetFriction(float value) {
    SetSchemaValue(m_ptr, "VPhysXJoint_t", "m_flFriction", true, value);
}
void* GVPhysXJoint_t::GetPtr() {
    return m_ptr;
}
std::string GVPhysXJoint_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GVPhysXJoint_t::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassVPhysXJoint_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GVPhysXJoint_t>("VPhysXJoint_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Type", &GVPhysXJoint_t::GetType, &GVPhysXJoint_t::SetType)
        .addProperty("Body1", &GVPhysXJoint_t::GetBody1, &GVPhysXJoint_t::SetBody1)
        .addProperty("Body2", &GVPhysXJoint_t::GetBody2, &GVPhysXJoint_t::SetBody2)
        .addProperty("Flags", &GVPhysXJoint_t::GetFlags, &GVPhysXJoint_t::SetFlags)
        .addProperty("EnableCollision", &GVPhysXJoint_t::GetEnableCollision, &GVPhysXJoint_t::SetEnableCollision)
        .addProperty("EnableLinearLimit", &GVPhysXJoint_t::GetEnableLinearLimit, &GVPhysXJoint_t::SetEnableLinearLimit)
        .addProperty("LinearLimit", &GVPhysXJoint_t::GetLinearLimit, &GVPhysXJoint_t::SetLinearLimit)
        .addProperty("EnableLinearMotor", &GVPhysXJoint_t::GetEnableLinearMotor, &GVPhysXJoint_t::SetEnableLinearMotor)
        .addProperty("LinearTargetVelocity", &GVPhysXJoint_t::GetLinearTargetVelocity, &GVPhysXJoint_t::SetLinearTargetVelocity)
        .addProperty("MaxForce", &GVPhysXJoint_t::GetMaxForce, &GVPhysXJoint_t::SetMaxForce)
        .addProperty("EnableSwingLimit", &GVPhysXJoint_t::GetEnableSwingLimit, &GVPhysXJoint_t::SetEnableSwingLimit)
        .addProperty("SwingLimit", &GVPhysXJoint_t::GetSwingLimit, &GVPhysXJoint_t::SetSwingLimit)
        .addProperty("EnableTwistLimit", &GVPhysXJoint_t::GetEnableTwistLimit, &GVPhysXJoint_t::SetEnableTwistLimit)
        .addProperty("TwistLimit", &GVPhysXJoint_t::GetTwistLimit, &GVPhysXJoint_t::SetTwistLimit)
        .addProperty("EnableAngularMotor", &GVPhysXJoint_t::GetEnableAngularMotor, &GVPhysXJoint_t::SetEnableAngularMotor)
        .addProperty("AngularTargetVelocity", &GVPhysXJoint_t::GetAngularTargetVelocity, &GVPhysXJoint_t::SetAngularTargetVelocity)
        .addProperty("MaxTorque", &GVPhysXJoint_t::GetMaxTorque, &GVPhysXJoint_t::SetMaxTorque)
        .addProperty("LinearFrequency", &GVPhysXJoint_t::GetLinearFrequency, &GVPhysXJoint_t::SetLinearFrequency)
        .addProperty("LinearDampingRatio", &GVPhysXJoint_t::GetLinearDampingRatio, &GVPhysXJoint_t::SetLinearDampingRatio)
        .addProperty("AngularFrequency", &GVPhysXJoint_t::GetAngularFrequency, &GVPhysXJoint_t::SetAngularFrequency)
        .addProperty("AngularDampingRatio", &GVPhysXJoint_t::GetAngularDampingRatio, &GVPhysXJoint_t::SetAngularDampingRatio)
        .addProperty("Friction", &GVPhysXJoint_t::GetFriction, &GVPhysXJoint_t::SetFriction)
        .addFunction("ToPtr", &GVPhysXJoint_t::ToPtr)
        .addFunction("IsValid", &GVPhysXJoint_t::IsValid)
        .endClass();
}
GCBodyGroupSetting::GCBodyGroupSetting(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCBodyGroupSetting::GCBodyGroupSetting(void *ptr) {
    m_ptr = ptr;
}
std::string GCBodyGroupSetting::GetBodyGroupName() const {
    return GetSchemaValue<CUtlString>(m_ptr, "CBodyGroupSetting", "m_BodyGroupName").Get();
}
void GCBodyGroupSetting::SetBodyGroupName(std::string value) {
    SetSchemaValue(m_ptr, "CBodyGroupSetting", "m_BodyGroupName", false, CUtlString(value.c_str()));
}
int32_t GCBodyGroupSetting::GetBodyGroupOption() const {
    return GetSchemaValue<int32_t>(m_ptr, "CBodyGroupSetting", "m_nBodyGroupOption");
}
void GCBodyGroupSetting::SetBodyGroupOption(int32_t value) {
    SetSchemaValue(m_ptr, "CBodyGroupSetting", "m_nBodyGroupOption", false, value);
}
void* GCBodyGroupSetting::GetPtr() {
    return m_ptr;
}
std::string GCBodyGroupSetting::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCBodyGroupSetting::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCBodyGroupSetting(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCBodyGroupSetting>("CBodyGroupSetting")
        .addConstructor<void (*)(std::string)>()
        .addProperty("BodyGroupName", &GCBodyGroupSetting::GetBodyGroupName, &GCBodyGroupSetting::SetBodyGroupName)
        .addProperty("BodyGroupOption", &GCBodyGroupSetting::GetBodyGroupOption, &GCBodyGroupSetting::SetBodyGroupOption)
        .addFunction("ToPtr", &GCBodyGroupSetting::ToPtr)
        .addFunction("IsValid", &GCBodyGroupSetting::IsValid)
        .endClass();
}
GRnSphereDesc_t::GRnSphereDesc_t(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GRnSphereDesc_t::GRnSphereDesc_t(void *ptr) {
    m_ptr = ptr;
}
void* GRnSphereDesc_t::GetPtr() {
    return m_ptr;
}
std::string GRnSphereDesc_t::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GRnSphereDesc_t::IsValid() {
    return (m_ptr != nullptr);
}
GRnShapeDesc_t GRnSphereDesc_t::GetParent() const {
    GRnShapeDesc_t value(m_ptr);
    return value;
}
void GRnSphereDesc_t::SetParent(GRnShapeDesc_t value) {
    PLUGIN_PRINT("Schema SDK", "Setting a value for 'Parent' is not possible.\n");
}
void SetupLuaClassRnSphereDesc_t(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GRnSphereDesc_t>("RnSphereDesc_t")
        .addConstructor<void (*)(std::string)>()
        .addProperty("Parent", &GRnSphereDesc_t::GetParent, &GRnSphereDesc_t::SetParent)
        .addFunction("ToPtr", &GRnSphereDesc_t::ToPtr)
        .addFunction("IsValid", &GRnSphereDesc_t::IsValid)
        .endClass();
}
GCNmTarget::GCNmTarget(std::string ptr) {
    m_ptr = (void*)(strtol(ptr.c_str(), nullptr, 16));
}
GCNmTarget::GCNmTarget(void *ptr) {
    m_ptr = ptr;
}
bool GCNmTarget::GetIsBoneTarget() const {
    return GetSchemaValue<bool>(m_ptr, "CNmTarget", "m_bIsBoneTarget");
}
void GCNmTarget::SetIsBoneTarget(bool value) {
    SetSchemaValue(m_ptr, "CNmTarget", "m_bIsBoneTarget", false, value);
}
bool GCNmTarget::GetIsUsingBoneSpaceOffsets() const {
    return GetSchemaValue<bool>(m_ptr, "CNmTarget", "m_bIsUsingBoneSpaceOffsets");
}
void GCNmTarget::SetIsUsingBoneSpaceOffsets(bool value) {
    SetSchemaValue(m_ptr, "CNmTarget", "m_bIsUsingBoneSpaceOffsets", false, value);
}
bool GCNmTarget::GetHasOffsets() const {
    return GetSchemaValue<bool>(m_ptr, "CNmTarget", "m_bHasOffsets");
}
void GCNmTarget::SetHasOffsets(bool value) {
    SetSchemaValue(m_ptr, "CNmTarget", "m_bHasOffsets", false, value);
}
bool GCNmTarget::GetIsSet() const {
    return GetSchemaValue<bool>(m_ptr, "CNmTarget", "m_bIsSet");
}
void GCNmTarget::SetIsSet(bool value) {
    SetSchemaValue(m_ptr, "CNmTarget", "m_bIsSet", false, value);
}
void* GCNmTarget::GetPtr() {
    return m_ptr;
}
std::string GCNmTarget::ToPtr() {
    return string_format("%p", m_ptr);
}
bool GCNmTarget::IsValid() {
    return (m_ptr != nullptr);
}
void SetupLuaClassCNmTarget(LuaPlugin *plugin, lua_State *state)
{
    luabridge::getGlobalNamespace(state)
        .beginClass<GCNmTarget>("CNmTarget")
        .addConstructor<void (*)(std::string)>()
        .addProperty("IsBoneTarget", &GCNmTarget::GetIsBoneTarget, &GCNmTarget::SetIsBoneTarget)
        .addProperty("IsUsingBoneSpaceOffsets", &GCNmTarget::GetIsUsingBoneSpaceOffsets, &GCNmTarget::SetIsUsingBoneSpaceOffsets)
        .addProperty("HasOffsets", &GCNmTarget::GetHasOffsets, &GCNmTarget::SetHasOffsets)
        .addProperty("IsSet", &GCNmTarget::GetIsSet, &GCNmTarget::SetIsSet)
        .addFunction("ToPtr", &GCNmTarget::ToPtr)
        .addFunction("IsValid", &GCNmTarget::IsValid)
        .endClass();
}