/* Take the following as input.

A number (N1)
A number (N2)
Write a function which prints first N1 terms of the series 3n + 2 which are not multiples of N2.

*/

//Print series
#include<iostream>
using namespace std;

int main(){
    int N1;
    int N2,sum=0;

    //Number of the term in the series.
    cin>>N1;

    //Making series condition.
    cin>>N2;

   int counter =1;
   int n=1;
   while(counter!=11){
    sum = 3*n+2;
    //if sum is divisible by N2 then only print the series else not!!
        if(sum%N2!=0)
            {
            cout<<sum<<endl;
            counter = counter + 1;
        }
    //Reset the sum
    sum=0;
    n = n+1;

   }
   return 0;
}
