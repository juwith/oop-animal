#include <stdio.h>
#include <stdlib.h>
#include "base_object.h"


void _base_obj_action(BaseObj* obj)
{
	printf("action\n");
}

void _base_obj_destroy(BaseObj* obj)
{
	free(obj);
	obj = NULL;
}

BaseObj* BaseObj_init()
{
	static struct BaseObjVfunc vfunc = {
		_base_obj_action,
		_base_obj_destroy,
	};

	BaseObj *obj = (BaseObj*)calloc(1, sizeof(BaseObj));
	obj->vfunc = &vfunc;
	return obj;
}

