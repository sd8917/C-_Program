/*
Given a list of numbers, stop processing
input after the cumulative sum of all the input becomes negative.

input : -
1
2
88
-100
49
Output : -
1
2
88

*/

#include<iostream>
using namespace std;
int main() {
	int n;
	int sum=0;

    for(int i=1; i<=100; i++)
    {
        cin>>n;

        sum = sum + n;
        if(sum<0){
            break;
        }
        cout<<n<<endl;
    }
	return 0;
}
