#include <iostream>

#include "base_amphibia.h"

using namespace std;

void Amphibia_Obj::action_amp()
{
	ANI_Obj::action();
	cout << "add action from amphibia class" << endl;
}

//virtual
void Amphibia_Obj::set_name(char* name)
{
	cout << "set name : " << name << endl;
	ANI_Obj::set_name(name);
}

char* Amphibia_Obj::get_name()
{
	return ANI_Obj::get_name();
}

void Amphibia_Obj::print_info()
{
	cout << "print name is : " << get_name() << ", alive " << ANI_Obj::isalive() <<endl;
}

