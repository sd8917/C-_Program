/*
Von Neuman Loves Binary

Given a binary number ,help Von Neuman to find out its decimal
representation. For eg 000111 in binary is 7 in decimal.

Input Format
The first line contains N , the number of binary numbers.
 Next N lines contain N integers each representing
 binary represenation of number.

Input formate : -
4
101
1111
00110
111111

Ouptut formate : -

5
15
6
63


*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {

    int n;

    cin>>n;
    int binary;
    while(n--){
        cin>>binary; //input the binary number
        int number = 0;
        int i = 0;
        while(binary != 0){ //just input while it beacomes 0;
            int digit = binary%10;
            number = number + digit*pow(2,i); //just finding the decimal
            binary = binary/10;
            i = i+1;
        }
        cout<<number<<endl;
    }


}


/*APPRAOCH 2
#include <iostream>
#include <cmath>
using namespace std;
int convertBinaryToDecimal(long long);
int main()
{
    long long n,t;
    //cout<<"Enter the number of binary to converted";
    cin>>t;
    for(int i=1;i<=t; i++){
        //cout << "Enter a binary number: ";
        cin >> n;

        cout << convertBinaryToDecimal(n)<<endl;
    }
    return 0;
}
int convertBinaryToDecimal(long long n)
{
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}

*/
