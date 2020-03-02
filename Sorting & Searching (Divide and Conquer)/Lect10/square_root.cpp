#include<iostream>
using namespace std;
float Square_root(int n,int p){

    int s=0,e=n;
    float ans,mid;

    while(s<=e){
        mid = (s+e)/2;
        if(mid*mid==n){
            ans = mid;
            break;
        }
        if(mid*mid<n){
            s = mid+1;
            ans = mid;
        }else{
            e = mid - 1;
        }
    }

    //fractional part now
    float inc =0.1;

    for(int i=0;i<p;i++){
        while(ans*ans<=n){
            ans += inc;
        }
        //ans*ans>no break and goes 1step back;
        ans =ans - inc;
        inc = inc/10;
    }
    return ans;
}





int main() {

    cout<<Square_root(49,1)<<endl;
    cout<<Square_root(10,3)<<endl;
    return 0;
}
