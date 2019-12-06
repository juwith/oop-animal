#ifndef __BASE_OBJECT_H__
#define __BASE_OBJECT_H__

#include <stdbool.h>

typedef struct ANI_Obj ANI_Obj;

struct ANI_Obj
{
	//private data
	char* name;
	bool alive;

	//virtual func
	struct ANI_Vfunc *vfunc;

	//public function
	void (*action)(struct ANI_Obj* obj);
	void (*set_alive)(struct ANI_Obj* obj, bool alive);
	bool (*isalive)(struct ANI_Obj* obj);
	void (*destroy)(struct ANI_Obj* obj);
};

//virtual function
struct ANI_Vfunc
{
	void (*set_name)(ANI_Obj* obj,char* name);
	char* (*get_name)(ANI_Obj* obj);
	void (*print_info)(ANI_Obj* obj);
};


static inline void ANI_set_name(ANI_Obj *obj,char* name)
{
	obj->vfunc->set_name(obj,name);
}

static inline char* ANI_get_name(ANI_Obj *obj)
{
	return obj->vfunc->get_name(obj);
}

static inline void ANI_print_info(ANI_Obj *obj)
{
	obj->vfunc->print_info(obj);
}

static inline void ANI_action(ANI_Obj *obj)
{
	obj->action(obj);
}

static inline void ANI_set_alive(ANI_Obj *obj, bool alive)
{
	obj->set_alive(obj,alive);
}

static inline bool ANI_isalive(ANI_Obj *obj)
{
	return obj->isalive(obj);
}

static inline void ANI_destroy(ANI_Obj *obj)
{
	obj->destroy(obj);
}

ANI_Obj* ANI_init();

#endif
