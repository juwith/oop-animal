#ifndef __BASE_OBJECT_H__
#define __BASE_OBJECT_H__

class ANI_Obj
{
private:
	//private data
	char* name;
	bool alive;

public:
	//virtual func
	virtual void set_name(char* name)
	{
		this->name = name;
	}
	virtual char* get_name()
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
