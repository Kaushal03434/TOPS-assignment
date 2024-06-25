#include<iostream>
using namespace std;
class calculator{
	
		int num1;
		int num2;
		
		
		public:	
			void get(){
				cout<<"Enter a 1st number: ";
				cin>>num1;
				
				cout<<"Enter a 2nd number: ";
				cin>>num2;
			}
			
			void add(){
				cout<<num1+num2;
			}
			
			void sub(){
				cout<<num1-num2;
			};
			
			void mul(){
				cout<<num1*num2;
			};
			
			void div(){
				if(num2!=0){
					cout<<num1/num2;
				}else{
					cout<<"Invalid value";
				}
			}
};

int main(){
	
	calculator calc;
	char choice;
	
	cout<<"Enter operator: ";
	cin>>choice;
	
	switch(choice){
		
		case '+':
			calc.get();
			calc.add();
			break;
		
	case '-':
			calc.get();
			calc.sub();
			break;
			
	case '*':
			calc.get();
			calc.mul();
			break;
			
	case '/':
			calc.get();
			calc.div();
			break;
	default:
			cout<<"Invalid Operator";
			
	}
}

