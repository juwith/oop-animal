#include <iostream>

#include "base_object.h"

using namespace std;

void ANI_Obj::action()
{
	cout << "base action from animal class" << endl;
}

void ANI_Obj::set_alive(bool alive)
{
	this->alive = alive;
}

bool ANI_Obj::isalive()
{
	return this->alive;
	// or 
	//return alive;
}

