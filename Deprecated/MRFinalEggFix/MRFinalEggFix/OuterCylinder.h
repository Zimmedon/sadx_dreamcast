#include "SADXModLoader.h"
#include "Lights.h"

NJS_MATERIAL matlist_002069C8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrd_064s_efc, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrd_128s_efaka, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrd_064s_efb, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrd_128s_efgre, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrd_128s_efhikari, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrc_128s_matia, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrc_128s_matib, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, MR_FINALEGGTexName_mrc_128s_matia, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00206A68[] = {
	3, 0, 1, 2,
	0x8000u | 5, 0, 13, 2, 22, 31,
	4, 31, 2, 33, 29
};

Sint16 poly_00206A86[] = {
	0x8000u | 26, 4, 5, 10, 11, 14, 15, 19, 20, 23, 24, 28, 29, 32, 33, 35, 31, 26, 22, 17, 13, 8, 0, 3, 1, 4, 5,
	0x8000u | 26, 7, 4, 12, 10, 16, 14, 21, 19, 25, 23, 30, 28, 34, 32, 36, 35, 27, 26, 18, 17, 9, 8, 6, 3, 7, 4
};

Sint16 poly_00206AF2[] = {
	0x8000u | 5, 15, 11, 2, 5, 1,
	0x8000u | 5, 29, 24, 2, 20, 15
};

Sint16 poly_00206B0A[] = {
	0x8000u | 18, 173, 172, 174, 171, 180, 179, 188, 187, 177, 176, 178, 175, 182, 181, 184, 183, 186, 185,
	0x8000u | 18, 191, 190, 192, 189, 198, 197, 206, 205, 195, 194, 196, 193, 200, 199, 202, 201, 204, 203,
	0x8000u | 18, 162, 153, 163, 154, 166, 157, 170, 161, 164, 155, 165, 156, 167, 158, 168, 159, 169, 160,
	0x8000u | 14, 150, 149, 145, 144, 146, 143, 152, 151, 148, 147, 141, 140, 142, 139,
	0x8000u | 14, 84, 83, 92, 91, 96, 95, 94, 93, 90, 89, 87, 86, 88, 85,
	0x8000u | 10, 97, 104, 101, 108, 103, 110, 102, 109, 100, 107,
	0x8000u | 10, 125, 126, 133, 134, 137, 138, 135, 136, 131, 132,
	0x8000u | 6, 117, 118, 113, 116, 114, 115,
	0x8000u | 6, 129, 128, 130, 127, 132, 131,
	0x8000u | 10, 111, 112, 119, 120, 123, 124, 121, 122, 117, 118,
	0x8000u | 6, 100, 107, 99, 106, 98, 105
};

Sint16 poly_00206C24[] = {
	4, 40, 38, 39, 37,
	0x8000u | 28, 38, 37, 66, 65, 64, 63, 62, 61, 60, 59, 58, 57, 56, 55, 54, 53, 52, 51, 50, 49, 48, 47, 46, 45, 44, 43, 42, 41
};

Sint16 poly_00206C68[] = {
	4, 70, 69, 68, 67,
	4, 78, 77, 76, 75
};

Sint16 poly_00206C7C[] = {
	4, 74, 73, 72, 71
};

Sint16 poly_00206C86[] = {
	4, 82, 81, 80, 79
};

NJS_TEX uv_00206C90[] = {
	{ 475, 127 },
	{ 510, 0 },
	{ 254, 0 },
	{ 475, 127 },
	{ 382, 220 },
	{ 254, 0 },
	{ 255, 255 },
	{ 127, 220 },
	{ 127, 220 },
	{ 254, 0 },
	{ 34, 127 },
	{ 0 }
};

NJS_TEX uv_00206CC0[] = {
	{ 127, -698 },
	{ 128, -735 },
	{ 254, -698 },
	{ 256, -735 },
	{ 382, -698 },
	{ 382, -735 },
	{ 510, -698 },
	{ 508, -735 },
	{ 637, -698 },
	{ 636, -735 },
	{ 765, -698 },
	{ 765, -735 },
	{ 892, -698 },
	{ 893, -735 },
	{ 1019, -698 },
	{ 1021, -735 },
	{ 1147, -698 },
	{ 1147, -735 },
	{ 1275, -698 },
	{ 1273, -735 },
	{ 1402, -698 },
	{ 1401, -735 },
	{ 1530, -698 },
	{ 1530, -735 },
	{ 1657, -698 },
	{ 1658, -735 },
	{ 127, 254 },
	{ 127, -698 },
	{ 254, 255 },
	{ 254, -698 },
	{ 382, 255 },
	{ 382, -698 },
	{ 510, 254 },
	{ 510, -698 },
	{ 637, 254 },
	{ 637, -698 },
	{ 765, 254 },
	{ 765, -698 },
	{ 892, 254 },
	{ 892, -698 },
	{ 1019, 254 },
	{ 1019, -698 },
	{ 1147, 254 },
	{ 1147, -698 },
	{ 1275, 254 },
	{ 1275, -698 },
	{ 1402, 254 },
	{ 1402, -698 },
	{ 1530, 254 },
	{ 1530, -698 },
	{ 1657, 254 },
	{ 1657, -698 }
};

NJS_TEX uv_00206D90[] = {
	{ 254, 0 },
	{ 382, 34 },
	{ 254, 255 },
	{ 475, 127 },
	{ 510, 255 },
	{ 0, 255 },
	{ 34, 127 },
	{ 254, 255 },
	{ 127, 34 },
	{ 254, 0 }
};

NJS_TEX uv_00206DB8[] = {
	{ 488, -767 },
	{ 488, -321 },
	{ 462, -767 },
	{ 462, -321 },
	{ 425, -767 },
	{ 425, -321 },
	{ 379, -767 },
	{ 379, -321 },
	{ 320, -767 },
	{ 320, -321 },
	{ 249, -767 },
	{ 249, -321 },
	{ 177, -767 },
	{ 177, -321 },
	{ 118, -767 },
	{ 118, -321 },
	{ 72, -767 },
	{ 72, -321 },
	{ 488, -1275 },
	{ 488, -809 },
	{ 462, -1275 },
	{ 462, -809 },
	{ 425, -1275 },
	{ 425, -809 },
	{ 379, -1275 },
	{ 379, -809 },
	{ 320, -1275 },
	{ 320, -809 },
	{ 249, -1275 },
	{ 249, -809 },
	{ 177, -1275 },
	{ 177, -809 },
	{ 118, -1275 },
	{ 118, -809 },
	{ 72, -1275 },
	{ 72, -809 },
	{ 488, -292 },
	{ 488, -198 },
	{ 462, -292 },
	{ 462, -198 },
	{ 425, -292 },
	{ 425, -198 },
	{ 379, -292 },
	{ 379, -198 },
	{ 320, -292 },
	{ 320, -198 },
	{ 249, -292 },
	{ 249, -198 },
	{ 177, -292 },
	{ 177, -198 },
	{ 118, -292 },
	{ 118, -198 },
	{ 72, -292 },
	{ 72, -198 },
	{ 69, 255 },
	{ 69, -180 },
	{ 114, 255 },
	{ 114, -180 },
	{ 172, 255 },
	{ 172, -180 },
	{ 244, 255 },
	{ 244, -180 },
	{ 316, 255 },
	{ 316, -180 },
	{ 375, 255 },
	{ 375, -180 },
	{ 413, 255 },
	{ 413, -180 },
	{ 449, 255 },
	{ 449, -211 },
	{ 479, 255 },
	{ 479, -211 },
	{ 525, 255 },
	{ 525, -211 },
	{ 581, 255 },
	{ 581, -211 },
	{ 645, 255 },
	{ 645, -211 },
	{ 709, 255 },
	{ 709, -211 },
	{ 765, 255 },
	{ 765, -211 },
	{ 543, -254 },
	{ 543, -542 },
	{ 586, -254 },
	{ 586, -542 },
	{ 650, -254 },
	{ 650, -542 },
	{ 713, -254 },
	{ 713, -542 },
	{ 768, -254 },
	{ 768, -542 },
	{ 543, -1231 },
	{ 543, -1530 },
	{ 586, -1231 },
	{ 586, -1530 },
	{ 650, -1231 },
	{ 650, -1530 },
	{ 713, -1231 },
	{ 713, -1530 },
	{ 768, -1231 },
	{ 768, -1530 },
	{ 3, -575 },
	{ 3, -1205 },
	{ 48, -575 },
	{ 48, -1205 },
	{ 87, -575 },
	{ 87, -1205 },
	{ 87, -1530 },
	{ 87, -1231 },
	{ 48, -1530 },
	{ 48, -1231 },
	{ 3, -1530 },
	{ 3, -1231 },
	{ 543, -575 },
	{ 543, -1205 },
	{ 586, -575 },
	{ 586, -1205 },
	{ 650, -575 },
	{ 650, -1205 },
	{ 713, -575 },
	{ 713, -1205 },
	{ 768, -575 },
	{ 768, -1205 },
	{ 3, -254 },
	{ 3, -542 },
	{ 48, -254 },
	{ 48, -542 },
	{ 87, -254 },
	{ 87, -542 }
};

NJS_TEX uv_00206FC0[] = {
	{ 63, -2295 },
	{ 0, -2295 },
	{ 63, 255 },
	{ 0, 255 },
	{ 1275, -2295 },
	{ 1275, 255 },
	{ 1211, -2295 },
	{ 1211, 255 },
	{ 1147, -2295 },
	{ 1147, 255 },
	{ 1083, -2295 },
	{ 1083, 255 },
	{ 1020, -2295 },
	{ 1020, 255 },
	{ 956, -2295 },
	{ 956, 255 },
	{ 892, -2295 },
	{ 892, 255 },
	{ 828, -2295 },
	{ 828, 255 },
	{ 765, -2295 },
	{ 765, 255 },
	{ 701, -2295 },
	{ 701, 255 },
	{ 637, -2295 },
	{ 637, 255 },
	{ 573, -2295 },
	{ 573, 255 },
	{ 509, -2295 },
	{ 509, 255 },
	{ 446, -2295 },
	{ 446, 255 }
};

NJS_TEX uv_00207040[] = {
	{ 254, 0 },
	{ 0 },
	{ 254, 127 },
	{ 0, 127 },
	{ 254, 0 },
	{ 0 },
	{ 254, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00207060[] = {
	{ 509, 0 },
	{ 0 },
	{ 510, 255 },
	{ 0, 255 }
};

NJS_TEX uv_00207070[] = {
	{ 509, 0 },
	{ 0 },
	{ 509, 127 },
	{ 0, 127 }
};

NJS_MESHSET_SADX meshlist_00207080[] = {
	{ NJD_MESHSET_TRIMESH | 0, 3, poly_00206A68, NULL, NULL, NULL, uv_00206C90, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 2, poly_00206A86, NULL, NULL, NULL, uv_00206CC0, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_00206AF2, NULL, NULL, NULL, uv_00206D90, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 11, poly_00206B0A, NULL, NULL, NULL, uv_00206DB8, NULL },
//	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00206C24, NULL, NULL, NULL, uv_00206FC0, NULL },
//	{ NJD_MESHSET_TRIMESH | 5, 2, poly_00206C68, NULL, NULL, NULL, uv_00207040, NULL },
//	{ NJD_MESHSET_TRIMESH | 6, 1, poly_00206C7C, NULL, NULL, NULL, uv_00207060, NULL },
//	{ NJD_MESHSET_TRIMESH | 7, 1, poly_00206C86, NULL, NULL, NULL, uv_00207070, NULL }
};

NJS_MESHSET_SADX meshlist_00207080Z[] = {
	{ NJD_MESHSET_TRIMESH | 4, 2, poly_00206C24, NULL, NULL, NULL, uv_00206FC0, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, poly_00206C68, NULL, NULL, NULL, uv_00207040, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 1, poly_00206C7C, NULL, NULL, NULL, uv_00207060, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 1, poly_00206C86, NULL, NULL, NULL, uv_00207070, NULL }
};

NJS_VECTOR vertex_00207140[] = {
	{ 93.30379f, 1018.895f, 81.89976f },
	{ 102.3382f, 1054.94f, 78.80522f },
	{ 36.9986f, 1054.94f, 108.0173f },
	{ 108.9235f, 1054.94f, 68.03504f },
	{ 98.65713f, 1095.44f, 71.55153f },
	{ 93.30379f, 1090.985f, 81.89973f },
	{ 41.72511f, 1054.94f, -128.1505f },
	{ 31.45871f, 1095.44f, -124.634f },
	{ 98.65714f, 1014.44f, 71.55155f },
	{ 31.45871f, 1014.44f, -124.634f },
	{ 70.6088f, 1125.088f, 81.15875f },
	{ 68.62128f, 1117.371f, 90.35411f },
	{ 3.410381f, 1125.088f, -115.0268f },
	{ 68.62128f, 992.5081f, 90.35415f },
	{ 32.2941f, 1135.94f, 94.28249f },
	{ 34.90431f, 1127.03f, 101.903f },
	{ -34.90433f, 1135.94f, -101.9031f },
	{ 70.60884f, 984.7917f, 81.15881f },
	{ 3.410401f, 984.7917f, -115.0267f },
	{ -6.020612f, 1125.088f, 107.4063f },
	{ 1.187352f, 1117.371f, 113.4519f },
	{ -73.21905f, 1125.088f, -88.7793f },
	{ 34.90434f, 982.8499f, 101.903f },
	{ -34.06892f, 1095.44f, 117.0135f },
	{ -23.49516f, 1090.985f, 121.9063f },
	{ -101.2673f, 1095.44f, -79.17204f },
	{ 32.29413f, 973.9398f, 94.28255f },
	{ -34.9043f, 973.9398f, -101.903f },
	{ -44.3353f, 1054.94f, 120.53f },
	{ -32.52959f, 1054.94f, 125.0008f },
	{ -111.5337f, 1054.94f, -75.65554f },
	{ 1.187378f, 992.5081f, 113.4519f },
	{ -34.06889f, 1014.44f, 117.0135f },
	{ -23.49515f, 1018.895f, 121.9063f },
	{ -101.2673f, 1014.44f, -79.17203f },
	{ -6.020582f, 984.7917f, 107.4063f },
	{ -73.21901f, 984.7917f, -88.77926f },
	{ 99.0033f, -56.8124f, -33.91109f },
	{ 99.0033f, 1237.129f, -33.91109f },
	{ 83.67863f, -56.8124f, -62.84507f },
	{ 83.67863f, 1237.129f, -62.84507f },
	{ -85.62735f, -56.8124f, -60.16293f },
	{ -85.62735f, 1237.129f, -60.16293f },
	{ -100.0278f, -56.8124f, -30.75804f },
	{ -100.0278f, 1237.129f, -30.75804f },
	{ -104.6369f, -56.8124f, 1.657663f },
	{ -104.6369f, 1237.129f, 1.657663f },
	{ -99.00333f, -56.8124f, 33.9111f },
	{ -99.00333f, 1237.129f, 33.9111f },
	{ -83.67866f, -56.8124f, 62.84509f },
	{ -83.67866f, 1237.129f, 62.84509f },
	{ -60.16293f, -56.8124f, 85.62735f },
	{ -60.16293f, 1237.129f, 85.62735f },
	{ -30.75804f, -56.8124f, 100.0278f },
	{ -30.75804f, 1237.129f, 100.0278f },
	{ 1.657664f, -56.8124f, 104.6369f },
	{ 1.657664f, 1237.129f, 104.6369f },
	{ 33.9111f, -56.8124f, 99.00333f },
	{ 33.9111f, 1237.129f, 99.00333f },
	{ 62.84509f, -56.8124f, 83.67866f },
	{ 62.84509f, 1237.129f, 83.67866f },
	{ 85.62736f, -56.8124f, 60.16293f },
	{ 85.62736f, 1237.129f, 60.16293f },
	{ 100.0278f, -56.8124f, 30.75805f },
	{ 100.0278f, 1237.129f, 30.75805f },
	{ 104.6369f, -56.8124f, -1.657663f },
	{ 104.6369f, 1237.129f, -1.657663f },
	{ -86.54151f, 1202.526f, -24.74355f },
	{ 20.5587f, 1202.526f, -24.74356f },
	{ -86.54151f, 1287.681f, -24.74355f },
	{ 20.55869f, 1287.681f, -24.74356f },
	{ -15.84563f, 1202.526f, -8.247849f },
	{ 91.25458f, 1202.526f, -8.247855f },
	{ -15.84564f, 1406.443f, -8.247849f },
	{ 91.25456f, 1406.443f, -8.247855f },
	{ -41.76745f, 1202.526f, -62.44801f },
	{ 65.33274f, 1202.526f, -62.44802f },
	{ -41.76746f, 1438.255f, -62.44801f },
	{ 65.33274f, 1438.255f, -62.44802f },
	{ -50.0153f, 1202.526f, 48.30885f },
	{ 57.0849f, 1202.526f, 48.30885f },
	{ -50.01531f, 1296.164f, 48.30885f },
	{ 57.08489f, 1296.164f, 48.30885f },
	{ -23.21787f, 295.5383f, 96.47691f },
	{ -23.21787f, -56.26726f, 96.47691f },
	{ 99.9983f, 295.5383f, 0.584072f },
	{ 94.92355f, 295.5383f, 31.45666f },
	{ 94.92355f, -56.26726f, 31.45666f },
	{ 99.9983f, -56.26726f, 0.584072f },
	{ 80.55704f, 295.5383f, 59.25009f },
	{ 80.55704f, -56.26726f, 59.25009f },
	{ -0.5840729f, 295.5383f, 99.99832f },
	{ -0.5840729f, -56.26726f, 99.99832f },
	{ 58.30502f, 295.5383f, 81.24363f },
	{ 58.30502f, -56.26726f, 81.24363f },
	{ 30.34569f, 295.5383f, 95.28455f },
	{ 30.34569f, -56.26726f, 95.28455f },
	{ 39.90313f, 328.2417f, 90.85485f },
	{ 79.96049f, 328.2417f, -60.05263f },
	{ 94.60423f, 328.2417f, -32.4043f },
	{ 99.98749f, 328.2417f, -1.584005f },
	{ 60.05265f, 328.2417f, 79.96052f },
	{ 95.58324f, 328.2417f, 29.39136f },
	{ 81.82263f, 328.2417f, 57.48968f },
	{ 39.90313f, 545.6783f, 90.85485f },
	{ 79.96049f, 545.6783f, -60.05263f },
	{ 94.60423f, 545.6783f, -32.4043f },
	{ 99.98749f, 545.6783f, -1.584005f },
	{ 60.05265f, 545.6783f, 79.96052f },
	{ 95.58324f, 545.6783f, 29.39136f },
	{ 81.82263f, 545.6783f, 57.48968f },
	{ 39.90313f, 569.8906f, 90.85485f },
	{ 39.90313f, 1045.431f, 90.85485f },
	{ 94.60423f, 569.8906f, -32.4043f },
	{ 79.96049f, 569.8906f, -60.05263f },
	{ 79.96049f, 1045.431f, -60.05263f },
	{ 94.60423f, 1045.431f, -32.4043f },
	{ 99.98749f, 569.8906f, -1.584005f },
	{ 99.98749f, 1045.431f, -1.584005f },
	{ 60.05265f, 569.8906f, 79.96052f },
	{ 60.05265f, 1045.431f, 79.96052f },
	{ 95.58324f, 569.8906f, 29.39136f },
	{ 95.58324f, 1045.431f, 29.39136f },
	{ 81.82263f, 569.8906f, 57.48968f },
	{ 81.82263f, 1045.431f, 57.48968f },
	{ 39.90313f, 1064.976f, 90.85485f },
	{ 39.90313f, 1290.324f, 90.85485f },
	{ 94.60423f, 1064.976f, -32.4043f },
	{ 79.96049f, 1064.976f, -60.05263f },
	{ 79.96049f, 1290.324f, -60.05263f },
	{ 94.60423f, 1290.324f, -32.4043f },
	{ 99.98749f, 1064.976f, -1.584005f },
	{ 99.98749f, 1290.324f, -1.584005f },
	{ 60.05265f, 1064.976f, 79.96052f },
	{ 60.05265f, 1290.324f, 79.96052f },
	{ 95.58324f, 1064.976f, 29.39136f },
	{ 95.58324f, 1290.324f, 29.39136f },
	{ 81.82263f, 1064.976f, 57.48968f },
	{ 81.82263f, 1290.324f, 57.48968f },
	{ -37.81471f, 312.8919f, 92.44508f },
	{ -59.25008f, 312.8919f, 80.55703f },
	{ -59.25008f, -56.26726f, 80.55703f },
	{ -37.81471f, -56.26726f, 92.44508f },
	{ -99.99832f, 312.8919f, -0.5840679f },
	{ -94.92359f, 312.8919f, -31.45666f },
	{ -94.92359f, -56.26726f, -31.45666f },
	{ -99.99832f, -56.26726f, -0.5840679f },
	{ -81.24362f, 312.8919f, 58.30502f },
	{ -81.24362f, -56.26726f, 58.30502f },
	{ -80.55703f, 312.8919f, -59.25007f },
	{ -80.55703f, -56.26726f, -59.25007f },
	{ -95.28455f, 312.8919f, 30.34569f },
	{ -95.28455f, -56.26726f, 30.34569f },
	{ 25.84284f, 328.4012f, 96.47897f },
	{ 1.584007f, 328.4012f, 99.98749f },
	{ -79.96052f, 328.4012f, 60.05265f },
	{ -94.60426f, 328.4012f, 32.4043f },
	{ -29.39135f, 328.4012f, 95.58322f },
	{ -99.98747f, 328.4012f, 1.584006f },
	{ -95.58321f, 328.4012f, -29.39135f },
	{ -81.82262f, 328.4012f, -57.48967f },
	{ -57.48967f, 328.4012f, 81.82262f },
	{ 25.84284f, 408.4761f, 96.47897f },
	{ 1.584007f, 408.4761f, 99.98749f },
	{ -79.96052f, 408.4761f, 60.05265f },
	{ -94.60426f, 408.4761f, 32.4043f },
	{ -29.39135f, 408.4761f, 95.58322f },
	{ -99.98747f, 408.4761f, 1.584006f },
	{ -95.58321f, 408.4761f, -29.39135f },
	{ -81.82262f, 408.4761f, -57.48967f },
	{ -57.48967f, 408.4761f, 81.82262f },
	{ 1.584007f, 432.6883f, 99.98749f },
	{ 25.84284f, 432.6883f, 96.47897f },
	{ 25.84284f, 811.3802f, 96.47897f },
	{ 1.584007f, 811.3802f, 99.98749f },
	{ -94.60426f, 432.6883f, 32.4043f },
	{ -79.96052f, 432.6883f, 60.05265f },
	{ -79.96052f, 811.3802f, 60.05265f },
	{ -94.60426f, 811.3802f, 32.4043f },
	{ -29.39135f, 432.6883f, 95.58322f },
	{ -29.39135f, 811.3802f, 95.58322f },
	{ -99.98747f, 432.6883f, 1.584006f },
	{ -99.98747f, 811.3802f, 1.584006f },
	{ -95.58321f, 432.6883f, -29.39135f },
	{ -95.58321f, 811.3802f, -29.39135f },
	{ -81.82262f, 432.6883f, -57.48967f },
	{ -81.82262f, 811.3802f, -57.48967f },
	{ -57.48967f, 432.6883f, 81.82262f },
	{ -57.48967f, 811.3802f, 81.82262f },
	{ 1.584007f, 847.0664f, 99.98749f },
	{ 25.84284f, 847.0664f, 96.47897f },
	{ 25.84284f, 1241.9f, 96.47897f },
	{ 1.584007f, 1241.9f, 99.98749f },
	{ -94.60426f, 847.0664f, 32.4043f },
	{ -79.96052f, 847.0664f, 60.05265f },
	{ -79.96052f, 1241.9f, 60.05265f },
	{ -94.60426f, 1241.9f, 32.4043f },
	{ -29.39135f, 847.0664f, 95.58322f },
	{ -29.39135f, 1241.9f, 95.58322f },
	{ -99.98747f, 847.0664f, 1.584006f },
	{ -99.98747f, 1241.9f, 1.584006f },
	{ -95.58321f, 847.0664f, -29.39135f },
	{ -95.58321f, 1241.9f, -29.39135f },
	{ -81.82262f, 847.0664f, -57.48967f },
	{ -81.82262f, 1241.9f, -57.48967f },
	{ -57.48967f, 847.0664f, 81.82262f },
	{ -57.48967f, 1241.9f, 81.82262f }
};

NJS_VECTOR normal_00207AF4[] = {
	{ 0.641046f, -0.21389f, 0.737096f },
	{ 0.693742f, 0.000347f, 0.7202229f },
	{ 0.324043f, 0, 0.9460419f },
	{ 0.996743f, 0.000302f, 0.080644f },
	{ 0.881364f, 0.4584f, 0.114311f },
	{ 0.643993f, 0.216564f, 0.733739f },
	{ 0.9460419f, 0, -0.324043f },
	{ 0.819297f, 0.5f, -0.280629f },
	{ 0.881391f, -0.457301f, 0.118426f },
	{ 0.819297f, -0.5f, -0.280629f },
	{ 0.562916f, 0.797963f, 0.215362f },
	{ 0.497696f, 0.381425f, 0.778982f },
	{ 0.473021f, 0.866026f, -0.162022f },
	{ 0.495908f, -0.377455f, 0.78205f },
	{ 0.124823f, 0.923221f, 0.363431f },
	{ 0.29104f, 0.441906f, 0.848537f },
	{ 0, 1, -0.00001f },
	{ 0.563159f, -0.796635f, 0.2196f },
	{ 0.473021f, -0.866025f, -0.162021f },
	{ -0.310251f, 0.796636f, 0.5187629f },
	{ 0.08772399f, 0.377457f, 0.921863f },
	{ -0.473021f, 0.866026f, 0.162021f },
	{ 0.290333f, -0.441906f, 0.848779f },
	{ -0.623683f, 0.457302f, 0.6339509f },
	{ -0.054496f, 0.213891f, 0.975336f },
	{ -0.819297f, 0.5f, 0.280629f },
	{ 0.124216f, -0.923221f, 0.36364f },
	{ 0, -1, 0 },
	{ -0.7379749f, -0.000302f, 0.674828f },
	{ -0.10647f, -0.000347f, 0.994316f },
	{ -0.9460419f, 0, 0.324043f },
	{ 0.08443099f, -0.381425f, 0.920536f },
	{ -0.626185f, -0.458399f, 0.630684f },
	{ -0.058881f, -0.216563f, 0.9744909f },
	{ -0.819297f, -0.5f, 0.28063f },
	{ -0.312657f, -0.797963f, 0.515268f },
	{ -0.473021f, -0.866025f, 0.162022f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.8837039f, 0, -0.468047f },
	{ 0.8837039f, 0, -0.468047f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.9558319f, 0, -0.293913f },
	{ -0.9558319f, 0, -0.293913f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.574897f, 0, 0.818226f },
	{ -0.574897f, 0, 0.818226f },
	{ -0.293914f, 0, 0.9558319f },
	{ -0.293914f, 0, 0.9558319f },
	{ 0.01584f, 0, 0.9998749f },
	{ 0.01584f, 0, 0.9998749f },
	{ 0.324043f, 0, 0.9460419f },
	{ 0.324043f, 0, 0.9460419f },
	{ 0.600526f, 0, 0.799605f },
	{ 0.600526f, 0, 0.799605f },
	{ 0.818226f, 0, 0.574897f },
	{ 0.818226f, 0, 0.574897f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ 0, 0, 1 },
	{ -0.153732f, 0, 0.988113f },
	{ -0.153732f, 0, 0.988113f },
	{ 0.986758f, 0, 0.1622f },
	{ 0.949236f, 0, 0.314566f },
	{ 0.949236f, 0, 0.314566f },
	{ 0.986758f, 0, 0.1622f },
	{ 0.8055699f, 0, 0.592501f },
	{ 0.8055699f, 0, 0.592501f },
	{ -0.001553f, 0, 0.999999f },
	{ -0.001553f, 0, 0.999999f },
	{ 0.58305f, 0, 0.812436f },
	{ 0.58305f, 0, 0.812436f },
	{ 0.303457f, 0, 0.952845f },
	{ 0.303457f, 0, 0.952845f },
	{ 0.475608f, 0, 0.879657f },
	{ 0.8837039f, 0, -0.468047f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0.60395f, 0, 0.797023f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.818226f, 0, 0.574897f },
	{ 0.475608f, 0, 0.879657f },
	{ 0.8837039f, 0, -0.468047f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0.60395f, 0, 0.797023f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.818226f, 0, 0.574897f },
	{ 0.475609f, 0, 0.879657f },
	{ 0.475609f, 0, 0.879657f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.8837039f, 0, -0.468047f },
	{ 0.8837039f, 0, -0.468047f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0.60395f, 0, 0.797023f },
	{ 0.60395f, 0, 0.797023f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.818226f, 0, 0.574897f },
	{ 0.818226f, 0, 0.574897f },
	{ 0.475608f, 0, 0.879657f },
	{ 0.475608f, 0, 0.879657f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.8837039f, 0, -0.468047f },
	{ 0.8837039f, 0, -0.468047f },
	{ 0.9460419f, 0, -0.324044f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0.9998749f, 0, -0.015841f },
	{ 0.60395f, 0, 0.797023f },
	{ 0.60395f, 0, 0.797023f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.9558319f, 0, 0.293914f },
	{ 0.818226f, 0, 0.574897f },
	{ 0.818226f, 0, 0.574897f },
	{ -0.485004f, 0, 0.874512f },
	{ -0.604234f, 0, 0.796807f },
	{ -0.604234f, 0, 0.796807f },
	{ -0.485004f, 0, 0.874512f },
	{ -0.999983f, 0, -0.00584f },
	{ -0.949235f, 0, -0.314566f },
	{ -0.949235f, 0, -0.314566f },
	{ -0.999983f, 0, -0.00584f },
	{ -0.812436f, 0, 0.58305f },
	{ -0.812436f, 0, 0.58305f },
	{ -0.888339f, 0, -0.459187f },
	{ -0.888339f, 0, -0.459187f },
	{ -0.952845f, 0, 0.303457f },
	{ -0.952845f, 0, 0.303457f },
	{ 0.143139f, 0, 0.989703f },
	{ 0.001197f, 0, 0.999999f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.293914f, 0, 0.9558319f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9558319f, 0, -0.293914f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.574897f, 0, 0.818226f },
	{ 0.143139f, 0, 0.989703f },
	{ 0.001197f, 0, 0.999999f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.293914f, 0, 0.9558319f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9558319f, 0, -0.293914f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.574897f, 0, 0.818226f },
	{ 0.001197f, 0, 0.999999f },
	{ 0.143139f, 0, 0.989703f },
	{ 0.143139f, 0, 0.989703f },
	{ 0.001197f, 0, 0.999999f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.293914f, 0, 0.9558319f },
	{ -0.293914f, 0, 0.9558319f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9558319f, 0, -0.293914f },
	{ -0.9558319f, 0, -0.293914f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.574897f, 0, 0.818226f },
	{ -0.574897f, 0, 0.818226f },
	{ 0.001197f, 0, 0.999999f },
	{ 0.143139f, 0, 0.989703f },
	{ 0.143139f, 0, 0.989703f },
	{ 0.001197f, 0, 0.999999f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.799605f, 0, 0.600526f },
	{ -0.9460419f, 0, 0.324043f },
	{ -0.293914f, 0, 0.9558319f },
	{ -0.293914f, 0, 0.9558319f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9998749f, 0, 0.01584f },
	{ -0.9558319f, 0, -0.293914f },
	{ -0.9558319f, 0, -0.293914f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.898086f, 0, -0.43982f },
	{ -0.574897f, 0, 0.818226f },
	{ -0.574897f, 0, 0.818226f }
};

NJS_MODEL_SADX attach_002084A8 = { vertex_00207140, normal_00207AF4, LengthOfArray(vertex_00207140), meshlist_00207080, matlist_002069C8, LengthOfArray(meshlist_00207080), LengthOfArray(matlist_002069C8),{ -1.305099f, 690.7211f, -1.574844f }, 758.174f, NULL };

NJS_MODEL_SADX attach_002084A8Z = { vertex_00207140, normal_00207AF4, LengthOfArray(vertex_00207140), meshlist_00207080Z, matlist_002069C8, LengthOfArray(meshlist_00207080Z), LengthOfArray(matlist_002069C8),{ -1.305099f, 690.7211f, -1.574844f }, 758.174f, NULL };

NJS_OBJECT object_002084D0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002084A8, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_0020C3B0Z };

NJS_OBJECT object_002084D0Z = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_002084A8Z, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, &object_002062F8 };
