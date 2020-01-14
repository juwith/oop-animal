#ifndef __BASE_MAMMAL_H__
#define __BASE_MAMMAL_H__

#include "base_object.h"

typedef struct Mammal_Obj Mammal_Obj;
struct Mammal_Obj
{
	ANI_Obj* super;

	//add private data

	//struct Mammal_Vfunc *vfunc; // add later

	void (*action_mam)(Mammal_Obj* obj);
	void (*destroy)(Mammal_Obj* obj);
};

/* add later

struct Mammal_Vfunc
{
	
};
*/
//add define
static inline void Mammal_action(Mammal_Obj *obj)
{
	obj->action_mam(obj);
}

//inherit
static inline void Mammal_set_alive(Mammal_Obj *obj, bool alive)
{
	ANI_Obj *super = obj->super;
	ANI_set_alive(super,alive);
}

static inline bool Mammal_isalive(Mammal_Obj *obj)
{
	ANI_Obj *super = obj->super;
	return ANI_isalive(super);
}

//virtual
static inline void Mammal_set_name(Mammal_Obj *obj,char* name)
{
	ANI_Obj *super = obj->super;
	ANI_set_name(super,name);
}

static inline char* Mammal_get_name(Mammal_Obj *obj)
{
	ANI_Obj *super = obj->super;
	return ANI_get_name(super);
}
static inline void Mammal_print_info(Mammal_Obj *obj)
{
	ANI_Obj *super = obj->super;
	ANI_print_info(super);
}

static inline void Mammal_destroy(Mammal_Obj *obj)
{
	obj->destroy(obj);
}

Mammal_Obj* Mammal_init();

#endif
