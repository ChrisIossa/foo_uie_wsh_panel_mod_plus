#pragma once

/* 
 * IMPORTANT NOTE:
 * For modders: You should change these Defines/Guids below, in order to 
 *   co-exist with the original release of WSH Panel Mod.
 */

#define WSPM_NAME "WSH Panel Mod Plus"
#define WSPM_WINDOW_CLASS_NAME "uie_wsh_panel_mod_plus_class"
#define WSPM_DLL_NAME "foo_uie_wsh_panel_mod_plus.dll"

// {19681D48-D90E-4CB6-BB06-695F4257BE23}
extern const GUID g_ui_pref_window_guid;
FOOGUIDDECL const GUID g_ui_pref_window_guid = 
{ 0x19681d48, 0xd90e, 0x4cb6,{0xbb, 0x6, 0x69, 0x5f, 0x42, 0x57, 0xbe, 0x23} };


// {19646267-86FC-4676-A98A-49273852B088}
extern const GUID g_wsh_panel_window_extension_guid;
FOOGUIDDECL const GUID g_wsh_panel_window_extension_guid =
{ 0x19646267, 0x86fc, 0x4676,{0xa9, 0x8a, 0x49, 0x27, 0x38, 0x52, 0xb0, 0x88} };

// {DAA5F4E7-177D-4489-9AD9-9F3A8EFA96AB}
extern const GUID g_wsh_panel_window_dui_guid;
FOOGUIDDECL const GUID g_wsh_panel_window_dui_guid = 
{ 0xdaa5f4e7, 0x177d, 0x4489,{0x9a, 0xd9, 0x9f, 0x3a, 0x8e, 0xfa, 0x96, 0xab} };

// {7F6B71A1-4F1A-437D-84CC-D1ADD67AD962}
extern const GUID g_guid_prop_sets;
FOOGUIDDECL const GUID g_guid_prop_sets = 
{ 0x7f6b71a1, 0x4f1a, 0x437d,{0x84, 0xcc, 0xd1, 0xad, 0xd6, 0x7a, 0xd9, 0x62} };

// {C0A8E593-132E-4B4A-AF2E-AD5721C8CEDC}
extern const GUID g_guid_cfg_safe_mode;
FOOGUIDDECL const GUID g_guid_cfg_safe_mode = 
{ 0xc0a8e593, 0x132e, 0x4b4a, { 0xaf, 0x2e, 0xad, 0x57, 0x21, 0xc8, 0xce, 0xdc } };

// {B590089C-E1E0-41E1-8344-1889C708BE87}
extern const GUID g_guid_cfg_cui_warning_reported;
FOOGUIDDECL const GUID g_guid_cfg_cui_warning_reported = 
{ 0xfaef770e, 0xd8e7, 0x43cf,{0xa1, 0x1d, 0x87, 0xcb, 0xd5, 0x2b, 0x3f, 0xfa} };

// {208AB7F8-4F89-4577-BA4D-F1E7990D83FD}
extern const GUID g_guid_mainmenu_help;
FOOGUIDDECL const GUID g_guid_mainmenu_help = 
{ 0x208ab7f8, 0x4f89, 0x4577, { 0xba, 0x4d, 0xf1, 0xe7, 0x99, 0xd, 0x83, 0xfd } };
