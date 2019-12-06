#include <stdio.h>
#include <stdlib.h>
#include "base_amphibia.h"


void _amphibia_action(Amphbia_Obj* obj)
{
	ANI_action(obj->super);
	printf("add action from amphibia class\n");
}

void _amphibia_destroy(Amphbia_Obj* obj)
{
	ANI_destroy(obj->super);
	free(obj);
	obj = NULL;
}

void _amphibia_setname(ANI_Obj* super,char* name)
{
	printf("set name : %s\n",name);
	super->name = name;
}

char* _amphibia_getname(ANI_Obj* super)
{
	return super->name;
}

void _amphibia_printfinfo(ANI_Obj* super)
{
	printf("print name is : %s, alive %d\n",super->name,ANI_isalive(super));
}

Amphbia_Obj* Amphbia_init()
{
	Amphbia_Obj *obj = (Amphbia_Obj*)calloc(1, sizeof(Amphbia_Obj));

	//init parent
	obj->super = ANI_init();

	//virtual function mapping
	static struct ANI_Vfunc vfunc = {
		_amphibia_setname,
		_amphibia_getname,
		_amphibia_printfinfo
	};
	obj->super->vfunc = (struct ANI_Vfunc*)&vfunc;

	//add child
	obj->action_amp = _amphibia_action;
	obj->destroy = _amphibia_destroy;

	return obj;
}

