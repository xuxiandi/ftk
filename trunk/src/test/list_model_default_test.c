#include "ftk_list_model_default.h"

int main(int argc, char* argv[])
{
	int i = 0;
	FtkListItemInfo info ={0};
	FtkListItemInfo* pinfo = NULL;
	FtkListModel* thiz = ftk_list_model_default_create(0, NULL);
	
	for(i = 0; i < 100; i++)
	{
		info.state = i;
		assert(ftk_list_model_get_total(thiz) == i);
		assert(ftk_list_model_default_add(thiz, &info) == RET_OK);
		assert(ftk_list_model_get_data(thiz, i, &pinfo) == RET_OK);
		assert(pinfo->state == i);
	}
	
	for(i = 0; i < 100; i++)
	{
		assert(ftk_list_model_get_total(thiz) == 100-i);
		assert(ftk_list_model_default_remove(thiz, 0) == RET_OK);
	}

	ftk_list_model_destroy(thiz);

	return 0;
}
