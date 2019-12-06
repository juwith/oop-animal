#include <stdio.h>
#include <stdbool.h>

#include "dog.h"
#include "cat.h"
int main()
{
	Dog* dog = Dog_init();
	Dog_action(dog);

	char* name = "puppy";
	Dog_set_name(dog,name);
	char* getname = Dog_get_name(dog);
	printf("getname is : %s \n",getname);
	Dog_set_alive(dog,true);
	Dog_print_info(dog);

	Cat* cat = Cat_init();
	Cat_action(cat);

	return 0;
}