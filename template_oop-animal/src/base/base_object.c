#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "base_object.h"


void _animal_action(ANI_Obj* obj)
{
	printf("base action from animal class\n");
}

void _animal_set_alive(ANI_Obj* obj, bool alive)
{
	obj->alive = alive;
}


bool _animal_isalive(ANI_Obj* obj)
{
	return obj->alive;
}

void _animal_destroy(ANI_Obj* obj)
{
	free(obj);
	obj = NULL;
}

ANI_Obj* ANI_init()
{
	ANI_Obj *obj = (ANI_Obj*)calloc(1, sizeof(ANI_Obj));

	obj->action = _animal_action;
	obj->set_alive = _animal_set_alive;
	obj->isalive = _animal_isalive;
	obj->destroy = _animal_destroy;
	return obj;
}

