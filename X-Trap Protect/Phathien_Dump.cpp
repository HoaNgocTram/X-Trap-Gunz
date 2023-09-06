
#include "StdAfx.h"
#include "Dump.h"

void Msg_D_Br(){
	MessageBoxA(NULL,"D-Scan\n\nConte�do suspeito detectado!", phathien.Ten_Cua_So, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
ExitProcess(0);
}
void Msg_D_En(){
	MessageBoxA(NULL,"D-Scan\n\nAn illegal choice haas been detected!", phathien.Ten_Cua_So, MB_SERVICE_NOTIFICATION | MB_ICONWARNING);
ExitProcess(0);
}

void Msg_D_Page(){
	Sleep (2000);
    ShellExecute(NULL, "open", phathien.HackSplash_WebSite, NULL, NULL, SW_SHOWNORMAL);
	}

////////////////////////////////////////////////////////////////////////////////////////////////
// Dump scan - D-Scan 
//{0x000000, {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}}, //xxxxx
// Use [utilities/Dump generator.exe] ( with adminitrator rights ) to get app's dump's 
////////////////////////////////////////////////////////////////////////////////////////////////
MDump mDumps[] = {	
{0x4017D0, {0x55, 0x8b, 0xec, 0x6a, 0xff, 0x68, 0x08, 0x51}}, // Mu Window (testes)
{0xD1A35C, {0xe9, 0x70, 0xfe, 0xff, 0xff, 0xb8, 0x08, 0xce}}, // DARKTERRO
{0x40BD6E, {0xFF, 0x25, 0x00, 0x20, 0x40, 0x00, 0x00, 0x00}}, // #### Privado #### AutoPot ####  With ASLR active
{0x4A9BF6, {0xe8, 0x0E, 0xAE, 0x00, 0x00, 0xE9, 0x79, 0xFE}}, //Process Explorer Portable (testes)
{0x8BBBC0, {0x6C, 0x05, 0xE0, 0xDB, 0x8B, 0x00, 0x00, 0xE8}}, //Cheat Engine 6.4 (testes)
{0x401000, {0xEB, 0x10, 0x66, 0x62, 0x3A, 0x43, 0x2B, 0x2B}}, //OllyDbg 1.10
{0x407973, {0xF3, 0xA5, 0x8B, 0xCA, 0x83, 0xE1, 0x03, 0xF3}}, //OllyDbg 2.00
{0x610649, {0xBA, 0x04, 0x08, 0x61, 0x00, 0xE8, 0x65, 0x4D}}, //Cheat Engine 5.6.1
{0x435217, {0xFF, 0x15, 0xC4, 0xD6, 0x47, 0x00, 0x8B, 0xF0}}, //Shotbot
{0x4351E6, {0x8B, 0x15, 0x64, 0xF3, 0x49, 0x00, 0x6A, 0x00}}, //Novo Shotbot
{0x4039e3, {0x81, 0xEC, 0xD4, 0x02, 0x00, 0x00, 0x53, 0x55}}, //Process hacker portable
{0x44E08C, {0x64, 0x89, 0x25, 0x00, 0x00, 0x00, 0x00, 0x83}}, //WPE Pro
{0x4307BE, {0x75, 0x0A, 0x6A, 0x1C, 0xE8, 0x49, 0x01, 0x00}}, //WPE Pro
{0x4851C2, {0x75, 0x1C, 0x53, 0x8B, 0xCE, 0xFF, 0x75, 0xE4}}, //WPe Pro
{0x44397B, {0x75, 0x07, 0x8B, 0xCF, 0xE8, 0xF8, 0xF2, 0xFF}}, //WPe Pro
{0x401468, {0x74, 0x03, 0x8B, 0x6D, 0x04, 0x8B, 0x97, 0x30}}, //WPe Pro
{0x574EEC, {0xE8, 0x8B, 0xEA, 0xF1, 0xFF, 0x8D, 0x45, 0xEC}}, //Cheat Engine
{0x4CBD70, {0x8D, 0x85, 0x7C, 0xFE, 0xFF, 0xFF, 0xBA, 0x03}}, //Cheat Engine
{0x591FC0, {0xE8, 0x07, 0x23, 0xF0, 0xFF, 0x8D, 0x45, 0xEC}}, //Cheat Engine
{0x5839E7, {0x8D, 0x45, 0xB0, 0x50, 0x6A, 0x08, 0x8D, 0x85}}, //Cheat Engine
{0x4CBE2B, {0x8D, 0x55, 0xF0, 0xB9, 0x04, 0x00, 0x00, 0x00}}, //Cheat Engine
{0x5CF354, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xEC, 0x53, 0x33}}, //Cheat Engine
{0x5CF440, {0xE8, 0x37, 0xA3, 0xFC, 0xFF, 0xE8, 0x8E, 0x96}}, //Chear Engine
{0x5CF43D, {0x8D, 0x45, 0xEC, 0xE8, 0x37, 0xA3, 0xFC, 0xFF}}, //Cheat Engine
{0x5FECF4, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xEC, 0x53, 0x33}}, //Cheat Engine
{0x6105D4, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xE8, 0x53, 0x33}}, //Cheat Engine
{0x5FED5B, {0xE8, 0x10, 0xC3, 0xE9, 0xFF, 0x8B, 0x0D, 0x64}}, //Cheat Engine
{0x434460, {0xc6, 0x05, 0x60, 0xf0, 0x43, 0x00, 0x00, 0xe8}}, //Cheat Engine
{0x5674D4, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xEC, 0x53, 0x33}}, //Cheat Engine
{0x5AA16C, {0xE8, 0x13, 0x40, 0xFF, 0xFF, 0xE8, 0x86, 0x2C}}, //Cheat Engine
{0x591F94, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xEC, 0x53, 0x33}}, //Cheat Engine
{0x5CF354, {0x78, 0xAA, 0x4A, 0x00, 0x48, 0xAA, 0x4A, 0x00}}, //Cheat Engine
{0x606140, {0x8C, 0x79, 0x60, 0x00, 0xE0, 0xA8, 0x60, 0x00}}, //Cheat Engine
{0x574EC0, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xEC, 0x53, 0x33}}, //Cheat Engine
{0x40C484, {0x8B, 0x45, 0x08, 0xFF, 0x70, 0x0C, 0xFF, 0x70}}, //Cheat Engine
{0x408771, {0xEB, 0x07, 0x8B, 0x45, 0x0C, 0x33, 0xD2, 0x89}}, //Cheat Engine
{0x401704, {0x68, 0x84, 0x24, 0x40, 0x00, 0xE8, 0xEE, 0xFF}}, //MuPie
{0x401B28, {0x68, 0xD8, 0x2A, 0x40, 0x00, 0xE8, 0xF0, 0xFF}}, //MuPie
{0x4388C0, {0x00, 0x00, 0x00, 0x00, 0x00, 0x4A, 0x49, 0x4A}}, //Mupie
{0x4380F0, {0x53, 0x00, 0x5F, 0x00, 0x56, 0x00, 0x45, 0x00}}, //MuPie
{0x401350, {0xEB, 0x10, 0x66, 0x62, 0x3A, 0x43, 0x2B, 0x2B}}, //WildProxy
{0x401401, {0xE8, 0xB6, 0xFF, 0xFF, 0xFF, 0x50, 0x50, 0xFF}}, //WildProxy
{0x4013B0, {0xE8, 0xD7, 0xFF, 0xFF, 0xFF, 0xB9, 0xB4, 0x00}}, //WildProxy
{0x40133A, {0xA3, 0x8F, 0x20, 0x47, 0x00, 0x52, 0x6A, 0x00}}, //WildProxy
{0x401320, {0xEB, 0x10, 0x66, 0x62, 0x3A, 0x43, 0x2B, 0x2B}}, //WildProxy
{0x4013F9, {0xE8, 0x1A, 0x21, 0x06, 0x00, 0xA3, 0x8B, 0x90}}, //WildProxy
{0x512134, {0x75, 0x05, 0x8A, 0x16, 0x46, 0x12, 0xD2, 0x73}}, //WildProxy
{0x512014, {0xB8, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0B, 0xC0}}, //WildProxy
{0x401414, {0xEB, 0x10, 0x66, 0x62, 0x3A, 0x43, 0x2B, 0x2B}}, //WildProxy
{0x40D6EB, {0xE9, 0x0C, 0x0F, 0x00, 0x00, 0xE8, 0xAF, 0x15}}, //WildProxy
{0x41D39A, {0xEB, 0x0B, 0x0B, 0xEB, 0x0B, 0x0B, 0xEB, 0x35}}, //SpeederXP
{0x42FAA4, {0xA7, 0x62, 0x62, 0x62, 0x68, 0x68, 0x68, 0x7B}}, //SpeederXP
{0x50541A, {0xBE, 0xDE, 0xEE, 0xE2, 0x52, 0xE8, 0x6B, 0xFA}}, //SpeederXP
{0x42727A, {0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68, 0xA8, 0x7A}}, //SpeederXP
{0x5053C8, {0x68, 0x3A, 0x38, 0x21, 0xDB, 0xE8, 0xA9, 0xAB}}, //SpeederXP
{0x410086, {0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68, 0x98, 0x3D}}, //Game Speed Changer
{0x40FBB6, {0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68, 0x48, 0x3D}}, //Game Speed Changer
{0x40C0B0, {0x70, 0x6C, 0x69, 0x63, 0x61, 0x74, 0x69, 0x6F}}, //Speed Hack Simplifier
{0x40E04E, {0x53, 0x68, 0x61, 0x64, 0x6F, 0x77, 0x42, 0x65}}, //Speed Hack Simplifier
{0x402868, {0x52, 0x92, 0x3B, 0x8D, 0xD5, 0x33, 0x78, 0xB7}}, //Speed Hack Simplifier
{0x417259, {0x89, 0x42, 0xBC, 0xBA, 0x14, 0x00, 0x00, 0x80}}, //Speed Hack
{0x40134A, {0xA1, 0x8B, 0x50, 0x48, 0x00, 0xC1, 0xE0, 0x02}}, //Speed Hack
{0x40134F, {0xC1, 0xE0, 0x02, 0xA3, 0x8F, 0x40, 0x47, 0x00}}, //Speed Hack
{0x401338, {0xEB, 0x10, 0x66, 0x62, 0x3A, 0x43, 0x2B, 0x2B}}, //Speed Hack
{0x401414, {0x68, 0xA4, 0x22, 0x40, 0x00, 0xE8, 0xEE, 0xFF}}, //Speed Hack
{0x4217E0, {0x60, 0xBE, 0x00, 0xD0, 0x41, 0x00, 0x8D, 0xBE}}, //!xSpeed.net
{0x41F04A, {0x8D, 0x5D, 0x5E, 0x53, 0x50, 0xFF, 0x95, 0x49}}, //!xSpeed.net
{0x401100, {0x33, 0xC0, 0x8B, 0x04, 0x9D, 0x21, 0x79, 0x40}}, //!xSpeed.net
{0x41D4FE, {0x30, 0xB3, 0x7F, 0x4E, 0xB8, 0x85, 0x54, 0xBC}}, //!xSpeed.net
{0x41F001, {0x60, 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB}}, //!xSpeed.net
{0x4217E0, {0x60, 0xBE, 0x00 ,0xD0, 0x41, 0x00, 0x8D, 0xBE}}, //!xSpeed.net
{0x420630, {0x60, 0xBE, 0x00, 0xC0, 0x41, 0x00, 0x8D, 0xBE}}, //!xSpeed.net
{0x420001, {0x60, 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB}}, //!xSpeed.Pro
{0x426ECA, {0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68, 0x90, 0x7A}}, //Speed Gear
{0x40970E, {0x68, 0xB4, 0x98, 0x40, 0x00, 0x64, 0xA1, 0x00}}, //Speed Gear
{0x568E9A, {0x68, 0xB8, 0xF9, 0x85, 0x13, 0xE8, 0x9D, 0x53}}, //Speed Gear
{0x4011D4, {0x68, 0x50, 0x8E, 0x40, 0x00, 0xE8, 0xF0, 0xFF}}, //HackSpeed
{0x416B41, {0xE8, 0xBC, 0x57, 0x00, 0x00, 0xA3, 0xA4, 0xB2}}, //Game Speed Adjuster
{0x416AB0, {0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68, 0xC0, 0xC0}}, //Game Speed Adjuster
{0x4BCFA4, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xF0, 0x53, 0x56}}, //Xelerator
{0x430A27, {0xE9, 0x06, 0x01, 0x00, 0x00, 0x3B, 0xD1, 0x72}}, //Speed Wizard
{0x401027, {0x73, 0xE3, 0xBC, 0x49, 0x73, 0x62, 0x72, 0x4D}}, //Game Acelerator
{0x492BA6, {0x8D, 0xBE, 0x00, 0xF0, 0xF9, 0xFF, 0xC7, 0x87}}, //D-C SpeedHack
{0x4DB7C3, {0x55, 0x8B, 0xEC, 0x6A, 0xFF, 0x68, 0x20, 0x5B}}, //Game Optimizer
{0x4DD014, {0xB8, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0B, 0xC0}}, //Win Speeder
{0x401414, {0x68, 0xA4, 0x22, 0x40, 0x00, 0xE8, 0xEE, 0xFF}}, //99.62t Speed Hack
{0x4C8A60, {0x60, 0xBE, 0x00, 0x00, 0x48, 0x00, 0x8D, 0xBE}}, //Simple Net Speed
{0x492BDA, {0x75, 0x07, 0x8B, 0x1E, 0x83, 0xEE, 0xFC, 0x11}}, //Agility Hack By TopGun
{0x48A220, {0x60, 0xBE, 0x00, 0xA0, 0x45, 0x00, 0x8D, 0xBE}}, //MU-SS4 Speed Hack
{0x43250B, {0xEB, 0x02, 0x33, 0xC0, 0xC2, 0x04, 0x00, 0x83}}, //Game Speeder
{0x4320F0, {0x53, 0x00, 0x5F, 0x00, 0x56, 0x00, 0x45, 0x00}}, //Cheat Happens
{0x4340F0, {0x53, 0x00, 0x5F, 0x00, 0x56, 0x00, 0x45, 0x00}}, //Cheat Happens
{0x4360F0, {0x53, 0x00, 0x5F, 0x00, 0x56, 0x00, 0x45, 0x00}}, //Cheat Happens
{0x440020, {0x5F, 0xE4, 0xAD, 0x60, 0x36, 0x56, 0x43, 0x4D}}, //Cheat Happens
{0x4C5F31, {0x7C, 0x23, 0x8B, 0x45, 0xFC, 0x80, 0x38, 0xC1}}, //Catastrophe
{0x4CDCEC, {0xE8, 0x83, 0x8C, 0xF3, 0xFF, 0x8B, 0x1D, 0x7C}}, //Catastrophe
{0x4CCB71, {0xA1, 0x40, 0xFD, 0x4C, 0x00, 0x8B, 0x00, 0x8B}}, //Catastrophe
{0x4CA831, {0x89, 0x55, 0xFC, 0x8B, 0x45, 0xFC, 0xE8, 0xC8}}, //Catastrophe
{0xB78341, {0x2E, 0x03, 0x00, 0x00, 0xEB, 0x02, 0x83, 0x3D}}, //ArtMoney
{0x675001, {0x60, 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB}}, //ArtMoney
{0x676001, {0x60, 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB}}, //ArtMoney
{0x677001, {0x60, 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB}}, //ArtMoney
{0x67A001, {0x60, 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB}}, //ArtMoney
{0x688001, {0x60, 0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB}}, //ArtMoney
{0x690002, {0xE8, 0x03, 0x00, 0x00, 0x00, 0xE9, 0xEB, 0x04}}, //ArtMoney
{0x448496, {0xEB, 0x18, 0x3B, 0xC6, 0x0F, 0x83, 0xEA, 0x00}}, //AutoIt
{0x47A0B8, {0xEB, 0xA6, 0xB6, 0x8A, 0x10, 0x67, 0x83, 0x73}}, //AutoIt
{0x448D18, {0xEB, 0x18, 0x3B, 0xC6, 0x0F, 0x83, 0xEA, 0x00}}, //AutoIt
{0x487F97, {0xEB, 0x89, 0xD6, 0x13, 0x95, 0x04, 0x04, 0x03}}, //AutoIt
{0x448606, {0xEB, 0x18, 0x3B, 0xC6, 0x0F, 0x83, 0xEA, 0x00}}, //AutoIt
{0x47A1AF, {0xEB, 0x4F, 0xBE, 0x55, 0xBB, 0x65, 0xF3, 0x43}}, //AutoIt
{0x45016A, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x49910D, {0xEB, 0x07, 0x98, 0x55, 0x60, 0x58, 0x66, 0x56}}, //AutoIt
{0x450101, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x48C718, {0xEB, 0x83, 0x4D, 0x3F, 0x16, 0x5C, 0x6D, 0x5A}}, //AutoIt
{0x451E9F, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x498E11, {0xEB, 0xE1, 0x98, 0xE0, 0x95, 0xCD, 0x34, 0x4E}}, //AutoIt
{0x451AEB, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x48CCE6, {0xEB, 0x6D, 0x01, 0x09, 0x2F, 0x15, 0xDF, 0x25}}, //AutoIt
{0x4990CA, {0xEB, 0x34, 0x4D, 0xEB, 0x89, 0x0D, 0xD3, 0x01}}, //AutoIt
{0x48D4B0, {0xEB, 0x5F, 0x04, 0x04, 0x03, 0x83, 0x12, 0x04}}, //AutoIt
{0x4534AF, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x49B222, {0xEB, 0x75, 0xB5, 0x4C, 0xFB, 0x22, 0x6C, 0xF3}}, //AutoIt
{0x4530CC, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x48E26C, {0xEB, 0x2D, 0xD4, 0x03, 0x47, 0x6B, 0x1A, 0x47}}, //AutoIt
{0x4543BF, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x498F1C, {0xEB, 0xDF, 0x11, 0xC1, 0xC2, 0x99, 0x76, 0xC3}}, //AutoIt
{0x45419A, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x48D4D5, {0xEB, 0x26, 0x1A, 0xC8, 0xDE, 0x84, 0x47, 0x37}}, //AutoIt
{0x45435F, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x45439F, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x499278, {0xEB, 0x7F, 0x4D, 0xEE, 0xE1, 0x50, 0xD7, 0x66}}, //AutoIt
{0x45417A, {0xEB, 0x06, 0x3B, 0xC6, 0x7D, 0x07, 0x8B, 0xC6}}, //AutoIt
{0x48D4D6, {0xEB, 0x84, 0x47, 0x37, 0xC2, 0x8D, 0x89, 0x06}}, //AutoIt
{0x401DA4, {0xEB, 0xAE, 0x8B, 0x13, 0x8D, 0x04, 0x42, 0xEB}}, //AutoIt
{0x46A104, {0xE9, 0xE3, 0xDF, 0xFF, 0xFF, 0xBE, 0x5E, 0x00}}, //AutoIt
{0x12C5B8, {0x75, 0x07, 0x8B, 0x1E, 0x83, 0xEE, 0xFC, 0x11}}, //UoPilot
{0x4F3590, {0x60, 0xBE, 0x00, 0x10, 0x4A, 0x00, 0x8D, 0xBE}}, //UoPilot
{0x56C5C6, {0x8D, 0xBE, 0x00, 0x60, 0xF0, 0xFF, 0x57, 0x83}}, //UoPilot
{0x12C596, {0x8D, 0xBE, 0x00, 0x20, 0xF4, 0xFF, 0xC7, 0x87}}, //UoPilot
{0x569096, {0x8D, 0xBE, 0x00, 0x70, 0xF0, 0xFF, 0x57, 0x83}}, //UoPilot
{0x4E5586, {0x8D, 0xBE, 0x00, 0xA0, 0xF6, 0xFF, 0xC7, 0x87}}, //UoPilot
{0x579646, {0x8D, 0xBE, 0x00, 0xB0, 0xEF, 0xFF, 0x57, 0x83}}, //UoPilot
{0x44EB02, {0xE8, 0xC5, 0xC0, 0x00, 0x00, 0xE9, 0x78, 0xFE}}, //Process Explorer
{0xCD3546, {0x6A, 0x1C, 0x89, 0x4C, 0x24, 0x2C, 0x8B, 0xC8}}, //Process Explorer
{0x40F832, {0x8D, 0x85, 0xF0, 0xFD, 0xFF, 0xFF, 0x50, 0x8D}}, //Hide Toolz
{0x41155C, {0x55, 0x8B, 0xEC, 0x83, 0xC4, 0xF0, 0xB8, 0x84}}, //Hide Toolz
{0x48C000, {0xFC, 0xCF, 0xAB, 0xE7, 0x6D, 0x3A, 0x89, 0xBC}}, //Lipsum
{0x4052BB, {0x00, 0x00, 0x0A, 0x73, 0x90, 0x00, 0x00, 0x0A}}, //Lipsum
{0x49101F, {0xEA, 0xD3, 0xC6, 0x78, 0x03, 0x79, 0x01, 0x75}}, //Ultimate Cheat
{0x4A851C, {0x40, 0xAE, 0x80, 0x7C, 0x41, 0xB7, 0x80, 0x7C}}, //Ultimate Cheat
{0x43FC66, {0xEB, 0xE8, 0x8A, 0x06, 0x46, 0x88, 0x07, 0x47}}, //Mush
{0x43FC4F, {0x90, 0x61, 0xBE, 0x00, 0x90, 0x43, 0x00, 0x8D}}, //Mush
{0x534000, {0x8D, 0x8D, 0x51, 0x2E, 0x40, 0x00, 0x50, 0x51}}, //Godlike
{0x555030, {0x74, 0x37, 0x8D, 0x85, 0xFB, 0x2C, 0x40, 0x00}}, //Godlike
{0x496CA6, {0x8D, 0xBE, 0x00, 0xC0, 0xF9, 0xFF, 0xC7, 0x87}}, //D-C DupeHack
{0xAF4014, {0xB8, 0x00, 0x00, 0x00, 0x00, 0x60, 0x0B, 0xC0}}  //FunnyZhyper
};

bool DumpScan()
{
	bool bReturn = false;

	HANDLE hProc = CreateToolhelp32Snapshot( TH32CS_SNAPPROCESS, 0 );

	if( hProc != INVALID_HANDLE_VALUE ){
		PROCESSENTRY32 mP32;

		mP32.dwSize = sizeof( mP32 );

		Process32First( hProc, &mP32 );

		do {
		
			HANDLE hProcess = OpenProcess( PROCESS_ALL_ACCESS, false, mP32.th32ProcessID );
			if( hProcess != NULL ){
				for( int i = 0; i < ( sizeof(mDumps) / sizeof(MDump) ); i++ ){
					unsigned char pBytes[8];
					__w64 unsigned long pBytesRead;

					if( ReadProcessMemory( hProcess, (LPCVOID)mDumps[i].dwAddress, (LPVOID)pBytes, 8, &pBytesRead ) ){
						if( pBytesRead == 8 ){							
							if( !memcmp( pBytes, mDumps[i].pBytes, 8 ) ){
								bReturn = true;
			       TerminateProcess(hProcess,NULL); // Close hack window
    if (phathien.Log_Txt_Hack == 1){
    ofstream out("Xtrap/Log.txt", ios::app);
	out << "\nX-TRAP:     ", out <<   mP32.szExeFile;
	out.close();
}
//	if (phathien.Hack_Log_Upload == 1){
// time_t rawtime;
// struct tm * timeinfo;
// time (&rawtime);
// timeinfo = localtime (&rawtime);
//     ofstream out("Log", ios::app);
//	 out <<"\nLocal Time: ", out << asctime(timeinfo);
//       out <<"D-Scan:     ", out << mP32.szExeFile;
//	 out << "\n= = = = = = = = = = = = = = = = = = =";
//	 out.close();
// SetFileAttributes("Log", FILE_ATTRIBUTE_HIDDEN); // Set file as a HIDDEN file
//}
    if (phathien.Message_Warning_En == 1){
    CreateThread(NULL,NULL,LPTHREAD_START_ROUTINE(Msg_D_En),NULL,0,0);
	Sleep(3000); 
	ExitProcess(0);	
	}
    if (phathien.Message_Warning_En == 2){
    CreateThread(NULL,NULL,LPTHREAD_START_ROUTINE(Msg_D_Br),NULL,0,0);
	Sleep(3000); 
	ExitProcess(0);	
	}
	if (phathien.Message_Warning_En == 3){
	CreateThread(NULL,NULL,LPTHREAD_START_ROUTINE(Msg_D_Page),NULL,0,0);
	Sleep(3000); 
	ExitProcess(0);	
	}
	if (phathien.Message_Warning_En == 4){
    CreateThread(NULL,NULL,LPTHREAD_START_ROUTINE(Kill_From_Message_Warning),NULL,0,0); 
    MessageBoxA(NULL, mP32.szExeFile, "X-TRAP", MB_SERVICE_NOTIFICATION | MB_ICONSTOP); 
    ExitProcess(0);
	}
	if (phathien.Message_Warning_En == 0){
	ExitProcess(0);
	}
							}
						}
					}
				}			
				CloseHandle( hProcess );
			}
		} while( Process32Next( hProc, &mP32 ) );
	}
	CloseHandle( hProc );
	return bReturn;
}

void D_Scan(){
	if ( phathien.Anti_Kill_Scans == 1){
again:
    DDump(); //Antikill
    DumpScan();
    Sleep(phathien.PHDump_Thoigian);
    goto again;
	}
	else
	{
again2:
    DumpScan();
    Sleep(phathien.PHDump_Thoigian);
    goto again2;
}
}

int ProtectionDump(){
	HANDLE hToken;
    LUID luid;
    TOKEN_PRIVILEGES tkp;
    if(!OpenProcessToken( GetCurrentProcess(), TOKEN_ADJUST_PRIVILEGES | TOKEN_QUERY, &hToken ))
    {
		//cout << "1 false" <<endl;
        return FALSE;		
    }
    if(!LookupPrivilegeValue( NULL, SE_DEBUG_NAME, &luid ))
    {
		//cout << "2 false" <<endl;
       return FALSE;	
    }
    tkp.PrivilegeCount = 1;
    tkp.Privileges[0].Luid = luid;
    tkp.Privileges[0].Attributes = SE_PRIVILEGE_ENABLED;
    if(!AdjustTokenPrivileges( hToken, false, &tkp, sizeof( tkp ), NULL, NULL ))
    {
		//cout << "3 false" <<endl;
        return FALSE;	
    }
    if(!CloseHandle( hToken ))
    {
		//cout << "4 false" <<endl;
        return FALSE;		
    }
	//cout << " true" <<endl;
	CreateThread(NULL,NULL,LPTHREAD_START_ROUTINE(D_Scan),NULL,0,0);
	    return TRUE;
}





