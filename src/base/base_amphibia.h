#ifndef __BASE_AMPHIBIA_H__
#define __BASE_AMPHIBIA_H__

#include "base_object.h"

typedef struct Amphbia_Obj Amphbia_Obj;
struct Amphbia_Obj
{
	ANI_Obj* super;

	//add private data

	//struct Amphbia_Vfunc *vfunc; // add later

	void (*action_amp)(Amphbia_Obj* obj);
	void (*destroy)(Amphbia_Obj* obj);
};

/* add later

struct Amphbia_Vfunc
{
	
};
*/
//add define
static inline void Amphbia_action(Amphbia_Obj *obj)
{
	obj->action_amp(obj);
}

//inherit
static inline void Amphbia_set_alive(Amphbia_Obj *obj, bool alive)
{
	ANI_Obj *super = obj->super;
	ANI_set_alive(super,alive);
}

static inline bool Amphbia_isalive(Amphbia_Obj *obj)
{
	ANI_Obj *super = obj->super;
	return ANI_isalive(super);
}

//virtual
static inline void Amphbia_set_name(Amphbia_Obj *obj,char* name)
{
	ANI_Obj *super = obj->super;
	ANI_set_name(super,name);
}

static inline char* Amphbia_get_name(Amphbia_Obj *obj)
{
	ANI_Obj *super = obj->super;
	return ANI_get_name(super);
}
static inline void Amphbia_print_info(Amphbia_Obj *obj)
{
	ANI_Obj *super = obj->super;
	ANI_print_info(super);
}

static inline void Amphbia_destroy(Amphbia_Obj *obj)
{
	obj->destroy(obj);
}

Amphbia_Obj* Amphbia_init();

#endif
