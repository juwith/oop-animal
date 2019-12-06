#ifndef __BASE_OBJECT_H__
#define __BASE_OBJECT_H__

typedef struct BaseObj
{
	struct BaseObjVfunc *vfunc;
} BaseObj;

struct BaseObjVfunc
{
	void (*action)(BaseObj* obj);
	void (*destroy)(BaseObj* obj);
};

#define BaseObj_action(obj) \
	((BaseObj*)obj)->vfunc->action(obj)

#define Queue_destroy(obj) \
	((BaseObj*)obj)->vfunc->destroy(obj)

BaseObj* BaseObj_init();


#endif
