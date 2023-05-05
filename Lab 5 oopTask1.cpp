
#include<iostream>

using std::cout;
using std::endl;

class Base{
	
	public: 
	   virtual void testfunction();
};

class Derived : public Base{
	
	public:
		void testfunction();
};

void Base :: testfunction(){
	
	cout<<" Base Class"<< endl;
}

void Derived :: testfunction(){
	
	cout<<" Derived Class"<< endl;
}

int main(void){
	
	Base* ptr = new Base;
	ptr -> testfunction();
	delete ptr;
	ptr = new Derived;
	ptr -> testfunction();
	delete ptr;
	return 0;
}
