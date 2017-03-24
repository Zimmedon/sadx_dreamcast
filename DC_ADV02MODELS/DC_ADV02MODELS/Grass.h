#include <SADXModLoader.h>


NJS_MATERIAL matlist_001F2A44[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F2A58[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F2A60[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F2A6C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F2A58, NULL, NULL, NULL, uv_001F2A60, NULL }
};

NJS_VECTOR vertex_001F2A84[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F2AA8[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F2ACC = { vertex_001F2A84, normal_001F2AA8, LengthOfArray(vertex_001F2A84), meshlist_001F2A6C, matlist_001F2A44, LengthOfArray(meshlist_001F2A6C), LengthOfArray(matlist_001F2A44),{ 0, 1.000001f, -1 }, 1.732438f, NULL };

NJS_OBJECT object_001F2AF4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F2ACC, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F2B28[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F2B3C[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F2B48[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F2B58[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F2B3C, NULL, NULL, NULL, uv_001F2B48, NULL }
};

NJS_VECTOR vertex_001F2B70[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F2BA0[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F2BD0 = { vertex_001F2B70, normal_001F2BA0, LengthOfArray(vertex_001F2B70), meshlist_001F2B58, matlist_001F2B28, LengthOfArray(meshlist_001F2B58), LengthOfArray(matlist_001F2B28),{ 0, 1.5f, -0.5f }, 2.209687f, NULL };

NJS_OBJECT object_001F2BF8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F2BD0, 0, 0, 0, 0xD816, 0x24FE, 0, 1, 1, 1, &object_001F2AF4, NULL };

NJS_MATERIAL matlist_001F2C2C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F2C40[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F2C48[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlist_001F2C54[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F2C40, NULL, NULL, NULL, uv_001F2C48, NULL }
};

NJS_VECTOR vertex_001F2C6C[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F2C90[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F2CB4 = { vertex_001F2C6C, normal_001F2C90, LengthOfArray(vertex_001F2C6C), meshlist_001F2C54, matlist_001F2C2C, LengthOfArray(meshlist_001F2C54), LengthOfArray(matlist_001F2C2C),{ 0, 1.000001f, -1 }, 1.705545f, NULL };

NJS_OBJECT object_001F2CDC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F2CB4, 0, 2.999999f, -1, 0x1040E, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F2D10[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F2D24[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F2D30[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlist_001F2D40[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F2D24, NULL, NULL, NULL, uv_001F2D30, NULL }
};

NJS_VECTOR vertex_001F2D58[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F2D88[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F2DB8 = { vertex_001F2D58, normal_001F2D88, LengthOfArray(vertex_001F2D58), meshlist_001F2D40, matlist_001F2D10, LengthOfArray(meshlist_001F2D40), LengthOfArray(matlist_001F2D10),{ 0, 1.5f, -0.5f }, 2.144097f, NULL };

NJS_OBJECT object_001F2DE0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F2DB8, 0, 0, 0, 0xD774, 0xFFFFEC48, 0, 1, 1, 1, &object_001F2CDC, &object_001F2BF8 };

NJS_MATERIAL matlist_001F2E14[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F2E28[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F2E30[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F2E3C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F2E28, NULL, NULL, NULL, uv_001F2E30, NULL }
};

NJS_VECTOR vertex_001F2E54[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F2E78[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F2E9C = { vertex_001F2E54, normal_001F2E78, LengthOfArray(vertex_001F2E54), meshlist_001F2E3C, matlist_001F2E14, LengthOfArray(meshlist_001F2E3C), LengthOfArray(matlist_001F2E14),{ 0, 1.000001f, -1 }, 1.724791f, NULL };

NJS_OBJECT object_001F2EC4 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F2E9C, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F2EF8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F2F0C[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F2F18[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F2F28[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F2F0C, NULL, NULL, NULL, uv_001F2F18, NULL }
};

NJS_VECTOR vertex_001F2F40[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F2F70[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F2FA0 = { vertex_001F2F40, normal_001F2F70, LengthOfArray(vertex_001F2F40), meshlist_001F2F28, matlist_001F2EF8, LengthOfArray(meshlist_001F2F28), LengthOfArray(matlist_001F2EF8),{ 0, 1.5f, -0.5f }, 2.200898f, NULL };

NJS_OBJECT object_001F2FC8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F2FA0, 0, 0, 0, 0xD7E1, 0xFFFFD961, 0, 1, 1, 1, &object_001F2EC4, &object_001F2DE0 };

NJS_MATERIAL matlist_001F2FFC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3010[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F3018[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F3024[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3010, NULL, NULL, NULL, uv_001F3018, NULL }
};

NJS_VECTOR vertex_001F303C[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F3060[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F3084 = { vertex_001F303C, normal_001F3060, LengthOfArray(vertex_001F303C), meshlist_001F3024, matlist_001F2FFC, LengthOfArray(meshlist_001F3024), LengthOfArray(matlist_001F2FFC),{ 0, 1.000001f, -1 }, 1.597726f, NULL };

NJS_OBJECT object_001F30AC = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F3084, 0, 2.999999f, -1, 0x10430, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F30E0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F30F4[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F3100[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F3110[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F30F4, NULL, NULL, NULL, uv_001F3100, NULL }
};

NJS_VECTOR vertex_001F3128[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F3158[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F3188 = { vertex_001F3128, normal_001F3158, LengthOfArray(vertex_001F3128), meshlist_001F3110, matlist_001F30E0, LengthOfArray(meshlist_001F3110), LengthOfArray(matlist_001F30E0),{ 0, 1.5f, -0.5f }, 1.738508f, NULL };

NJS_OBJECT object_001F31B0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F3188, 0, 0, 0, 0xE0CA, 0x607, 0, 1, 1, 1, &object_001F30AC, &object_001F2FC8 };

NJS_OBJECT object_001F31E4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001F31B0, NULL };

NJS_MATERIAL matlist_001F3218[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F322C[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F3234[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlist_001F3240[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F322C, NULL, NULL, NULL, uv_001F3234, NULL }
};

NJS_VECTOR vertex_001F3258[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F327C[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F32A0 = { vertex_001F3258, normal_001F327C, LengthOfArray(vertex_001F3258), meshlist_001F3240, matlist_001F3218, LengthOfArray(meshlist_001F3240), LengthOfArray(matlist_001F3218),{ 0, 1.000001f, -1 }, 1.653678f, NULL };

NJS_OBJECT object_001F32C8 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F32A0, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F32FC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3310[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F331C[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlist_001F332C[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3310, NULL, NULL, NULL, uv_001F331C, NULL }
};

NJS_VECTOR vertex_001F3344[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F3374[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F33A4 = { vertex_001F3344, normal_001F3374, LengthOfArray(vertex_001F3344), meshlist_001F332C, matlist_001F32FC, LengthOfArray(meshlist_001F332C), LengthOfArray(matlist_001F32FC),{ 0, 1.5f, -0.5f }, 2.08652f, NULL };

NJS_OBJECT object_001F33CC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F33A4, 0, 0, 0, 0xD774, 0x2FEA, 0, 1, 1, 1, &object_001F32C8, NULL };

NJS_MATERIAL matlist_001F3400[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3414[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F341C[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F3428[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3414, NULL, NULL, NULL, uv_001F341C, NULL }
};

NJS_VECTOR vertex_001F3440[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F3464[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F3488 = { vertex_001F3440, normal_001F3464, LengthOfArray(vertex_001F3440), meshlist_001F3428, matlist_001F3400, LengthOfArray(meshlist_001F3428), LengthOfArray(matlist_001F3400),{ 0, 1.000001f, -1 }, 1.632293f, NULL };

NJS_OBJECT object_001F34B0 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F3488, 0, 2.999999f, -1, 0x1040E, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F34E4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F34F8[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F3504[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F3514[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F34F8, NULL, NULL, NULL, uv_001F3504, NULL }
};

NJS_VECTOR vertex_001F352C[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F355C[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F358C = { vertex_001F352C, normal_001F355C, LengthOfArray(vertex_001F352C), meshlist_001F3514, matlist_001F34E4, LengthOfArray(meshlist_001F3514), LengthOfArray(matlist_001F34E4),{ 0, 1.5f, -0.5f }, 1.941872f, NULL };

NJS_OBJECT object_001F35B4 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F358C, 0, 0, 0, 0xDC9F, 0xFFFFF430, 0, 1, 1, 1, &object_001F34B0, &object_001F33CC };

NJS_MATERIAL matlist_001F35E8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F35FC[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F3604[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlist_001F3610[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F35FC, NULL, NULL, NULL, uv_001F3604, NULL }
};

NJS_VECTOR vertex_001F3628[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F364C[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F3670 = { vertex_001F3628, normal_001F364C, LengthOfArray(vertex_001F3628), meshlist_001F3610, matlist_001F35E8, LengthOfArray(meshlist_001F3610), LengthOfArray(matlist_001F35E8),{ 0, 1.000001f, -1 }, 1.587026f, NULL };

NJS_OBJECT object_001F3698 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F3670, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F36CC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F36E0[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F36EC[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlist_001F36FC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F36E0, NULL, NULL, NULL, uv_001F36EC, NULL }
};

NJS_VECTOR vertex_001F3714[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F3744[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F3774 = { vertex_001F3714, normal_001F3744, LengthOfArray(vertex_001F3714), meshlist_001F36FC, matlist_001F36CC, LengthOfArray(meshlist_001F36FC), LengthOfArray(matlist_001F36CC),{ 0, 1.5f, -0.5f }, 1.892918f, NULL };

NJS_OBJECT object_001F379C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F3774, 0, 0, 0, 0xD7E1, 0xFFFFC773, 0, 1, 1, 1, &object_001F3698, &object_001F35B4 };

NJS_MATERIAL matlist_001F37D0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 152, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F37E4[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F37EC[] = {
	{ 129, 1 },
	{ 253, 253 },
	{ 1, 253 }
};

NJS_MESHSET_SADX meshlist_001F37F8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F37E4, NULL, NULL, NULL, uv_001F37EC, NULL }
};

NJS_VECTOR vertex_001F3810[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F3834[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F3858 = { vertex_001F3810, normal_001F3834, LengthOfArray(vertex_001F3810), meshlist_001F37F8, matlist_001F37D0, LengthOfArray(meshlist_001F37F8), LengthOfArray(matlist_001F37D0),{ 0, 1.000001f, -1 }, 1.620689f, NULL };

NJS_OBJECT object_001F3880 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F3858, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F38B4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 153, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F38C8[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F38D4[] = {
	{ 1, 253 },
	{ 1, 1 },
	{ 253, 253 },
	{ 253, 1 }
};

NJS_MESHSET_SADX meshlist_001F38E4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F38C8, NULL, NULL, NULL, uv_001F38D4, NULL }
};

NJS_VECTOR vertex_001F38FC[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F392C[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F395C = { vertex_001F38FC, normal_001F392C, LengthOfArray(vertex_001F38FC), meshlist_001F38E4, matlist_001F38B4, LengthOfArray(meshlist_001F38E4), LengthOfArray(matlist_001F38B4),{ 0, 1.5f, -0.5f }, 1.807306f, NULL };

NJS_OBJECT object_001F3984 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F395C, 0, 0, 0, 0xD775, 0xD5D, 0, 1, 1, 1, &object_001F3880, &object_001F379C };

NJS_OBJECT object_001F39B8 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x1037, 0, 0, 1, 1, 1, &object_001F3984, &object_001F31E4 };

NJS_MATERIAL matlist_001F39EC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3A00[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F3A08[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F3A14[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3A00, NULL, NULL, NULL, uv_001F3A08, NULL }
};

NJS_VECTOR vertex_001F3A2C[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F3A50[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F3A74 = { vertex_001F3A2C, normal_001F3A50, LengthOfArray(vertex_001F3A2C), meshlist_001F3A14, matlist_001F39EC, LengthOfArray(meshlist_001F3A14), LengthOfArray(matlist_001F39EC),{ 0, 1.000001f, -1 }, 3.508662f, NULL };

NJS_OBJECT object_001F3A9C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F3A74, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F3AD0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3AE4[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F3AF0[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F3B00[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3AE4, NULL, NULL, NULL, uv_001F3AF0, NULL }
};

NJS_VECTOR vertex_001F3B18[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F3B48[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F3B78 = { vertex_001F3B18, normal_001F3B48, LengthOfArray(vertex_001F3B18), meshlist_001F3B00, matlist_001F3AD0, LengthOfArray(meshlist_001F3B00), LengthOfArray(matlist_001F3AD0),{ 0, 1.5f, -0.5f }, 4.276909f, NULL };

NJS_OBJECT object_001F3BA0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F3B78, 0, 0, 0, 0xDDA6, 0x24FE, 0, 1, 1, 1, &object_001F3A9C, NULL };

NJS_MATERIAL matlist_001F3BD4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3BE8[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F3BF0[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F3BFC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3BE8, NULL, NULL, NULL, uv_001F3BF0, NULL }
};

NJS_VECTOR vertex_001F3C14[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F3C38[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F3C5C = { vertex_001F3C14, normal_001F3C38, LengthOfArray(vertex_001F3C14), meshlist_001F3BFC, matlist_001F3BD4, LengthOfArray(meshlist_001F3BFC), LengthOfArray(matlist_001F3BD4),{ 0, 1.000001f, -1 }, 3.418882f, NULL };

NJS_OBJECT object_001F3C84 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F3C5C, 0, 2.999999f, -1, 0x1040E, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F3CB8[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3CCC[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F3CD8[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F3CE8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3CCC, NULL, NULL, NULL, uv_001F3CD8, NULL }
};

NJS_VECTOR vertex_001F3D00[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F3D30[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F3D60 = { vertex_001F3D00, normal_001F3D30, LengthOfArray(vertex_001F3D00), meshlist_001F3CE8, matlist_001F3CB8, LengthOfArray(meshlist_001F3CE8), LengthOfArray(matlist_001F3CB8),{ 0, 1.5f, -0.5f }, 4.09731f, NULL };

NJS_OBJECT object_001F3D88 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F3D60, 0, 0, 0, 0xDEBB, 0xFFFFEC72, 0, 1, 1, 1, &object_001F3C84, &object_001F3BA0 };

NJS_MATERIAL matlist_001F3DBC[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3DD0[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F3DD8[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F3DE4[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3DD0, NULL, NULL, NULL, uv_001F3DD8, NULL }
};

NJS_VECTOR vertex_001F3DFC[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F3E20[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F3E44 = { vertex_001F3DFC, normal_001F3E20, LengthOfArray(vertex_001F3DFC), meshlist_001F3DE4, matlist_001F3DBC, LengthOfArray(meshlist_001F3DE4), LengthOfArray(matlist_001F3DBC),{ 0, 1.000001f, -1 }, 3.464729f, NULL };

NJS_OBJECT object_001F3E6C = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F3E44, 0, 2.999999f, -1, 0x101C5, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F3EA0[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 149, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3EB4[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F3EC0[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F3ED0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3EB4, NULL, NULL, NULL, uv_001F3EC0, NULL }
};

NJS_VECTOR vertex_001F3EE8[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F3F18[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F3F48 = { vertex_001F3EE8, normal_001F3F18, LengthOfArray(vertex_001F3EE8), meshlist_001F3ED0, matlist_001F3EA0, LengthOfArray(meshlist_001F3ED0), LengthOfArray(matlist_001F3EA0),{ 0, 1.5f, -0.5f }, 4.401796f, NULL };

NJS_OBJECT object_001F3F70 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F3F48, 0, 0, 0, 0xD7E1, 0xFFFFD961, 0, 1, 1, 1, &object_001F3E6C, &object_001F3D88 };

NJS_MATERIAL matlist_001F3FA4[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F3FB8[] = {
	3, 0, 2, 1
};

NJS_TEX uv_001F3FC0[] = {
	{ 241, 17 },
	{ 177, 129 },
	{ 105, 73 }
};

NJS_MESHSET_SADX meshlist_001F3FCC[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F3FB8, NULL, NULL, NULL, uv_001F3FC0, NULL }
};

NJS_VECTOR vertex_001F3FE4[] = {
	{ 0, 2.000001f, -2 },
	{ 0.7f, 0.000001f, 0 },
	{ -0.7f, 0.000001f, 0 }
};

NJS_VECTOR normal_001F4008[] = {
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f },
	{ 0, 0.7071069f, 0.7071069f }
};

NJS_MODEL_SADX attach_001F402C = { vertex_001F3FE4, normal_001F4008, LengthOfArray(vertex_001F3FE4), meshlist_001F3FCC, matlist_001F3FA4, LengthOfArray(meshlist_001F3FCC), LengthOfArray(matlist_001F3FA4),{ 0, 1.000001f, -1 }, 2.941608f, NULL };

NJS_OBJECT object_001F4054 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001F402C, 0, 2.999999f, -1, 0x1007D, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001F4088[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 147, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001F409C[] = {
	4, 2, 1, 0, 3
};

NJS_TEX uv_001F40A8[] = {
	{ 1, 201 },
	{ 105, 73 },
	{ 45, 241 },
	{ 177, 129 }
};

NJS_MESHSET_SADX meshlist_001F40B8[] = {
	{ NJD_MESHSET_TRIMESH | 0, 1, poly_001F409C, NULL, NULL, NULL, uv_001F40A8, NULL }
};

NJS_VECTOR vertex_001F40D0[] = {
	{ -0.7f, 0, 0 },
	{ 0.7f, 3, -1 },
	{ 0.7f, 0, 0 },
	{ -0.7f, 3, -1 }
};

NJS_VECTOR normal_001F4100[] = {
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f },
	{ 0, 0.316228f, 0.948683f }
};

NJS_MODEL_SADX attach_001F4130 = { vertex_001F40D0, normal_001F4100, LengthOfArray(vertex_001F40D0), meshlist_001F40B8, matlist_001F4088, LengthOfArray(meshlist_001F40B8), LengthOfArray(matlist_001F4088),{ 0, 1.5f, -0.5f }, 3.44593f, NULL };

NJS_OBJECT object_001F4158 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL, &attach_001F4130, 0, 0, 0, 0xD774, 0x1506, 0, 1, 1, 1, &object_001F4054, &object_001F3F70 };

NJS_OBJECT object_001F418C = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0x2404, 0, 0, 1, 1, 1, &object_001F4158, &object_001F39B8 };

NJS_OBJECT object_001F41C0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_HIDE, NULL, 0, 0, 0, 0, 0x8000, 0, 2, 2, 2, &object_001F418C, NULL };