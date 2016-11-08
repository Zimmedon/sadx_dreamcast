#include "stdafx.h"
#include "SADXModLoader.h"

NJS_MATERIAL matlist_02320B00[] = {
	{ { 0x7cFFFFFF },{ 0x00FFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x0007800C },{ 0x0006000B }, 0.000000000000000000000000000000000000001377546f, 65553, 0 | 0x5 }
};

Sint16 poly_02320B14[] = {
	0x8000u | 12, 7, 11, 6, 10, 15, 17, 1, 5, 0, 4, 12, 14,
	0x8000u | 12, 12, 13, 0, 3, 1, 2, 15, 16, 6, 9, 7, 8
};

NJS_TEX uv_02320B48[] = {
	{ 0, 127 },
	{ 0, 255 },
	{ 51, 127 },
	{ 51, 255 },
	{ 102, 127 },
	{ 102, 255 },
	{ 153, 127 },
	{ 153, 255 },
	{ 204, 127 },
	{ 204, 255 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 127 },
	{ 255, 0 },
	{ 204, 127 },
	{ 204, 0 },
	{ 153, 127 },
	{ 153, 0 },
	{ 102, 127 },
	{ 102, 0 },
	{ 51, 127 },
	{ 51, 0 },
	{ 0, 127 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_02320BA8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_02320B14, NULL, NULL, NULL, uv_02320B48, NULL }
};

NJS_VECTOR vertex_02320BC8[] = {
	{ 150, 2.5f, 0 },
	{ 50, 2.5f, 0 },
	{ 50, 157.5f, 0 },
	{ 150, 157.5f, 0 },
	{ 150, -152.5f, 0 },
	{ 50, -152.5f, 0 },
	{ -150, 2.5f, 0 },
	{ -250, 2.5f, 0 },
	{ -250, 157.5f, 0 },
	{ -150, 157.5f, 0 },
	{ -150, -152.5f, 0 },
	{ -250, -152.5f, 0 },
	{ 250, 2.5f, 0 },
	{ 250, 157.5f, 0 },
	{ 250, -152.5f, 0 },
	{ -50, 2.5f, 0 },
	{ -50, 157.5f, 0 },
	{ -50, -152.5f, 0 }
};

NJS_VECTOR normal_02320CA0[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MATERIAL matlist_02320828[] = {
	{ { 0x46FFFFFF },{ 0x00FFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x0007800C },{ 0x0006000B }, 0.000000000000000000000000000000000000001377546f, 65553, 0 | 0x5 }
};

Sint16 poly_0232083C[] = {
	0x8000u | 12, 7, 11, 6, 10, 15, 17, 1, 5, 0, 4, 12, 14,
	0x8000u | 12, 12, 13, 0, 3, 1, 2, 15, 16, 6, 9, 7, 8
};

NJS_TEX uv_02320870[] = {
	{ 0, 127 },
	{ 0, 255 },
	{ 51, 127 },
	{ 51, 255 },
	{ 102, 127 },
	{ 102, 255 },
	{ 153, 127 },
	{ 153, 255 },
	{ 204, 127 },
	{ 204, 255 },
	{ 255, 127 },
	{ 255, 255 },
	{ 255, 127 },
	{ 255, 0 },
	{ 204, 127 },
	{ 204, 0 },
	{ 153, 127 },
	{ 153, 0 },
	{ 102, 127 },
	{ 102, 0 },
	{ 51, 127 },
	{ 51, 0 },
	{ 0, 127 },
	{ 0 }
};

NJS_MESHSET_SADX meshlist_023208D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0232083C, NULL, NULL, NULL, uv_02320870, NULL }
};

NJS_VECTOR vertex_023208F0[] = {
	{ 150, 2.5f, 0 },
	{ 50, 2.5f, 0 },
	{ 50, 157.5f, 0 },
	{ 150, 157.5f, 0 },
	{ 150, -152.5f, 0 },
	{ 50, -152.5f, 0 },
	{ -150, 2.5f, 0 },
	{ -250, 2.5f, 0 },
	{ -250, 157.5f, 0 },
	{ -150, 157.5f, 0 },
	{ -150, -152.5f, 0 },
	{ -250, -152.5f, 0 },
	{ 250, 2.5f, 0 },
	{ 250, 157.5f, 0 },
	{ 250, -152.5f, 0 },
	{ -50, 2.5f, 0 },
	{ -50, 157.5f, 0 },
	{ -50, -152.5f, 0 }
};

NJS_VECTOR normal_023209C8[] = {
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_02320AA0 = { vertex_023208F0, normal_023209C8, LengthOfArray(vertex_023208F0), meshlist_023208D0, matlist_02320828, LengthOfArray(meshlist_023208D0), LengthOfArray(matlist_02320828),{ 0, 2.5f, 0 }, 250, NULL };

NJS_OBJECT object_02320ACC = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02320AA0, 550, 152.2f, -26.49163f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_02321590 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02320AA0, 400.0001f, 122.5f, -650, 0, 0x18000, 0, 1, 1, 1, NULL, NULL };

NJS_MODEL_SADX attach_02320D78 = { vertex_02320BC8, normal_02320CA0, LengthOfArray(vertex_02320BC8), meshlist_02320BA8, matlist_02320B00, LengthOfArray(meshlist_02320BA8), LengthOfArray(matlist_02320B00),{ 0, 2.5f, 0 }, 250, NULL };

NJS_OBJECT object_02320DA4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02320D78, 550, 152.2f, -74.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_023215C4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_02320D78, 400, 122.5f, -600, 0, 0x18000, 0, 1, 1, 1, NULL, NULL };
NJS_MATERIAL matlist_02320550[] = {
	{ { 0x7cFFFFFF },{ 0x7BFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x0007800C },{ 0x00060008 }, 0.000000000000000000000000000000000000001377545f, 65552, 0 | 0x2 }
};

Sint16 poly_02320564[] = {
	0x8000u | 12, 7, 8, 6, 9, 15, 16, 1, 2, 0, 3, 12, 13,
	0x8000u | 12, 12, 14, 0, 4, 1, 5, 15, 17, 6, 10, 7, 11
};

NJS_TEX uv_02320598[] = {
	{ 0, 127 },
	{ 0 },
	{ 51, 127 },
	{ 51, 0 },
	{ 102, 127 },
	{ 102, 0 },
	{ 153, 127 },
	{ 153, 0 },
	{ 204, 127 },
	{ 204, 0 },
	{ 255, 127 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 255 },
	{ 204, 127 },
	{ 204, 255 },
	{ 153, 127 },
	{ 153, 255 },
	{ 102, 127 },
	{ 102, 255 },
	{ 51, 127 },
	{ 51, 255 },
	{ 0, 127 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_023205F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_02320564, NULL, NULL, NULL, uv_02320598, NULL }
};

NJS_VECTOR vertex_02320618[] = {
	{ 150, 2.5f, 0 },
	{ 50, 2.5f, 0 },
	{ 50, 157.5f, 0 },
	{ 150, 157.5f, 0 },
	{ 150, -152.5f, 0 },
	{ 50, -152.5f, 0 },
	{ -150, 2.5f, 0 },
	{ -250, 2.5f, 0 },
	{ -250, 157.5f, 0 },
	{ -150, 157.5f, 0 },
	{ -150, -152.5f, 0 },
	{ -250, -152.5f, 0 },
	{ 250, 2.5f, 0 },
	{ 250, 157.5f, 0 },
	{ 250, -152.5f, 0 },
	{ -50, 2.5f, 0 },
	{ -50, 157.5f, 0 },
	{ -50, -152.5f, 0 }
};

NJS_VECTOR normal_023206F0[] = {
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
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_023207C8 = { vertex_02320618, normal_023206F0, LengthOfArray(vertex_02320618), meshlist_023205F8, matlist_02320550, LengthOfArray(meshlist_023205F8), LengthOfArray(matlist_02320550),{ 0, 2.5f, 0 }, 250, NULL };

NJS_OBJECT object_023207F4 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_023207C8, 550, 152.2f, -124.5f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_0232155C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_023207C8, 400, 122.5f, -550, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };
NJS_MATERIAL matlist_02320278[] = {
	{ { 0x46FFFFFF },{ 0x00FFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0x0007800C },{ 0x00060008 }, 0.000000000000000000000000000000000000001377545f, 65552, 0 | 0x2 }
};

Sint16 poly_0232028C[] = {
	0x8000u | 12, 7, 8, 6, 9, 15, 16, 1, 2, 0, 3, 12, 13,
	0x8000u | 12, 12, 14, 0, 4, 1, 5, 15, 17, 6, 10, 7, 11
};

NJS_TEX uv_023202C0[] = {
	{ 0, 127 },
	{ 0 },
	{ 51, 127 },
	{ 51, 0 },
	{ 102, 127 },
	{ 102, 0 },
	{ 153, 127 },
	{ 153, 0 },
	{ 204, 127 },
	{ 204, 0 },
	{ 255, 127 },
	{ 255, 0 },
	{ 255, 127 },
	{ 255, 255 },
	{ 204, 127 },
	{ 204, 255 },
	{ 153, 127 },
	{ 153, 255 },
	{ 102, 127 },
	{ 102, 255 },
	{ 51, 127 },
	{ 51, 255 },
	{ 0, 127 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlist_02320320[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, poly_0232028C, NULL, NULL, NULL, uv_023202C0, NULL }
};

NJS_VECTOR vertex_02320340[] = {
	{ 150, 2.5f, 0 },
	{ 50, 2.5f, 0 },
	{ 50, 157.5f, 0 },
	{ 150, 157.5f, 0 },
	{ 150, -152.5f, 0 },
	{ 50, -152.5f, 0 },
	{ -150, 2.5f, 0 },
	{ -250, 2.5f, 0 },
	{ -250, 157.5f, 0 },
	{ -150, 157.5f, 0 },
	{ -150, -152.5f, 0 },
	{ -250, -152.5f, 0 },
	{ 250, 2.5f, 0 },
	{ 250, 157.5f, 0 },
	{ 250, -152.5f, 0 },
	{ -50, 2.5f, 0 },
	{ -50, 157.5f, 0 },
	{ -50, -152.5f, 0 }
};

NJS_VECTOR normal_02320418[] = {
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
	{ 0, 0, 1 },
	{ 0, 0, 1 }
};

NJS_MODEL_SADX attach_023204F0 = { vertex_02320340, normal_02320418, LengthOfArray(vertex_02320340), meshlist_02320320, matlist_02320278, LengthOfArray(meshlist_02320320), LengthOfArray(matlist_02320278),{ 0, 2.5f, 0 }, 250, NULL };

NJS_OBJECT object_0232051C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_023204F0, 550, 152.2f, -174.5012f, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_OBJECT object_02321528 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_023204F0, 400, 122.5f, -499.9998f, 0, 0x8000, 0, 1, 1, 1, NULL, NULL };











NJS_MATERIAL matlist_02306320[] = {
	{ { 0xFF000000 },{ 0x00000000 }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE| NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFF000000 },{ 0x00000000 }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFF000000 },{ 0x00000000 }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFF000000 },{ 0x00000000 }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFF000000 },{ 0x00000000 }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFF000000 },{ 0x00000000 }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_02306398[] = {
	4, 2, 3, 1, 0,
	4, 58, 57, 59, 56,
	4, 3, 5, 0, 4,
	4, 59, 56, 67, 66,
	4, 8, 9, 5, 4,
	4, 11, 7, 10, 6,
	4, 8, 11, 9, 10,
	4, 50, 51, 49, 48,
	4, 62, 63, 61, 60,
	4, 63, 85, 60, 84,
	4, 74, 75, 66, 67,
	4, 91, 50, 90, 49,
	4, 94, 95, 93, 92,
	4, 75, 74, 83, 82,
	4, 99, 97, 98, 96,
	4, 83, 82, 89, 88,
	4, 95, 107, 92, 106,
	4, 108, 99, 116, 98,
	4, 91, 90, 107, 106,
	4, 84, 85, 116, 108
};

Sint16 poly_02306460[] = {
	3, 12, 13, 15,
	3, 13, 14, 15,
	3, 13, 16, 14,
	3, 16, 17, 14,
	3, 18, 19, 16,
	3, 19, 17, 16,
	3, 18, 20, 19,
	3, 20, 21, 19,
	3, 20, 22, 21,
	3, 22, 23, 21,
	4, 24, 25, 14, 15,
	4, 26, 24, 17, 14,
	4, 26, 17, 27, 19,
	4, 28, 27, 21, 19,
	4, 29, 28, 23, 21,
	4, 30, 31, 24, 25,
	4, 32, 30, 26, 24,
	4, 32, 26, 33, 27,
	4, 34, 33, 28, 27,
	4, 35, 34, 29, 28,
	4, 36, 37, 30, 31,
	4, 38, 36, 32, 30,
	4, 38, 32, 39, 33,
	4, 40, 39, 34, 33,
	4, 41, 40, 35, 34,
	3, 37, 36, 43,
	3, 36, 42, 43,
	3, 36, 38, 42,
	3, 38, 44, 42,
	3, 39, 45, 38,
	3, 45, 44, 38,
	3, 39, 40, 45,
	3, 40, 46, 45,
	3, 40, 41, 46,
	3, 41, 47, 46
};

Sint16 poly_02306598[] = {
	3, 52, 53, 55,
	3, 53, 54, 55,
	3, 64, 52, 65,
	3, 52, 55, 65,
	3, 64, 65, 73,
	3, 65, 72, 73,
	3, 76, 77, 79,
	3, 77, 78, 79,
	3, 80, 73, 81,
	3, 73, 72, 81,
	3, 86, 80, 87,
	3, 80, 81, 87,
	3, 100, 102, 101,
	3, 102, 103, 101,
	3, 102, 104, 103,
	3, 104, 105, 103,
	4, 104, 112, 105, 110,
	3, 112, 104, 111,
	3, 111, 76, 112,
	3, 76, 79, 112
};

Sint16 poly_02306640[] = {
	3, 53, 52, 57,
	3, 52, 56, 57,
	3, 52, 64, 56,
	3, 64, 66, 56,
	3, 66, 64, 74,
	3, 64, 73, 74,
	3, 77, 76, 48,
	3, 76, 49, 48,
	3, 73, 80, 74,
	3, 80, 82, 74,
	3, 80, 86, 82,
	3, 86, 88, 82,
	3, 102, 100, 92,
	3, 100, 93, 92,
	3, 104, 102, 106,
	3, 102, 92, 106,
	3, 104, 106, 111,
	3, 106, 90, 111,
	3, 76, 111, 49,
	3, 111, 90, 49
};

Sint16 poly_023066E0[] = {
	3, 58, 59, 2,
	3, 59, 3, 2,
	3, 59, 67, 3,
	3, 67, 5, 3,
	3, 5, 67, 8,
	3, 67, 75, 8,
	3, 51, 50, 62,
	3, 50, 63, 62,
	3, 75, 83, 8,
	3, 83, 11, 8,
	3, 83, 89, 11,
	3, 89, 7, 11,
	3, 95, 94, 99,
	3, 94, 97, 99,
	3, 107, 95, 108,
	3, 95, 99, 108,
	3, 107, 108, 91,
	3, 108, 85, 91,
	3, 50, 91, 63,
	3, 91, 85, 63
};

Sint16 poly_02306780[] = {
	3, 123, 121, 124,
	0x8000u | 5, 124, 122, 121, 70, 69,
	4, 118, 120, 117, 119,
	3, 70, 71, 122,
	0x8000u | 8, 119, 114, 120, 109, 118, 113, 117, 115,
	4, 68, 124, 71, 122,
	3, 68, 123, 124
};

NJS_COLOR vcolor_023067D0[] = {
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 }
};

NJS_COLOR vcolor_02306910[] = {
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFFFFFFF },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC }
};

NJS_COLOR vcolor_02306AF0[] = {
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFFC8B4DC },
	{ 0xFF445562 },
	{ 0xFF445562 }
};

NJS_COLOR vcolor_02306BE8[] = {
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFC8B4DC },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF }
};

NJS_COLOR vcolor_02306CD8[] = {
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFFFFEFBF },
	{ 0xFF8A869B },
	{ 0xFF8A869B }
};

NJS_COLOR vcolor_02306DC8[] = {
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFCCCCCC },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFCCCCCC },
	{ 0xFFCCCCCC },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFB2B2B2 },
	{ 0xFFCCCCCC }
};

NJS_TEX uv_02306E40[] = {
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 1274, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 1274, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 1274, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 1274, 255 },
	{ 1274, 0 },
	{ 0, 255 },
	{ 0 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 1274, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 1274, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 0 },
	{ 1274, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1274, 0 },
	{ 1274, 255 },
	{ 1274, 255 },
	{ 1274, 0 },
	{ 0, 255 },
	{ 0 }
};

NJS_TEX uv_02306F80[] = {
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 0 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 0 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 255 },
	{ 0, 255 },
	{ 765, 0 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 0, 255 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 },
	{ 0, 255 },
	{ 0 },
	{ 765, 255 },
	{ 0 },
	{ 765, 0 },
	{ 765, 255 }
};

NJS_TEX uv_02307160[] = {
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 127, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, -510 }
};

NJS_TEX uv_02307258[] = {
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, -510 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, 255 },
	{ 0, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, 255 },
	{ 255, -510 },
	{ 0, -510 },
	{ 255, -510 },
	{ 0, 255 },
	{ 255, -510 },
	{ 255, 255 },
	{ 0, 255 }
};

NJS_TEX uv_02307348[] = {
	{ 1275, 0 },
	{ 0 },
	{ 1275, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 1275, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 1275, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 1275, 0 },
	{ 0 },
	{ 1275, 255 },
	{ 0 },
	{ 0, 255 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 0 },
	{ 1275, 255 },
	{ 0, 255 },
	{ 0 },
	{ 0 },
	{ 1275, 0 },
	{ 0, 255 },
	{ 1275, 0 },
	{ 1275, 255 },
	{ 0, 255 }
};

NJS_TEX uv_02307438[] = {
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 },
	{ 89, 12 }
};

NJS_MESHSET_SADX meshlist_023074B0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 20, poly_02306398, NULL, NULL, vcolor_023067D0, uv_02306E40, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 35, poly_02306460, NULL, NULL, vcolor_02306910, uv_02306F80, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 20, poly_02306598, NULL, NULL, vcolor_02306AF0, uv_02307160, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 20, poly_02306640, NULL, NULL, vcolor_02306BE8, uv_02307258, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 20, poly_023066E0, NULL, NULL, vcolor_02306CD8, uv_02307348, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 7, poly_02306780, NULL, NULL, vcolor_02306DC8, uv_02307438, NULL }
};

NJS_VECTOR vertex_02307558[] = {
	{ 250, -116.5f, 74.99998f },
	{ 250, -116.5f, 125 },
	{ 248, -116.5f, 125 },
	{ 248, -116.5f, 74.99998f },
	{ 250, -116.5f, 24.99998f },
	{ 248, -116.5f, 24.99998f },
	{ 250, -116.5f, -125 },
	{ 248, -116.5f, -125 },
	{ 248, -116.5f, -25.00002f },
	{ 250, -116.5f, -25.00002f },
	{ 250, -116.5f, -75.00002f },
	{ 248, -116.5f, -75.00002f },
	{ -250, -157.5f, -125 },
	{ -250, -157.5f, -75 },
	{ -150, -157.5f, -75 },
	{ -150, -157.5f, -125 },
	{ -250, -157.5f, -25 },
	{ -150, -157.5f, -25 },
	{ -250, -157.5f, 25 },
	{ -150, -157.5f, 25 },
	{ -250, -157.5f, 75 },
	{ -150, -157.5f, 75 },
	{ -250, -157.5f, 125 },
	{ -150, -157.5f, 125 },
	{ -50, -157.5f, -75 },
	{ -50, -157.5f, -125 },
	{ -50, -157.5f, -25 },
	{ -50, -157.5f, 25 },
	{ -50, -157.5f, 75 },
	{ -50, -157.5f, 125 },
	{ 50, -157.5f, -75 },
	{ 50, -157.5f, -125 },
	{ 50, -157.5f, -25 },
	{ 50, -157.5f, 25 },
	{ 50, -157.5f, 75 },
	{ 50, -157.5f, 125 },
	{ 150, -157.5f, -75 },
	{ 150, -157.5f, -125 },
	{ 150, -157.5f, -25 },
	{ 150, -157.5f, 25 },
	{ 150, -157.5f, 75 },
	{ 150, -157.5f, 125 },
	{ 250, -157.5f, -75 },
	{ 250, -157.5f, -125 },
	{ 250, -157.5f, -25 },
	{ 250, -157.5f, 25 },
	{ 250, -157.5f, 75 },
	{ 250, -157.5f, 125 },
	{ -250, -108, -125 },
	{ -250, -108, -75 },
	{ -248, -108, -75 },
	{ -248, -108, -125 },
	{ 250, 2.5f, 75 },
	{ 250, 2.5f, 125 },
	{ 250, 157.5f, 125 },
	{ 250, 157.5f, 75 },
	{ 250, -108, 75 },
	{ 250, -108, 125 },
	{ 248, -108, 125 },
	{ 248, -108, 75 },
	{ -250, -116.5f, -75 },
	{ -250, -116.5f, -125 },
	{ -248, -116.5f, -125 },
	{ -248, -116.5f, -75 },
	{ 250, 2.5f, 25 },
	{ 250, 157.5f, 25 },
	{ 250, -108, 25 },
	{ 248, -108, 25 },
	{ 250, 157.5f, -125 },
	{ -250, 157.5f, -125 },
	{ -250, -157.5f, -125 },
	{ 250, -157.5f, -125 },
	{ 250, 157.5f, -25 },
	{ 250, 2.5f, -25 },
	{ 250, -108, -25 },
	{ 248, -108, -25 },
	{ -250, 2.5f, -75 },
	{ -250, 2.5f, -125 },
	{ -250, 157.5f, -125 },
	{ -250, 157.5f, -75 },
	{ 250, 2.5f, -75 },
	{ 250, 157.5f, -75 },
	{ 250, -108, -75 },
	{ 248, -108, -75 },
	{ -250, -116.5f, -25 },
	{ -248, -116.5f, -25 },
	{ 250, 2.5f, -125 },
	{ 250, 157.5f, -125 },
	{ 250, -108, -125 },
	{ 248, -108, -125 },
	{ -250, -108, -25 },
	{ -248, -108, -25 },
	{ -250, -108, 75 },
	{ -250, -108, 125 },
	{ -248, -108, 125 },
	{ -248, -108, 75 },
	{ -250, -116.5f, 125 },
	{ -248, -116.5f, 125 },
	{ -250, -116.5f, 75 },
	{ -248, -116.5f, 75 },
	{ -250, 2.5f, 125 },
	{ -250, 157.5f, 125 },
	{ -250, 2.5f, 75 },
	{ -250, 157.5f, 75 },
	{ -250, 2.5f, 25 },
	{ -250, 157.5f, 25 },
	{ -250, -108, 25 },
	{ -248, -108, 25 },
	{ -248, -116.5f, 25 },
	{ -250, -157.5f, 125 },
	{ -250, 157.5f, -0.00023f },
	{ -250, 2.5f, -25 },
	{ -250, 157.5f, -25 },
	{ 250, -157.5f, 125 },
	{ -250, 157.5f, 125 },
	{ 250, 157.5f, 125 },
	{ -250, -116.5f, 25 },
	{ 250, 157.5f, 198.9648f },
	{ 250, -157.5f, 198.9648f },
	{ -250, 157.5f, 198.9648f },
	{ -250, -157.5f, 198.9648f },
	{ -250, 157.5f, -207.2028f },
	{ -250, -157.5f, -207.2028f },
	{ 250, 157.5f, -207.2028f },
	{ 250, -157.5f, -207.2028f }
};

NJS_VECTOR normal_02307B38[] = {
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.707107f, -0.707106f, 0 },
	{ -0.707107f, -0.707107f, 0 },
	{ 0, -1, 0 },
	{ -0.707107f, -0.707107f, 0 },
	{ 0, -1, 0 },
	{ -0.707106f, -0.707107f, 0 },
	{ -0.707107f, -0.707107f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ -0.707107f, -0.707107f, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -0.707106f, 0.707107f, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ 0, -1, 0 },
	{ 0, -1, 0 },
	{ 0.707107f, -0.707107f, 0 },
	{ 0.707107f, -0.707107f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ 0, -1, 0 },
	{ 0.707107f, -0.707107f, 0 },
	{ -1, 0, 0 },
	{ -1, 0, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ -0.707107f, 0.707106f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0, -1, 0 },
	{ 0.707107f, -0.707107f, 0 },
	{ 0, -1, 0 },
	{ 0.707107f, -0.707107f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 0.707107f, -0.707107f, 0 },
	{ 0.707107f, 0.707107f, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ 1, 0, 0 },
	{ -0.707107f, 0.707107f, 0 },
	{ 1, 0, 0 },
	{ -1, 0, 0 },
	{ 0, -1, 0 },
	{ -0.707107f, 0, -0.707107f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ 0.707107f, 0, -0.707107f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.707107f, 0, 0.707107f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.707107f, 0, 0.707107f },
	{ -0.57735f, 0.57735f, 0.57735f }
};

NJS_MODEL_SADX attach_02308114 = { vertex_02307558, normal_02307B38, LengthOfArray(vertex_02307558), meshlist_023074B0, matlist_02306320, LengthOfArray(meshlist_023074B0), LengthOfArray(matlist_02306320),{ 0, 0, -4.118996f }, 322.0917f, NULL };

NJS_OBJECT object_02308140 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_BREAK, &attach_02308114, 561.25f, 157.5f, 387.375f, 0, 0, 0, 2.125f, 1, -0.125f, NULL, NULL };


NJS_MATERIAL matlist_0009152CZ[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 19, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_FLIP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 10, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 29, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_USE_TEXTURE | NJD_FLAG_CLAMP_U | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_00091568Z[] = {
	0x8000u | 12, 13, 12, 3, 0, 2, 1, 16, 15, 9, 6, 8, 7
};

Sint16 poly_00091582Z[] = {
	0x8000u | 12, 8, 11, 9, 10, 16, 17, 2, 5, 3, 4, 13, 14
};

Sint16 poly_0009159CZ[] = {
	0x8000u | 12, 26, 25, 27, 24, 34, 33, 20, 19, 21, 18, 31, 30,
	0x8000u | 12, 25, 29, 24, 28, 33, 35, 19, 23, 18, 22, 30, 32
};

NJS_TEX uv_000915D0Z[] = {
	{ 25500, -255 },
	{ 25500, 255 },
	{ 20400, -255 },
	{ 20400, 255 },
	{ 15300, -255 },
	{ 15300, 255 },
	{ 10199, -255 },
	{ 10199, 255 },
	{ 5099, -255 },
	{ 5099, 255 },
	{ 0, -255 },
	{ 0, 255 }
};

NJS_TEX uv_00091600Z[] = {
	{ 8925, 0 },
	{ 8925, 255 },
	{ 7140, 0 },
	{ 7140, 255 },
	{ 5355, 0 },
	{ 5355, 255 },
	{ 3570, 0 },
	{ 3570, 255 },
	{ 1785, 0 },
	{ 1785, 255 },
	{ 0 },
	{ 0, 255 }
};

NJS_TEX uv_00091630Z[] = {
	{ 0 },
	{ 0, 127 },
	{ 51, 0 },
	{ 51, 127 },
	{ 102, 0 },
	{ 102, 127 },
	{ 153, 0 },
	{ 153, 127 },
	{ 204, 0 },
	{ 204, 127 },
	{ 255, 0 },
	{ 255, 127 },
	{ 0, 127 },
	{ 0, 255 },
	{ 51, 127 },
	{ 51, 255 },
	{ 102, 127 },
	{ 102, 255 },
	{ 153, 127 },
	{ 153, 255 },
	{ 204, 127 },
	{ 204, 255 },
	{ 255, 127 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_00091690Z[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_00091568Z, NULL, NULL, NULL, uv_000915D0Z, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 1, poly_00091582Z, NULL, NULL, NULL, uv_00091600Z, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 2, poly_0009159CZ, NULL, NULL, NULL, uv_00091630Z, NULL }
};

NJS_VECTOR vertex_000916D8Z[] = {
	{ 150, -152.5f, 1 },
	{ 50, -152.5f, 1 },
	{ 50, -152.5f, -1 },
	{ 150, -152.5f, -1 },
	{ 150, -157.5f, -1 },
	{ 50, -157.5f, -1 },
	{ -150, -152.5f, 1 },
	{ -250, -152.5f, 1 },
	{ -250, -152.5f, -1 },
	{ -150, -152.5f, -1 },
	{ -150, -157.5f, -1 },
	{ -250, -157.5f, -1 },
	{ 250, -152.5f, 1 },
	{ 250, -152.5f, -1 },
	{ 250, -157.5f, -1 },
	{ -50, -152.5f, 1 },
	{ -50, -152.5f, -1 },
	{ -50, -157.5f, -1 },
	{ 150, 2.5f, 0 },
	{ 50, 2.5f, 0 },
	{ 50, 157.5f, 0 },
	{ 150, 157.5f, 0 },
	{ 150, -152.5f, 0 },
	{ 50, -152.5f, 0 },
	{ -150, 2.5f, 0 },
	{ -250, 2.5f, 0 },
	{ -250, 157.5f, 0 },
	{ -150, 157.5f, 0 },
	{ -150, -152.5f, 0 },
	{ -250, -152.5f, 0 },
	{ 250, 2.5f, 0 },
	{ 250, 157.5f, 0 },
	{ 250, -152.5f, 0 },
	{ -50, 2.5f, 0 },
	{ -50, 157.5f, 0 },
	{ -50, -152.5f, 0 }
};

NJS_VECTOR normal_00091888Z[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 1, 0 },
	{ 0, 0.7071069f, -0.7071069f },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 },
	{ 0, 0, -1 }
};

NJS_MODEL_SADX attach_00091A38Z = { vertex_000916D8Z, normal_00091888Z, LengthOfArray(vertex_000916D8Z), meshlist_00091690Z, matlist_0009152CZ, LengthOfArray(meshlist_00091690Z), LengthOfArray(matlist_0009152CZ),{ 0 }, 250.002f, NULL };

NJS_OBJECT object_000A00CCZ = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00091A38Z, 550, 157.5f, 75.125f, 0, 0, 0, 1, 1, 1, NULL, NULL };