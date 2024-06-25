#include<iostream>
using namespace std;
class triangle{
	int side1;
	int side2;
	int side3;
	
	public:
	
	triangle(){
		cout<<"Enter Length of Triangle One side: ";
		cin>>side1;
		
		cout<<"Enter Length of Triangle Two side: ";
		cin>>side2;
		
		cout<<"Enter Length of Triangle Three side: ";
		cin>>side3;
		
	
	};
	
	int isEquilateral() {
        return (side1 == side2 && side2 == side3);
    }

    // Function to check if the triangle is isosceles
    int isIsosceles() {
        return (side1 == side2 || side1 == side3 || side2 == side3);
    }

    // Function to determine if the triangle is scalene
    int isScalene() {
        return (!isEquilateral() && !isIsosceles());
    }
	
	
	
};

int main(){
	triangle obj;
	
	if(obj.isEquilateral()){
		cout<<"\nYour Triangle Was Equillateral";
	}else if(obj.isIsosceles()){
		cout<<"\nYour Triangle was isosceles";
	}else if(obj.isScalene()){
		cout<<"\nYour Triangle was scalene";
	}
	
	
	
	
}
