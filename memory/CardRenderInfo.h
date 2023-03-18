#ifndef _CARD_RENDER_INFO_H_
#define _CARD_RENDER_INFO_H_

#include "CardValue.h"
#include "Point.h"

struct CardRenderInfo {
	Point coords;
	bool show;
	bool rotate;
	CardValue value;
};
#endif