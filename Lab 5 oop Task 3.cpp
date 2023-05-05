
#pragma once

#include<iostream>

using std::cout;
using std::cin;
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
};

class Dog :public Mammal{
	public:
	virtual void Move();
	virtual void Speak();	
	
};

class Cat :public Mammal{
	public:
	virtual void Move();
	virtual void Speak();	
	
};

class Horse :public Mammal{
	public:
	virtual void Move();
	virtual void Speak();	
	
};

class GunineaPig :public Mammal{
	public:
	virtual void Move();
	virtual void Speak();	
	
};

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

void Dog ::Move (){
	cout<<"Dog moves a step! "<<endl;
}

void Dog ::Speak (){
	cout <<"What does a Dog speak ? bhao!"<<endl;
}

void Cat ::Move (){
	cout<<"Cat moves a step! "<<endl;
}

void Cat ::Speak (){
	cout <<"What does a Cat speak ? Meow!"<<endl;
}

void Horse ::Move (){
	cout<<"Horse moves a step! "<<endl;
}

void Horse ::Speak (){
	cout <<"What does a Horse speak ? henuuy!"<<endl;
}

void  GunineaPig ::Move (){
	cout<<"GunineaPig moves a step! "<<endl;
}

void GunineaPig ::Speak (){
	cout <<"What does a GunineaPig speak ? weep weep!"<<endl;
}

int main(){
	
	Dog dog;
	
	Cat cat;
	
	Horse horse;
	
	GunineaPig GPig;
	
	Mammal *pDog = new Dog;
	pDog -> Move();
	pDog -> Speak();
	
	Dog *pDog2 = new Dog;
	
	pDog -> Move();
	pDog -> Speak();
	
	Mammal* theArray[5];
		Mammal* ptr;
		int choice ,i;
		for ( i=0; i<5; i++){ 
		cout<< "(1) dog (2)cat (3)horse (4)giunea pig :";
		cin >> choice;
		switch (choice)
		{
			case 1 :
			ptr = new Dog;
			dog.Move();
	        dog.Speak();
	        
			break;
			case 2 :
			ptr = new Cat;
			cat.Move();
	        cat.Speak();
			
			break;
			case 3 :
			ptr = new Horse;
			horse.Move();
	        horse.Speak();
			
			break;
			case 4 :
			ptr =new GunineaPig;
			GPig.Move();
	        GPig.Speak();
			
			break;
			default: ptr = new Mammal;
			break;
		}
		    theArray[i] = ptr;
		}
		for (i=0 ; i<5 ; i++)
		     theArray[i] -> Speak();
		     
		for (i=0 ; i<5; i++)
		   delete theArray[i];
		   return 0;
}
