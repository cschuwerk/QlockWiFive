/******************************************************************************
   Colors.h
******************************************************************************/

#ifndef COLORS_H
#define COLORS_H

typedef struct color_s {
	uint8_t red;
	uint8_t green;
	uint8_t blue;
};

const color_s defaultColors[] = {
  {0xFF, 0xFF, 0xFF}, // 00 White
  {0xFF, 0x00, 0x00}, // 01 Red
  {0x00, 0xFF, 0x00}, // 02 Green
  {0x00, 0x00, 0xFF}, // 03 Blue
  {0x00, 0xFF, 0xFF}, // 04 Cyan
  {0xFF, 0x00, 0xFF}, // 05 Magenta
  {0xFF, 0xFF, 0x00}, // 06 Yellow
  {0x99, 0x66, 0xCC}, // 07 Amethyst
  {0x00, 0xFF, 0xFF}, // 08 Aqua
  {0x8A, 0x2B, 0xE2}, // 09 BlueViolet
  {0xA5, 0x2A, 0x2A}, // 10 Brown
  {0xDE, 0xB8, 0x87}, // 11 BurlyWood
  {0x5F, 0x9E, 0xA0}, // 12 CadetBlue
  {0xFF, 0x7F, 0x50}, // 13 Coral
  {0xDC, 0x14, 0x3C}, // 14 Crimson
  {0x22, 0x8B, 0x22}, // 15 ForestGreen
  {0xFF, 0xD7, 0x00}, // 16 Gold
  {0xDA, 0xA5, 0x20}, // 17 Goldenrod
  {0xAD, 0xFF, 0x2F}, // 18 GreenYellow
  {0xFF, 0x69, 0xB4}, // 19 HotPink
  {0xCD, 0x5C, 0x5C}, // 20 IndianRed
  {0x4B, 0x00, 0x82}, // 21 Indigo
  {0x7C, 0xFC, 0x00}, // 22 LawnGreen
  {0x80, 0x00, 0x00}, // 23 Maroon
  {0x19, 0x19, 0x70}, // 24 MidnightBlue
  {0xFF, 0xA5, 0x00}, // 25 Orange
  {0xFF, 0x45, 0x00}, // 26 OrangeRed
  {0xDA, 0x70, 0xD6}, // 27 Orchid
  {0xDB, 0x70, 0x93}, // 28 PaleVioletRed
  {0x80, 0x00, 0x80}, // 29 Purple
  {0x41, 0x69, 0xE1}, // 30 RoyalBlue
  {0x2E, 0x8B, 0x57}, // 31 SeaGreen
  {0x00, 0xFF, 0x7F}, // 32 SpringGreen
  {0x46, 0x82, 0xB4}, // 33 SteelBlue
  {0x00, 0x80, 0x80}, // 34 Teal
  {0x40, 0xE0, 0xD0}, // 35 Turquoise
  {0xEE, 0x82, 0xEE}  // 36 Violet
};

#endif
