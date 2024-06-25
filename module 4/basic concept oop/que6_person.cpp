#include<iostream>
using namespace std;
class person{
	string name;
	int age;
	string country;
	
	public:
		
		void set(){
			cout<<"Enter Your name: ";
			cin>>name;
			
			cout<<"Enter you age: ";
			cin>>age;
			
			cout<<"Enter your country name: ";
			cin>>country;
		}
		
		void get(){
			cout<<"\nYour Name Was "<<name<<endl;
			cout<<"Your age is "<<age<<endl;
			cout<<"Your country was "<<country<<endl;
		}
};

int main(){
	person obj;
	
	obj.set();
	obj.get();
}
