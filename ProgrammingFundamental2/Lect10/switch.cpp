
#include<iostream>
using namespace std;

int main() {
//Switch case
/*
Design a menu - Where pressing a button gives you the corresponding item

B- Burger
M- Maggi
P - Pizza
C - Coke
D- Dosa
.
.

and so on!!
*/

char ch;
cin>>ch;

switch(ch) {
    case 'B' : cout<<"Burger"<<endl;
                break;
    case 'm' :
    case 'M' : cout<<"Maggi"<<endl;
                break;
    case 'p' :
    case 'P' : cout<<"Pizza"<<endl;
                break;

    default : cout<<"Item not available! "<<endl;
}
}
