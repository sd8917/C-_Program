//prime number checker program in cpp

#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    int i;
    for(i=2;i<=n-1;i++) {
        if(n%i==0){
            cout<<n<<"is Not prime"<<endl;
            break;
        }
    }
    //Flow of program
    if(i==n) {
        cout<<n <<" is prime!"<<endl;
    }

    return 0;
}
