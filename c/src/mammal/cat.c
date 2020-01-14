#include <stdio.h>
#include <stdlib.h>
#include "cat.h"

void _cat_action(Cat* obj)
{
	Mammal_action(obj->super);
	printf("add action from cat class\n");
}

void _cat_destroy(Cat* obj)
{
	Mammal_destroy(obj->super);
	free(obj);
	obj = NULL;
}

Cat* Cat_init()
{
	Cat *obj = (Cat*)calloc(1, sizeof(Cat));

	//init parent
	obj->super = Mammal_init();

	//add child
	obj->action_cat = _cat_action;
	obj->destroy = _cat_destroy;

	return obj;
}

