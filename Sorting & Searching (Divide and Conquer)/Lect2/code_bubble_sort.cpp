/*bubble sort algorithm*/

#include<iostream>
using namespace std;

int main(){
    int a[] = {5,4,2,3,1};
    int n = sizeof(a)/sizeof(int);

    for(int i=0;i<=n-2;i++){ //comparing n-1 times and swapping element

        for(int j=0;j<=n-2-i;j++){ //in every iteration one element is at their fixed items.
            if(a[j]>a[j+1]){
                swap(a[j],a[j+1]); //using swap function in c++.
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;

}
