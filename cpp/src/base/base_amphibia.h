#ifndef __BASE_AMPHIBIA_H__
#define __BASE_AMPHIBIA_H__

#include <string>

#include "base_object.h"

using namespace std;

class Amphibia_Obj : public ANI_Obj
{
	//add private data

public:
	virtual void set_name(string name);
	virtual string get_name();
	virtual void print_info();

	void action_amp();
};

#endif
