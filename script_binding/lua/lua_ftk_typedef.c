/*This file is generated by luagen.*/
#include "lua_ftk_typedef.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* tolua_S)
{
	tolua_constant(tolua_S, "FTK_TRUE", FTK_TRUE);
	tolua_constant(tolua_S, "FTK_FALSE", FTK_FALSE);
	tolua_constant(tolua_S, "FTK_LIST_ITEM_NORMAL", FTK_LIST_ITEM_NORMAL);
	tolua_constant(tolua_S, "FTK_LIST_ITEM_RADIO", FTK_LIST_ITEM_RADIO);
	tolua_constant(tolua_S, "FTK_LIST_ITEM_CHECK", FTK_LIST_ITEM_CHECK);
	tolua_constant(tolua_S, "FTK_LIST_ITEM_MORE", FTK_LIST_ITEM_MORE);
	tolua_usertype(tolua_S, "FtkPoint");
	tolua_usertype(tolua_S, "FtkRect");
	tolua_usertype(tolua_S, "FtkListItemInfo");
	tolua_usertype(tolua_S, "FtkColor");
	tolua_constant(tolua_S, "FTK_EVT_NOP", FTK_EVT_NOP);
	tolua_constant(tolua_S, "FTK_EVT_IDLE", FTK_EVT_IDLE);
	tolua_constant(tolua_S, "FTK_EVT_TIMER", FTK_EVT_TIMER);
	tolua_constant(tolua_S, "FTK_EVT_QUIT", FTK_EVT_QUIT);
	tolua_constant(tolua_S, "FTK_EVT_KEY_UP", FTK_EVT_KEY_UP);
	tolua_constant(tolua_S, "FTK_EVT_KEY_DOWN", FTK_EVT_KEY_DOWN);
	tolua_constant(tolua_S, "FTK_EVT_MOUSE_MOVE", FTK_EVT_MOUSE_MOVE);
	tolua_constant(tolua_S, "FTK_EVT_MOUSE_DOWN", FTK_EVT_MOUSE_DOWN);
	tolua_constant(tolua_S, "FTK_EVT_MOUSE_LONG_PRESS", FTK_EVT_MOUSE_LONG_PRESS);
	tolua_constant(tolua_S, "FTK_EVT_KEY_LONG_PRESS", FTK_EVT_KEY_LONG_PRESS);
	tolua_constant(tolua_S, "FTK_EVT_MOUSE_UP", FTK_EVT_MOUSE_UP);
	tolua_constant(tolua_S, "FTK_EVT_HIDE", FTK_EVT_HIDE);
	tolua_constant(tolua_S, "FTK_EVT_SHOW", FTK_EVT_SHOW);
	tolua_constant(tolua_S, "FTK_EVT_MAP", FTK_EVT_MAP);
	tolua_constant(tolua_S, "FTK_EVT_UNMAP", FTK_EVT_UNMAP);
	tolua_constant(tolua_S, "FTK_EVT_UPDATE", FTK_EVT_UPDATE);
	tolua_constant(tolua_S, "FTK_EVT_MOVE", FTK_EVT_MOVE);
	tolua_constant(tolua_S, "FTK_EVT_RESIZE", FTK_EVT_RESIZE);
	tolua_constant(tolua_S, "FTK_EVT_MOVE_RESIZE", FTK_EVT_MOVE_RESIZE);
	tolua_constant(tolua_S, "FTK_EVT_FOCUS_IN", FTK_EVT_FOCUS_IN);
	tolua_constant(tolua_S, "FTK_EVT_FOCUS_OUT", FTK_EVT_FOCUS_OUT);
	tolua_constant(tolua_S, "FTK_EVT_ADD_CHILD", FTK_EVT_ADD_CHILD);
	tolua_constant(tolua_S, "FTK_EVT_IM_COMMIT", FTK_EVT_IM_COMMIT);
	tolua_constant(tolua_S, "FTK_EVT_IM_PREEDIT", FTK_EVT_IM_PREEDIT);
	tolua_constant(tolua_S, "FTK_EVT_IM_ACT_COMMIT", FTK_EVT_IM_ACT_COMMIT);
	tolua_constant(tolua_S, "FTK_EVT_REMOVE_CHILD", FTK_EVT_REMOVE_CHILD);
	tolua_constant(tolua_S, "FTK_EVT_WND_DESTROY", FTK_EVT_WND_DESTROY);
	tolua_constant(tolua_S, "FTK_EVT_RELAYOUT_WND", FTK_EVT_RELAYOUT_WND);
	tolua_constant(tolua_S, "FTK_EVT_ADD_SOURCE", FTK_EVT_ADD_SOURCE);
	tolua_constant(tolua_S, "FTK_EVT_REMOVE_SOURCE", FTK_EVT_REMOVE_SOURCE);
	tolua_constant(tolua_S, "FTK_EVT_THEME_CHANGED", FTK_EVT_THEME_CHANGED);
	tolua_constant(tolua_S, "FTK_EVT_LOCALE_CHANGED", FTK_EVT_LOCALE_CHANGED);
	tolua_constant(tolua_S, "FTK_EVT_DISPLAY_CHANGED", FTK_EVT_DISPLAY_CHANGED);
	tolua_constant(tolua_S, "FTK_EVT_TOP_WND_CHANGED", FTK_EVT_TOP_WND_CHANGED);
	tolua_constant(tolua_S, "FTK_EVT_WND_CONFIG_CHANGED", FTK_EVT_WND_CONFIG_CHANGED);
	tolua_constant(tolua_S, "RET_OK", RET_OK);
	tolua_constant(tolua_S, "RET_FAIL", RET_FAIL);
	tolua_constant(tolua_S, "RET_REMOVE", RET_REMOVE);
	tolua_constant(tolua_S, "RET_CONTINUE", RET_CONTINUE);
	tolua_constant(tolua_S, "RET_FOUND", RET_FOUND);
	tolua_constant(tolua_S, "RET_NEXT", RET_NEXT);
	tolua_constant(tolua_S, "RET_QUIT", RET_QUIT);
	tolua_constant(tolua_S, "RET_IGNORED", RET_IGNORED);
	tolua_constant(tolua_S, "RET_NO_TARGET", RET_NO_TARGET);
	tolua_constant(tolua_S, "RET_OUT_OF_SPACE", RET_OUT_OF_SPACE);
	tolua_constant(tolua_S, "FTK_WIDGET_NONE", FTK_WIDGET_NONE);
	tolua_constant(tolua_S, "FTK_WINDOW", FTK_WINDOW);
	tolua_constant(tolua_S, "FTK_DIALOG", FTK_DIALOG);
	tolua_constant(tolua_S, "FTK_WINDOW_ANY", FTK_WINDOW_ANY);
	tolua_constant(tolua_S, "FTK_STATUS_PANEL", FTK_STATUS_PANEL);
	tolua_constant(tolua_S, "FTK_MENU_PANEL", FTK_MENU_PANEL);
	tolua_constant(tolua_S, "FTK_MENU_ITEM", FTK_MENU_ITEM);
	tolua_constant(tolua_S, "FTK_LABEL", FTK_LABEL);
	tolua_constant(tolua_S, "FTK_BUTTON", FTK_BUTTON);
	tolua_constant(tolua_S, "FTK_IMAGE", FTK_IMAGE);
	tolua_constant(tolua_S, "FTK_ENTRY", FTK_ENTRY);
	tolua_constant(tolua_S, "FTK_PAINTER", FTK_PAINTER);
	tolua_constant(tolua_S, "FTK_WAIT_BOX", FTK_WAIT_BOX);
	tolua_constant(tolua_S, "FTK_STATUS_ITEM", FTK_STATUS_ITEM);
	tolua_constant(tolua_S, "FTK_PROGRESS_BAR", FTK_PROGRESS_BAR);
	tolua_constant(tolua_S, "FTK_RADIO_GROUP", FTK_RADIO_GROUP);
	tolua_constant(tolua_S, "FTK_RADIO_BUTTON", FTK_RADIO_BUTTON);
	tolua_constant(tolua_S, "FTK_CHECK_BUTTON", FTK_CHECK_BUTTON);
	tolua_constant(tolua_S, "FTK_SCROLL_VBAR", FTK_SCROLL_VBAR);
	tolua_constant(tolua_S, "FTK_SCROLL_HBAR", FTK_SCROLL_HBAR);
	tolua_constant(tolua_S, "FTK_LIST_VIEW", FTK_LIST_VIEW);
	tolua_constant(tolua_S, "FTK_ICON_VIEW", FTK_ICON_VIEW);
	tolua_constant(tolua_S, "FTK_TEXT_VIEW", FTK_TEXT_VIEW);
	tolua_constant(tolua_S, "FTK_COMBO_BOX", FTK_COMBO_BOX);
	tolua_constant(tolua_S, "FTK_WIDGET_TYPE_NR", FTK_WIDGET_TYPE_NR);
	tolua_constant(tolua_S, "FTK_LOG_V", FTK_LOG_V);
	tolua_constant(tolua_S, "FTK_LOG_D", FTK_LOG_D);
	tolua_constant(tolua_S, "FTK_LOG_E", FTK_LOG_E);
	tolua_constant(tolua_S, "FTK_WIDGET_NORMAL", FTK_WIDGET_NORMAL);
	tolua_constant(tolua_S, "FTK_WIDGET_FOCUSED", FTK_WIDGET_FOCUSED);
	tolua_constant(tolua_S, "FTK_WIDGET_ACTIVE", FTK_WIDGET_ACTIVE);
	tolua_constant(tolua_S, "FTK_WIDGET_INSENSITIVE", FTK_WIDGET_INSENSITIVE);
	tolua_constant(tolua_S, "FTK_WIDGET_STATE_NR", FTK_WIDGET_STATE_NR);
	tolua_constant(tolua_S, "FTK_ATTR_TRANSPARENT", FTK_ATTR_TRANSPARENT);
	tolua_constant(tolua_S, "FTK_ATTR_NO_FOCUS", FTK_ATTR_NO_FOCUS);
	tolua_constant(tolua_S, "FTK_ATTR_BG_CENTER", FTK_ATTR_BG_CENTER);
	tolua_constant(tolua_S, "FTK_ATTR_BG_TILE", FTK_ATTR_BG_TILE);
	tolua_constant(tolua_S, "FTK_ATTR_BG_FOUR_CORNER", FTK_ATTR_BG_FOUR_CORNER);
	tolua_constant(tolua_S, "FTK_ATTR_INSENSITIVE", FTK_ATTR_INSENSITIVE);
	tolua_constant(tolua_S, "FTK_ATTR_FOCUSED", FTK_ATTR_FOCUSED);
	tolua_constant(tolua_S, "FTK_ATTR_IGNORE_CLOSE", FTK_ATTR_IGNORE_CLOSE);
	tolua_constant(tolua_S, "FTK_ATTR_QUIT_WHEN_CLOSE", FTK_ATTR_QUIT_WHEN_CLOSE);
	tolua_constant(tolua_S, "FTK_ATTR_AUTO_LAYOUT", FTK_ATTR_AUTO_LAYOUT);
	tolua_constant(tolua_S, "FTK_ATTR_POPUP", FTK_ATTR_POPUP);
	tolua_usertype(tolua_S, "FtkEvent");
	tolua_constant(tolua_S, "FTK_KEY_SPACE", FTK_KEY_SPACE);
	tolua_constant(tolua_S, "FTK_KEY_EXCLAM", FTK_KEY_EXCLAM);
	tolua_constant(tolua_S, "FTK_KEY_QUOTEDBL", FTK_KEY_QUOTEDBL);
	tolua_constant(tolua_S, "FTK_KEY_NUMBERSIGN", FTK_KEY_NUMBERSIGN);
	tolua_constant(tolua_S, "FTK_KEY_DOLLAR", FTK_KEY_DOLLAR);
	tolua_constant(tolua_S, "FTK_KEY_PERCENT", FTK_KEY_PERCENT);
	tolua_constant(tolua_S, "FTK_KEY_AMPERSAND", FTK_KEY_AMPERSAND);
	tolua_constant(tolua_S, "FTK_KEY_APOSTROPHE", FTK_KEY_APOSTROPHE);
	tolua_constant(tolua_S, "FTK_KEY_QUOTERIGHT", FTK_KEY_QUOTERIGHT);
	tolua_constant(tolua_S, "FTK_KEY_PARENLEFT", FTK_KEY_PARENLEFT);
	tolua_constant(tolua_S, "FTK_KEY_PARENRIGHT", FTK_KEY_PARENRIGHT);
	tolua_constant(tolua_S, "FTK_KEY_ASTERISK", FTK_KEY_ASTERISK);
	tolua_constant(tolua_S, "FTK_KEY_PLUS", FTK_KEY_PLUS);
	tolua_constant(tolua_S, "FTK_KEY_COMMA", FTK_KEY_COMMA);
	tolua_constant(tolua_S, "FTK_KEY_MINUS", FTK_KEY_MINUS);
	tolua_constant(tolua_S, "FTK_KEY_PERIOD", FTK_KEY_PERIOD);
	tolua_constant(tolua_S, "FTK_KEY_SLASH", FTK_KEY_SLASH);
	tolua_constant(tolua_S, "FTK_KEY_0", FTK_KEY_0);
	tolua_constant(tolua_S, "FTK_KEY_1", FTK_KEY_1);
	tolua_constant(tolua_S, "FTK_KEY_2", FTK_KEY_2);
	tolua_constant(tolua_S, "FTK_KEY_3", FTK_KEY_3);
	tolua_constant(tolua_S, "FTK_KEY_4", FTK_KEY_4);
	tolua_constant(tolua_S, "FTK_KEY_5", FTK_KEY_5);
	tolua_constant(tolua_S, "FTK_KEY_6", FTK_KEY_6);
	tolua_constant(tolua_S, "FTK_KEY_7", FTK_KEY_7);
	tolua_constant(tolua_S, "FTK_KEY_8", FTK_KEY_8);
	tolua_constant(tolua_S, "FTK_KEY_9", FTK_KEY_9);
	tolua_constant(tolua_S, "FTK_KEY_COLON", FTK_KEY_COLON);
	tolua_constant(tolua_S, "FTK_KEY_SEMICOLON", FTK_KEY_SEMICOLON);
	tolua_constant(tolua_S, "FTK_KEY_LESS", FTK_KEY_LESS);
	tolua_constant(tolua_S, "FTK_KEY_EQUAL", FTK_KEY_EQUAL);
	tolua_constant(tolua_S, "FTK_KEY_GREATER", FTK_KEY_GREATER);
	tolua_constant(tolua_S, "FTK_KEY_QUESTION", FTK_KEY_QUESTION);
	tolua_constant(tolua_S, "FTK_KEY_AT", FTK_KEY_AT);
	tolua_constant(tolua_S, "FTK_KEY_A", FTK_KEY_A);
	tolua_constant(tolua_S, "FTK_KEY_B", FTK_KEY_B);
	tolua_constant(tolua_S, "FTK_KEY_C", FTK_KEY_C);
	tolua_constant(tolua_S, "FTK_KEY_D", FTK_KEY_D);
	tolua_constant(tolua_S, "FTK_KEY_E", FTK_KEY_E);
	tolua_constant(tolua_S, "FTK_KEY_F", FTK_KEY_F);
	tolua_constant(tolua_S, "FTK_KEY_G", FTK_KEY_G);
	tolua_constant(tolua_S, "FTK_KEY_H", FTK_KEY_H);
	tolua_constant(tolua_S, "FTK_KEY_I", FTK_KEY_I);
	tolua_constant(tolua_S, "FTK_KEY_J", FTK_KEY_J);
	tolua_constant(tolua_S, "FTK_KEY_K", FTK_KEY_K);
	tolua_constant(tolua_S, "FTK_KEY_L", FTK_KEY_L);
	tolua_constant(tolua_S, "FTK_KEY_M", FTK_KEY_M);
	tolua_constant(tolua_S, "FTK_KEY_N", FTK_KEY_N);
	tolua_constant(tolua_S, "FTK_KEY_O", FTK_KEY_O);
	tolua_constant(tolua_S, "FTK_KEY_P", FTK_KEY_P);
	tolua_constant(tolua_S, "FTK_KEY_Q", FTK_KEY_Q);
	tolua_constant(tolua_S, "FTK_KEY_R", FTK_KEY_R);
	tolua_constant(tolua_S, "FTK_KEY_S", FTK_KEY_S);
	tolua_constant(tolua_S, "FTK_KEY_T", FTK_KEY_T);
	tolua_constant(tolua_S, "FTK_KEY_U", FTK_KEY_U);
	tolua_constant(tolua_S, "FTK_KEY_V", FTK_KEY_V);
	tolua_constant(tolua_S, "FTK_KEY_W", FTK_KEY_W);
	tolua_constant(tolua_S, "FTK_KEY_X", FTK_KEY_X);
	tolua_constant(tolua_S, "FTK_KEY_Y", FTK_KEY_Y);
	tolua_constant(tolua_S, "FTK_KEY_Z", FTK_KEY_Z);
	tolua_constant(tolua_S, "FTK_KEY_BRACKETLEFT", FTK_KEY_BRACKETLEFT);
	tolua_constant(tolua_S, "FTK_KEY_BACKSLASH", FTK_KEY_BACKSLASH);
	tolua_constant(tolua_S, "FTK_KEY_BRACKETRIGHT", FTK_KEY_BRACKETRIGHT);
	tolua_constant(tolua_S, "FTK_KEY_ASCIICIRCUM", FTK_KEY_ASCIICIRCUM);
	tolua_constant(tolua_S, "FTK_KEY_UNDERSCORE", FTK_KEY_UNDERSCORE);
	tolua_constant(tolua_S, "FTK_KEY_QUOTELEFT", FTK_KEY_QUOTELEFT);
	tolua_constant(tolua_S, "FTK_KEY_GRAVE", FTK_KEY_GRAVE);
	tolua_constant(tolua_S, "FTK_KEY_LEFTBRACE", FTK_KEY_LEFTBRACE);
	tolua_constant(tolua_S, "FTK_KEY_OR", FTK_KEY_OR);
	tolua_constant(tolua_S, "FTK_KEY_RIGHTBRACE", FTK_KEY_RIGHTBRACE);
	tolua_constant(tolua_S, "FTK_KEY_NOT", FTK_KEY_NOT);
	tolua_constant(tolua_S, "FTK_KEY_DOT", FTK_KEY_DOT);
	tolua_constant(tolua_S, "FTK_KEY_HOME", FTK_KEY_HOME);
	tolua_constant(tolua_S, "FTK_KEY_LEFT", FTK_KEY_LEFT);
	tolua_constant(tolua_S, "FTK_KEY_UP", FTK_KEY_UP);
	tolua_constant(tolua_S, "FTK_KEY_RIGHT", FTK_KEY_RIGHT);
	tolua_constant(tolua_S, "FTK_KEY_DOWN", FTK_KEY_DOWN);
	tolua_constant(tolua_S, "FTK_KEY_PRIOR", FTK_KEY_PRIOR);
	tolua_constant(tolua_S, "FTK_KEY_PAGEUP", FTK_KEY_PAGEUP);
	tolua_constant(tolua_S, "FTK_KEY_NEXT", FTK_KEY_NEXT);
	tolua_constant(tolua_S, "FTK_KEY_PAGEDOWN", FTK_KEY_PAGEDOWN);
	tolua_constant(tolua_S, "FTK_KEY_END", FTK_KEY_END);
	tolua_constant(tolua_S, "FTK_KEY_BEGIN", FTK_KEY_BEGIN);
	tolua_constant(tolua_S, "FTK_KEY_INSERT", FTK_KEY_INSERT);
	tolua_constant(tolua_S, "FTK_KEY_ENTER", FTK_KEY_ENTER);
	tolua_constant(tolua_S, "FTK_KEY_TAB", FTK_KEY_TAB);
	tolua_constant(tolua_S, "FTK_KEY_ESC", FTK_KEY_ESC);
	tolua_constant(tolua_S, "FTK_KEY_RIGHTCTRL", FTK_KEY_RIGHTCTRL);
	tolua_constant(tolua_S, "FTK_KEY_LEFTCTRL", FTK_KEY_LEFTCTRL);
	tolua_constant(tolua_S, "FTK_KEY_RIGHTALT", FTK_KEY_RIGHTALT);
	tolua_constant(tolua_S, "FTK_KEY_LEFTALT", FTK_KEY_LEFTALT);
	tolua_constant(tolua_S, "FTK_KEY_RIGHTSHIFT", FTK_KEY_RIGHTSHIFT);
	tolua_constant(tolua_S, "FTK_KEY_LEFTSHIFT", FTK_KEY_LEFTSHIFT);
	tolua_constant(tolua_S, "FTK_KEY_DELETE", FTK_KEY_DELETE);
	tolua_constant(tolua_S, "FTK_KEY_F1", FTK_KEY_F1);
	tolua_constant(tolua_S, "FTK_KEY_F2", FTK_KEY_F2);
	tolua_constant(tolua_S, "FTK_KEY_F3", FTK_KEY_F3);
	tolua_constant(tolua_S, "FTK_KEY_F4", FTK_KEY_F4);
	tolua_constant(tolua_S, "FTK_KEY_F5", FTK_KEY_F5);
	tolua_constant(tolua_S, "FTK_KEY_F6", FTK_KEY_F6);
	tolua_constant(tolua_S, "FTK_KEY_F7", FTK_KEY_F7);
	tolua_constant(tolua_S, "FTK_KEY_F8", FTK_KEY_F8);
	tolua_constant(tolua_S, "FTK_KEY_F9", FTK_KEY_F9);
	tolua_constant(tolua_S, "FTK_KEY_F10", FTK_KEY_F10);
	tolua_constant(tolua_S, "FTK_KEY_CAPSLOCK", FTK_KEY_CAPSLOCK);
	tolua_constant(tolua_S, "FTK_KEY_BACKSPACE", FTK_KEY_BACKSPACE);
	tolua_constant(tolua_S, "FTK_KEY_SEND", FTK_KEY_SEND);
	tolua_constant(tolua_S, "FTK_KEY_REPLY", FTK_KEY_REPLY);
	tolua_constant(tolua_S, "FTK_KEY_SAVE", FTK_KEY_SAVE);
	tolua_constant(tolua_S, "FTK_KEY_BATTERY", FTK_KEY_BATTERY);
	tolua_constant(tolua_S, "FTK_KEY_BLUETOOTH", FTK_KEY_BLUETOOTH);
	tolua_constant(tolua_S, "FTK_KEY_WLAN", FTK_KEY_WLAN);
	tolua_constant(tolua_S, "FTK_KEY_POWER", FTK_KEY_POWER);
	tolua_constant(tolua_S, "FTK_KEY_MENU", FTK_KEY_MENU);
}

static int tolua_get_FtkPoint_x(lua_State* tolua_S)
{
	lua_Number retv;
	FtkPoint* thiz = (FtkPoint*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->x;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkPoint_x(lua_State* tolua_S)
{
	FtkPoint* thiz = (FtkPoint*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->x = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkPoint_y(lua_State* tolua_S)
{
	lua_Number retv;
	FtkPoint* thiz = (FtkPoint*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->y;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkPoint_y(lua_State* tolua_S)
{
	FtkPoint* thiz = (FtkPoint*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->y = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkRect_x(lua_State* tolua_S)
{
	lua_Number retv;
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->x;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkRect_x(lua_State* tolua_S)
{
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->x = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkRect_y(lua_State* tolua_S)
{
	lua_Number retv;
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->y;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkRect_y(lua_State* tolua_S)
{
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->y = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkRect_width(lua_State* tolua_S)
{
	lua_Number retv;
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->width;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkRect_width(lua_State* tolua_S)
{
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->width = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkRect_height(lua_State* tolua_S)
{
	lua_Number retv;
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->height;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkRect_height(lua_State* tolua_S)
{
	FtkRect* thiz = (FtkRect*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->height = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_text(lua_State* tolua_S)
{
	char* retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (char*)thiz->text;
	tolua_pushstring(tolua_S, (char*)retv);

	return 1;
}

static int tolua_set_FtkListItemInfo_text(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->text = ((char*) tolua_tostring(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_value(lua_State* tolua_S)
{
	lua_Number retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->value;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkListItemInfo_value(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->value = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_state(lua_State* tolua_S)
{
	lua_Number retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->state;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkListItemInfo_state(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->state = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_type(lua_State* tolua_S)
{
	void* retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (void*)thiz->type;
	tolua_pushusertype(tolua_S, (void*)retv, "FtkListItemType");

	return 1;
}

static int tolua_set_FtkListItemInfo_type(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->type = ((FtkListItemType) *(FtkListItemType*)tolua_tousertype(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_left_icon(lua_State* tolua_S)
{
	void* retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (void*)thiz->left_icon;
	tolua_pushusertype(tolua_S, (void*)retv, "FtkBitmap");

	return 1;
}

static int tolua_set_FtkListItemInfo_left_icon(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->left_icon = ((FtkBitmap*) tolua_tousertype(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_right_icon(lua_State* tolua_S)
{
	void* retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (void*)thiz->right_icon;
	tolua_pushusertype(tolua_S, (void*)retv, "FtkBitmap");

	return 1;
}

static int tolua_set_FtkListItemInfo_right_icon(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->right_icon = ((FtkBitmap*) tolua_tousertype(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_user_data(lua_State* tolua_S)
{
	void* retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (void*)thiz->user_data;
	tolua_pushusertype(tolua_S, (void*)retv, "void");

	return 1;
}

static int tolua_set_FtkListItemInfo_user_data(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->user_data = ((void*) tolua_tousertype(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkListItemInfo_extra_user_data(lua_State* tolua_S)
{
	void* retv;
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (void*)thiz->extra_user_data;
	tolua_pushusertype(tolua_S, (void*)retv, "void");

	return 1;
}

static int tolua_set_FtkListItemInfo_extra_user_data(lua_State* tolua_S)
{
	FtkListItemInfo* thiz = (FtkListItemInfo*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->extra_user_data = ((void*) tolua_tousertype(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkColor_b(lua_State* tolua_S)
{
	lua_Number retv;
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->b;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkColor_b(lua_State* tolua_S)
{
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->b = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkColor_g(lua_State* tolua_S)
{
	lua_Number retv;
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->g;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkColor_g(lua_State* tolua_S)
{
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->g = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkColor_r(lua_State* tolua_S)
{
	lua_Number retv;
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->r;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkColor_r(lua_State* tolua_S)
{
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->r = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkColor_a(lua_State* tolua_S)
{
	lua_Number retv;
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->a;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkColor_a(lua_State* tolua_S)
{
	FtkColor* thiz = (FtkColor*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->a = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkEvent_type(lua_State* tolua_S)
{
	void* retv;
	FtkEvent* thiz = (FtkEvent*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (void*)thiz->type;
	tolua_pushusertype(tolua_S, (void*)retv, "FtkEventType");

	return 1;
}

static int tolua_set_FtkEvent_type(lua_State* tolua_S)
{
	FtkEvent* thiz = (FtkEvent*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->type = ((FtkEventType) *(FtkEventType*)tolua_tousertype(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkEvent_widget(lua_State* tolua_S)
{
	void* retv;
	FtkEvent* thiz = (FtkEvent*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (void*)thiz->widget;
	tolua_pushusertype(tolua_S, (void*)retv, "void");

	return 1;
}

static int tolua_set_FtkEvent_widget(lua_State* tolua_S)
{
	FtkEvent* thiz = (FtkEvent*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->widget = ((void*) tolua_tousertype(tolua_S, 2, 0));

	return 1;
}

static int tolua_get_FtkEvent_time(lua_State* tolua_S)
{
	lua_Number retv;
	FtkEvent* thiz = (FtkEvent*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	retv = (lua_Number)thiz->time;
	tolua_pushnumber(tolua_S, (lua_Number)retv);

	return 1;
}

static int tolua_set_FtkEvent_time(lua_State* tolua_S)
{
	FtkEvent* thiz = (FtkEvent*)  tolua_tousertype(tolua_S, 1, 0);
	return_val_if_fail(thiz != NULL, 0);
	thiz->time = ((int) tolua_tonumber(tolua_S, 2, 0));

	return 1;
}

int tolua_ftk_typedef_init(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	tolua_reg_types(tolua_S);
	tolua_module(tolua_S, NULL, 0);
	tolua_beginmodule(tolua_S, NULL);
	tolua_cclass(tolua_S, "FtkPoint", "FtkPoint", "", NULL);
	tolua_beginmodule(tolua_S, "FtkPoint");
	tolua_variable(tolua_S, "x",tolua_get_FtkPoint_x, tolua_set_FtkPoint_x);
	tolua_variable(tolua_S, "y",tolua_get_FtkPoint_y, tolua_set_FtkPoint_y);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S, "FtkRect", "FtkRect", "", NULL);
	tolua_beginmodule(tolua_S, "FtkRect");
	tolua_variable(tolua_S, "x",tolua_get_FtkRect_x, tolua_set_FtkRect_x);
	tolua_variable(tolua_S, "y",tolua_get_FtkRect_y, tolua_set_FtkRect_y);
	tolua_variable(tolua_S, "width",tolua_get_FtkRect_width, tolua_set_FtkRect_width);
	tolua_variable(tolua_S, "height",tolua_get_FtkRect_height, tolua_set_FtkRect_height);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S, "FtkListItemInfo", "FtkListItemInfo", "", NULL);
	tolua_beginmodule(tolua_S, "FtkListItemInfo");
	tolua_variable(tolua_S, "text",tolua_get_FtkListItemInfo_text, tolua_set_FtkListItemInfo_text);
	tolua_variable(tolua_S, "value",tolua_get_FtkListItemInfo_value, tolua_set_FtkListItemInfo_value);
	tolua_variable(tolua_S, "state",tolua_get_FtkListItemInfo_state, tolua_set_FtkListItemInfo_state);
	tolua_variable(tolua_S, "type",tolua_get_FtkListItemInfo_type, tolua_set_FtkListItemInfo_type);
	tolua_variable(tolua_S, "left_icon",tolua_get_FtkListItemInfo_left_icon, tolua_set_FtkListItemInfo_left_icon);
	tolua_variable(tolua_S, "right_icon",tolua_get_FtkListItemInfo_right_icon, tolua_set_FtkListItemInfo_right_icon);
	tolua_variable(tolua_S, "user_data",tolua_get_FtkListItemInfo_user_data, tolua_set_FtkListItemInfo_user_data);
	tolua_variable(tolua_S, "extra_user_data",tolua_get_FtkListItemInfo_extra_user_data, tolua_set_FtkListItemInfo_extra_user_data);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S, "FtkColor", "FtkColor", "", NULL);
	tolua_beginmodule(tolua_S, "FtkColor");
	tolua_variable(tolua_S, "b",tolua_get_FtkColor_b, tolua_set_FtkColor_b);
	tolua_variable(tolua_S, "g",tolua_get_FtkColor_g, tolua_set_FtkColor_g);
	tolua_variable(tolua_S, "r",tolua_get_FtkColor_r, tolua_set_FtkColor_r);
	tolua_variable(tolua_S, "a",tolua_get_FtkColor_a, tolua_set_FtkColor_a);
	tolua_endmodule(tolua_S);
	tolua_cclass(tolua_S, "FtkEvent", "FtkEvent", "", NULL);
	tolua_beginmodule(tolua_S, "FtkEvent");
	tolua_variable(tolua_S, "type",tolua_get_FtkEvent_type, tolua_set_FtkEvent_type);
	tolua_variable(tolua_S, "widget",tolua_get_FtkEvent_widget, tolua_set_FtkEvent_widget);
	tolua_variable(tolua_S, "time",tolua_get_FtkEvent_time, tolua_set_FtkEvent_time);
	tolua_endmodule(tolua_S);
	tolua_endmodule(tolua_S);

	return 1;
}