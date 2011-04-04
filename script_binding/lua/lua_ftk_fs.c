/*This file is generated by luagen.*/
#include "lua_ftk_fs.h"
#include "lua_ftk_callbacks.h"

static void tolua_reg_types (lua_State* L)
{
	tolua_usertype(L, "FtkFs");
}

static int lua_ftk_fs_delete(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	char* dir;
	int param_ok = tolua_isstring(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	dir = (char*)tolua_tostring(L, 1, 0);
	retv = ftk_fs_delete(dir);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_fs_delete_dir(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	char* dir;
	int param_ok = tolua_isstring(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	dir = (char*)tolua_tostring(L, 1, 0);
	retv = ftk_fs_delete_dir(dir);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_fs_delete_file(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	char* file_name;
	int param_ok = tolua_isstring(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	file_name = (char*)tolua_tostring(L, 1, 0);
	retv = ftk_fs_delete_file(file_name);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_fs_create_dir(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	char* dir;
	int param_ok = tolua_isstring(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	dir = (char*)tolua_tostring(L, 1, 0);
	retv = ftk_fs_create_dir(dir);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_fs_change_dir(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	char* dir;
	int param_ok = tolua_isstring(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	dir = (char*)tolua_tostring(L, 1, 0);
	retv = ftk_fs_change_dir(dir);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_fs_move(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	char* dir_from;
	char* dir_to;
	int param_ok = tolua_isstring(L, 1, 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	dir_from = (char*)tolua_tostring(L, 1, 0);
	dir_to = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_fs_move(dir_from, dir_to);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_fs_copy(lua_State* L)
{
	tolua_Error err = {0};
	Ret retv;
	char* dir_from;
	char* dir_to;
	int param_ok = tolua_isstring(L, 1, 0, &err) && tolua_isstring(L, 2, 0, &err);

	return_val_if_fail(param_ok, 0);

	dir_from = (char*)tolua_tostring(L, 1, 0);
	dir_to = (char*)tolua_tostring(L, 2, 0);
	retv = ftk_fs_copy(dir_from, dir_to);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

static int lua_ftk_fs_is_root(lua_State* L)
{
	tolua_Error err = {0};
	int retv;
	char* path;
	int param_ok = tolua_isstring(L, 1, 0, &err);

	return_val_if_fail(param_ok, 0);

	path = (char*)tolua_tostring(L, 1, 0);
	retv = ftk_fs_is_root(path);
	tolua_pushnumber(L, (lua_Number)retv);

	return 1;
}

int tolua_ftk_fs_init(lua_State* L)
{
	tolua_open(L);
	tolua_reg_types(L);
	tolua_module(L, NULL, 0);
	tolua_beginmodule(L, NULL);
	tolua_cclass(L,"FtkFs", "FtkFs", "", NULL);
	tolua_beginmodule(L, "FtkFs");
	tolua_function(L, "Delete", lua_ftk_fs_delete);
	tolua_function(L, "DeleteDir", lua_ftk_fs_delete_dir);
	tolua_function(L, "DeleteFile", lua_ftk_fs_delete_file);
	tolua_function(L, "CreateDir", lua_ftk_fs_create_dir);
	tolua_function(L, "ChangeDir", lua_ftk_fs_change_dir);
	tolua_function(L, "Move", lua_ftk_fs_move);
	tolua_function(L, "Copy", lua_ftk_fs_copy);
	tolua_function(L, "IsRoot", lua_ftk_fs_is_root);
	tolua_endmodule(L);
	tolua_endmodule(L);


	return 1;
}
