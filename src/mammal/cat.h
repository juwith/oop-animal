#ifndef __CAT_H__
#define __CAT_H__

#include "base_amphibia.h"

typedef struct Cat Cat;
struct Cat
{
	Amphbia_Obj* super;

	void (*action_cat)(Cat* obj);
	void (*destroy)(Cat* obj);
};

static inline void Cat_action(Cat *obj)
{
	obj->action_cat(obj);
}

//inherit
static inline void Cat_set_alive(Cat *obj, bool alive)
{
	Amphbia_Obj *super = obj->super;
	Amphbia_set_alive(super,alive);
}

static inline bool Cat_isalive(Cat *obj)
{
	Amphbia_Obj *super = obj->super;
	return Amphbia_isalive(super);
}

//virtual
static inline void Cat_set_name(Cat *obj,char* name)
{
	Amphbia_Obj *super = obj->super;
	Amphbia_set_name(super,name);
}

static inline char* Cat_get_name(Cat *obj)
{
	Amphbia_Obj *super = obj->super;
	return Amphbia_get_name(super);
}
static inline void Cat_print_info(Cat *obj)
{
	Amphbia_Obj *super = obj->super;
	Amphbia_print_info(super);
}

Cat* Cat_init();

#endif
