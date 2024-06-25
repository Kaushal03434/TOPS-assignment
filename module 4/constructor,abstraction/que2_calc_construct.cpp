#include<iostream>
using namespace std;
class calculator{
	int a,b;
	
	public:
	
	 calculator(){
		cout<<"Enter a: ";
		cin>>a;
		
		cout<<"Enter b: ";
		cin>>b;
	}
	
	void addition(){
		int sum = a+b;
		cout<<"addition is "<<a<<"+"<<b<<"="<<sum<<endl;
	};
	
	void sub(){
		int sub = a-b;
		cout<<"sub is "<<a<<"-"<<b<<"="<<sub<<endl;
	}
	
	void mul(){
		int mul = a*b;
		cout<<"mul is "<<a<<"*"<<b<<"="<<mul<<endl;
	}
	
	void div(){
		int div = a/b;
		cout<<"div is "<<a<<"/"<<b<<"="<<div<<endl;
	}
};

int main(){
	calculator obj;
	obj.addition();
	obj.sub();
	obj.mul();
	obj.div();
		
}
