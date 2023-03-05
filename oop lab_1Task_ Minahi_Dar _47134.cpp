# include<iostream>
using namespace std;

class data{
	
	public:
	int days;
	int hour;
	int min;
	int sec;
	
	data(){
		 days = 0;
		 hour = 0;
		 min = 0;
		 sec = 0; 
	}
	
	data(int days, int hour, int min, int sec){
		
		this -> days = days;
		this -> hour = hour;
		this -> min = min;
		this -> sec = sec;
		
	}
     data (int sec){
    	
    	this -> sec = sec;
    	
		}
			
			int duration(int sec){
    		
    		int days = sec/86400;
    		sec -= days* 86400;
    		int hours =sec/3600;
    		sec -= hours* 3600;
    		int min = sec/60;
    		sec -= min*60;
    		
    		cout<<"Days: " << days<<endl;
    	    cout<<"hours: " << hours<<endl;
    		cout<<"minute: " << min<<endl;
    		cout<<"second: " << sec<<endl;
    		return 0;
		}		
};

int main(){
	
	int second = 45677;
	cout<<"The time duration is: "<<endl;
	data time;
	time. duration(second);
	
return 0;	
}

