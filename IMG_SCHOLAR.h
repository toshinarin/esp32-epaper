#ifndef _IMG_SCHORLAR_H_
#define _IMG_SCHORLAR_H_

#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif

// 64x64
const unsigned char gImage_IMG_SCHORLAR[512] PROGMEM = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x1f,0xff,0xff,0xff,0xff,0xf0,0x0,
0x0,0xff,0xff,0xff,0xff,0xff,0xfe,0x0,
0x1,0xe0,0x0,0x0,0x0,0x0,0x7,0x0,
0x3,0x80,0x0,0x0,0x0,0x0,0x1,0x80,
0x6,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0xc,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x18,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x10,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x3f,0xfc,0x0,0x0,0x0,
0x0,0x0,0x1,0xff,0xff,0x80,0x0,0x0,
0x0,0x0,0x7,0xff,0xff,0xe0,0x0,0x0,
0x0,0x0,0xf,0xff,0xff,0xf0,0x0,0x0,
0x0,0x0,0x1f,0xf0,0xf,0xf8,0x0,0x0,
0x0,0x0,0x7,0xe0,0x7,0xe0,0x0,0x0,
0x0,0x1,0x1,0xf0,0xf,0x80,0x80,0x0,
0x0,0x3,0x80,0xf8,0x1f,0x1,0xc0,0x0,
0x0,0x7,0x80,0x78,0x1e,0x1,0xc0,0x0,
0x0,0x7,0x0,0x3c,0x3c,0x1,0xe0,0x0,
0x0,0xf,0x0,0x3c,0x3c,0x0,0xe0,0x0,
0x0,0xf,0x0,0x1c,0x38,0x0,0xe0,0x0,
0x0,0xf,0x0,0x1c,0x38,0x0,0xf0,0x0,
0x0,0xf,0x0,0x1c,0x38,0x0,0xf0,0x0,
0x0,0xf,0x0,0x3c,0x38,0x0,0xf0,0x0,
0x0,0x7,0x0,0x3c,0x3c,0x0,0xe0,0x0,
0x0,0x7,0x80,0x7c,0x3c,0x1,0xe0,0x0,
0x0,0x7,0xc0,0xf8,0x1f,0x3,0xe0,0x0,
0x0,0x3,0xff,0xf0,0x1f,0xff,0xc0,0x0,
0x0,0x1,0xff,0xf0,0xf,0xff,0x80,0x0,
0x0,0x0,0xff,0xc0,0x3,0xff,0x0,0x0,
0x0,0x0,0x3f,0x0,0x1,0xfc,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x10,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x30,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x20,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x60,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0xc0,
0x0,0x0,0x0,0x0,0x0,0x0,0x1,0x80,
0x0,0xc0,0x0,0x0,0x0,0x0,0x7,0x0,
0x0,0x7f,0xff,0xff,0xff,0xff,0xfe,0x0,
0x0,0x1f,0xff,0xff,0xff,0xff,0xf8,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0
};

#endif

