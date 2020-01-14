#include <iostream>

#include "dog.h"
#include "cat.h"
#include "prog.h"

using namespace std;

int main()
{

	Dog* dog = new Dog();
	dog->action_dog();

	char* name = (char*)"puppy";
	dog->set_name(name);
	char* getname = dog->get_name();
	cout << "getname is : " << getname << endl;
	dog->set_alive(true);
	dog->print_info();

	Cat* cat = new Cat();
	cat->action_cat();
	
	Prog* prog = new Prog();
	prog->action_prog();
	
	delete dog;
	delete cat;
	delete prog;

	return 0;
}