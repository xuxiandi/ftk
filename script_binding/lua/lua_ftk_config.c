/*This file is generated by luagen.*/
#include "lua_ftk_config.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkConfig");
}

static int lua_ftk_config_get_theme(lua_State* L)
{
	tolua_Error err = {0};
	char* retv;
	FtkConfig* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_config_get_theme(thiz);
	tolua_pushstring(L, (char*)retv);

	return 1;
}

static int lua_ftk_config_get_data_dir(lua_State* L)
{
	tolua_Error err = {0};
	char* retv;
	FtkConfig* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_config_get_data_dir(thiz);
	tolua_pushstring(L, (char*)retv);

	return 1;
}

static int lua_ftk_config_get_data_root_dir(lua_State* L)
{
	tolua_Error err = {0};
	char* retv;
	FtkConfig* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_config_get_data_root_dir(thiz);
	tolua_pushstring(L, (char*)retv);

	return 1;
}

static int lua_ftk_config_get_test_data_dir(lua_State* L)
{
	tolua_Error err = {0};
	char* retv;
	FtkConfig* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_config_get_test_data_dir(thiz);
	tolua_pushstring(L, (char*)retv);

	return 1;
}

static int lua_ftk_config_get_enable_cursor(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkConfig* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_config_get_enable_cursor(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_config_get_enable_status_bar(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	FtkConfig* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_config_get_enable_status_bar(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_config_set_theme(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkConfig* thiz;
	char* theme;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	theme = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_config_set_theme(thiz, theme);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_config_set_data_dir(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkConfig* thiz;
	char* data_dir;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	data_dir = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_config_set_data_dir(thiz, data_dir);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_config_set_test_data_dir(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkConfig* thiz;
	char* test_data_dir;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	test_data_dir = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_config_set_test_data_dir(thiz, test_data_dir);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_config_set_enable_cursor(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkConfig* thiz;
	int enable_cursor;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	enable_cursor = tolua_tonumber(L, 2, 0);
	retv = ftk_config_set_enable_cursor(thiz, enable_cursor);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_config_set_enable_status_bar(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkConfig* thiz;
	int enable_status_bar;
	int param_ok = tolua_isusertype(L, 1, "FtkConfig", 0, &err) && tolua_isnumber(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	enable_status_bar = tolua_tonumber(L, 2, 0);
	retv = ftk_config_set_enable_status_bar(thiz, enable_status_bar);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_config_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkConfig", "FtkConfig", "", NULL);
	tolua_beginmodule(L, "FtkConfig");
	tolua_function(L, "GetTheme", lua_ftk_config_get_theme);
	tolua_function(L, "GetDataDir", lua_ftk_config_get_data_dir);
	tolua_function(L, "GetDataRootDir", lua_ftk_config_get_data_root_dir);
	tolua_function(L, "GetTestDataDir", lua_ftk_config_get_test_data_dir);
	tolua_function(L, "GetEnableCursor", lua_ftk_config_get_enable_cursor);
	tolua_function(L, "GetEnableStatusBar", lua_ftk_config_get_enable_status_bar);
	tolua_function(L, "SetTheme", lua_ftk_config_set_theme);
	tolua_function(L, "SetDataDir", lua_ftk_config_set_data_dir);
	tolua_function(L, "SetTestDataDir", lua_ftk_config_set_test_data_dir);
	tolua_function(L, "SetEnableCursor", lua_ftk_config_set_enable_cursor);
	tolua_function(L, "SetEnableStatusBar", lua_ftk_config_set_enable_status_bar);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
