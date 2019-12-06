#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

void _dog_action(Dog* obj)
{
	Amphbia_action(obj->super);
	printf("add action from dog class\n");
}

void _dog_destroy(Dog* obj)
{
	Amphbia_destroy(obj->super);
	free(obj);
	obj = NULL;
}

Dog* Dog_init()
{
	Dog *obj = (Dog*)calloc(1, sizeof(Dog));

	//init parent
	obj->super = Amphbia_init();

	//add child
	obj->action_dog = _dog_action;
	obj->destroy = _dog_destroy;

	return obj;
}

