#include <iostream>

#include "base_mammal.h"

using namespace std;

void Mammal_Obj::action_mam()
{
	ANI_Obj::action();
	cout << "add action from mammal class" << endl;
}

//virtual
void Mammal_Obj::set_name(char* name)
{
	cout << "set name : " << name << endl;
	ANI_Obj::set_name(name);
}

char* Mammal_Obj::get_name()
{
	return ANI_Obj::get_name();
}

void Mammal_Obj::print_info()
{
	cout << "print name is : " << get_name() << ", alive " << ANI_Obj::isalive() <<endl;
}
