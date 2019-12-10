#ifndef __DOG_H__
#define __DOH_H__

#include "base_mammal.h"

typedef struct Dog Dog;
struct Dog
{
	Mammal_Obj* super;

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
	Mammal_Obj *super = obj->super;
	Mammal_set_alive(super,alive);
}

static inline bool Dog_isalive(Dog *obj)
{
	Mammal_Obj *super = obj->super;
	return Mammal_isalive(super);
}

static inline void Dog_set_name(Dog *obj,char* name)
{
	Mammal_Obj *super = obj->super;
	Mammal_set_name(super,name);
}

static inline char* Dog_get_name(Dog *obj)
{
	Mammal_Obj *super = obj->super;
	return Mammal_get_name(super);
}
static inline void Dog_print_info(Dog *obj)
{
	Mammal_Obj *super = obj->super;
	Mammal_print_info(super);
}

static inline void Dog_destroy(Dog *obj)
{
	obj->destroy(obj);
}

Dog* Dog_init();

#endif
