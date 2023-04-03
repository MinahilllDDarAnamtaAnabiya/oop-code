
//      herarichilcal inheritance
#include<iostream>

using namespace std;

class I {
	
	private:
		
		string var1(){
		  cout<<" Parent class (Private)";
		} 
		
	protected:
	    
	    string getVAR1(){
	    	
	    	return " Parent class (Private)";
		}
	    string var2 = " Parent class (Protected)";
	    
	public:
		
	     string var3 = " parent class (Pulbic)";
	
	I(){
//		null constructor
	}     
	
	I(string var1, string var2, string var3){
		
		this ->  getVAR1()= var1;
		this -> var2 = var2;
		this -> var3 = var3;
		
	}
		
};

class J:public I{
	
	public:
		int num1 = 4;
		int num2 = 2;
		
		int mod(){
//			function of chlid class 1
        cout<<" Mode of drived cihld class 1: ";
			int ans = num1%num2;
			return ans;
		}
		
	J(){
//		null constructor
	}	
	
	void display(){
		
	cout<<" (Herirachical Inheritance)\n";
    J obj;
	cout<<" Members of class J"<<endl;
	
  cout << obj.getVAR1() << endl;
  cout << obj.var2 << endl;
  cout << obj.var3 << endl;
  cout<< mod();
  
  cout<<" \n--------------------------------------"<<endl;
	}
};

class K: public I{
	
	public:
		
		int value1 = 7;
		int value2 = 3;
		
		int mul(){
//			function of child class 2
        cout<<" Multiplication of drived child class: ";
        int ans = value1*value2;
        return ans;
		}
		
		K(){
//			null constructor
		}
		
		string getVAR2(){
			return var2;
		}
		void display1(){
			
			K obj1;
			cout<<" Members of class I"<<endl;
	
            cout << obj1.getVAR1() << endl;
            cout << obj1.var2 << endl;
            cout << obj1.var3 << endl;
            cout<< mul();
		}
};

int main(){
	
	J obj;
	K obj1;
	obj.display();
	obj1.display1();
	return 0;
}
