/*  decimal to  binary conversion*/
#include<iostream>
#include<cmath>
using namespace std;
int main() {

    int n;
    cin>>n;
    int i = 0;
    int number = 0;
    while(n!=0){
        int rem = n%10;
        number = number + rem*pow(2,i);
        n = n /10;
        i = i+1;
    }
    cout<<number ;
    return 0;
}
