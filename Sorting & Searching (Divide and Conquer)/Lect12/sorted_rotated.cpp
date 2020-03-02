#include<iostream>
using namespace std;

int searchIn(int a[],int s,int e,int key){
    //base case
    if(s>e){
        return -1;
    }

    //rec case

    int mid = (s+e)/2;

    //left part

    if( a[s]<=a[mid] ){
        if(key>=a[s] && key<=a[mid])
        {
            return searchIn(a,s,mid-1,key);
        }
        else
        {
            return searchIn(a,mid+1,e,key);
        }
    }
    ////mid lies in the second line
    if(key>=a[mid] && key<=a[e]){
        return searchIn(a,mid+1,e,key);
    }
    return searchIn(a,s,mid-1,key);



}

int main(){
    int a[] = {5,6,7,1,2,3,4};
    int key;
    cin>>key;

    cout<<"Element found at index"<<searchIn(a,0,6,key);

    return 0;

}
