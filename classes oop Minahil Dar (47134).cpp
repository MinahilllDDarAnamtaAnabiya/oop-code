# include<iostream>
# include <fstream>
# include <string>
# include<cstring>

using namespace std;

class student{
	
	public:
		
    string name;
	int id;
	int sem;
	float cgpa;
	bool isfemale;
	
	public:
	student(){
		 
		 name = " ";
		 id = 0;
		 sem = 0;
		 cgpa = 0.0;
		 isfemale = true;
	}
	student(string name, int id, int sem, float cgpa, bool isfemale){
	
		cout<<" Parametric Constructor"<<endl;
		this -> name = name;
		this -> id = id;
		this -> sem = sem;
		this -> cgpa = cgpa;
		this -> isfemale = isfemale;
	}
	student(int id, string name){
		
		this -> name = name;
		this -> id = id;
	}
	
	student(int id, string name, float cgpa){
		
		this -> name = name;
		this -> id = id;
		this -> cgpa = cgpa;
	}
	student(int id, string name, bool isfemale){
		
		this -> name = name;
		this -> id = id;
		this -> isfemale = isfemale;
	}
	
	student (student & std){
		
		cout<<"copy constructor"<<endl;
		name = std . name;
		id = std . id;
		sem = std . sem;
		cgpa = std . cgpa;
		isfemale = std . isfemale;
	}
	
	~ student (){
		cout<<" Destructuring process is running";
	}
	
	void display(){
		
		cout<<" Name: \t"<<name;
		cout<<" Sap ID: \t\t"<<id;
		cout<<" Semester: \t\t"<<sem;
		cout<<" CGPA: \t\t"<<cgpa;
		cout<<" Gender: \t";
		if(isfemale){
			cout<<"Female";
		}else{
			cout<<"Male";
		}
		cout<<endl;
	}
	
};

void get_data(){
	
	cout<<"--------------- Data Entery ---------------------"<<endl;
	string name;
	int id;
	int sem;
	float cgpa;
	bool isfemale;
	
	cout<<" Name: ";
	cin.ignore();
	getline(cin, name);
	cout<<" SAP ID: ";
	cin>>id;
	cout<<" Semester: ";
	cin>>sem;
	cout<<" CGPA: ";
	cin>>cgpa;
	cout<<" Gender: ";
	char g;
	cin>>g;
	isfemale = (g == 'F' || 'f')? true:false;
	
    student std(name, id, sem, cgpa, isfemale);
    
    ofstream fout;
    fout.open("student.txt",ios_base::app);
    fout<<name<< " " <<id<< " " <<sem<< " " <<cgpa<< " " <<g;
    cout<<"\n\n";
    fout.close();
}

void showStudentData(){
	
	cout<<" -------------------- Student Record ------------------"<<endl;
	ifstream fin;
	fin.open("student.txt");
	
	class data{
		
	public:
		
    string name;
	int id;
	int sem;
	float cgpa;
	bool isfemale;
	
	};
	
	char* ptr1 = &data.name;
	ptr1 = strtok(data," ");
	cout<<"Name: "<<ptr1<<endl;
	
	char* ptr2 = &data.id;
	ptr2 = strtok(NULL," ");
	cout<<"SAP ID: "<<ptr2<<endl;
	
	char* ptr3 = &data.sem;
	ptr3 = strtok(NULL," ");
	cout<<"Semester: "<<ptr3<<endl;
	
	char* ptr4 = &data.cgpa;
	ptr4 = strtok(NULL," ");
	cout<<"CGPA: "<<ptr4;
	
	char* ptr5 = &data.isfemale;
	ptr5 = strtok(NULL," ");
	cout<<"Gender: "<<ptr5;
	
	cout<<"\n\n";

	fin.close();
}

int main(){
	
	string line;
	int choice;
	do{
		
		system("cls");
		cout<<"----------------- Student Portal --------------------"<<endl;
		cout<<"1. Enter Student Detail"<<endl;
		cout<<"2. See all Student detail"<<endl;
		cout<<"3. Exit"<<endl;
		cout<<" Enter Option: ";
		cin>>choice;
		
		switch(choice){
			case 1:
				get_data();
				break;
			case 2:
				showStudentData();
			    cin.ignore();
			    getline(cin,line);
			break;
			case 3:
				cout<<"Thank You"<<endl;
				break;
			default:
				cout<<"Enter the valid option"<<endl;
		}
		
	}while(choice < 3);
	
}
