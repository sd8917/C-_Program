/*Print the reverse of the number*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    //find the every digit in the number of the number
    int digit;

    while(num!=0){
        //while the remainder is not 0 we loop
        digit = num%10; //finding every remainer which is last of number
        cout<<digit; //last of number print
        num = num/10; //nupdate condition while loop
      }


    return 0;
}
