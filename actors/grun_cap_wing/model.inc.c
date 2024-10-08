Lights1 grun_cap_wing_Emblem__EMBLEM__lights = gdSPDefLights1(
	0x4E, 0x17, 0x0,
	0xA0, 0x38, 0x0, 0x28, 0x28, 0x28);

Lights1 grun_cap_wing_Cap__CAP__lights = gdSPDefLights1(
	0x28, 0x5E, 0x0,
	0x58, 0xC0, 0x0, 0x28, 0x28, 0x28);

Lights1 grun_cap_wing_Metal__METAL__lights = gdSPDefLights1(
	0x28, 0x5E, 0x0,
	0x58, 0xC0, 0x0, 0x28, 0x28, 0x28);

Gfx grun_cap_wing_Metal_Shade_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 grun_cap_wing_Metal_Shade_rgba16_rgba16[] = {
	#include "grun/Metal_Shade_rgba16.rgba16.inc.c"
};

Gfx grun_cap_wing_Metal_Light_rgba16_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 grun_cap_wing_Metal_Light_rgba16_rgba16[] = {
	#include "grun/Metal_Light_rgba16.rgba16.inc.c"
};

Gfx grun_cap_wing_wing_2_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 grun_cap_wing_wing_2_rgba16[] = {
	#include "grun/wing_2.rgba16.inc.c"
};

Gfx grun_cap_wing_wing1_rgba16_aligner[] = {gsSPEndDisplayList()};
u8 grun_cap_wing_wing1_rgba16[] = {
	#include "grun/wing1.rgba16.inc.c"
};

Vtx grun_cap_wing_Wing_Cap_mesh_layer_1_vtx_0[18] = {
	{{{-57, 16, -24}, 0, {-16, 1008}, {0xE4, 0x93, 0xC6, 0xFF}}},
	{{{-68, 18, -13}, 0, {-16, 496}, {0xB7, 0x9A, 0xEE, 0xFF}}},
	{{{-61, 36, -23}, 0, {496, 496}, {0x9D, 0xE8, 0xB4, 0xFF}}},
	{{{-56, 16, -24}, 0, {-16, 1008}, {0x5C, 0xB1, 0x27, 0xFF}}},
	{{{-47, 31, -37}, 0, {496, 1008}, {0x7D, 0xED, 0xF0, 0xFF}}},
	{{{-48, 30, -38}, 0, {496, 1008}, {0x04, 0xC3, 0x91, 0xFF}}},
	{{{-65, 81, -43}, 0, {1008, 496}, {0xC1, 0x4A, 0xAE, 0xFF}}},
	{{{-71, 67, -27}, 0, {1008, -16}, {0x85, 0x1E, 0x00, 0xFF}}},
	{{{-74, 41, -8}, 0, {496, -16}, {0x84, 0x09, 0x1B, 0xFF}}},
	{{{-72, 22, -7}, 0, {-16, -16}, {0x98, 0xBE, 0x1F, 0xFF}}},
	{{{-67, 19, -12}, 0, {-16, 496}, {0x3D, 0xB7, 0x54, 0xFF}}},
	{{{-59, 36, -22}, 0, {496, 496}, {0x63, 0x18, 0x4C, 0xFF}}},
	{{{-63, 82, -42}, 0, {1008, 496}, {0x2E, 0x76, 0xFD, 0xFF}}},
	{{{-55, 61, -43}, 0, {1008, 1008}, {0x75, 0x26, 0xE1, 0xFF}}},
	{{{-56, 61, -44}, 0, {1008, 1008}, {0xF0, 0xF1, 0x83, 0xFF}}},
	{{{-69, 68, -26}, 0, {1008, -16}, {0x09, 0x54, 0x5F, 0xFF}}},
	{{{-72, 42, -7}, 0, {496, -16}, {0x09, 0x2B, 0x77, 0xFF}}},
	{{{-71, 23, -6}, 0, {-16, -16}, {0x11, 0xDB, 0x78, 0xFF}}},
};

Gfx grun_cap_wing_Wing_Cap_mesh_layer_1_tri_0[] = {
	gsSPVertex(grun_cap_wing_Wing_Cap_mesh_layer_1_vtx_0 + 0, 18, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
	gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
	gsSP2Triangles(0, 2, 5, 0, 5, 2, 6, 0),
	gsSP2Triangles(2, 7, 6, 0, 2, 8, 7, 0),
	gsSP2Triangles(1, 8, 2, 0, 1, 9, 8, 0),
	gsSP2Triangles(9, 1, 10, 0, 1, 3, 10, 0),
	gsSP2Triangles(3, 11, 10, 0, 3, 4, 11, 0),
	gsSP2Triangles(4, 12, 11, 0, 4, 13, 12, 0),
	gsSP2Triangles(5, 13, 4, 0, 5, 14, 13, 0),
	gsSP2Triangles(5, 6, 14, 0, 14, 6, 12, 0),
	gsSP2Triangles(6, 15, 12, 0, 6, 7, 15, 0),
	gsSP2Triangles(7, 16, 15, 0, 7, 8, 16, 0),
	gsSP2Triangles(8, 17, 16, 0, 8, 9, 17, 0),
	gsSP2Triangles(9, 10, 17, 0, 10, 16, 17, 0),
	gsSP2Triangles(10, 11, 16, 0, 11, 15, 16, 0),
	gsSP2Triangles(11, 12, 15, 0, 14, 12, 13, 0),
	gsSPEndDisplayList(),
};

Vtx grun_cap_wing_Wing_Cap_mesh_layer_1_vtx_1[118] = {
	{{{66, 52, 56}, 0, {-16, 1008}, {0xC9, 0x63, 0xC6, 0xFF}}},
	{{{0, 47, 71}, 0, {-16, 1008}, {0x00, 0x4F, 0x9C, 0xFF}}},
	{{{-66, 52, 56}, 0, {-16, 1008}, {0x37, 0x63, 0xC7, 0xFF}}},
	{{{-62, 22, -17}, 0, {-16, 1008}, {0x5E, 0x53, 0x10, 0xFF}}},
	{{{-74, 44, 20}, 0, {-16, 1008}, {0x50, 0x5C, 0xDB, 0xFF}}},
	{{{63, 22, -17}, 0, {-16, 1008}, {0xA2, 0x53, 0x10, 0xFF}}},
	{{{0, 14, -35}, 0, {-16, 1008}, {0x00, 0x57, 0x5D, 0xFF}}},
	{{{75, 44, 20}, 0, {-16, 1008}, {0xB0, 0x5B, 0xDA, 0xFF}}},
	{{{2, 71, -32}, 0, {57, -16}, {0x10, 0xA6, 0x58, 0xFF}}},
	{{{1, 58, -39}, 0, {57, -16}, {0x06, 0x97, 0x47, 0xFF}}},
	{{{0, 42, -74}, 0, {54, -16}, {0xFF, 0x98, 0xB8, 0xFF}}},
	{{{30, 65, -47}, 0, {-16, -16}, {0x65, 0xB3, 0x0A, 0xFF}}},
	{{{29, 73, -40}, 0, {-16, -16}, {0x76, 0xDB, 0xE2, 0xFF}}},
	{{{0, 71, -32}, 0, {55, -16}, {0xD0, 0x8D, 0xE7, 0xFF}}},
	{{{0, 14, -35}, 0, {57, -16}, {0x00, 0x57, 0x5D, 0xFF}}},
	{{{63, 22, -17}, 0, {-16, -16}, {0xA2, 0x53, 0x10, 0xFF}}},
	{{{68, 24, -30}, 0, {-16, 189}, {0x22, 0x64, 0xB9, 0xFF}}},
	{{{0, 16, -48}, 0, {57, 189}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{72, 11, -35}, 0, {-16, 394}, {0x51, 0xEA, 0xA0, 0xFF}}},
	{{{0, 3, -54}, 0, {57, 394}, {0x00, 0xE4, 0x84, 0xFF}}},
	{{{68, 1, -25}, 0, {-16, 598}, {0x35, 0x8D, 0xFB, 0xFF}}},
	{{{0, -8, -43}, 0, {57, 598}, {0x00, 0x83, 0xE7, 0xFF}}},
	{{{63, 8, -14}, 0, {-16, 803}, {0xCE, 0xB9, 0x5C, 0xFF}}},
	{{{0, -1, -32}, 0, {57, 803}, {0x00, 0xC2, 0x6F, 0xFF}}},
	{{{63, 22, -17}, 0, {-16, 1008}, {0xA2, 0x53, 0x10, 0xFF}}},
	{{{0, 14, -35}, 0, {57, 1008}, {0x00, 0x57, 0x5D, 0xFF}}},
	{{{-62, 8, -14}, 0, {130, 803}, {0x32, 0xB9, 0x5C, 0xFF}}},
	{{{-62, 22, -17}, 0, {130, 1008}, {0x5E, 0x53, 0x10, 0xFF}}},
	{{{0, 71, -32}, 0, {60, 1008}, {0xD0, 0x8D, 0xE7, 0xFF}}},
	{{{-28, 73, -40}, 0, {130, 1008}, {0x85, 0xE2, 0xF2, 0xFF}}},
	{{{-74, 44, 20}, 0, {277, 1008}, {0x50, 0x5C, 0xDB, 0xFF}}},
	{{{-74, 29, 23}, 0, {277, 803}, {0x66, 0xB9, 0x1B, 0xFF}}},
	{{{-74, 44, 20}, 0, {277, 1008}, {0x50, 0x5C, 0xDB, 0xFF}}},
	{{{-66, 37, 59}, 0, {423, 803}, {0x3D, 0x9C, 0xCF, 0xFF}}},
	{{{-74, 29, 23}, 0, {277, 803}, {0x66, 0xB9, 0x1B, 0xFF}}},
	{{{-66, 52, 56}, 0, {423, 1008}, {0x37, 0x63, 0xC7, 0xFF}}},
	{{{-35, 102, -29}, 0, {277, 1008}, {0x8B, 0x2E, 0xEF, 0xFF}}},
	{{{-25, 122, -16}, 0, {423, 1008}, {0xBF, 0x6C, 0x10, 0xFF}}},
	{{{0, 47, 71}, 0, {569, 1008}, {0x00, 0x4F, 0x9C, 0xFF}}},
	{{{0, 32, 74}, 0, {569, 803}, {0x00, 0x9F, 0xAE, 0xFF}}},
	{{{66, 37, 59}, 0, {715, 803}, {0xC3, 0x9C, 0xCF, 0xFF}}},
	{{{66, 52, 56}, 0, {715, 1008}, {0xC9, 0x63, 0xC6, 0xFF}}},
	{{{0, 130, -8}, 0, {569, 1008}, {0x05, 0x79, 0x26, 0xFF}}},
	{{{28, 121, -17}, 0, {715, 1008}, {0x47, 0x69, 0x0C, 0xFF}}},
	{{{75, 44, 20}, 0, {862, 1008}, {0xB0, 0x5B, 0xDA, 0xFF}}},
	{{{75, 29, 23}, 0, {862, 803}, {0x9A, 0xB9, 0x1B, 0xFF}}},
	{{{63, 8, -14}, 0, {1008, 803}, {0xCE, 0xB9, 0x5C, 0xFF}}},
	{{{63, 22, -17}, 0, {1008, 1008}, {0xA2, 0x53, 0x10, 0xFF}}},
	{{{36, 102, -29}, 0, {862, 1008}, {0x74, 0x2E, 0xE8, 0xFF}}},
	{{{29, 73, -40}, 0, {1008, 1008}, {0x76, 0xDB, 0xE2, 0xFF}}},
	{{{35, 90, -50}, 0, {862, 1008}, {0x7A, 0xFE, 0xDC, 0xFF}}},
	{{{30, 65, -47}, 0, {1008, 1008}, {0x65, 0xB3, 0x0A, 0xFF}}},
	{{{0, 42, -74}, 0, {277, 1008}, {0xFF, 0x98, 0xB8, 0xFF}}},
	{{{29, 98, -60}, 0, {715, 1008}, {0x4D, 0x2E, 0xA6, 0xFF}}},
	{{{2, 116, -59}, 0, {569, 1008}, {0x06, 0x5B, 0xA8, 0xFF}}},
	{{{-27, 110, -57}, 0, {423, 1008}, {0xB6, 0x41, 0xAF, 0xFF}}},
	{{{-36, 88, -45}, 0, {277, 1008}, {0x84, 0xF5, 0xE7, 0xFF}}},
	{{{-28, 64, -42}, 0, {130, 1008}, {0xA1, 0xB3, 0x23, 0xFF}}},
	{{{1, 58, -39}, 0, {57, 1008}, {0x06, 0x97, 0x47, 0xFF}}},
	{{{2, 71, -32}, 0, {57, 1008}, {0x10, 0xA6, 0x58, 0xFF}}},
	{{{-28, 73, -40}, 0, {130, 1008}, {0x85, 0xE2, 0xF2, 0xFF}}},
	{{{0, 71, -32}, 0, {60, 1008}, {0xD0, 0x8D, 0xE7, 0xFF}}},
	{{{0, 31, 88}, 0, {569, 598}, {0x00, 0x95, 0x45, 0xFF}}},
	{{{76, 34, 69}, 0, {715, 598}, {0x30, 0x9C, 0x3E, 0xFF}}},
	{{{66, 37, 59}, 0, {715, 803}, {0xC3, 0x9C, 0xCF, 0xFF}}},
	{{{87, 24, 21}, 0, {862, 598}, {0x3F, 0x96, 0x20, 0xFF}}},
	{{{76, 34, 69}, 0, {715, 598}, {0x30, 0x9C, 0x3E, 0xFF}}},
	{{{75, 29, 23}, 0, {862, 803}, {0x9A, 0xB9, 0x1B, 0xFF}}},
	{{{66, 52, 56}, 0, {715, 1008}, {0xC9, 0x63, 0xC6, 0xFF}}},
	{{{68, 1, -25}, 0, {1008, 598}, {0x35, 0x8D, 0xFB, 0xFF}}},
	{{{63, 8, -14}, 0, {1008, 803}, {0xCE, 0xB9, 0x5C, 0xFF}}},
	{{{72, 11, -35}, 0, {1008, 394}, {0x51, 0xEA, 0xA0, 0xFF}}},
	{{{94, 36, 17}, 0, {862, 394}, {0x7E, 0x03, 0xF2, 0xFF}}},
	{{{68, 24, -30}, 0, {1008, 189}, {0x22, 0x64, 0xB9, 0xFF}}},
	{{{87, 48, 16}, 0, {862, 189}, {0x2D, 0x71, 0xDA, 0xFF}}},
	{{{63, 22, -17}, 0, {1008, -16}, {0xA2, 0x53, 0x10, 0xFF}}},
	{{{75, 44, 20}, 0, {862, -16}, {0xB0, 0x5B, 0xDA, 0xFF}}},
	{{{76, 58, 64}, 0, {715, 189}, {0x27, 0x77, 0x13, 0xFF}}},
	{{{66, 52, 56}, 0, {715, -16}, {0xC9, 0x63, 0xC6, 0xFF}}},
	{{{0, 54, 84}, 0, {569, 189}, {0x00, 0x7B, 0x1F, 0xFF}}},
	{{{0, 47, 71}, 0, {569, -16}, {0x00, 0x4F, 0x9C, 0xFF}}},
	{{{-75, 58, 64}, 0, {423, 189}, {0xD9, 0x77, 0x13, 0xFF}}},
	{{{-66, 52, 56}, 0, {423, -16}, {0x37, 0x63, 0xC7, 0xFF}}},
	{{{-86, 48, 16}, 0, {277, 189}, {0xD3, 0x71, 0xDA, 0xFF}}},
	{{{-74, 44, 20}, 0, {277, -16}, {0x50, 0x5C, 0xDB, 0xFF}}},
	{{{-67, 24, -30}, 0, {130, 189}, {0xDE, 0x64, 0xB9, 0xFF}}},
	{{{-62, 22, -17}, 0, {130, -16}, {0x5E, 0x53, 0x10, 0xFF}}},
	{{{0, 16, -48}, 0, {57, 189}, {0x00, 0x67, 0xB5, 0xFF}}},
	{{{0, 14, -35}, 0, {57, -16}, {0x00, 0x57, 0x5D, 0xFF}}},
	{{{0, 3, -54}, 0, {57, 394}, {0x00, 0xE4, 0x84, 0xFF}}},
	{{{-71, 11, -35}, 0, {130, 394}, {0xAF, 0xEA, 0xA0, 0xFF}}},
	{{{0, -8, -43}, 0, {57, 598}, {0x00, 0x83, 0xE7, 0xFF}}},
	{{{-67, 1, -25}, 0, {130, 598}, {0xCB, 0x8D, 0xFB, 0xFF}}},
	{{{0, -1, -32}, 0, {57, 803}, {0x00, 0xC2, 0x6F, 0xFF}}},
	{{{-62, 8, -14}, 0, {130, 803}, {0x32, 0xB9, 0x5C, 0xFF}}},
	{{{-86, 24, 21}, 0, {277, 598}, {0xC1, 0x96, 0x20, 0xFF}}},
	{{{-62, 8, -14}, 0, {130, 803}, {0x32, 0xB9, 0x5C, 0xFF}}},
	{{{-74, 29, 23}, 0, {277, 803}, {0x66, 0xB9, 0x1B, 0xFF}}},
	{{{-86, 24, 21}, 0, {277, 598}, {0xC1, 0x96, 0x20, 0xFF}}},
	{{{-62, 22, -17}, 0, {130, 1008}, {0x5E, 0x53, 0x10, 0xFF}}},
	{{{-75, 34, 69}, 0, {423, 598}, {0xD0, 0x9C, 0x3E, 0xFF}}},
	{{{-66, 37, 59}, 0, {423, 803}, {0x3D, 0x9C, 0xCF, 0xFF}}},
	{{{0, 31, 88}, 0, {569, 598}, {0x00, 0x95, 0x45, 0xFF}}},
	{{{0, 44, 95}, 0, {569, 394}, {0x00, 0x14, 0x7D, 0xFF}}},
	{{{82, 47, 72}, 0, {715, 394}, {0x5D, 0x14, 0x55, 0xFF}}},
	{{{76, 34, 69}, 0, {715, 598}, {0x30, 0x9C, 0x3E, 0xFF}}},
	{{{94, 36, 17}, 0, {862, 394}, {0x7E, 0x03, 0xF2, 0xFF}}},
	{{{87, 24, 21}, 0, {862, 598}, {0x3F, 0x96, 0x20, 0xFF}}},
	{{{87, 48, 16}, 0, {862, 189}, {0x2D, 0x71, 0xDA, 0xFF}}},
	{{{76, 58, 64}, 0, {715, 189}, {0x27, 0x77, 0x13, 0xFF}}},
	{{{0, 54, 84}, 0, {569, 189}, {0x00, 0x7B, 0x1F, 0xFF}}},
	{{{-81, 47, 72}, 0, {423, 394}, {0xA3, 0x14, 0x55, 0xFF}}},
	{{{-75, 58, 64}, 0, {423, 189}, {0xD9, 0x77, 0x13, 0xFF}}},
	{{{-93, 36, 17}, 0, {277, 394}, {0x82, 0x03, 0xF2, 0xFF}}},
	{{{-86, 48, 16}, 0, {277, 189}, {0xD3, 0x71, 0xDA, 0xFF}}},
	{{{-71, 11, -35}, 0, {130, 394}, {0xAF, 0xEA, 0xA0, 0xFF}}},
	{{{-67, 24, -30}, 0, {130, 189}, {0xDE, 0x64, 0xB9, 0xFF}}},
	{{{-67, 1, -25}, 0, {130, 598}, {0xCB, 0x8D, 0xFB, 0xFF}}},
};

Gfx grun_cap_wing_Wing_Cap_mesh_layer_1_tri_1[] = {
	gsSPVertex(grun_cap_wing_Wing_Cap_mesh_layer_1_vtx_1 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(2, 4, 3, 0, 3, 5, 0, 0),
	gsSP2Triangles(3, 6, 5, 0, 5, 7, 0, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(8, 11, 12, 0, 13, 8, 12, 0),
	gsSP2Triangles(14, 13, 12, 0, 14, 12, 15, 0),
	gsSP2Triangles(16, 14, 15, 0, 16, 17, 14, 0),
	gsSP2Triangles(18, 17, 16, 0, 18, 19, 17, 0),
	gsSP2Triangles(20, 19, 18, 0, 20, 21, 19, 0),
	gsSP2Triangles(22, 21, 20, 0, 22, 23, 21, 0),
	gsSP2Triangles(24, 23, 22, 0, 24, 25, 23, 0),
	gsSP2Triangles(25, 26, 23, 0, 25, 27, 26, 0),
	gsSP2Triangles(27, 28, 25, 0, 27, 29, 28, 0),
	gsSP2Triangles(30, 29, 27, 0, 27, 30, 31, 0),
	gsSPVertex(grun_cap_wing_Wing_Cap_mesh_layer_1_vtx_1 + 32, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(3, 4, 0, 0, 3, 5, 4, 0),
	gsSP2Triangles(6, 5, 3, 0, 3, 6, 7, 0),
	gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
	gsSP2Triangles(9, 10, 6, 0, 9, 11, 10, 0),
	gsSP2Triangles(12, 11, 9, 0, 9, 12, 13, 0),
	gsSP2Triangles(12, 14, 13, 0, 12, 15, 14, 0),
	gsSP2Triangles(15, 16, 12, 0, 15, 17, 16, 0),
	gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
	gsSP2Triangles(19, 20, 18, 0, 18, 20, 21, 0),
	gsSP2Triangles(21, 20, 22, 0, 22, 20, 23, 0),
	gsSP2Triangles(23, 20, 24, 0, 24, 20, 25, 0),
	gsSP2Triangles(25, 20, 26, 0, 25, 26, 27, 0),
	gsSP2Triangles(28, 25, 27, 0, 28, 27, 29, 0),
	gsSP2Triangles(24, 25, 28, 0, 4, 24, 28, 0),
	gsSP2Triangles(0, 4, 28, 0, 5, 24, 4, 0),
	gsSP2Triangles(5, 23, 24, 0, 10, 23, 5, 0),
	gsSP2Triangles(6, 10, 5, 0, 10, 22, 23, 0),
	gsSP2Triangles(11, 22, 10, 0, 11, 21, 22, 0),
	gsSP2Triangles(16, 21, 11, 0, 12, 16, 11, 0),
	gsSP2Triangles(16, 18, 21, 0, 3, 7, 1, 0),
	gsSP2Triangles(1, 7, 30, 0, 7, 31, 30, 0),
	gsSP1Triangle(7, 8, 31, 0),
	gsSPVertex(grun_cap_wing_Wing_Cap_mesh_layer_1_vtx_1 + 64, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 3, 5, 1, 0),
	gsSP2Triangles(3, 6, 5, 0, 1, 5, 7, 0),
	gsSP2Triangles(1, 7, 8, 0, 8, 7, 9, 0),
	gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 13, 10, 12, 0),
	gsSP2Triangles(13, 12, 14, 0, 15, 13, 14, 0),
	gsSP2Triangles(15, 14, 16, 0, 17, 15, 16, 0),
	gsSP2Triangles(17, 16, 18, 0, 19, 17, 18, 0),
	gsSP2Triangles(19, 18, 20, 0, 21, 19, 20, 0),
	gsSP2Triangles(21, 20, 22, 0, 23, 21, 22, 0),
	gsSP2Triangles(23, 22, 24, 0, 25, 21, 23, 0),
	gsSP2Triangles(25, 26, 21, 0, 27, 26, 25, 0),
	gsSP2Triangles(27, 28, 26, 0, 29, 28, 27, 0),
	gsSP2Triangles(29, 30, 28, 0, 30, 31, 28, 0),
	gsSPVertex(grun_cap_wing_Wing_Cap_mesh_layer_1_vtx_1 + 96, 22, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
	gsSP2Triangles(1, 4, 2, 0, 1, 5, 4, 0),
	gsSP2Triangles(5, 6, 4, 0, 4, 6, 7, 0),
	gsSP2Triangles(6, 8, 7, 0, 6, 9, 8, 0),
	gsSP2Triangles(9, 10, 8, 0, 9, 11, 10, 0),
	gsSP2Triangles(8, 10, 12, 0, 8, 12, 13, 0),
	gsSP2Triangles(7, 8, 13, 0, 7, 13, 14, 0),
	gsSP2Triangles(15, 7, 14, 0, 15, 14, 16, 0),
	gsSP2Triangles(17, 15, 16, 0, 17, 16, 18, 0),
	gsSP2Triangles(19, 17, 18, 0, 19, 18, 20, 0),
	gsSP2Triangles(21, 17, 19, 0, 21, 2, 17, 0),
	gsSP2Triangles(2, 15, 17, 0, 2, 4, 15, 0),
	gsSP1Triangle(4, 7, 15, 0),
	gsSPEndDisplayList(),
};

Vtx grun_cap_wing_Wings_mesh_layer_4_vtx_0[8] = {
	{{{-175, -14, -97}, 0, {1008, 2032}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-117, 10, -31}, 0, {-16, 2032}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-227, 159, -112}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-169, 182, -47}, 0, {-16, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{228, 159, -112}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{117, 10, -31}, 0, {-16, 2032}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{176, -14, -97}, 0, {1008, 2032}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{169, 182, -47}, 0, {-16, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
};

Gfx grun_cap_wing_Wings_mesh_layer_4_tri_0[] = {
	gsSPVertex(grun_cap_wing_Wings_mesh_layer_4_vtx_0 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};

Vtx grun_cap_wing_Wings_mesh_layer_4_vtx_1[8] = {
	{{{-117, 10, -31}, 0, {1008, 2032}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-58, 33, 32}, 0, {-16, 2032}, {0xA7, 0xED, 0x59, 0xFF}}},
	{{{-169, 182, -47}, 0, {1008, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{-111, 205, 17}, 0, {-16, -16}, {0xA6, 0xED, 0x58, 0xFF}}},
	{{{169, 182, -47}, 0, {1008, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{59, 33, 32}, 0, {-16, 2032}, {0x59, 0xED, 0x59, 0xFF}}},
	{{{117, 10, -31}, 0, {1008, 2032}, {0x5A, 0xED, 0x58, 0xFF}}},
	{{{111, 205, 17}, 0, {-16, -16}, {0x5A, 0xED, 0x58, 0xFF}}},
};

Gfx grun_cap_wing_Wings_mesh_layer_4_tri_1[] = {
	gsSPVertex(grun_cap_wing_Wings_mesh_layer_4_vtx_1 + 0, 8, 0),
	gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
	gsSPEndDisplayList(),
};


Gfx mat_grun_cap_wing_Emblem__EMBLEM_[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPCopyLightsPlayerPart(EMBLEM),
	gsSPEndDisplayList(),
};

Gfx mat_grun_cap_wing_Cap__CAP_[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsSPCopyLightsPlayerPart(CAP),
	gsSPEndDisplayList(),
};

Gfx mat_grun_cap_wing_Metal__METAL_[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, TEXEL1, 0, 0, 0, ENVIRONMENT),
	gsSPGeometryMode(0, G_TEXTURE_GEN),
	gsSPTexture(4032, 1984, 0, 0, 1),
	gsSPSetLights1(grun_cap_wing_Metal__METAL__lights),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, grun_cap_wing_Metal_Shade_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(0, 0, 0, 252, 124),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, grun_cap_wing_Metal_Light_rgba16_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 512, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(6, 0, 0, 2047, 128),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 512, 1, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 6, 0),
	gsDPSetTileSize(1, 0, 0, 252, 124),
	gsSPEndDisplayList(),
};

Gfx mat_revert_grun_cap_wing_Metal__METAL_[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(G_TEXTURE_GEN, 0),
	gsSPEndDisplayList(),
};

Gfx mat_grun_cap_wing_Wing_Tip[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, grun_cap_wing_wing_2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_grun_cap_wing_Wing_Tip[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx mat_grun_cap_wing_Wing_Base[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, TEXEL0, TEXEL0, 0, ENVIRONMENT, 0),
	gsSPGeometryMode(G_CULL_BACK, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, grun_cap_wing_wing1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx mat_revert_grun_cap_wing_Wing_Base[] = {
	gsDPPipeSync(),
	gsSPGeometryMode(0, G_CULL_BACK),
	gsSPEndDisplayList(),
};

Gfx grun_cap_wing_Wing_Cap_mesh_layer_1[] = {
	gsSPDisplayList(mat_grun_cap_wing_Emblem__EMBLEM_),
	gsSPDisplayList(grun_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(mat_grun_cap_wing_Cap__CAP_),
	gsSPDisplayList(grun_cap_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx grun_cap_wing_Wing_Cap_mesh_layer_1_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_grun_cap_wing_Metal__METAL_),
	gsSPDisplayList(grun_cap_wing_Wing_Cap_mesh_layer_1_tri_0),
	gsSPDisplayList(grun_cap_wing_Wing_Cap_mesh_layer_1_tri_1),
	gsSPEndDisplayList(),
};

Gfx grun_cap_wing_Wings_mesh_layer_4[] = {
	gsSPDisplayList(mat_grun_cap_wing_Wing_Tip),
	gsSPDisplayList(grun_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_grun_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_grun_cap_wing_Wing_Base),
	gsSPDisplayList(grun_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_grun_cap_wing_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx grun_cap_wing_Wings_mesh_layer_4_mat_override_Metal__METAL__0[] = {
	gsSPDisplayList(mat_grun_cap_wing_Wing_Tip),
	gsSPDisplayList(grun_cap_wing_Wings_mesh_layer_4_tri_0),
	gsSPDisplayList(mat_revert_grun_cap_wing_Wing_Tip),
	gsSPDisplayList(mat_grun_cap_wing_Wing_Base),
	gsSPDisplayList(grun_cap_wing_Wings_mesh_layer_4_tri_1),
	gsSPDisplayList(mat_revert_grun_cap_wing_Wing_Base),
	gsSPEndDisplayList(),
};

Gfx grun_cap_wing_material_revert_render_settings[] = {
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPSetEnvColor(255, 255, 255, 255),
	gsDPSetAlphaCompare(G_AC_NONE),
	gsSPEndDisplayList(),
};

