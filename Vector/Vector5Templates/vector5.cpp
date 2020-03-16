#include<iostream>
#include "vector5header.h"

using namespace std;

int main(){
    Vector v; //here <int> add in further code. using templated class
    v.pushback(1);
    v.pushback(2);
    v.pushback(3);
    v.pushback(4);
    v.popback();
    v.pushback(6);


    //check by pushing
    v.pushback(10);
    cout<<"Capacity "<<v.capacity()<<endl;

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
