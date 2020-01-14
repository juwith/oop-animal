#include <stdio.h>
#include <stdlib.h>
#include "base_mammal.h"


void _mammal_action(Mammal_Obj* obj)
{
	ANI_action(obj->super);
	printf("add action from mammal class\n");
}

void _mammal_destroy(Mammal_Obj* obj)
{
	ANI_destroy(obj->super);
	free(obj);
	obj = NULL;
}

void _mammal_setname(ANI_Obj* super,char* name)
{
	printf("set name : %s\n",name);
	super->name = name;
}

char* _mammal_getname(ANI_Obj* super)
{
	return super->name;
}

void _mammal_printfinfo(ANI_Obj* super)
{
	printf("print name is : %s, alive %d\n",super->name,ANI_isalive(super));
}

Mammal_Obj* Mammal_init()
{
	Mammal_Obj *obj = (Mammal_Obj*)calloc(1, sizeof(Mammal_Obj));

	//init parent
	obj->super = ANI_init();

	//virtual function mapping
	static struct ANI_Vfunc vfunc = {
		_mammal_setname,
		_mammal_getname,
		_mammal_printfinfo
	};
	obj->super->vfunc = (struct ANI_Vfunc*)&vfunc;

	//add child
	obj->action_mam = _mammal_action;
	obj->destroy = _mammal_destroy;

	return obj;
}

