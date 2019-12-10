#ifndef __PROG_H__
#define __PROG_H__

#include "base_amphibia.h"

typedef struct Prog Prog;
struct Prog
{
	Amphibia_Obj* super;

	void (*action_prog)(Prog* obj);
	void (*destroy)(Prog* obj);
};

static inline void Prog_action(Prog *obj)
{
	obj->action_prog(obj);
}

//inherit
static inline void Prog_set_alive(Prog *obj, bool alive)
{
	Amphibia_Obj *super = obj->super;
	Amphibia_set_alive(super,alive);
}

static inline bool Prog_isalive(Prog *obj)
{
	Amphibia_Obj *super = obj->super;
	return Amphibia_isalive(super);
}

static inline void Prog_set_name(Prog *obj,char* name)
{
	Amphibia_Obj *super = obj->super;
	Amphibia_set_name(super,name);
}

static inline char* Prog_get_name(Prog *obj)
{
	Amphibia_Obj *super = obj->super;
	return Amphibia_get_name(super);
}
static inline void Prog_print_info(Prog *obj)
{
	Amphibia_Obj *super = obj->super;
	Amphibia_print_info(super);
}

static inline void Prog_destroy(Prog *obj)
{
	obj->destroy(obj);
}

Prog* Prog_init();

#endif
