/*
wave sort
eg:0 1 2 3 4 5

1 0


*/

#include<iostream>
using namespace std;

int main() {
    int a[] = {1,3,4,2,7,8};
    int n = sizeof(a)/sizeof(int);

    //Got to every 2nd element ,try to create a peak
    for(int i=0; i< n;i += 2){
        //check for left element
        if(i>0 && a[i-1]>a[i]){
            swap(a[i],a[i-1]);
        }

        //check for the right element
        if(i<=n-2 && a[i+1]>a[i]){
            swap(a[i],a[i+1]);
        }

    }
    //print the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
