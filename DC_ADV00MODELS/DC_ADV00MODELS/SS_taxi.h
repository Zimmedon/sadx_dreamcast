#include "stdafx.h"
#include "SADXModLoader.h"

NJS_MATERIAL matlist_001A195C[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_tirepattern_ss, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001A1984[] = {
	0x8000u | 18, 1, 0, 3, 2, 5, 4, 7, 6, 9, 8, 11, 10, 13, 12, 15, 14, 1, 0,
	0x8000u | 18, 17, 16, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16
};

Sint16 poly_001A19D0[] = {
	0x8000u | 8, 17, 31, 19, 29, 21, 27, 23, 25,
	0x8000u | 8, 9, 11, 7, 13, 5, 15, 3, 1
};

NJS_TEX uv_001A19F4[] = {
	{ 1783, 0 },
	{ 1783, 254 },
	{ 1536, 0 },
	{ 1536, 254 },
	{ 1280, 0 },
	{ 1280, 254 },
	{ 1024, 0 },
	{ 1024, 254 },
	{ 768, 0 },
	{ 768, 254 },
	{ 512, 0 },
	{ 512, 254 },
	{ 256, 0 },
	{ 256, 254 },
	{ 0 },
	{ 0, 254 },
	{ -256, 0 },
	{ -256, 254 },
	{ -256, 255 },
	{ -256, 0 },
	{ 0, 255 },
	{ 0 },
	{ 256, 255 },
	{ 256, 0 },
	{ 512, 255 },
	{ 512, 0 },
	{ 768, 255 },
	{ 768, 0 },
	{ 1024, 255 },
	{ 1024, 0 },
	{ 1280, 255 },
	{ 1280, 0 },
	{ 1536, 255 },
	{ 1536, 0 },
	{ 1783, 255 },
	{ 1783, 0 }
};

NJS_TEX uv_001A1A84[] = {
	{ 510, 0 },
	{ 435, 180 },
	{ 435, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 74, 180 },
	{ 74, -180 },
	{ 0 },
	{ 0 },
	{ 74, 180 },
	{ 74, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 435, 180 },
	{ 435, -180 },
	{ 510, 0 }
};

NJS_MESHSET_SADX meshlist_001A1AC4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001A1984, NULL, NULL, NULL, uv_001A19F4, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_001A19D0, NULL, NULL, NULL, uv_001A1A84, NULL }
};

NJS_VECTOR vertex_001A1AF4[] = {
	{ 3.262158f, 0.000002f, -6.797375f },
	{ 3.262158f, 0.000001f, -9.337517f },
	{ 2.306698f, 2.30669f, -6.797375f },
	{ 2.306698f, 2.30669f, -9.337517f },
	{ 0.000008999999f, 3.262151f, -6.797375f },
	{ 0.000008999999f, 3.26215f, -9.337517f },
	{ -2.30668f, 2.30669f, -6.797375f },
	{ -2.30668f, 2.306689f, -9.337517f },
	{ -3.262143f, 0.000002f, -6.797375f },
	{ -3.262143f, 0.000001f, -9.337517f },
	{ -2.30668f, -2.306687f, -6.797375f },
	{ -2.30668f, -2.306688f, -9.337517f },
	{ 0.000008999999f, -3.262148f, -6.797375f },
	{ 0.000008999999f, -3.262149f, -9.337517f },
	{ 2.306696f, -2.306687f, -6.797374f },
	{ 2.306696f, -2.306688f, -9.337517f },
	{ 3.262158f, 0.000002f, 6.804572f },
	{ 3.262158f, 0.000001f, 9.344712f },
	{ 2.306698f, 2.30669f, 6.804572f },
	{ 2.306698f, 2.30669f, 9.344712f },
	{ 0.000008999999f, 3.262151f, 6.804572f },
	{ 0.000008999999f, 3.26215f, 9.344712f },
	{ -2.30668f, 2.30669f, 6.804572f },
	{ -2.30668f, 2.306689f, 9.344712f },
	{ -3.262143f, 0.000002f, 6.804572f },
	{ -3.262143f, 0.000001f, 9.344712f },
	{ -2.30668f, -2.306687f, 6.804572f },
	{ -2.30668f, -2.306688f, 9.344712f },
	{ 0.000008999999f, -3.262148f, 6.804572f },
	{ 0.000008999999f, -3.262149f, 9.344712f },
	{ 2.306696f, -2.306687f, 6.804572f },
	{ 2.306696f, -2.306688f, 9.344712f }
};

NJS_VECTOR normal_001A1C74[] = {
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630262f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, -0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630262f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, 0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630262f }
};

NJS_MODEL_SADX attach_001A1DF4 = { vertex_001A1AF4, normal_001A1C74, LengthOfArray(vertex_001A1AF4), meshlist_001A1AC4, matlist_001A195C, LengthOfArray(meshlist_001A1AC4), LengthOfArray(matlist_001A195C), { 0.000008f, 0.000001f, 0.003598f }, 9.894343f, NULL };

NJS_OBJECT object_001A1E1C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001A1DF4, 11.82634f, -5.518235f, -0.003598f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001A1E50[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_tirepattern_ss, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_tyre_all, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001A1E78[] = {
	0x8000u | 18, 0, 1, 14, 15, 12, 13, 10, 11, 8, 9, 6, 7, 4, 5, 2, 3, 0, 1,
	0x8000u | 18, 17, 16, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, 19, 18, 17, 16
};

Sint16 poly_001A1EC4[] = {
	0x8000u | 8, 17, 31, 19, 29, 21, 27, 23, 25,
	0x8000u | 8, 9, 11, 7, 13, 5, 15, 3, 1
};

NJS_TEX uv_001A1EE8[] = {
	{ -256, 254 },
	{ -256, 0 },
	{ 0, 254 },
	{ 0 },
	{ 256, 254 },
	{ 256, 0 },
	{ 512, 254 },
	{ 512, 0 },
	{ 768, 254 },
	{ 768, 0 },
	{ 1024, 254 },
	{ 1024, 0 },
	{ 1280, 254 },
	{ 1280, 0 },
	{ 1536, 254 },
	{ 1536, 0 },
	{ 1783, 254 },
	{ 1783, 0 },
	{ 0, 255 },
	{ 0 },
	{ 256, 255 },
	{ 256, 0 },
	{ 512, 255 },
	{ 512, 0 },
	{ 768, 255 },
	{ 768, 0 },
	{ 1024, 255 },
	{ 1024, 0 },
	{ 1280, 255 },
	{ 1280, 0 },
	{ 1536, 255 },
	{ 1536, 0 },
	{ 1792, 255 },
	{ 1792, 0 },
	{ 2040, 255 },
	{ 2040, 0 }
};

NJS_TEX uv_001A1F78[] = {
	{ 510, 0 },
	{ 435, 180 },
	{ 435, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 74, 180 },
	{ 74, -180 },
	{ 0 },
	{ 0 },
	{ 74, 180 },
	{ 74, -180 },
	{ 255, 255 },
	{ 255, -254 },
	{ 435, 180 },
	{ 435, -180 },
	{ 510, 0 }
};

NJS_MESHSET_SADX meshlist_001A1FB8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_001A1E78, NULL, NULL, NULL, uv_001A1EE8, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_001A1EC4, NULL, NULL, NULL, uv_001A1F78, NULL }
};

NJS_VECTOR vertex_001A1FE8[] = {
	{ 3.262158f, 0.000002f, -6.797375f },
	{ 3.262158f, 0.000001f, -9.337517f },
	{ 2.306698f, 2.30669f, -6.797375f },
	{ 2.306698f, 2.30669f, -9.337517f },
	{ 0.000008999999f, 3.262151f, -6.797375f },
	{ 0.000008999999f, 3.26215f, -9.337517f },
	{ -2.30668f, 2.30669f, -6.797375f },
	{ -2.30668f, 2.306689f, -9.337517f },
	{ -3.262143f, 0.000002f, -6.797375f },
	{ -3.262143f, 0.000001f, -9.337517f },
	{ -2.30668f, -2.306686f, -6.797375f },
	{ -2.30668f, -2.306687f, -9.337517f },
	{ 0.000008999999f, -3.262148f, -6.797375f },
	{ 0.000008999999f, -3.262149f, -9.337517f },
	{ 2.306696f, -2.306686f, -6.797374f },
	{ 2.306696f, -2.306687f, -9.337517f },
	{ 3.262158f, 0.000002f, 6.804572f },
	{ 3.262158f, 0.000001f, 9.344712f },
	{ 2.306698f, 2.30669f, 6.804572f },
	{ 2.306698f, 2.30669f, 9.344712f },
	{ 0.000008999999f, 3.262151f, 6.804572f },
	{ 0.000008999999f, 3.26215f, 9.344712f },
	{ -2.30668f, 2.30669f, 6.804572f },
	{ -2.30668f, 2.306689f, 9.344712f },
	{ -3.262143f, 0.000002f, 6.804572f },
	{ -3.262143f, 0.000001f, 9.344712f },
	{ -2.30668f, -2.306686f, 6.804572f },
	{ -2.30668f, -2.306687f, 9.344712f },
	{ 0.000008999999f, -3.262148f, 6.804572f },
	{ 0.000008999999f, -3.262149f, 9.344712f },
	{ 2.306696f, -2.306686f, 6.804572f },
	{ 2.306696f, -2.306687f, 9.344712f }
};

NJS_VECTOR normal_001A2168[] = {
	{ 1, 0, 0 },
	{ 0.776382f, 0, -0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, -0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, -0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, -0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, -0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, -0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, -0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, -0.630262f },
	{ 1, 0, 0 },
	{ 0.776382f, 0, 0.630262f },
	{ 0.7071069f, 0.7071069f, 0 },
	{ 0.5489849f, 0.5489849f, 0.630263f },
	{ 0, 1, 0 },
	{ 0, 0.776382f, 0.630263f },
	{ -0.707106f, 0.7071069f, 0 },
	{ -0.5489849f, 0.5489849f, 0.630263f },
	{ -1, 0, 0 },
	{ -0.776382f, 0, 0.630262f },
	{ -0.7071069f, -0.7071069f, 0 },
	{ -0.5489849f, -0.5489849f, 0.630262f },
	{ 0, -1, 0 },
	{ 0, -0.776382f, 0.630262f },
	{ 0.7071069f, -0.7071069f, 0 },
	{ 0.5489849f, -0.5489849f, 0.630262f }
};

NJS_MODEL_SADX attach_001A22E8 = { vertex_001A1FE8, normal_001A2168, LengthOfArray(vertex_001A1FE8), meshlist_001A1FB8, matlist_001A1E50, LengthOfArray(meshlist_001A1FB8), LengthOfArray(matlist_001A1E50), { 0.000008f, 0.000001f, 0.003598f }, 9.894343f, NULL };

NJS_OBJECT object_001A2310 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001A22E8, -13.67366f, -5.518235f, -0.003598f, 0, 0, 0, 1, 1, 1, NULL, &object_001A1E1C };

NJS_MATERIAL matlist_001A2344[] = {
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_ref_yellow, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_ref_crome, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_ssheadlight0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_canopy_rep3, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_light1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_check, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_hhaikikan5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_sstaxi0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_light2, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 }, { 0xFFFFFFFF }, 11, SSCARTexName_hhaikikan5, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001A240C[] = {
	4, 1, 0, 3, 2,
	4, 7, 6, 5, 4,
	3, 35, 33, 48,
	37, 154, 169, 148, 186, 185, 183, 184, 202, 49, 196, 36, 177, 35, 37, 33, 32, 45, 44, 149, 47, 185, 46, 40, 175, 170, 174, 173, 41, 38, 39, 147, 178, 179, 176, 180, 204, 199,
	0x8000u | 5, 154, 51, 148, 52, 185,
	3, 47, 44, 150,
	8, 44, 32, 150, 151, 34, 195, 39, 178,
	3, 176, 42, 204,
	3, 195, 177, 178,
	3, 179, 153, 168,
	5, 196, 42, 177, 176, 178,
	3, 151, 32, 37,
	3, 181, 198, 205,
	0x8000u | 14, 155, 169, 182, 186, 181, 183, 43, 202, 203, 196, 201, 42, 197, 204,
	6, 184, 49, 50, 48, 45, 33,
	3, 50, 45, 149,
	0x8000u | 7, 154, 172, 51, 170, 52, 40, 185,
	6, 175, 46, 174, 34, 41, 39,
	0x8000u | 7, 181, 43, 205, 203, 200, 201, 197,
	0x8000u | 7, 179, 147, 168, 38, 152, 173, 171,
	4, 62, 61, 64, 63,
	4, 68, 67, 66, 65
};

Sint16 poly_001A2554[] = {
	14, 14, 17, 16, 19, 18, 9, 8, 11, 10, 13, 12, 15, 14, 17,
	14, 27, 28, 29, 30, 31, 20, 21, 22, 23, 24, 25, 26, 27, 28,
	4, 163, 162, 161, 160,
	4, 165, 164, 167, 166,
	3, 206, 140, 141,
	0x8000u | 5, 140, 139, 206, 142, 141,
	0x8000u | 5, 137, 209, 210, 212, 138,
	5, 144, 143, 207, 146, 145,
	3, 145, 144, 207,
	7, 199, 204, 156, 197, 158, 200, 205,
	3, 198, 159, 205,
	0x8000u | 6, 205, 158, 159, 156, 157, 199,
	3, 153, 132, 168,
	0x8000u | 6, 168, 131, 132, 133, 134, 155,
	7, 155, 169, 133, 154, 131, 152, 168,
	0x8000u | 5, 136, 213, 211, 208, 135
};

Sint16 poly_001A2630[] = {
	3, 19, 17, 9,
	5, 17, 15, 9, 13, 11,
	5, 31, 21, 27, 23, 25,
	3, 27, 29, 31
};

Sint16 poly_001A2658[] = {
	4, 150, 34, 47, 46,
	4, 48, 49, 35, 36,
	4, 195, 151, 177, 37,
	4, 184, 50, 185, 149,
	4, 146, 143, 145, 144,
	4, 141, 140, 142, 139
};

Sint16 poly_001A2694[] = {
	4, 102, 101, 100, 99,
	4, 96, 95, 98, 97,
	4, 118, 117, 116, 115,
	4, 114, 113, 112, 111,
	4, 108, 107, 110, 109,
	4, 120, 119, 122, 121
};

Sint16 poly_001A26D0[] = {
	0x8000u | 8, 89, 90, 92, 91, 93, 94, 87, 88,
	0x8000u | 8, 82, 81, 85, 86, 83, 84, 79, 80,
	0x8000u | 6, 73, 74, 75, 76, 77, 78,
	0x8000u | 6, 105, 106, 193, 194, 191, 192,
	0x8000u | 6, 104, 103, 190, 189, 188, 187
};

Sint16 poly_001A271E[] = {
	4, 171, 172, 173, 170
};

Sint16 poly_001A2728[] = {
	4, 56, 55, 54, 53,
	4, 60, 56, 58, 54,
	4, 59, 60, 57, 58,
	4, 55, 59, 53, 57,
	4, 60, 59, 56, 55
};

Sint16 poly_001A275A[] = {
	4, 128, 127, 130, 129,
	4, 126, 125, 124, 123
};

Sint16 poly_001A276E[] = {
	4, 70, 69, 72, 71
};

NJS_TEX uv_001A2778[] = {
	{ 120, 143 },
	{ 120, 128 },
	{ 132, 143 },
	{ 132, 128 },
	{ 132, 143 },
	{ 132, 128 },
	{ 120, 143 },
	{ 120, 128 },
	{ 189, 17 },
	{ 176, 0 },
	{ 189, 17 },
	{ 1, 218 },
	{ 9, 218 },
	{ 7, 161 },
	{ 61, 149 },
	{ 69, 108 },
	{ 204, 144 },
	{ 191, 107 },
	{ 245, 139 },
	{ 208, 100 },
	{ 245, 139 },
	{ 208, 100 },
	{ 191, 107 },
	{ 189, 17 },
	{ 180, 17 },
	{ 176, 0 },
	{ 94, 0 },
	{ 176, 0 },
	{ 94, 0 },
	{ 87, 17 },
	{ 83, 17 },
	{ 69, 108 },
	{ 66, 108 },
	{ 1, 120 },
	{ 6, 135 },
	{ 0, 160 },
	{ 6, 135 },
	{ 0, 160 },
	{ 1, 120 },
	{ 0, 160 },
	{ 1, 120 },
	{ 7, 161 },
	{ 61, 149 },
	{ 59, 252 },
	{ 204, 144 },
	{ 204, 251 },
	{ 244, 221 },
	{ 246, 254 },
	{ 1, 218 },
	{ 0, 160 },
	{ 7, 161 },
	{ 1, 120 },
	{ 69, 108 },
	{ 83, 17 },
	{ 94, 0 },
	{ 83, 17 },
	{ 94, 0 },
	{ 94, 0 },
	{ 83, 17 },
	{ 87, 17 },
	{ 66, 108 },
	{ 69, 108 },
	{ 1, 120 },
	{ 61, 149 },
	{ 204, 144 },
	{ 242, 157 },
	{ 244, 221 },
	{ 69, 108 },
	{ 191, 107 },
	{ 61, 149 },
	{ 59, 252 },
	{ 8, 252 },
	{ 9, 218 },
	{ 245, 139 },
	{ 242, 157 },
	{ 191, 107 },
	{ 204, 144 },
	{ 61, 149 },
	{ 87, 17 },
	{ 94, 0 },
	{ 180, 17 },
	{ 204, 251 },
	{ 246, 254 },
	{ 244, 221 },
	{ 8, 252 },
	{ 9, 218 },
	{ 59, 252 },
	{ 61, 149 },
	{ 204, 251 },
	{ 204, 144 },
	{ 242, 157 },
	{ 245, 139 },
	{ 250, 160 },
	{ 245, 139 },
	{ 250, 160 },
	{ 242, 157 },
	{ 254, 216 },
	{ 244, 221 },
	{ 191, 107 },
	{ 208, 100 },
	{ 180, 17 },
	{ 189, 17 },
	{ 176, 0 },
	{ 176, 0 },
	{ 180, 17 },
	{ 176, 0 },
	{ 87, 17 },
	{ 1, 218 },
	{ 0, 221 },
	{ 0, 160 },
	{ 0, 160 },
	{ 1, 120 },
	{ 1, 120 },
	{ 69, 108 },
	{ 6, 135 },
	{ 66, 108 },
	{ 6, 135 },
	{ 66, 108 },
	{ 1, 120 },
	{ 1, 120 },
	{ 204, 251 },
	{ 242, 157 },
	{ 244, 221 },
	{ 250, 160 },
	{ 254, 216 },
	{ 250, 160 },
	{ 254, 216 },
	{ 59, 252 },
	{ 7, 161 },
	{ 9, 218 },
	{ 0, 160 },
	{ 1, 218 },
	{ 0, 160 },
	{ 0, 221 },
	{ 131, 110 },
	{ 132, 16 },
	{ 138, 110 },
	{ 137, 16 },
	{ 138, 110 },
	{ 137, 16 },
	{ 131, 110 },
	{ 132, 16 }
};

NJS_TEX uv_001A29B0[] = {
	{ 8, 255 },
	{ 0, 238 },
	{ 8, 243 },
	{ 0, 128 },
	{ 8, 124 },
	{ 0, 117 },
	{ 8, 112 },
	{ 0, 128 },
	{ 8, 124 },
	{ 0, 238 },
	{ 8, 243 },
	{ 0, 250 },
	{ 8, 255 },
	{ 0, 238 },
	{ 0, 250 },
	{ 8, 243 },
	{ 0, 238 },
	{ 8, 124 },
	{ 0, 128 },
	{ 8, 112 },
	{ 0, 117 },
	{ 8, 124 },
	{ 0, 128 },
	{ 8, 243 },
	{ 0, 238 },
	{ 8, 255 },
	{ 0, 250 },
	{ 8, 243 },
	{ 250, 0 },
	{ 250, 0 },
	{ 252, 120 },
	{ 252, 120 },
	{ 252, 120 },
	{ 252, 120 },
	{ 250, 0 },
	{ 250, 0 },
	{ 220, 72 },
	{ 255, 67 },
	{ 251, 78 },
	{ 255, 67 },
	{ 255, 10 },
	{ 220, 72 },
	{ 251, 0 },
	{ 251, 78 },
	{ 1, 129 },
	{ 1, 24 },
	{ 0, 129 },
	{ 1, 24 },
	{ 1, 129 },
	{ 255, 67 },
	{ 255, 10 },
	{ 220, 72 },
	{ 251, 0 },
	{ 251, 78 },
	{ 251, 78 },
	{ 255, 67 },
	{ 220, 72 },
	{ 243, 244 },
	{ 241, 130 },
	{ 255, 154 },
	{ 251, 112 },
	{ 255, 154 },
	{ 251, 112 },
	{ 241, 130 },
	{ 243, 244 },
	{ 254, 227 },
	{ 241, 130 },
	{ 241, 130 },
	{ 255, 154 },
	{ 254, 227 },
	{ 255, 154 },
	{ 254, 227 },
	{ 243, 244 },
	{ 10, 236 },
	{ 0, 255 },
	{ 11, 120 },
	{ 11, 120 },
	{ 0, 157 },
	{ 0, 255 },
	{ 0, 157 },
	{ 0, 255 },
	{ 10, 236 },
	{ 10, 236 },
	{ 11, 120 },
	{ 0, 157 },
	{ 3, 120 },
	{ 0, 157 },
	{ 3, 120 },
	{ 11, 120 },
	{ 1, 129 },
	{ 1, 24 },
	{ 0, 129 },
	{ 1, 24 },
	{ 1, 129 }
};

NJS_TEX uv_001A2B28[] = {
	{ 0, -210 },
	{ 0, 210 },
	{ 127, -254 },
	{ 0, 210 },
	{ 127, 255 },
	{ 127, -254 },
	{ 255, 210 },
	{ 255, -210 },
	{ 255, -210 },
	{ 127, -254 },
	{ 127, 255 },
	{ 0, -210 },
	{ 0, 210 },
	{ 127, 255 },
	{ 255, 210 },
	{ 255, -210 }
};

NJS_TEX uv_001A2B68[] = {
	{ 30, 0 },
	{ 0, 247 },
	{ 30, 0 },
	{ 0, 247 },
	{ 221, 0 },
	{ 254, 225 },
	{ 221, 0 },
	{ 254, 225 },
	{ 5, 247 },
	{ 37, 0 },
	{ 225, 246 },
	{ 204, 0 },
	{ 225, 246 },
	{ 204, 0 },
	{ 5, 247 },
	{ 37, 0 },
	{ 28, 156 },
	{ 30, 169 },
	{ 28, 255 },
	{ 30, 241 },
	{ 28, 255 },
	{ 30, 241 },
	{ 28, 156 },
	{ 30, 169 }
};

NJS_TEX uv_001A2BC8[] = {
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 },
	{ 255, 0 },
	{ 0 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 255, 255 },
	{ 255, 0 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0 },
	{ 255, 0 }
};

NJS_TEX uv_001A2C28[] = {
	{ 10711, 254 },
	{ 10711, 0 },
	{ 9977, 254 },
	{ 9977, 0 },
	{ 5336, 254 },
	{ 5336, 0 },
	{ 4705, 254 },
	{ 4705, 0 },
	{ 14280, 254 },
	{ 14280, 0 },
	{ 14184, 254 },
	{ 14184, 0 },
	{ 13856, 254 },
	{ 13856, 0 },
	{ 11755, 254 },
	{ 11755, 0 },
	{ 3580, 253 },
	{ 3580, 1 },
	{ 330, 253 },
	{ 330, 1 },
	{ 0, 253 },
	{ 0, 1 },
	{ 8137, 112 },
	{ 8160, 254 },
	{ 6442, 0 },
	{ 6438, 138 },
	{ 5, 22 },
	{ 0, 163 },
	{ 8160, 254 },
	{ 8137, 112 },
	{ 6438, 138 },
	{ 6442, 0 },
	{ 0, 163 },
	{ 5, 22 }
};

NJS_TEX uv_001A2CB0[] = {
	{ 0, 255 },
	{ 1019, 255 },
	{ 0 },
	{ 1019, 0 }
};

NJS_TEX uv_001A2CC0[] = {
	{ 227, 27 },
	{ 29, 27 },
	{ 251, 251 },
	{ 1, 251 },
	{ 222, 2 },
	{ 52, 7 },
	{ 222, 10 },
	{ 56, 11 },
	{ 227, 27 },
	{ 29, 27 },
	{ 251, 251 },
	{ 1, 251 },
	{ 222, 2 },
	{ 52, 7 },
	{ 222, 10 },
	{ 56, 11 },
	{ 222, 2 },
	{ 52, 7 },
	{ 222, 10 },
	{ 56, 11 }
};

NJS_TEX uv_001A2D10[] = {
	{ 255, 254 },
	{ 0, 252 },
	{ 255, 2 },
	{ 0 },
	{ 0 },
	{ 255, 2 },
	{ 0, 252 },
	{ 255, 254 }
};

NJS_TEX uv_001A2D30[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 0 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_001A2D40[] = {
	{ NJD_MESHSET_TRIMESH | 0, 22, poly_001A240C, NULL, NULL, NULL, uv_001A2778, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 16, poly_001A2554, NULL, NULL, NULL, uv_001A29B0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 4, poly_001A2630, NULL, NULL, NULL, uv_001A2B28, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 6, poly_001A2658, NULL, NULL, NULL, uv_001A2B68, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 6, poly_001A2694, NULL, NULL, NULL, uv_001A2BC8, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 5, poly_001A26D0, NULL, NULL, NULL, uv_001A2C28, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_001A271E, NULL, NULL, NULL, uv_001A2CB0, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 5, poly_001A2728, NULL, NULL, NULL, uv_001A2CC0, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, poly_001A275A, NULL, NULL, NULL, uv_001A2D10, NULL },
	{ NJD_MESHSET_TRIMESH | 9, 1, poly_001A276E, NULL, NULL, NULL, uv_001A2D30, NULL }
};

NJS_VECTOR vertex_001A2E30[] = {
	{ -1.280865f, -0.714411f, -8.499998f },
	{ -1.280865f, -1.417751f, -9.099998f },
	{ 0.718093f, -0.714411f, -8.499998f },
	{ 0.718093f, -1.417751f, -9.099998f },
	{ -1.280865f, -0.714411f, 8.499998f },
	{ -1.280865f, -1.417751f, 9.099998f },
	{ 0.718093f, -0.714411f, 8.499998f },
	{ 0.718093f, -1.417751f, 9.099998f },
	{ -20.10495f, -0.6199999f, -6.499997f },
	{ -20.55495f, -0.719999f, -6.499997f },
	{ -20.10495f, -0.875f, -5.598516f },
	{ -20.55495f, -0.974999f, -5.698515f },
	{ -20.10495f, -3.485f, -5.598516f },
	{ -20.55495f, -3.385f, -5.698515f },
	{ -20.10495f, -3.74f, -6.499997f },
	{ -20.55495f, -3.64f, -6.499997f },
	{ -20.10495f, -3.485f, -7.401477f },
	{ -20.55495f, -3.385f, -7.301477f },
	{ -20.10495f, -0.875f, -7.401477f },
	{ -20.55495f, -0.974999f, -7.301477f },
	{ -20.10495f, -0.6199999f, 6.499997f },
	{ -20.55495f, -0.719999f, 6.499997f },
	{ -20.10495f, -0.875f, 5.598516f },
	{ -20.55495f, -0.974999f, 5.698515f },
	{ -20.10495f, -3.485f, 5.598516f },
	{ -20.55495f, -3.385f, 5.698515f },
	{ -20.10495f, -3.74f, 6.499997f },
	{ -20.55495f, -3.64f, 6.499997f },
	{ -20.10495f, -3.485f, 7.401477f },
	{ -20.55495f, -3.385f, 7.301477f },
	{ -20.10495f, -0.875f, 7.401477f },
	{ -20.55495f, -0.974999f, 7.301477f },
	{ -5.294888f, 5.435297f, -4.151862f },
	{ 7.787233f, 5.433582f, -4.151862f },
	{ -9.813905f, 0.249438f, -6.740618f },
	{ 9.856446f, 4.620317f, -5.006693f },
	{ 12.83683f, 0.647856f, -6.302796f },
	{ 8.394497f, 4.618263f, -5.815588f },
	{ -20.40376f, -2.23794f, -7.89988f },
	{ -20.17493f, -0.320015f, -7.33f },
	{ -20.17494f, -0.320017f, 5.657479f },
	{ -20.17494f, -0.320017f, -5.757479f },
	{ 18.24222f, -2.094558f, -8.804406f },
	{ 18.24222f, -2.094558f, 8.804406f },
	{ -5.294888f, 5.435297f, 4.151862f },
	{ 7.787233f, 5.433582f, 4.151862f },
	{ -9.813905f, 0.249438f, 6.740618f },
	{ -7.116433f, 4.610172f, 5.217309f },
	{ 9.856446f, 4.620317f, 5.006693f },
	{ 12.83683f, 0.647856f, 6.302796f },
	{ 8.394497f, 4.618263f, 5.815588f },
	{ -20.40376f, -2.23794f, 7.89988f },
	{ -20.17493f, -0.320015f, 7.33f },
	{ 0.405048f, 5.469999f, -2.602104f },
	{ 0.405048f, 5.469999f, 2.602104f },
	{ 0.635048f, 6.91f, -1.977599f },
	{ 0.635048f, 6.91f, 1.977599f },
	{ 1.865048f, 5.469999f, -2.602104f },
	{ 1.865048f, 5.469999f, 2.602104f },
	{ 1.635048f, 6.91f, -1.977599f },
	{ 1.635048f, 6.91f, 1.977599f },
	{ 0.6912079f, 4.645713f, -5.843188f },
	{ 0.554803f, 0.161552f, -7.973157f },
	{ 1.578888f, 4.645713f, -5.843188f },
	{ 1.715293f, 0.161552f, -7.973157f },
	{ 0.6912079f, 4.645713f, 5.843188f },
	{ 0.554803f, 0.161552f, 7.973157f },
	{ 1.578888f, 4.645713f, 5.843188f },
	{ 1.715293f, 0.161552f, 7.973157f },
	{ 20.28993f, -4.581251f, -3.656697f },
	{ 20.28993f, -4.581251f, 3.656697f },
	{ 19.94805f, -2.789592f, -3.656697f },
	{ 19.94805f, -2.789592f, 3.656697f },
	{ -10.31184f, 0.260001f, -0.3952f },
	{ -10.31184f, 0.260001f, 0.3952f },
	{ -19.50457f, -1.02f, -0.3952f },
	{ -19.50457f, -1.02f, 0.3952f },
	{ -20.44061f, -2.139999f, -0.3952f },
	{ -20.44061f, -2.139999f, 0.3952f },
	{ 12.81271f, 0.660004f, -0.399999f },
	{ 12.81271f, 0.660004f, 0.400001f },
	{ 19.95325f, -2.785995f, 0.399999f },
	{ 19.95325f, -2.785995f, -0.400001f },
	{ 18.7564f, -1.179997f, -0.400001f },
	{ 18.7564f, -1.179997f, 0.399999f },
	{ 19.68203f, -2.219996f, -0.400001f },
	{ 19.68203f, -2.219996f, 0.399999f },
	{ -7.128881f, 4.629999f, -0.4f },
	{ -7.128881f, 4.629999f, 0.4f },
	{ 9.857704f, 4.63f, -0.4f },
	{ 9.857704f, 4.63f, 0.4f },
	{ 7.781566f, 5.45f, 0.4f },
	{ 7.781566f, 5.45f, -0.4f },
	{ -5.346338f, 5.45f, -0.4f },
	{ -5.346338f, 5.45f, 0.4f },
	{ -20.43528f, -4.736916f, -6.412168f },
	{ -20.43528f, -4.736916f, -7.613917f },
	{ -20.43528f, -3.950316f, -6.412168f },
	{ -20.43528f, -3.950316f, -7.613917f },
	{ -20.43528f, -4.736916f, 6.412168f },
	{ -20.43528f, -4.736916f, 7.613917f },
	{ -20.43528f, -3.950316f, 6.412168f },
	{ -20.43528f, -3.950316f, 7.613917f },
	{ 18.24222f, -2.138584f, -8.804406f },
	{ 18.32306f, -2.779737f, -8.865005f },
	{ 18.24222f, -2.138584f, 8.804406f },
	{ 18.32306f, -2.779737f, 8.865005f },
	{ -12.24692f, -1.740001f, -9.438184f },
	{ -12.24692f, -2.340001f, -9.438184f },
	{ -11.25096f, -1.740001f, -9.535252f },
	{ -11.25096f, -2.340001f, -9.535252f },
	{ -12.24692f, -1.740001f, 9.438184f },
	{ -12.24692f, -2.340001f, 9.438184f },
	{ -11.25096f, -1.740001f, 9.535252f },
	{ -11.25096f, -2.340001f, 9.535252f },
	{ 20.12944f, -3.6292f, -5.863196f },
	{ 20.07688f, -3.634892f, -6.84699f },
	{ 20.00244f, -2.962039f, -5.86828f },
	{ 19.94987f, -2.967731f, -6.852073f },
	{ 20.12944f, -3.6292f, 5.863196f },
	{ 20.07688f, -3.634892f, 6.84699f },
	{ 20.00244f, -2.962039f, 5.86828f },
	{ 19.94987f, -2.967731f, 6.852073f },
	{ 20.33878f, -4.65949f, -5.762677f },
	{ 20.24699f, -4.666606f, -6.983809f },
	{ 20.13166f, -3.82554f, -5.762677f },
	{ 20.03988f, -3.832655f, -6.983809f },
	{ 20.33878f, -4.65949f, 5.762677f },
	{ 20.24699f, -4.666606f, 6.983809f },
	{ 20.13166f, -3.82554f, 5.762677f },
	{ 20.03988f, -3.832655f, 6.983809f },
	{ -20.81499f, -5.55f, -7.942472f },
	{ -20.77499f, -6.91f, -7.842472f },
	{ -20.81499f, -5.55f, 7.942472f },
	{ -20.77499f, -6.91f, 7.842472f },
	{ -20.49495f, -5.16f, -5.495998f },
	{ -20.49495f, -5.16f, -6.323998f },
	{ -20.49495f, -5.16f, 5.495998f },
	{ -20.49495f, -5.16f, 6.323998f },
	{ -7.143158f, 1.631371f, -9.354188f },
	{ -7.143158f, 0.36167f, -9.354188f },
	{ -7.323158f, 0.121671f, -7.450388f },
	{ -7.323158f, 1.851371f, -7.420557f },
	{ -7.143158f, 1.631371f, 9.354188f },
	{ -7.143158f, 0.36167f, 9.354188f },
	{ -7.323158f, 0.121671f, 7.450388f },
	{ -7.323158f, 1.851371f, 7.420557f },
	{ -19.28137f, -2.317937f, -8.679493f },
	{ -19.28137f, -2.317937f, 8.679493f },
	{ -6.519433f, 4.614111f, 5.815591f },
	{ -7.116433f, 4.610172f, -5.217309f },
	{ -6.519433f, 4.614111f, -5.815591f },
	{ -20.25498f, -5.030001f, -7.602473f },
	{ -19.15498f, -6.65f, -8.732882f },
	{ -20.25498f, -5.030001f, 7.602473f },
	{ -19.15498f, -6.65f, 8.732882f },
	{ 20.81499f, -5.510002f, -7.182474f },
	{ 20.67498f, -6.530002f, -7.182474f },
	{ 20.81499f, -5.510002f, 7.182474f },
	{ 20.67498f, -6.530002f, 7.182474f },
	{ 20.41505f, -5.04f, -4.395995f },
	{ 20.41505f, -5.04f, -5.283996f },
	{ 20.11505f, -3.3588f, -4.564715f },
	{ 20.11505f, -3.3588f, -5.115275f },
	{ 20.41505f, -5.04f, 4.395995f },
	{ 20.41505f, -5.04f, 5.283996f },
	{ 20.11505f, -3.3588f, 4.564715f },
	{ 20.11505f, -3.3588f, 5.115275f },
	{ -18.93498f, -5.03f, -8.432875f },
	{ -18.93498f, -5.03f, 8.432875f },
	{ -20.47495f, -2.238f, 5.099999f },
	{ -20.32675f, -5.17915f, -5.199999f },
	{ -20.32675f, -5.17915f, 5.099999f },
	{ -20.47495f, -2.238f, -5.199999f },
	{ -19.47393f, -1.068754f, -4.739952f },
	{ -19.47393f, -1.068754f, 4.639952f },
	{ 12.20046f, -1.462179f, -9.263523f },
	{ 10.21795f, 0.27764f, -7.735243f },
	{ -10.71397f, -1.699019f, -9.286661f },
	{ -11.03137f, -6.639856f, -9.050804f },
	{ 12.21099f, -6.623372f, -9.075492f },
	{ 12.21099f, -6.623372f, 9.075492f },
	{ -11.03137f, -6.639856f, 9.050804f },
	{ 12.20046f, -1.462179f, 9.263523f },
	{ 10.21795f, 0.27764f, 7.735243f },
	{ -9.324517f, 0.249578f, 7.681993f },
	{ -10.71397f, -1.699019f, 9.286661f },
	{ -10.74835f, -1.731689f, -9.378785f },
	{ -10.76943f, -2.370138f, -9.414005f },
	{ 12.20046f, -1.632681f, -9.263523f },
	{ 12.18551f, -2.254938f, -9.318006f },
	{ -10.74835f, -1.731689f, 9.378785f },
	{ -10.76943f, -2.370138f, 9.414005f },
	{ 12.20046f, -1.632681f, 9.263523f },
	{ 12.18551f, -2.254938f, 9.318006f },
	{ -9.324517f, 0.249578f, -7.681993f },
	{ 18.70396f, -1.226933f, -7.456268f },
	{ 20.23498f, -4.930002f, -7.002474f },
	{ 18.97498f, -6.770001f, 8.470893f },
	{ 18.97498f, -6.770001f, -8.470893f },
	{ 20.23498f, -4.930002f, 7.002474f },
	{ 19.63823f, -2.258657f, -7.372808f },
	{ 18.70396f, -1.226933f, 7.456268f },
	{ 19.63823f, -2.258657f, 7.372808f },
	{ 18.55498f, -5.170002f, -8.421967f },
	{ 18.55498f, -5.170002f, 8.421967f },
	{ -8.96676f, 0.259366f, -7.491386f },
	{ -8.96676f, 0.259366f, 7.491386f },
	{ -20.55495f, -3.6988f, -5.664718f },
	{ -20.55495f, -3.6988f, 5.664718f },
	{ -20.69495f, -5.16f, 5.895998f },
	{ -20.69495f, -5.16f, -5.895998f },
	{ -20.55495f, -3.6988f, 6.064718f },
	{ -20.55495f, -3.6988f, -6.164718f }
};

NJS_VECTOR normal_001A3838[] = {
	{ 0, 0.649004f, -0.760785f },
	{ 0, 0.649004f, -0.760785f },
	{ 0, 0.649004f, -0.760785f },
	{ 0, 0.649004f, -0.760785f },
	{ 0, 0.649004f, 0.760785f },
	{ 0, 0.649004f, 0.760785f },
	{ 0, 0.649004f, 0.760785f },
	{ 0, 0.649004f, 0.760785f },
	{ -0.247321f, 0.968931f, -0.002134f },
	{ -0.735254f, 0.677789f, -0.001493f },
	{ -0.297422f, 0.580106f, 0.758299f },
	{ -0.707427f, 0.410143f, 0.575613f },
	{ -0.261581f, -0.5906309f, 0.763367f },
	{ -0.691553f, -0.422372f, 0.585966f },
	{ -0.247322f, -0.968931f, 0.002134f },
	{ -0.7352549f, -0.677789f, 0.001493f },
	{ -0.297423f, -0.5801049f, -0.758299f },
	{ -0.707427f, -0.410143f, -0.575613f },
	{ -0.26158f, 0.590632f, -0.763368f },
	{ -0.691553f, 0.422372f, -0.585966f },
	{ -0.247321f, 0.968931f, 0.002134f },
	{ -0.735254f, 0.677789f, 0.001493f },
	{ -0.297422f, 0.580106f, -0.758299f },
	{ -0.707427f, 0.410143f, -0.575613f },
	{ -0.261581f, -0.5906309f, -0.763367f },
	{ -0.691553f, -0.422372f, -0.585966f },
	{ -0.247322f, -0.968931f, -0.002134f },
	{ -0.7352549f, -0.677789f, -0.001493f },
	{ -0.297423f, -0.5801049f, 0.758299f },
	{ -0.707427f, -0.410143f, 0.575613f },
	{ -0.26158f, 0.590632f, 0.763368f },
	{ -0.691553f, 0.422372f, 0.585966f },
	{ -0.161068f, 0.970804f, -0.177753f },
	{ 0.145828f, 0.971238f, -0.18823f },
	{ -0.824114f, 0.020946f, -0.566037f },
	{ 0.822617f, 0.385611f, -0.417858f },
	{ 0.896718f, 0.045256f, -0.440282f },
	{ 0.74898f, 0.412054f, -0.518883f },
	{ -0.8611659f, 0.076955f, -0.502465f },
	{ -0.590446f, 0.712226f, -0.379616f },
	{ -0.614191f, 0.7253709f, -0.310816f },
	{ -0.615558f, 0.7241769f, 0.310896f },
	{ 0.361623f, 0.349962f, -0.86415f },
	{ 0.361623f, 0.349962f, 0.86415f },
	{ -0.161068f, 0.970804f, 0.177753f },
	{ 0.145828f, 0.971238f, 0.18823f },
	{ -0.824114f, 0.020946f, 0.566037f },
	{ -0.714804f, 0.463065f, 0.524048f },
	{ 0.822617f, 0.385611f, 0.417858f },
	{ 0.896718f, 0.045256f, 0.440282f },
	{ 0.74898f, 0.412054f, 0.518883f },
	{ -0.85862f, 0.076762f, 0.506833f },
	{ -0.5897239f, 0.712653f, 0.379935f },
	{ -0.60693f, 0.395823f, -0.689173f },
	{ -0.60693f, 0.395823f, 0.689173f },
	{ -0.543856f, 0.715192f, -0.438999f },
	{ -0.543856f, 0.715192f, 0.438999f },
	{ 0.60693f, 0.395823f, -0.689173f },
	{ 0.60693f, 0.395823f, 0.689173f },
	{ 0.543856f, 0.715192f, -0.438999f },
	{ 0.543856f, 0.715192f, 0.438999f },
	{ 0, 0.429056f, -0.903278f },
	{ 0, 0.429056f, -0.903278f },
	{ 0, 0.429056f, -0.903278f },
	{ 0, 0.429056f, -0.903278f },
	{ 0, 0.429056f, 0.903278f },
	{ 0, 0.429056f, 0.903278f },
	{ 0, 0.429056f, 0.903278f },
	{ 0, 0.429056f, 0.903278f },
	{ 0.982277f, 0.187437f, 0 },
	{ 0.982277f, 0.187437f, 0 },
	{ 0.982277f, 0.187437f, 0 },
	{ 0.982277f, 0.187437f, 0 },
	{ -0.13791f, 0.990445f, 0 },
	{ -0.13791f, 0.990445f, 0 },
	{ -0.485113f, 0.874452f, 0 },
	{ -0.485113f, 0.874452f, 0 },
	{ -0.767308f, 0.641278f, 0 },
	{ -0.767308f, 0.641278f, 0 },
	{ 0.295726f, 0.955273f, 0 },
	{ 0.295726f, 0.955273f, 0 },
	{ 0.901807f, 0.43214f, 0 },
	{ 0.901807f, 0.43214f, 0 },
	{ 0.541203f, 0.840892f, 0 },
	{ 0.541203f, 0.840892f, 0 },
	{ 0.832566f, 0.553925f, 0 },
	{ 0.832566f, 0.553925f, 0 },
	{ -0.417919f, 0.908484f, 0 },
	{ -0.417919f, 0.908484f, 0 },
	{ 0.367349f, 0.930083f, 0 },
	{ 0.367349f, 0.930083f, 0 },
	{ 0.186972f, 0.982365f, 0 },
	{ 0.186972f, 0.982365f, 0 },
	{ -0.213911f, 0.976853f, 0 },
	{ -0.213911f, 0.976853f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ 0.081561f, 0.08498599f, -0.993038f },
	{ 0.081561f, 0.08498599f, -0.993038f },
	{ 0.081561f, 0.08498599f, 0.993038f },
	{ 0.081561f, 0.08498599f, 0.993038f },
	{ -0.097003f, 0, -0.995284f },
	{ -0.097003f, 0, -0.995284f },
	{ -0.097003f, 0, -0.995284f },
	{ -0.097003f, 0, -0.995284f },
	{ -0.097003f, 0, 0.995284f },
	{ -0.097003f, 0, 0.995284f },
	{ -0.097003f, 0, 0.995284f },
	{ -0.097003f, 0, 0.995284f },
	{ 0.981025f, 0.186352f, -0.0535f },
	{ 0.981025f, 0.186352f, -0.0535f },
	{ 0.981025f, 0.186352f, -0.0535f },
	{ 0.981025f, 0.186352f, -0.0535f },
	{ 0.981025f, 0.186352f, 0.0535f },
	{ 0.981025f, 0.186352f, 0.0535f },
	{ 0.981025f, 0.186352f, 0.0535f },
	{ 0.981025f, 0.186352f, 0.0535f },
	{ 0.967846f, 0.240366f, -0.07415099f },
	{ 0.967846f, 0.240366f, -0.07415099f },
	{ 0.967846f, 0.240366f, -0.07415099f },
	{ 0.967846f, 0.240366f, -0.07415099f },
	{ 0.967846f, 0.240366f, 0.07415099f },
	{ 0.967846f, 0.240366f, 0.07415099f },
	{ 0.967846f, 0.240366f, 0.07415099f },
	{ 0.967846f, 0.240366f, 0.07415099f },
	{ -0.78865f, 0.310988f, -0.530394f },
	{ -0.848375f, -0.063596f, -0.525562f },
	{ -0.78865f, 0.310988f, 0.530394f },
	{ -0.848375f, -0.063596f, 0.525562f },
	{ -0.894327f, 0.014909f, 0.447166f },
	{ -0.90593f, 0.008946f, -0.423333f },
	{ -0.894327f, 0.014909f, -0.447166f },
	{ -0.905316f, 0.037892f, 0.423045f },
	{ -0.601164f, 0.137295f, -0.7872429f },
	{ -0.606625f, 0.030715f, -0.794394f },
	{ -0.7009439f, 0.011646f, -0.713122f },
	{ -0.6916f, 0.174844f, -0.700799f },
	{ -0.601164f, 0.137295f, 0.7872429f },
	{ -0.606625f, 0.030715f, 0.794394f },
	{ -0.7009439f, 0.011646f, 0.713122f },
	{ -0.6916f, 0.174844f, 0.700799f },
	{ -0.300451f, 0.200611f, -0.932461f },
	{ -0.300451f, 0.200611f, 0.932461f },
	{ -0.659863f, 0.467016f, 0.588623f },
	{ -0.714804f, 0.463065f, -0.524048f },
	{ -0.659863f, 0.467016f, -0.588623f },
	{ -0.7960989f, 0.444565f, -0.410595f },
	{ -0.21349f, 0.042752f, -0.976009f },
	{ -0.796073f, 0.444812f, 0.410378f },
	{ -0.21349f, 0.042752f, 0.976009f },
	{ 0.855728f, 0.278339f, -0.436184f },
	{ 0.851892f, -0.116929f, -0.510498f },
	{ 0.855728f, 0.278339f, 0.436184f },
	{ 0.851892f, -0.116929f, 0.510498f },
	{ 0.984449f, 0.175672f, 0.000001f },
	{ 0.984449f, 0.175672f, 0.000001f },
	{ 0.984449f, 0.175672f, 0.000001f },
	{ 0.984449f, 0.175672f, 0.000001f },
	{ 0.984449f, 0.175672f, -0.00001f },
	{ 0.984449f, 0.175672f, -0.00001f },
	{ 0.984449f, 0.175672f, -0.00001f },
	{ 0.984449f, 0.175672f, -0.00001f },
	{ -0.26287f, 0.026478f, -0.9644679f },
	{ -0.26287f, 0.026478f, 0.9644679f },
	{ -0.9807619f, 0.179979f, -0.075582f },
	{ -0.998523f, -0.051848f, -0.016242f },
	{ -0.998535f, -0.051816f, 0.015604f },
	{ -0.980383f, 0.179877f, 0.08058199f },
	{ -0.439379f, 0.8276809f, 0.349127f },
	{ -0.438082f, 0.8289779f, -0.347678f },
	{ 0.07024699f, 0.388878f, -0.918607f },
	{ 0.797116f, 0.021659f, -0.6034369f },
	{ -0.037648f, 0.306817f, -0.951023f },
	{ -0.032635f, -0.039494f, -0.998687f },
	{ 0.036484f, -0.04777f, -0.998192f },
	{ 0.036453f, -0.042172f, 0.998445f },
	{ -0.032664f, -0.034082f, 0.998885f },
	{ 0.070135f, 0.391513f, 0.917496f },
	{ 0.797116f, 0.021659f, 0.6034369f },
	{ -0.7716449f, 0.020654f, 0.6357189f },
	{ -0.037624f, 0.30967f, 0.950099f },
	{ 0.004178f, 0.08712099f, -0.996189f },
	{ 0.004178f, 0.08712099f, -0.996189f },
	{ 0.0426f, 0.086126f, -0.995373f },
	{ 0.043204f, 0.08611f, -0.995348f },
	{ 0.004178f, 0.08712099f, 0.996189f },
	{ 0.004178f, 0.08712099f, 0.996189f },
	{ 0.0426f, 0.086126f, 0.995373f },
	{ 0.043204f, 0.08611f, 0.995348f },
	{ -0.7716449f, 0.020654f, -0.6357189f },
	{ 0.492947f, 0.805034f, -0.330036f },
	{ 0.798453f, 0.479174f, -0.364507f },
	{ 0.349535f, -0.017818f, 0.936754f },
	{ 0.349535f, -0.017818f, -0.936754f },
	{ 0.798453f, 0.479174f, 0.364507f },
	{ 0.861258f, 0.368342f, -0.350084f },
	{ 0.492947f, 0.805034f, 0.330036f },
	{ 0.861258f, 0.368342f, 0.350084f },
	{ 0.366692f, 0.019764f, -0.930132f },
	{ 0.366692f, 0.019764f, 0.930132f },
	{ -0.893126f, -0.313439f, 0.322617f },
	{ -0.893126f, -0.313439f, -0.322617f },
	{ -0.9933569f, 0.08247399f, 0.080244f },
	{ -0.9933569f, 0.08247399f, -0.080244f },
	{ -0.999338f, 0.035861f, -0.006165f },
	{ -0.99962f, 0.023113f, 0.015044f },
	{ -0.993268f, 0.08623499f, 0.07735f },
	{ -0.9935139f, 0.08040199f, -0.08041f }
};

NJS_MODEL_SADX attach_001A4240 = { vertex_001A2E30, normal_001A3838, LengthOfArray(vertex_001A2E30), meshlist_001A2D40, matlist_001A2344, LengthOfArray(meshlist_001A2D40), LengthOfArray(matlist_001A2344), { 0 }, 22.89508f, NULL };

NJS_OBJECT object_001A4268 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001A4240, 0.604952f, 8.83f, 0, 0, 0, 0, 1, 1, 1, &object_001A2310, NULL };