
/*
    Copyright (c) Citrix Systems Inc.

    This program is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 2 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program; if not, write to the Free Software
    Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef _CONSMAP_H
#define _CONSMAP_H

#define MAPLAT1		0
#define MAPGRAF		1
#define MAPIBMPC	2
#define MAPUSER		3

typedef struct {
	uint16_t uni[256];
	uint8_t  ch[256];
} consmap_t;

static const consmap_t consmap[3] = {
{
	{
		0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
		0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,
		0x0000, 0x0000, 0x0001, 0x0002, 0x0003, 0x0004, 0x0005, 0x0006,
		0x0007, 0x0008, 0x0009, 0x000a, 0x000b, 0x000c, 0x000d, 0x000e,
		0x000f, 0x0010, 0x0011, 0x0012, 0x0013, 0x0014, 0x0015, 0x0016,
		0x0017, 0x0018, 0x0019, 0x001a, 0x001b, 0x001c, 0x001d, 0x001e,
		0x001f, 0x0020, 0x0020, 0x0021, 0x0021, 0x0022, 0x0022, 0x0023,
		0x0023, 0x0024, 0x0024, 0x0025, 0x0025, 0x0026, 0x0026, 0x0027,
		0x0027, 0x0028, 0x0028, 0x0029, 0x0029, 0x002a, 0x002a, 0x002b,
		0x002c, 0x002d, 0x002e, 0x002f, 0x002f, 0x0030, 0x0031, 0x0031,
		0x0032, 0x0032, 0x0033, 0x0033, 0x0034, 0x0034, 0x0035, 0x0035,
		0x0036, 0x0036, 0x0037, 0x0037, 0x0038, 0x0038, 0x0039, 0x0039,
		0x003a, 0x003a, 0x003b, 0x003b, 0x003c, 0x003c, 0x003d, 0x003d,
		0x003e, 0x003e, 0x003f, 0x003f, 0x0040, 0x0040, 0x0041, 0x0041,
		0x0042, 0x0042, 0x0043, 0x0043, 0x0044, 0x0044, 0x0045, 0x0045,
		0x0046, 0x0046, 0x0047, 0x0047, 0x0048, 0x0048, 0x0049, 0x0049,
		0x004a, 0x004a, 0x004b, 0x004b, 0x004c, 0x004c, 0x004d, 0x004d,
		0x004e, 0x004e, 0x004f, 0x004f, 0x0050, 0x0050, 0x0051, 0x0051,
		0x0052, 0x0052, 0x0053, 0x0053, 0x0054, 0x0054, 0x0055, 0x0055,
		0x0056, 0x0056, 0x0057, 0x0057, 0x0058, 0x0058, 0x0059, 0x0059,
		0x005a, 0x005a, 0x005b, 0x005b, 0x005c, 0x005c, 0x005d, 0x005d,
		0x005e, 0x005e, 0x005f, 0x0060, 0x0061, 0x0062, 0x0063, 0x0064,
		0x0065, 0x0066, 0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c,
		0x006d, 0x006e, 0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074,
		0x0075, 0x0076, 0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c,
		0x007d, 0x007e, 0x007f, 0x00a0, 0x00a7, 0x00b0, 0x00b1, 0x00b6,
		0x2022, 0x203c, 0x2190, 0x2190, 0x2191, 0x2191, 0x2192, 0x2192,
		0x2193, 0x2193, 0x2194, 0x2195, 0x21a8, 0x221f, 0x23ba, 0x2409,
		0x240a, 0x240b, 0x240c, 0x240d, 0x250c, 0x2510, 0x2514, 0x2518,
		0x253c, 0x2588, 0x2591, 0x2592, 0x25ac, 0x25b2, 0x25ba, 0x25bc,
		0x25c4, 0x25c6, 0x25cb, 0x25d8, 0x25d9, 0x263a, 0x263b, 0x263c,
		0x2640, 0x2642, 0x2660, 0x2663, 0x2665, 0x2666, 0x266a, 0x266b
	},
	{
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,   0,   0,   0,   0,   0,   0,
		  0,   0,  19,  20,  21,  22,  23,  24,
		 25,  35,  36,  37,  38,  39,  40,  41,
		 42,  52,  53,  54,  55,  56,  57,  58,
		 59,  69,  70,  71,  72,  73,  74,  75,
		 76,  48,  86,  49,  87,  50,  88,  51,
		 89,  60,  90,  61,  91,  62,  92,  63,
		 93,  64, 103,  65, 104,  66, 105,  67,
		 68,  77,  78,  79, 110,  80,  81, 121,
		 82, 122,  83, 123,  84, 124,  85, 125,
		 94, 126,  95, 127,  96, 137,  97, 138,
		 98, 139,  99, 140, 100, 141, 101, 142,
		102, 143, 111, 144, 112, 154, 113, 155,
		114, 156, 115, 157, 116, 158, 117, 159,
		118, 160, 119, 161, 128, 171, 129, 172,
		130, 173, 131, 174, 132, 175, 133, 176,
		134, 177, 135, 178, 136, 188, 145, 189,
		146, 190, 147, 191, 148, 192, 149, 193,
		150, 194, 151, 195, 152, 205, 153, 206,
		162, 207, 163, 208, 164, 209, 165, 210,
		166, 211, 167, 168, 169, 170, 179, 180,
		181, 182, 183, 184, 185, 186, 187, 196,
		197, 198, 199, 200, 201, 202, 203, 204,
		213, 214, 215, 216, 217, 218, 219, 220,
		221, 230, 231, 212,  29, 228, 229,  28,
		  7,  27,  43, 107,  32, 108,  34, 106,
		 33, 109,  45,  26,  31,  44, 239, 224,
		227, 233, 225, 226, 236, 235, 237, 234,
		238, 120, 232, 223,  30,  46,  16,  47,
		 17, 222,   9,   8,  10,   1,   2,  15,
		 12,  11,   6,   5,   3,   4,  13,  14
	}
},
{
	{
		0x0000, 0x0020, 0x0021, 0x0022, 0x0023, 0x0024, 0x0025, 0x0026,
		0x0027, 0x0028, 0x0029, 0x002a, 0x002b, 0x002c, 0x002d, 0x002e,
		0x002f, 0x0030, 0x0031, 0x0032, 0x0033, 0x0034, 0x0035, 0x0036,
		0x0037, 0x0038, 0x0039, 0x003a, 0x003b, 0x003c, 0x003d, 0x003e,
		0x003f, 0x0040, 0x0041, 0x0042, 0x0043, 0x0044, 0x0045, 0x0046,
		0x0047, 0x0048, 0x0049, 0x004a, 0x004b, 0x004c, 0x004d, 0x004e,
		0x004f, 0x0050, 0x0051, 0x0052, 0x0053, 0x0054, 0x0055, 0x0056,
		0x0057, 0x0058, 0x0059, 0x005a, 0x005b, 0x005c, 0x005d, 0x005e,
		0x005f, 0x0060, 0x0061, 0x0062, 0x0063, 0x0064, 0x0065, 0x0066,
		0x0067, 0x0068, 0x0069, 0x006a, 0x006b, 0x006c, 0x006d, 0x006e,
		0x006f, 0x0070, 0x0071, 0x0072, 0x0073, 0x0074, 0x0075, 0x0076,
		0x0077, 0x0078, 0x0079, 0x007a, 0x007b, 0x007c, 0x007d, 0x007e,
		0x00a0, 0x00a1, 0x00a2, 0x00a3, 0x00a5, 0x00a7, 0x00aa, 0x00ab,
		0x00ac, 0x00b0, 0x00b1, 0x00b2, 0x00b5, 0x00b6, 0x00b7, 0x00ba,
		0x00bb, 0x00bc, 0x00bd, 0x00bf, 0x00c4, 0x00c5, 0x00c6, 0x00c7,
		0x00c9, 0x00d1, 0x00d6, 0x00dc, 0x00df, 0x00e0, 0x00e1, 0x00e2,
		0x00e4, 0x00e5, 0x00e6, 0x00e7, 0x00e8, 0x00e9, 0x00ea, 0x00eb,
		0x00ec, 0x00ed, 0x00ee, 0x00ef, 0x00f1, 0x00f2, 0x00f3, 0x00f4,
		0x00f6, 0x00f7, 0x00f9, 0x00fa, 0x00fb, 0x00fc, 0x00ff, 0x0192,
		0x0393, 0x0398, 0x03a3, 0x03a6, 0x03a9, 0x03b1, 0x03b4, 0x03b5,
		0x03c0, 0x03c3, 0x03c4, 0x03c6, 0x2022, 0x203c, 0x207f, 0x20a7,
		0x2190, 0x2191, 0x2192, 0x2193, 0x2194, 0x2195, 0x21a8, 0x2219,
		0x221a, 0x221e, 0x221f, 0x2229, 0x2248, 0x2261, 0x2264, 0x2265,
		0x2302, 0x2310, 0x2320, 0x2321, 0x2500, 0x2502, 0x250c, 0x2510,
		0x2514, 0x2518, 0x251c, 0x2524, 0x252c, 0x2534, 0x253c, 0x2550,
		0x2551, 0x2552, 0x2553, 0x2554, 0x2555, 0x2556, 0x2557, 0x2558,
		0x2559, 0x255a, 0x255b, 0x255c, 0x255d, 0x255e, 0x255f, 0x2560,
		0x2561, 0x2562, 0x2563, 0x2564, 0x2565, 0x2566, 0x2567, 0x2568,
		0x2569, 0x256a, 0x256b, 0x256c, 0x2580, 0x2584, 0x2588, 0x258c,
		0x2590, 0x2591, 0x2592, 0x2593, 0x25a0, 0x25ac, 0x25b2, 0x25b6,
		0x25bc, 0x25c0, 0x25cb, 0x25d8, 0x25d9, 0x263a, 0x263b, 0x263c,
		0x2640, 0x2642, 0x2660, 0x2663, 0x2665, 0x2666, 0x266a, 0x266b
	},
	{
		  0,  32,  33,  34,  35,  36,  37,  38,
		 39,  40,  41,  42,  43,  44,  45,  46,
		 47,  48,  49,  50,  51,  52,  53,  54,
		 55,  56,  57,  58,  59,  60,  61,  62,
		 63,  64,  65,  66,  67,  68,  69,  70,
		 71,  72,  73,  74,  75,  76,  77,  78,
		 79,  80,  81,  82,  83,  84,  85,  86,
		 87,  88,  89,  90,  91,  92,  93,  94,
		 95,  96,  97,  98,  99, 100, 101, 102,
		103, 104, 105, 106, 107, 108, 109, 110,
		111, 112, 113, 114, 115, 116, 117, 118,
		119, 120, 121, 122, 123, 124, 125, 126,
		255, 173, 155, 156, 157,  21, 166, 174,
		170, 248, 241, 253, 230,  20, 250, 167,
		175, 172, 171, 168, 142, 143, 146, 128,
		144, 165, 153, 154, 225, 133, 160, 131,
		132, 134, 145, 135, 138, 130, 136, 137,
		141, 161, 140, 139, 164, 149, 162, 147,
		148, 246, 151, 163, 150, 129, 152, 159,
		226, 233, 228, 232, 234, 224, 235, 238,
		227, 229, 231, 237,   7,  19, 252, 158,
		 27,  24,  26,  25,  29,  18,  23, 249,
		251, 236,  28, 239, 247, 240, 243, 242,
		127, 169, 244, 245, 196, 179, 218, 191,
		192, 217, 195, 180, 194, 193, 197, 205,
		186, 213, 214, 201, 184, 183, 187, 212,
		211, 200, 190, 189, 188, 198, 199, 204,
		181, 182, 185, 209, 210, 203, 207, 208,
		202, 216, 215, 206, 223, 220, 219, 221,
		222, 176, 177, 178, 254,  22,  30,  16,
		 31,  17,   9,   8,  10,   1,   2,  15,
		 12,  11,   6,   5,   3,   4,  13,  14
	}
},
{
	{
		0xf000, 0xf001, 0xf002, 0xf003, 0xf004, 0xf005, 0xf006, 0xf007,
		0xf008, 0xf009, 0xf00a, 0xf00b, 0xf00c, 0xf00d, 0xf00e, 0xf00f,
		0xf010, 0xf011, 0xf012, 0xf013, 0xf014, 0xf015, 0xf016, 0xf017,
		0xf018, 0xf019, 0xf01a, 0xf01b, 0xf01c, 0xf01d, 0xf01e, 0xf01f,
		0xf020, 0xf021, 0xf022, 0xf023, 0xf024, 0xf025, 0xf026, 0xf027,
		0xf028, 0xf029, 0xf02a, 0xf02b, 0xf02c, 0xf02d, 0xf02e, 0xf02f,
		0xf030, 0xf031, 0xf032, 0xf033, 0xf034, 0xf035, 0xf036, 0xf037,
		0xf038, 0xf039, 0xf03a, 0xf03b, 0xf03c, 0xf03d, 0xf03e, 0xf03f,
		0xf040, 0xf041, 0xf042, 0xf043, 0xf044, 0xf045, 0xf046, 0xf047,
		0xf048, 0xf049, 0xf04a, 0xf04b, 0xf04c, 0xf04d, 0xf04e, 0xf04f,
		0xf050, 0xf051, 0xf052, 0xf053, 0xf054, 0xf055, 0xf056, 0xf057,
		0xf058, 0xf059, 0xf05a, 0xf05b, 0xf05c, 0xf05d, 0xf05e, 0xf05f,
		0xf060, 0xf061, 0xf062, 0xf063, 0xf064, 0xf065, 0xf066, 0xf067,
		0xf068, 0xf069, 0xf06a, 0xf06b, 0xf06c, 0xf06d, 0xf06e, 0xf06f,
		0xf070, 0xf071, 0xf072, 0xf073, 0xf074, 0xf075, 0xf076, 0xf077,
		0xf078, 0xf079, 0xf07a, 0xf07b, 0xf07c, 0xf07d, 0xf07e, 0xf07f,
		0xf080, 0xf081, 0xf082, 0xf083, 0xf084, 0xf085, 0xf086, 0xf087,
		0xf088, 0xf089, 0xf08a, 0xf08b, 0xf08c, 0xf08d, 0xf08e, 0xf08f,
		0xf090, 0xf091, 0xf092, 0xf093, 0xf094, 0xf095, 0xf096, 0xf097,
		0xf098, 0xf099, 0xf09a, 0xf09b, 0xf09c, 0xf09d, 0xf09e, 0xf09f,
		0xf0a0, 0xf0a1, 0xf0a2, 0xf0a3, 0xf0a4, 0xf0a5, 0xf0a6, 0xf0a7,
		0xf0a8, 0xf0a9, 0xf0aa, 0xf0ab, 0xf0ac, 0xf0ad, 0xf0ae, 0xf0af,
		0xf0b0, 0xf0b1, 0xf0b2, 0xf0b3, 0xf0b4, 0xf0b5, 0xf0b6, 0xf0b7,
		0xf0b8, 0xf0b9, 0xf0ba, 0xf0bb, 0xf0bc, 0xf0bd, 0xf0be, 0xf0bf,
		0xf0c0, 0xf0c1, 0xf0c2, 0xf0c3, 0xf0c4, 0xf0c5, 0xf0c6, 0xf0c7,
		0xf0c8, 0xf0c9, 0xf0ca, 0xf0cb, 0xf0cc, 0xf0cd, 0xf0ce, 0xf0cf,
		0xf0d0, 0xf0d1, 0xf0d2, 0xf0d3, 0xf0d4, 0xf0d5, 0xf0d6, 0xf0d7,
		0xf0d8, 0xf0d9, 0xf0da, 0xf0db, 0xf0dc, 0xf0dd, 0xf0de, 0xf0df,
		0xf0e0, 0xf0e1, 0xf0e2, 0xf0e3, 0xf0e4, 0xf0e5, 0xf0e6, 0xf0e7,
		0xf0e8, 0xf0e9, 0xf0ea, 0xf0eb, 0xf0ec, 0xf0ed, 0xf0ee, 0xf0ef,
		0xf0f0, 0xf0f1, 0xf0f2, 0xf0f3, 0xf0f4, 0xf0f5, 0xf0f6, 0xf0f7,
		0xf0f8, 0xf0f9, 0xf0fa, 0xf0fb, 0xf0fc, 0xf0fd, 0xf0fe, 0xf0ff
	},
	{
		  0,   1,   2,   3,   4,   5,   6,   7,
		  8,   9,  10,  11,  12,  13,  14,  15,
		 16,  17,  18,  19,  20,  21,  22,  23,
		 24,  25,  26,  27,  28,  29,  30,  31,
		 32,  33,  34,  35,  36,  37,  38,  39,
		 40,  41,  42,  43,  44,  45,  46,  47,
		 48,  49,  50,  51,  52,  53,  54,  55,
		 56,  57,  58,  59,  60,  61,  62,  63,
		 64,  65,  66,  67,  68,  69,  70,  71,
		 72,  73,  74,  75,  76,  77,  78,  79,
		 80,  81,  82,  83,  84,  85,  86,  87,
		 88,  89,  90,  91,  92,  93,  94,  95,
		 96,  97,  98,  99, 100, 101, 102, 103,
		104, 105, 106, 107, 108, 109, 110, 111,
		112, 113, 114, 115, 116, 117, 118, 119,
		120, 121, 122, 123, 124, 125, 126, 127,
		128, 129, 130, 131, 132, 133, 134, 135,
		136, 137, 138, 139, 140, 141, 142, 143,
		144, 145, 146, 147, 148, 149, 150, 151,
		152, 153, 154, 155, 156, 157, 158, 159,
		160, 161, 162, 163, 164, 165, 166, 167,
		168, 169, 170, 171, 172, 173, 174, 175,
		176, 177, 178, 179, 180, 181, 182, 183,
		184, 185, 186, 187, 188, 189, 190, 191,
		192, 193, 194, 195, 196, 197, 198, 199,
		200, 201, 202, 203, 204, 205, 206, 207,
		208, 209, 210, 211, 212, 213, 214, 215,
		216, 217, 218, 219, 220, 221, 222, 223,
		224, 225, 226, 227, 228, 229, 230, 231,
		232, 233, 234, 235, 236, 237, 238, 239,
		240, 241, 242, 243, 244, 245, 246, 247,
		248, 249, 250, 251, 252, 253, 254, 255
	}
},
};

#endif
