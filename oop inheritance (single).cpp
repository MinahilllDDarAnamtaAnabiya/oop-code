#include<iostream>

using namespace std;

//          single Inheritance
class A {
  private:
    int pvt = 1;

  protected:
  	
  	int getPVT() {
      return pvt;
    }
    int prot = 2;

  public:
    int pub = 3;
    
    A(){
//    null constructor of class A
	}

    A(int pvt, int prot, int pub){
    	
//    	parametric constructor of A
    	this -> pvt = pvt;
    	this -> prot = prot;
    	this -> pub = pub;
    cout<<" \n------------------------------------------"<<endl;
	}

};

class B : public A {
  public:
  	
    int getProt() {
      return prot;
    }
    
    B(){
//    	null constructor of class child1 
	}
    void display(){
    
    cout<<" (Single Inheritance)\n";
    B obj;
  cout << " Private = " << obj.getPVT() << endl;
  cout << " Protected = " << obj.getProt() << endl;
  cout << " Public = " << obj.pub << endl;
  cout<<" \n------------------------------------------"<<endl;
  
}
};

int main() {
  
  B obj;
  obj.display();
}
