/*Revising Quadratic Equation*/
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    float a,b,c;
	cin>>a>>b>>c;

	double x,y;

	y = (-b+(sqrt(b*b-4*a*c)))/2*a; //formula to find the roots of quadratic equation

	x = (-b-(sqrt(b*b-4*a*c)))/2*a;


	if(b*b-4*a*c>0){
		cout<<"Real and Distinct"<<endl;
		cout<<x<<" "<<y;
	}

	if(b*b-4*a*c==0){

		cout<<"Real and Equal"<<endl;
		cout<<x<<" "<<y;
	}
    //IF ROOT IS NEGATIVE WE HAVE IMAGINARR ROOTS
	if(b*b-4*a*c<0){

		cout<<"Imaginary"<<endl;
	}
    return 0;
}'
