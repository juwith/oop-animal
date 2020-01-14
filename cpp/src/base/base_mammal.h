#ifndef __BASE_MAMMAL_H__
#define __BASE_MAMMAL_H__

#include <string>

#include "base_object.h"

using namespace std;

class Mammal_Obj : public ANI_Obj
{
	//add private data

	//struct Mammal_Vfunc *vfunc; // add later
public:
	virtual void set_name(string name);
	virtual string get_name();
	virtual void print_info();

	void action_mam();
};

#endif
