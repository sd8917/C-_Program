
#include <iostream>
using namespace std;
int mul(int a,int b){
    //base case
    if(b==0){
        return 0;
    }

    //recursivr case
    return (a+mul(a,b-1));
}
int main() {
    int a,b;
    cin>>a>>b;

    cout<<mul(a,b);

    return 0;
}
