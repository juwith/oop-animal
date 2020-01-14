#ifndef __BASE_MAMMAL_H__
#define __BASE_MAMMAL_H__

#include "base_object.h"

class Mammal_Obj : public ANI_Obj
{
	//add private data

	//struct Mammal_Vfunc *vfunc; // add later
public:
	virtual void set_name(char* name);
	virtual char* get_name();
	virtual void print_info();

	void action_mam();
};

/* add later

struct Mammal_Vfunc
{
	
};
*/
//add define


//inherit
/*
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
*/
//virtual
/*
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
*/

#endif
