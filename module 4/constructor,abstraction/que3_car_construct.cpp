#include<iostream>
using namespace std;
class car{
	string companey;
	string model;
	int year;
	
	public:
		
		car(){
			cout<<"Enter Your Companey Name: ";
			getline(cin,companey);
			
			cout<<"Enter Your model: ";
			getline(cin,model);
			
			cout<<"Enter Year: ";
			cin>>year;
		}
		
		void get(){
			cout<<"\nYour Companey is: "<<companey<<endl<<"Your model is: "<<model<<endl<<"Your year is: "<<year<<endl;
		}
};

int main(){
	car obj;
	
	obj.get();
}
