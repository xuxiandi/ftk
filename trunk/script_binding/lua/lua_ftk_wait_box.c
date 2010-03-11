/*This file is generated by luagen.*/
#include "lua_ftk_wait_box.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkWaitBox");
}

static int lua_ftk_wait_box_create(lua_State* L)
{
	tolua_Error err = {0};
	FtkWaitBox* retv;
	FtkWidget* parent;
	int x;
	int y;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err) && tolua_isnumber(L, 2, 0, &err) && tolua_isnumber(L, 3, 0, &err);

	return_val_if_fail(param_ok, 0);

	parent = tolua_tousertype(L, 1, 0);
	x = tolua_tonumber(L, 2, 0);
	y = tolua_tonumber(L, 3, 0);
	retv = ftk_wait_box_create(parent, x, y);
	tolua_pushusertype(L, (void*)retv, "FtkWaitBox");

	return 1;
}

static int lua_ftk_wait_box_start_waiting(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_wait_box_start_waiting(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_wait_box_stop_waiting(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	FtkWidget* thiz;
	int param_ok = tolua_isusertype(L, 1, "FtkWidget", 0, &err);

	return_val_if_fail(param_ok, 0);

	thiz = tolua_tousertype(L, 1, 0);
	retv = ftk_wait_box_stop_waiting(thiz);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_wait_box_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkWaitBox", "FtkWaitBox", "FtkWidget", NULL);
	tolua_beginmodule(L, "FtkWaitBox");
	tolua_function(L, "Create", lua_ftk_wait_box_create);
	tolua_function(L, "StartWaiting", lua_ftk_wait_box_start_waiting);
	tolua_function(L, "StopWaiting", lua_ftk_wait_box_stop_waiting);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
