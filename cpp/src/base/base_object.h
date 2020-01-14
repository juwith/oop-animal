#ifndef __BASE_OBJECT_H__
#define __BASE_OBJECT_H__

#include <string>
using namespace std;

class ANI_Obj
{
private:
	//private data
	string name;
	bool alive;

public:
	//virtual func
	virtual void set_name(string name)
	{
		this->name = name;
	}
	virtual string get_name()
	{
		return name;
	}
	virtual void print_info()
	{
		;
	}

	//public function
	void action();
	void set_alive(bool alive);
	bool isalive();
};

#endif
