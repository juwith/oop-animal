#include <stdio.h>
#include <stdlib.h>
#include "prog.h"

void _prog_action(Prog* obj)
{
	Amphibia_action(obj->super);
	printf("add action from Prog class\n");
}

void _prog_destroy(Prog* obj)
{
	Amphibia_destroy(obj->super);
	free(obj);
	obj = NULL;
}

Prog* Prog_init()
{
	Prog *obj = (Prog*)calloc(1, sizeof(Prog));

	//init parent
	obj->super = Amphibia_init();

	//add child
	obj->action_prog = _prog_action;
	obj->destroy = _prog_destroy;

	return obj;
}

