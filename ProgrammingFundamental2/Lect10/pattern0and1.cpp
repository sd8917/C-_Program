/*Pattern Problem
0
010
1010
01010
101010
*/

#include<iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=1;i<=n;i++){
        int val = i%2 ==0?1:0;
    //print i values in th ith line
        for(int cnt=1;cnt<=i;cnt++){
            cout<<val;
            val = 1 - val; //val1 ,val=0,val=1...
        }
        cout<<endl;
    }

   return 0;
}
