#ifndef __CAT_H__
#define __CAT_H__

#include "base_mammal.h"

typedef struct Cat Cat;
struct Cat
{
	Mammal_Obj* super;

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
	Mammal_Obj *super = obj->super;
	Mammal_set_alive(super,alive);
}

static inline bool Cat_isalive(Cat *obj)
{
	Mammal_Obj *super = obj->super;
	return Mammal_isalive(super);
}

static inline void Cat_set_name(Cat *obj,char* name)
{
	Mammal_Obj *super = obj->super;
	Mammal_set_name(super,name);
}

static inline char* Cat_get_name(Cat *obj)
{
	Mammal_Obj *super = obj->super;
	return Mammal_get_name(super);
}
static inline void Cat_print_info(Cat *obj)
{
	Mammal_Obj *super = obj->super;
	Mammal_print_info(super);
}

static inline void Cat_destroy(Cat *obj)
{
	obj->destroy(obj);
}

Cat* Cat_init();

#endif
