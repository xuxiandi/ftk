#include "ftk_log.h"
#include "ftk_globals.h"
#include "ftk_display_fb.h"
#include "ftk_source_input.h"
#include "ftk_wnd_manager.h"
#include "ftk_source_tslib.h"

static Ret ftk_init_input(void)
{
	char filename[260] = {0};
	const char* tsdev = NULL;
	FtkSource* source = NULL;
	struct dirent* iter = NULL;
	const char* extra_input = NULL;
	DIR* dir = opendir("/dev/input");
	
	return_val_if_fail(dir != NULL, RET_FAIL);

	tsdev = getenv("FTK_TSLIB_FILE") ? getenv("FTK_TSLIB_FILE") : FTK_TSLIB_FILE;
	while((iter = readdir(dir)) != NULL)
	{
		if(iter->d_name[0] == '.') continue;
		if(!(iter->d_type & DT_CHR)) continue;

		ftk_snprintf(filename, sizeof(filename), "/dev/input/%s", iter->d_name);
#ifdef USE_TSLIB
		if(strcmp(filename, tsdev) == 0)
		{
			/*skip tsdev now, open it later.*/
			continue;
		}
		else
#endif
		{
			source = ftk_source_input_create(filename, 
				(FtkOnEvent)ftk_wnd_manager_queue_event_auto_rotate, ftk_default_wnd_manager());
		}
		if(source != NULL)
		{
			ftk_sources_manager_add(ftk_default_sources_manager(), source);
		}
	}
	closedir(dir);

#ifdef USE_TSLIB
	source = ftk_source_tslib_create(tsdev, 
				(FtkOnEvent)ftk_wnd_manager_queue_event_auto_rotate, ftk_default_wnd_manager());
	if(source != NULL)
	{
		ftk_sources_manager_add(ftk_default_sources_manager(), source);
	}
	ftk_logd("%s: tsdev %s source=%p\n", __func__, tsdev, source);
#endif

	extra_input = getenv("FTK_EXTRA_INPUT");
	if(extra_input != NULL)
	{
		source = ftk_source_input_create(filename, 
				(FtkOnEvent)ftk_wnd_manager_queue_event_auto_rotate, ftk_default_wnd_manager());
		if(source != NULL)
		{
			ftk_sources_manager_add(ftk_default_sources_manager(), source);

			ftk_logd("add %s input device\n", extra_input);
		}
	}

	return RET_OK;
}

Ret ftk_backend_init(int argc, char* argv[])
{
	ftk_init_input();
	ftk_set_display(ftk_display_fb_create(getenv("FTK_FB_NAME") ? getenv("FTK_FB_NAME") : FTK_FB_NAME));
	if(ftk_default_display() == NULL)
	{
		ftk_loge("open display failed.\n");
		exit(0);
	}

	return RET_OK;
}

