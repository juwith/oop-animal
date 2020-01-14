#ifndef __BASE_AMPHIBIA_H__
#define __BASE_AMPHIBIA_H__

#include "base_object.h"

class Amphibia_Obj : public ANI_Obj
{
	//add private data

public:
	virtual void set_name(char* name);
	virtual char* get_name();
	virtual void print_info();

	void action_amp();
};

#endif
