#include<iostream>
#include<string.h>

using namespace std;
class employ{
	public:
	int id;
	char name[100];
	char role[100];
	int salary;
	int expirience;
	char address[100];
	char email[100];
	char contact[100];
	
	void set()
	{
		cout<<"enter id : ";
		cin>>id;
		cout<<"enter name : ";
		cin>>name;
		cout<<"enter role : ";
		cin>>role;
		cout<<"enter salary : ";
		cin>>salary;
		cout<<"enter experiense : ";
		cin>>expirience;
		cout<<"enter address : ";
		cin>>address;
		cout<<"enter email : ";
		cin>>email;
		cout<<"enter contact : ";
		cin>>contact;
	}
	
	void get()
	{
		cout<<"id : "<<id<<endl;
		cout<<"name : "<<name<<endl;
		cout<<"role : "<<role<<endl;
		cout<<"salary : "<<salary<<endl;
		cout<<"expirience : "<<expirience<<endl;
		cout<<"address : "<<address<<endl;
		
		cout<<"email : "<<email<<endl;
		cout<<"contact : "<<contact<<endl;
	}
	
	
};

main()
{
	
   employ	s,s1,s2,s3,s4;
   
  w.set();
  w.get();
  w1.set();
  w1.get();
  w2.set();
  w2.get();
  w3.set();
  w3.get();
  w4.set();
  w4.get();
  
	
	return 0;
}
