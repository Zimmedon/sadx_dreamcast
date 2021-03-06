#include <SADXModLoader.h>
//Stuff

struct ChaoTreeSpawn
{
	NJS_VECTOR a;
	NJS_VECTOR b;
	NJS_VECTOR c;
	NJS_VECTOR d;
	NJS_VECTOR e;
	NJS_VECTOR f;
	NJS_VECTOR g;
	NJS_VECTOR h;
	NJS_VECTOR i;
	NJS_VECTOR j;
};

FunctionPointer(void, SetChaoLandTableX, (LandTable *geo), 0x0043A4C0);
FunctionPointer(void, sub_715700, (int a1), 0x00715700);
FunctionPointer(void, sub_715730, (int a1, int a2), 0x00715730);
DataPointer(EntityData1*, Camera_Data1, 0x03B2CBB0);
DataPointer(int, FramerateSetting, 0x0389D7DC);
DataArray(NJS_VECTOR, Chao_SSChaoSpawnPoints, 0x033A0AF8, 16);
DataArray(NJS_VECTOR, Chao_ECChaoSpawnPoints, 0x033A0BB8, 16);
DataArray(NJS_VECTOR, Chao_MRChaoSpawnPoints, 0x033A0C78, 16);
DataArray(ChaoTreeSpawn, ChaoTreeSpawns, 0x033A0D78, 3);
DataArray(NJS_TEXLIST, ChaoTexLists, 0x033A1038, 7);

static int chaoracewater = 55;
static int ssgardenwater = 0;
static int ecgardensand = 64;
static int ecgardenwater = 54;
static int mrgardenwater = 36;


//MR Garden DLL functions
void __cdecl sub_72A790()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_daytime, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Daytime, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_DAYTIME");
	PrintDebug("ChaoStgGarden02MR_Daytime _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_daytime = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Daytime = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x80000420;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A820()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_EVENING");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_evening, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Evening, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Evening _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_evening = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Evening = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x00000000;
	collist_0000F778[2].Flags = 0x80000420;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

void __cdecl sub_72A8B0()
{
	FunctionPointer(void, sub_745A20, (NJS_TEX*, int), 0x745A20);
	HMODULE handle = GetModuleHandle(L"CHAOSTGGARDEN02MR_NIGHT");
	DataPointer(NJS_TEXLIST*, texlist_garden02mr_night, 0x03CA6E84);
	DataPointer(LandTable*, objLandTableGarden02_Night, 0x03CA6E88);
	DataPointer(int, dword_3CA6E8C, 0x3CA6E8C);
	PrintDebug("ChaoStgGarden02MR_Night _prolog\n");
	dword_3CA6E8C = (int)GetProcAddress(handle, "stg_garden02_mr_objects");
	texlist_garden02mr_night = (NJS_TEXLIST *)&texlist_mrgarden;
	objLandTableGarden02_Night = (LandTable *)&landtable_0000FD3C;
	collist_0000F778[0].Flags = 0x00000000;
	collist_0000F778[1].Flags = 0x80000420;
	collist_0000F778[2].Flags = 0x00000000;
	sub_745A20((NJS_TEX*)&uv_0000EC54, 48);
}

//Garden load functions
void __cdecl LoadSSGardenX()
{
	PrintDebug("ChaoStgGarden00SS Prolog begin\n");
	CurrentLevel = 39;
	LoadPVM("OBJ_SS", (NJS_TEXLIST*)0x02AA4BF8);
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden00SS_Load);
	LoadObjects_SS();
	SetChaoLandTable(&landtable_00011DD4);
	PrintDebug("ChaoStgGarden00SS Prolog end\n");
}

void __cdecl LoadECGardenX()
{
	PrintDebug("ChaoStgGarden01EC Prolog begin\n");
	CurrentLevel = 40;
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden01EC_Load);
	LoadObjects_EC();
	SetChaoLandTable(&landtable_0000DF3C);
	PrintDebug("ChaoStgGarden01EC Prolog end\n");
}

void __cdecl LoadMRGardenX()
{
	DataPointer(LandTable*, LandTable_ChaoGardenMR, 0x03CA6E88);
	DataArray(void*, ModuleDestructors, 0x03CA6E70, 4);
	FunctionPointer(void, ChaoGardenMR_SetLandTable_Evening, (), 0x0072A820);
	FunctionPointer(void, ChaoGardenMR_SetLandTable_Night, (), 0x0072A8B0);
	FunctionPointer(void, ChaoGardenMR_SetLandTable_Day, (), 0x0072A790);
	int v0; // eax@1
	int v1; // eax@2
	PrintDebug("ChaoStgGarden02MR Prolog\n");
	LoadObject(LoadObj_Data1, 2, ChaoStgGarden02MR_Load);
	LoadObjects_MR();
	v0 = GetTimeOfDay();
	CurrentLevel = 41;
	if (v0)
	{
		v1 = v0 - 1;
		if (!v1)
		{
			LoadGameDLL("ChaoStgGarden02MR_Evening", 2);
			ChaoGardenMR_SetLandTable_Evening();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Evening_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
		if (v1 == 1)
		{
			LoadGameDLL("ChaoStgGarden02MR_Night", 2);
			ChaoGardenMR_SetLandTable_Night();
			ModuleDestructors[1] = Print_ChaoStgGarden02MR_Night_epilog;
			SetChaoLandTable(LandTable_ChaoGardenMR);
			return;
		}
	}
	LoadGameDLL("ChaoStgGarden02MR_Daytime", 2);
	ChaoGardenMR_SetLandTable_Day();
	ModuleDestructors[1] = Print_ChaoStgGarden02MR_Daytime_epilog;
	SetChaoLandTable(LandTable_ChaoGardenMR);
}

//Chao Race door
void __cdecl LoadChaoRaceDoor(ObjectMaster *a1)
{
	ObjectMaster *v1; // eax@1
	EntityData1 *v2; // ecx@2
	ObjectMaster *v1x; // eax@1
	EntityData1 *v2x; // ecx@2
	v1 = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1)
	{
		v2 = v1->Data1;
		v2->Position.x = 0;
		v2->Position.y = 0;
		v2->Position.z = -157;
	}
	v1x = LoadChildObject(LoadObj_Data1, OF_SS11, a1);
	if (v1x)
	{
		v2x = v1x->Data1;
		v2x->Position.x = 0;
		v2x->Position.y = 0;
		v2x->Position.z = -247;
	}
}

//Elevator
void __cdecl sub_4145D0(unsigned __int8 a1, unsigned __int8 a2)
{
	DataPointer(int, CutsceneMode, 0x03B22E1C);
	DataPointer(int, NextAct, 0x03B22E18);
	if (CurrentLevel != 39)
	{
		CutsceneMode = 3;
		NextLevel = a1;
		NextAct = a2;
	}
	else
	{
		SetLevelEntrance(4);
		sub_715730(26, 4);
		NextLevel = 26;
		NextAct = 4;
		CutsceneMode = 3;
	}
}

void cdecl SetElevatorTexlist()
{
	if (CurrentLevel == 39)
	{
		njSetTexture((NJS_TEXLIST*)0x02AA4BF8); //OBJ_SS
	}
	else SetTextureToLevelObj();
}

//Function to set texture/texlist for garden transporters
void SetTransporterTexture()
{
	DataPointer(PVMEntry *, ADV01C_TEXLISTS, 0x038F6EC8);
	HMODULE handle = GetModuleHandle(L"ADV01CMODELS");
	NJS_MODEL_SADX **ADV01C_MODELS = (NJS_MODEL_SADX **)GetProcAddress(handle, "___ADV01C_MODELS");
	if (CurrentLevel != 32) njSetTexture((NJS_TEXLIST*)0x033A0788); //CHAO_OBJECT
	else njSetTexture(ADV01C_TEXLISTS[6].TexList);
	if (CurrentLevel != 32) ADV01C_MODELS[32]->mats[0].attr_texId = 68;
	else ADV01C_MODELS[32]->mats[0].attr_texId = 1;
}

//Name machine
void cdecl NameMachineTexlist()
{
	njSetTexture((NJS_TEXLIST*)0x033A0788); //CHAO_OBJECT
}

void __cdecl LoadChaoNameMachineX(NJS_VECTOR *position, int yrotation)
{
	EntityData1 *ent; // eax@1
	ObjectMaster *obj;
	ent = LoadObject(LoadObj_Data1, 2, Chao_Name_Machine_Load)->Data1;
	if (CurrentLevel == 39)
	{
		ent->Position.x = 178.03f;
		ent->Position.y = 8.56f;
		ent->Position.z = -128.44f;
		ent->Rotation.y = 0xD7B8;
	}
	if (CurrentLevel == 40)
	{
		ent->Position.x = 131.67f;
		ent->Position.y = 2.6f;
		ent->Position.z = -204.28f;
		ent->Rotation.x = 0xFFB0;
		ent->Rotation.y = 0xAFD6;
		ent->Rotation.z = 0xFFDE;
	}
	if (CurrentLevel == 41)
	{
		ent->Position.x = 239.4137f;
		ent->Position.y = 15.10273f;
		ent->Position.z = -45.98477f;
		ent->Rotation.x = 0xFFDC;
		ent->Rotation.y = 0xC1A8;
		ent->Rotation.z = 0xFFF2;
	}
}

//Chao egg coloring function

void __cdecl sub_78AC80X(NJS_CNK_MODEL *a1, int a2)
{
	__int16 v2; // ax@4
	__int16 v3; // ax@5
	int v4; // ecx@6
	__int16 v5; // ax@8
	FunctionPointer(void, DisableChunkMaterialFlags, (), 0x0078A2E0);
	FunctionPointer(void, EnableChunkMaterialFlags, (), 0x0078A2D0);
	FunctionPointer(__int16, GetChunkTextureIndex, (NJS_CNK_MODEL *a1), 0x0078ABE0);
	FunctionPointer(void, SetChunkTextureIndexA, (Uint32 a1), 0x0078A300);
	FunctionPointer(void, SetChunkTextureIndexB, (Uint32 index), 0x0078A310);
	FunctionPointer(void, SetChunkMaterialFlags, (Uint32 flag), 0x0078A2F0);
	FunctionPointer(void, sub_78A320, (int a1), 0x0078A320);
	DataArray(int, off_389D780, 0x389D780, 4);
	DataArray(int, off_389D7B8, 0x389D7B8, 4);
	DataArray(int, dword_389D7B8, 0x389D7B8, 6);
	DataPointer(D3DMATRIX, stru_389D7E8, 0x0389D7E8);
	DataArray(NJS_TEXLIST, ChaoTexLists, 0x033A1038, 7);
	DataArray(int, dword_389D828, 0x389D828, 13);
	if (a2 == SADXEggColour_Black_TwoTone || a2 == SADXEggColour_BlackShiny_TwoTone)
	{
		WriteData((char*)0x03601516, 0x8F, 1);
		WriteData((char*)0x036009B6, 0x8F, 1);
		WriteData((char*)0x03600F4E, 0x8F, 1);
	}
	else
	{
		WriteData((char*)0x03601516, 0x3D, 1);
		WriteData((char*)0x036009B6, 0x3D, 1);
		WriteData((char*)0x03600F4E, 0x3D, 1);
	}
	switch (a2)
	{
	case SADXEggColour_Black_TwoTone:
	case SADXEggColour_Normal:
		DisableChunkMaterialFlags();
		break;
	case SADXEggColour_Yellow_MonoTone:
	case SADXEggColour_White_MonoTone:
	case SADXEggColour_Brown_MonoTone:
	case SADXEggColour_Aqua_MonoTone:
	case SADXEggColour_Pink_MonoTone:
	case SADXEggColour_Blue_MonoTone:
	case SADXEggColour_Grey_MonoTone:
	case SADXEggColour_Green_MonoTone:
	case SADXEggColour_Red_MonoTone:
	case SADXEggColour_LightGreen_MonoTone:
	case SADXEggColour_Purple_MonoTone:
	case SADXEggColour_Orange_MonoTone:
	case SADXEggColour_Black_MonoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(9u);
		sub_78A320(dword_389D828[a2 - SADXEggColour_Yellow_MonoTone]);
		break;
	case SADXEggColour_Yellow_TwoTone:
	case SADXEggColour_White_TwoTone:
	case SADXEggColour_Brown_TwoTone:
	case SADXEggColour_Aqua_TwoTone:
	case SADXEggColour_Pink_TwoTone:
	case SADXEggColour_Blue_TwoTone:
	case SADXEggColour_Green_TwoTone:
	case SADXEggColour_Red_TwoTone:
	case SADXEggColour_LightGreen_TwoTone:
	case SADXEggColour_Purple_TwoTone:
	case SADXEggColour_Orange_TwoTone:
	case SADXEggColour_Grey_TwoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(8u);
		v2 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v2);
		sub_78A320(dword_389D828[a2 - SADXEggColour_Yellow_TwoTone]);
		break;
	case SADXEggColour_NormalShiny:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(6u);
		Direct3D_SetTexList(ChaoTexLists);
		v3 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v3);
		SetChunkTextureIndexB(0x22u);
		break;
	case SADXEggColour_YellowShiny_MonoTone:
	case SADXEggColour_WhiteShiny_MonoTone:
	case SADXEggColour_BrownShiny_MonoTone:
	case SADXEggColour_AquaShiny_MonoTone:
	case SADXEggColour_PinkShiny_MonoTone:
	case SADXEggColour_BlueShiny_MonoTone:
	case SADXEggColour_GreyShiny_MonoTone:
	case SADXEggColour_GreenShiny_MonoTone:
	case SADXEggColour_RedShiny_MonoTone:
	case SADXEggColour_LightGreenShiny_MonoTone:
	case SADXEggColour_PurpleShiny_MonoTone:
	case SADXEggColour_OrangeShiny_MonoTone:
	case SADXEggColour_BlackShiny_MonoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(15u);
		Direct3D_SetTexList(ChaoTexLists);
		v4 = dword_389D828[a2 - SADXEggColour_YellowShiny_MonoTone];
		goto LABEL_8;
	case SADXEggColour_YellowShiny_TwoTone:
	case SADXEggColour_WhiteShiny_TwoTone:
	case SADXEggColour_BrownShiny_TwoTone:
	case SADXEggColour_AquaShiny_TwoTone:
	case SADXEggColour_PinkShiny_TwoTone:
	case SADXEggColour_BlueShiny_TwoTone:
	case SADXEggColour_GreyShiny_TwoTone:
	case SADXEggColour_GreenShiny_TwoTone:
	case SADXEggColour_RedShiny_TwoTone:
	case SADXEggColour_LightGreenShiny_TwoTone:
	case SADXEggColour_PurpleShiny_TwoTone:
	case SADXEggColour_OrangeShiny_TwoTone:
	case SADXEggColour_BlackShiny_TwoTone:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(0xEu);
		Direct3D_SetTexList(ChaoTexLists);
		v4 = off_389D780[a2 + 1];
	LABEL_8:
		sub_78A320((int)v4);
		v5 = GetChunkTextureIndex(a1);
		SetChunkTextureIndexA((unsigned __int16)v5);
		SetChunkTextureIndexB(0x22u);
		break;
	case SADXEggColour_YellowJewel:
	case SADXEggColour_WhiteJewel:
	case SADXEggColour_PinkJewel:
	case SADXEggColour_BlueJewel:
	case SADXEggColour_GreenJewel:
	case SADXEggColour_PurpleJewel:
	case SADXEggColour_AquaJewel:
	case SADXEggColour_RedJewel:
	case SADXEggColour_BlackJewel:
	case SADXEggColour_LightGreenJewel:
	case SADXEggColour_OrangeJewel:
	case SADXEggColour_Pearl:
	case SADXEggColour_Metal1:
	case SADXEggColour_Metal2:
	case SADXEggColour_Glass:
		EnableChunkMaterialFlags();
		SetChunkMaterialFlags(4u);
		Direct3D_SetTexList(ChaoTexLists);
		sub_78A320(-1);
		SetChunkTextureIndexA(a2 - 36);
		break;
	default:
		return;
	}
}


