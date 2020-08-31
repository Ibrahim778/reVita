#ifndef _ICONS_H_
#define _ICONS_H_

#define ICN_TOUCH_X 32
#define ICN_TOUCH_Y 32
static const unsigned char ICN_TOUCH[] = { //32x32
	0x00, 0x3e, 0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0xff, 0x80, 0x00, 0x01, 0xff, 0xc0, 0x00, 
	0x03, 0xff, 0xe0, 0x00, 0x03, 0xe3, 0xe0, 0x00, 0x03, 0xe3, 0xe0, 0x00, 0x03, 0xe3, 0xe0, 0x00, 
	0x03, 0xe3, 0xe0, 0x00, 0x01, 0xe3, 0xc0, 0x00, 0x00, 0xe3, 0x80, 0x00, 0x00, 0x63, 0x00, 0x00, 
	0x00, 0x23, 0xe0, 0x00, 0x00, 0x23, 0x3e, 0x00, 0x0f, 0x22, 0x32, 0x00, 0x08, 0xa2, 0x21, 0xe0, 
	0x08, 0x62, 0x21, 0x30, 0x0c, 0x22, 0x01, 0x10, 0x04, 0x00, 0x00, 0x10, 0x02, 0x00, 0x00, 0x10, 
	0x02, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00, 0x10, 0x00, 0x80, 0x00, 0x10, 0x00, 0x80, 0x00, 0x10, 
	0x00, 0x40, 0x00, 0x10, 0x00, 0x60, 0x00, 0x20, 0x00, 0x20, 0x00, 0x20, 0x00, 0x10, 0x00, 0x60, 
	0x00, 0x18, 0x00, 0x40, 0x00, 0x0c, 0x00, 0x80, 0x00, 0x03, 0x03, 0x00, 0x00, 0x01, 0xfc, 0x00
};

#define ICN_ARROW_X 15
#define ICN_ARROW_Y 15
static const unsigned char ICN_ARROW_UP[] = { //15x15px
	0x07, 0xc0, 0x1f, 0xf0, 0x3e, 0xf8, 0x7c, 0x7c, 0x78, 0x3c, 0xf0, 0x1e, 0xe8, 0x2e, 0xd8, 0x36, 
	0xf8, 0x3e, 0xf8, 0x3e, 0x78, 0x3c, 0x78, 0x3c, 0x38, 0x38, 0x18, 0x30, 0x07, 0xc0
};
static const unsigned char ICN_ARROW_DOWN[] = { //15x15px
	0x07, 0xc0, 0x18, 0x30, 0x38, 0x38, 0x78, 0x3c, 0x78, 0x3c, 0xf8, 0x3e, 0xf8, 0x3e, 0xd8, 0x36, 
	0xe8, 0x2e, 0xf0, 0x1e, 0x78, 0x3c, 0x7c, 0x7c, 0x3e, 0xf8, 0x1f, 0xf0, 0x07, 0xc0
};
static const unsigned char ICN_ARROW_LEFT[] = { //15x15px
	0x07, 0xc0, 0x1f, 0xf0, 0x3e, 0xf8, 0x7d, 0xfc, 0x7b, 0xfc, 0xf0, 0x02, 0xe0, 0x02, 0xc0, 0x02, 
	0xe0, 0x02, 0xf0, 0x02, 0x7b, 0xfc, 0x7d, 0xfc, 0x3e, 0xf8, 0x1f, 0xf0, 0x07, 0xc0
};
static const unsigned char ICN_ARROW_RIGHT[] = { //15x15px
	0x07, 0xc0, 0x1f, 0xf0, 0x3e, 0xf8, 0x7f, 0x7c, 0x7f, 0xbc, 0x80, 0x1e, 0x80, 0x0e, 0x80, 0x06, 
	0x80, 0x0e, 0x80, 0x1e, 0x7f, 0xbc, 0x7f, 0x7c, 0x3e, 0xf8, 0x1f, 0xf0, 0x07, 0xc0
};

#define ICN_SLIDER_X 15
#define ICN_SLIDER_Y 26
static const unsigned char ICN_SLIDER[] = { //15x26px
	0x07, 0xc0, 0x1f, 0xf0, 0x3e, 0xf8, 0x7c, 0x7c, 0x78, 0x3c, 0xf0, 0x1e, 0xe8, 0x2e, 0xd8, 0x36, 
	0xf8, 0x3e, 0xf8, 0x3e, 0x78, 0x3c, 0x78, 0x3c, 0x78, 0x3c, 0x78, 0x3c, 0x78, 0x3c, 0x78, 0x3c, 
	0xf8, 0x3e, 0xf8, 0x3e, 0xd8, 0x36, 0xe8, 0x2e, 0xf0, 0x1e, 0x78, 0x3c, 0x7c, 0x7c, 0x3e, 0xf8, 
	0x1f, 0xf0, 0x07, 0xc0
};
#endif