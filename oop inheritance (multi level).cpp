
#include<iostream>

using namespace std;


//       Muti level Inheritance
class F{
	 
	 private:
	 	
	 	int pri2 = 2;
	 	
	protected:
	 	
	 	int getPRI2(){
	 		
	 		return pri2;
		 }
	 	int pro2 = 1;
	 	
	public:
	 	
	 	int pub2 = 6;
		 
	F(){
//		null constructor of D
	}  
	
	F(int pri2, int pro2, int pub2){
		
//		parametric consructor of E
      this -> pri2 = pri2;
      this -> pro2 = pro2;
      this -> pub2 = pub2;
	}
	
	int addF(){
		
//		function of F
cout<" Sum of class F: ";
       int ans = pri2 + pro2 + pub2;
       return ans;
    cout<<" \n------------------------------------------"<<endl;   
	}
};

class G:public F{
	
	private:
		
		int pri3 = 6;
		
	protected:	
		
		int getPRI3(){
	    	return pri3;
		}
		int pro3 = 2;
		
	public:
		
		int pub3 = 8;
		
		int getpro2(){
		return pro2;
	}
		
	
	G(){
//		null constructor of G 
	}
	
	G(int pri3, int pro3, int pub3){
		
//		parametric consructor of G
      this -> pri3 = pri3;
      this -> pro3 = pro3;
      this -> pub3 = pub3;
	}
	
	int addG(){
		
//		function of G
cout<" Sum of class G: ";
       int ans = getPRI2() + pro2 + pub2;
       return ans;
    cout<<" \n------------------------------------------"<<endl;   
	}
};

class H: public G{
	
	public:	
	H obj2;
	
	int getPRO2(){
		return pro2;
	}
	
	int getPRO3(){
		return pro3;
	}
	
	
	H(){
//		null constructor of child2
	}

void display(){

    cout<<" (Multiple Inheritance)\n";
    H obj2;
	cout<<" Members of class H"<<endl;
	
  cout << " Private = " << obj2.getPRI2() << endl;
  cout << " Protected = " << obj2.getPRO2() << endl;
  cout << " Public = " << obj2.pub2 << endl;
  cout<< addF();
  
  cout<<" \n--------------------------------------"<<endl;
  
  cout<<" Members of class G"<<endl;
	
  cout << " Private = " << obj2.getPRI3() << endl;
  cout << " Protected = " << obj2.getPRO3() << endl;
  cout << " Public = " << obj2.pub3 << endl;
  cout<< addG();
  
  cout<<" \n--------------------------------------"<<endl;
  
  }
	
};
int main() {
  
  
  H obj2;
  obj2.display();
  return 0;
}


