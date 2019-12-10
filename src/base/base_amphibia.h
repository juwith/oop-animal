#ifndef __BASE_AMPHIBIA_H__
#define __BASE_AMPHIBIA_H__

#include "base_object.h"

typedef struct Amphibia_Obj Amphibia_Obj;
struct Amphibia_Obj
{
	ANI_Obj* super;

	//add private data

	//struct Amphibia_Vfunc *vfunc; // add later

	void (*action_amp)(Amphibia_Obj* obj);
	void (*destroy)(Amphibia_Obj* obj);
};

/* add later

struct Amphibia_Vfunc
{
	
};
*/
//add define
static inline void Amphibia_action(Amphibia_Obj *obj)
{
	obj->action_amp(obj);
}

//inherit
static inline void Amphibia_set_alive(Amphibia_Obj *obj, bool alive)
{
	ANI_Obj *super = obj->super;
	ANI_set_alive(super,alive);
}

static inline bool Amphibia_isalive(Amphibia_Obj *obj)
{
	ANI_Obj *super = obj->super;
	return ANI_isalive(super);
}

//virtual
static inline void Amphibia_set_name(Amphibia_Obj *obj,char* name)
{
	ANI_Obj *super = obj->super;
	ANI_set_name(super,name);
}

static inline char* Amphibia_get_name(Amphibia_Obj *obj)
{
	ANI_Obj *super = obj->super;
	return ANI_get_name(super);
}
static inline void Amphibia_print_info(Amphibia_Obj *obj)
{
	ANI_Obj *super = obj->super;
	ANI_print_info(super);
}

static inline void Amphibia_destroy(Amphibia_Obj *obj)
{
	obj->destroy(obj);
}

Amphibia_Obj* Amphibia_init();

#endif
