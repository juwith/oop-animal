#ifndef __DOG_H__
#define __DOH_H__

#include "base_amphibia.h"

typedef struct Dog Dog;
struct Dog
{
	Amphbia_Obj* super;

	void (*action_dog)(Dog* obj);
	void (*destroy)(Dog* obj);
};

static inline void Dog_action(Dog *obj)
{
	obj->action_dog(obj);
}

//inherit
static inline void Dog_set_alive(Dog *obj, bool alive)
{
	Amphbia_Obj *super = obj->super;
	Amphbia_set_alive(super,alive);
}

static inline bool Dog_isalive(Dog *obj)
{
	Amphbia_Obj *super = obj->super;
	return Amphbia_isalive(super);
}

//virtual
static inline void Dog_set_name(Dog *obj,char* name)
{
	Amphbia_Obj *super = obj->super;
	Amphbia_set_name(super,name);
}

static inline char* Dog_get_name(Dog *obj)
{
	Amphbia_Obj *super = obj->super;
	return Amphbia_get_name(super);
}
static inline void Dog_print_info(Dog *obj)
{
	Amphbia_Obj *super = obj->super;
	Amphbia_print_info(super);
}

Dog* Dog_init();

#endif
