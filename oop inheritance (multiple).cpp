
#include<iostream>

using namespace std;


//        Multiple Inheritance
   class C {
   	
   	private:
   		
   		int pri = 2;
   	
	protected:
		
		int getPRI(){
			
			return pri;
		}
	   	int pro = 4;
	   	
	public:
	
	   	int pub = 3;
	   	
	C(){
//		null constructor
	}   
	
	C(int pri, int pro, int pub){
		
//		parametric constructor
		this -> pri = pri;
		this -> pro = pro;
		this -> pub = pub;
	}
	
	int addC(){
		
//		function of C
cout<<" Sum of class C: ";
		int ans = pri + pro + pub;
		return ans;
	cout<<" \n------------------------------------------"<<endl;
	}	
	
   };

  class D{
	
	private:
		
		int pri1 = 6; 
		
	protected:
	
	int getPRI1(){
		
		return pri1;
	}
	
	int pro1 = 3;
	
	public:
	
	int pub1 = 1;
	
	D(){
//		null constructor of D
	}	
	
	D(int pri1, int pro1, int pub1){
	
//		parametric constructor of D
		this -> pri1 = pri1;
		this -> pro1 = pro1;
		this -> pub1 = pub1; 
	}
	
	int addD(){
	
//	function of D	
cout<<" Sum of class D: ";
		int ans = pri1 + pro1 + pub1;
		return ans;
	cout<<" \n------------------------------------------"<<endl; 
	}
};


class E: public C, public D{

public:	
	
	int getPRO(){
		return pro;
	}
	
	int getPRO1(){
		return pro1;
	}
	
	
	E(){
//		null constructor of child2
	}

void display(){

    cout<<" (Multiple Inheritance)\n";
    E obj1;
	cout<<" Members of class C"<<endl;
	
  cout << " Private = " << obj1.getPRI() << endl;
  cout << " Protected = " << obj1.getPRO() << endl;
  cout << " Public = " << obj1.pub << endl;
  cout<< addC();
  
  cout<<" \n--------------------------------------"<<endl;
  
  cout<<" Members of class D"<<endl;
	
  cout << " Private = " << obj1.getPRI1() << endl;
  cout << " Protected = " << obj1.getPRO1() << endl;
  cout << " Public = " << obj1.pub1 << endl;
  cout<< addD();
  
  cout<<" \n--------------------------------------"<<endl;
  
  }
};

int main(){
	
	E obj1;
	obj1.display();
	return 0;
}
