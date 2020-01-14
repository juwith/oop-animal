#include <iostream>
#include <string>

#include "dog.h"
#include "cat.h"
#include "prog.h"

using namespace std;

int main()
{
	Dog* dog = new Dog();
	dog->action_dog();

	string name("puppy");
	dog->set_name(name);
	string getname = dog->get_name();
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