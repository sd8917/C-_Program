/*Delhi Odd even problem in cpp
Due to an immense rise in Pollution, Kejriwal is back with the Odd and Even Rule in Delhi.
 The scheme is as follows, each car will be allowed to run on Sunday if the sum of digits which are
 even is divisible by 4 or sum of digits which are odd in that number is divisible by 3. However to
 check every car for the above criteria can't be done by the Delhi Police.
You need to help Delhi Police by finding out if a car numbered N will be allowed to run on Sunday?

*/

#include <iostream>

using namespace std;

int main()
{
    long int n,t,a[100000],odd=0,even=0,res=0;
    cin>>t;
    for(int k=0;k<t;k++)
    {
    cin>>n;

    while(n>=1)
    {
        a[res]=n%10;
        res++;
        n/=10;
    }
    for(int i=0;i<res;i++)
    {
        if(a[i]%2!=0)
        {
            odd+=a[i];
        }
        else
            even+=a[i];
    }
    if(odd%3==0 || even%4==0)
    {
        cout<<"Yes";
    }
    else
        cout<<"No";
        odd=0;
        even=0;
        res=0;
        cout<<endl;
    }
    return 0;
}
