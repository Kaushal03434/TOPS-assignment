#include<iostream>
using namespace std;
class bankac{
	double account_num;
	int balance;
	int choice;
	int amount;
	
	public:
		
		bankac(){
			cout<<"Enter Your Bank Account Number: ";
			cin>>account_num;
			
			cout<<"Enter Your Balance On Account: ";
			cin>>balance;
			
			cout<<"\nyour Account Number is: "<<account_num<<endl;
			cout<<"Your Balance is: "<<balance<<endl;
			
			cout<<"\n-------------Choice-----------------\n";
			cout<<"\n1.Deposit \n2.Withdraw\n";
			
			cout<<"\nEnter Your Choice: ";
			cin>>choice;
			
			if(choice == 1){
			cout<<"\n-------------Your Choice Is Deposit A Amount----------------\n\n";
			cout<<"Enter Your Deposit Amount: ";
			cin>>amount;
			
			balance += amount;
			cout<<"\nTransaction Sucessfull...";
			cout<<"\nNow Your Balance is: "<<balance<<endl;
			}
			else if(choice == 2){
			cout<<"\n-------------Your Choice Is Withdraw A Amount----------------\n\n";
			cout<<"Enter Your Withdraw Amount: ";
			cin>>amount;
			
			if(amount < balance){
				balance -= amount;
				cout<<"\nTransaction Sucessfull...";
				cout<<"\nNow Your Balance is: "<<balance<<endl;
			}else{
				cout<<"\nInsufficient Balance ! Please Re-check Your Balance...";
			}
			}
			else{
				cout<<"Invalid Choice";
			}
			
			
}
			
			
};

int main(){
	bankac obj;
		
}
