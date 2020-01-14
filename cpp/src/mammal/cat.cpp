#include <iostream>

#include "cat.h"

using namespace std;

void Cat::action_cat()
{
	Mammal_Obj::action_mam();
	cout << "add action from cat class" << endl;
}


