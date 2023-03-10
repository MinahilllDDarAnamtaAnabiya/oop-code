# include<iostream>
# include<string>
# include<fstream>
using namespace std;
	
	
	int main()
	{
		
		string name;
		string age;
		string gender;
		string occupation;
		string income;
		fstream person;
		
		cout<<" Name: ";
		getline(cin, name);
		cout<<" Age: ";
		getline(cin, age);
		cout<<" Gender: ";
		getline(cin, gender);
		cout<<" Occupation: ";
		getline(cin, occupation);
		cout<<" Income: ";
		getline(cin, income);
		
		
		person.open("user_file1.txt",ios::app);
		if(person.is_open()){
			
			
			person<<" Name: "<< name<<endl;
			person<<" Age: "<< age <<endl;
			person<<" Name: "<< name<<endl;
			person<<" Occupation: "<< occupation <<endl;
			person<<" Income: "<< income <<endl;
				
			}
			person.close();
		
	return 0;	
		
}
	
 

