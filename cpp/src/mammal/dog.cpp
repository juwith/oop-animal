#include <iostream>

#include "dog.h"

using namespace std;

void Dog::action_dog()
{
	Mammal_Obj::action_mam();
	cout << "add action from dog class" << endl;
}


