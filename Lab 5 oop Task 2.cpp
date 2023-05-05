
#pragma once

#pragma once

#include<iostream>

using std::cout;
using std::endl;

class Mammal{
	
	public:
		Mammal(void);
		~Mammal(void);
		
		virtual void Move ();
		virtual void Speak();
		
	protected:
		int age;
	public:
	    int getAGE(){
	    	
	    	return age;
		}	
	
	Mammal::Mammal(void):age(1){
 	
 	cout<<" Dog constructor..."<<endl;
 }
 
 Mammal::~Mammal(void){
 	
 	cout<<" Mammal destructor..."<<endl;
 }
 
void Mammal::Move(){

    cout<<" Mammal moves a step!"<<endl;
}

void Mammal::Speak(){

    cout<<" what does a Mammal speak? Mammilian!"<<endl;
}	
};

class Dog :public Mammal{
	public:
	virtual void Move();
	virtual void Speak();	
	
};

// Mammal::Mammal(void):age(1){
// 	
// 	cout<<" Dog constructor..."<<endl;
// }
// 
// Mammal::~Mammal(void){
// 	
// 	cout<<" Mammal destructor..."<<endl;
// }
// 
//void Mammal::Move(){
//
//    cout<<" Mammal moves a step!"<<endl;
//}
//
//void Mammal::Speak(){
//
//    cout<<" what does a Mammal speak? Mammilian!"<<endl;
//}

void Dog ::Move (){
	cout<<"Dog moves a step! "<<endl;
}

void Dog ::Speak (){
	cout <<"What does a Dog speak ? bhao!"<<endl;
}


int main(){
	
	Mammal *pDog = new Dog;
	pDog -> Move();
	pDog -> Speak();
	
	Dog *pDog2 = new Dog;
	
	pDog -> Move();
	pDog -> Speak();
	
	return 0;
}
