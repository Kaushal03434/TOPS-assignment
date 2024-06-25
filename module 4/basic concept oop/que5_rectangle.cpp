#include<iostream>
using namespace std;

float w;
float l;

class calculate{
	float rect_area;
	float rect_p;
	
	public:
		
	void area(){
		rect_area = w*l;
		cout<<"Ractangle area is:"<<rect_area<<endl;
	}
	
	void perimeter(){
		rect_p = 2*l+2*w;
		cout<<"Ractangle perimeter is:"<<rect_p<<endl;
	}
};

int main(){
	
	calculate obj;
	
	cout<<"Enter length of ractangle: ";
	cin>>l;
	
	cout<<"Enter width of ranctangle: ";
	cin>>w;
	
	obj.area();
	obj.perimeter();
}
