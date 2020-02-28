/*Find the Unique in the list of the number*/
#include<iostream>
using namespace std;

int main() {

    int n;
    int no;
    cin>>n;
    int i=1;
    int uninum = 0;
    while(i<=n){
        cin>>no; //input the number
        uninum = uninum^no; //take the xor of the every  number
        i = i+1; //update condition
    }

    cout<<uninum<<endl;
    return 0;
}
