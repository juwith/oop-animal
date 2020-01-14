#include <iostream>
#include <stdlib.h>
#include "prog.h"

using namespace std;

void Prog::action_prog()
{
	Amphibia_Obj::action_amp();
	cout << "add action from Prog class" << endl;
}


