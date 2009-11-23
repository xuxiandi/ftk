#include "ftk_style.h"

#ifdef FTK_SUPPORT_C99
static const FtkColor s_colors[FTK_COLOR_NR] =
{
	[FTK_COLOR_WINDOW]       = {.a=0xff, .r=0xff, .g=0xff,.b=0xff},
	[FTK_COLOR_BORDER]       = {.a=0xff, .r=0xe2, .g=0xce,.b=0xee},
	[FTK_COLOR_WINDOWFRAME]  = {.a=0xff, .r=0x00, .g=0x00,.b=0x00},
	[FTK_COLOR_WINDOWTEXT]   = {.a=0xff, .r=0x00, .g=0x00,.b=0x00},
	[FTK_COLOR_GRAYTEXT]     = {.a=0xff, .r=0xac, .g=0xa8,.b=0x99},
	[FTK_COLOR_HIGHLIGHT]    = {.a=0xff, .r=0xff, .g=0xbb,.b=0x00},
	[FTK_COLOR_BTNFACE]      = {.a=0xff, .r=0xf2, .g=0xee,.b=0xee},
	[FTK_COLOR_BTNHIGHLIGHT] = {.a=0xff, .r=0xff, .g=0xbb,.b=0x00},
	[FTK_COLOR_BTNSHADOW]    = {.a=0xff, .r=0xac, .g=0xa8,.b=0x99},
	[FTK_COLOR_BTNTEXT]      = {.a=0xff, .r=0x00, .g=0x00,.b=0x00},
	[FTK_COLOR_MENU_BG]      = {.a=0xff, .r=0xff, .g=0xff,.b=0xff},
	[FTK_COLOR_MENU_FG]      = {.a=0xff, .r=0xcc, .g=0xc9,.b=0xb8},
	[FTK_COLOR_PROGRESS_BAR_BG] = {.a=0xff, .r=0x9d, .g=0x9e,.b=0x9d},
	[FTK_COLOR_PROGRESS_BAR_FG] = {.a=0xff, .r=0xff, .g=0xd3,.b=0x00},
};
#else
static const FtkColor s_colors[FTK_COLOR_NR] = {0};
static void s_colors_init(void)
{
	if(s_colors[FTK_COLOR_WINDOW].a == 0)
	{
		s_colors[FTK_COLOR_WINDOW]       = {.a=0xff, .r=0xff, .g=0xff,.b=0xff};
		s_colors[FTK_COLOR_BORDER]       = {.a=0xff, .r=0xe2, .g=0xce,.b=0xee};
		s_colors[FTK_COLOR_WINDOWFRAME]  = {.a=0xff, .r=0x00, .g=0x00,.b=0x00};
		s_colors[FTK_COLOR_WINDOWTEXT]   = {.a=0xff, .r=0x00, .g=0x00,.b=0x00};
		s_colors[FTK_COLOR_GRAYTEXT]     = {.a=0xff, .r=0xac, .g=0xa8,.b=0x99};
		s_colors[FTK_COLOR_HIGHLIGHT]    = {.a=0xff, .r=0xff, .g=0xbb,.b=0x00};
		s_colors[FTK_COLOR_BTNFACE]      = {.a=0xff, .r=0xf2, .g=0xee,.b=0xee};
		s_colors[FTK_COLOR_BTNHIGHLIGHT] = {.a=0xff, .r=0xff, .g=0xbb,.b=0x00};
		s_colors[FTK_COLOR_BTNSHADOW]    = {.a=0xff, .r=0xac, .g=0xa8,.b=0x99};
		s_colors[FTK_COLOR_BTNTEXT]      = {.a=0xff, .r=0x00, .g=0x00,.b=0x00};
		s_colors[FTK_COLOR_MENU_BG]      = {.a=0xff, .r=0xff, .g=0xff,.b=0xff};
		s_colors[FTK_COLOR_MENU_FG]      = {.a=0xff, .r=0xcc, .g=0xc9,.b=0xb8};
		s_colors[FTK_COLOR_PROGRESS_BAR_BG] = {.a=0xff, .r=0x9d, .g=0x9e,.b=0x9d};
		s_colors[FTK_COLOR_PROGRESS_BAR_FG] = {.a=0xff, .r=0xff, .g=0xd3,.b=0x00};
	}

	return;
}
#endif

FtkColor ftk_style_get_color(FtkColorIndex index)
{
#ifndef FTK_SUPPORT_C99
	s_colors_init();
#endif
	return s_colors[index];
}


