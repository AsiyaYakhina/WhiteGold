#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.Font
struct Font_t123;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t521;
// System.Action`1<UnityEngine.Font>
struct Action_1_t322;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t463;
// UnityEngine.Material
struct Material_t127;
// UnityEngine.CharacterInfo[]
struct CharacterInfoU5BU5D_t524;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void UnityEngine.Font::.ctor()
extern "C" void Font__ctor_m2629 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String)
extern "C" void Font__ctor_m2630 (Font_t123 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
extern "C" void Font__ctor_m2631 (Font_t123 * __this, StringU5BU5D_t521* ___names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m1725 (Object_t * __this /* static, unused */, Action_1_t322 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m2632 (Object_t * __this /* static, unused */, Action_1_t322 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_add_m_FontTextureRebuildCallback_m2633 (Font_t123 * __this, FontTextureRebuildCallback_t463 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_remove_m_FontTextureRebuildCallback_m2634 (Font_t123 * __this, FontTextureRebuildCallback_t463 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t521* Font_GetOSInstalledFontNames_m2635 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern "C" void Font_Internal_CreateFont_m2636 (Object_t * __this /* static, unused */, Font_t123 * ____font, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m2637 (Object_t * __this /* static, unused */, Font_t123 * ____font, StringU5BU5D_t521* ____names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern "C" Font_t123 * Font_CreateDynamicFontFromOSFont_m2638 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern "C" Font_t123 * Font_CreateDynamicFontFromOSFont_m2639 (Object_t * __this /* static, unused */, StringU5BU5D_t521* ___fontnames, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t127 * Font_get_material_m2010 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
extern "C" void Font_set_material_m2640 (Font_t123 * __this, Material_t127 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m1863 (Font_t123 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t521* Font_get_fontNames_m2641 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m2642 (Font_t123 * __this, StringU5BU5D_t521* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t524* Font_get_characterInfo_m2643 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
extern "C" void Font_set_characterInfo_m2644 (Font_t123 * __this, CharacterInfoU5BU5D_t524* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C" void Font_RequestCharactersInTexture_m2645 (Font_t123 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m2646 (Font_t123 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m2647 (Font_t123 * __this, String_t* ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m2648 (Object_t * __this /* static, unused */, Font_t123 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t463 * Font_get_textureRebuildCallback_m2649 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m2650 (Font_t123 * __this, FontTextureRebuildCallback_t463 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
extern "C" int32_t Font_GetMaxVertsForString_m2651 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m2652 (Font_t123 * __this, uint16_t ___ch, CharacterInfo_t462 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m2653 (Font_t123 * __this, uint16_t ___ch, CharacterInfo_t462 * ___info, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m2654 (Font_t123 * __this, uint16_t ___ch, CharacterInfo_t462 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m2013 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m2655 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m2656 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m2015 (Font_t123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
