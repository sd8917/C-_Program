//vector - linkedlist+ARRAY

#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> Vec;
    Vec.reserve(31); //see difference by commenting this line
    for(int i=0;i<32;++i){
        Vec.push_back(i);
        cout<<"Size "<<Vec.size()<<"   Capacity"<<Vec.capacity()<<endl;
    }
    return 0;
}
