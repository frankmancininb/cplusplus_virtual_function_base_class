// ConsoleApplication12.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

class base {
public :
	virtual void iam() { std::cout << "base\n"; }
};
class here : public base {
public:
	void iam() { std::cout << "here\n"; }
};

class there : public base {
public:
	void iam() { std::cout << "there\n"; }
};
int main()
{
	here h;
	h.iam();
	there t;
	t.iam();
	base *b;
	//assign a pointer to a base class to an inherited class and due to the fact that it is virtual
	//it will call the function to the inherited class
	// if we remove the virtual keyword, it will call the function in the base class
	b = &h;
	b->iam();

	base x;
	x.iam();


    return 0;
}

