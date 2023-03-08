# include<iostream>
using namespace std;

class student{
	
	public:
	int id;
	string name;
	int sem;
	float cgpa;
	bool isfemale;
	
	public:
	student(){
		 id = 0;
		 name = " ";
		 sem = 0;
		 cgpa = 0.0;
		 isfemale = true;
	}
	student(string name, int id, int sem, float cgpa, bool isfemale){
		this -> name = name;
		this -> id = id;
		this -> sem = sem;
		this -> cgpa = cgpa;
		this -> isfemale = isfemale;
	}
	student(int id, string name){
		this -> id = id;
		this -> name = name;
	}
	
	student(int id, string name, float cgpa){
		this -> id = id;
		this -> name = name;
		this -> cgpa = cgpa;
	}
	student(int id, string name, bool isfemale){
		this -> id = id;
		this -> name = name;
		this -> isfemale = isfemale;
	}
	
	student (student & std){
		
		name = std . name;
		id = std . id;
		sem = std . sem;
		cgpa = std . cgpa;
		isfemale = std . isfemale;
	}
	
	~ student (){
		cout<<" Destructuring process is running";
	}
	
};

int main(){
	
	student s1("ali", 56784, 2, 3.56, false);
	student s2("hira", 56785, 2, 2.56, true);
	student s3("sara", 56786, 2, 3.6, true);
	cout<<" Details: "<<endl;
	cout<<" Name: "<<s1.name<<endl;
	cout<<" Sap ID: "<<s1.id<<endl;
	cout<<" Semester: "<<s1.sem<<endl;
	cout<<" CGPA: "<<s1.cgpa<<endl;
	cout<<" Gender: "<<s1.isfemale<<endl;
	
	student std1 (student);
	student std2 (student);
	student std3 (student);
	}
