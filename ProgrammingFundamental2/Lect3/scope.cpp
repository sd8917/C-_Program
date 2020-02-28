#include<iostream>
using namespace std;
//Scope -> defined for variables(accessible->lifetime and visibilty)
//Local scope
//Global scope
int x = 100;

int main() {
    //here x =10 is local variable
    int x = 10; //if it is commented then it pick the the global one
    cout<<x <<endl;

    for(x=0;x<=5;x++){
        cout<<x<<endl;
    }
    cout<<x<<endl; //local  x

    //Both local and global value x
    cout<<::x<<endl;
}
