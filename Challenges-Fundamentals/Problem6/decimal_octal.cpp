/*decimal to octal conversion*/

#include<iostream>
using namespace std;
int main()
{
	long int decnum, rem, quot;
	int i=1, j, octnum[100];
	cin>>decnum;
	quot=decnum;

	while(quot!=0)
	{
		octnum[i++]=quot%8;
		quot=quot/8;
	}

	//cout<<decnum;

	//start printing from the last in the array as fisrt becomes last after finding the remainder.
	for(j=i-1; j>0; j--)
	{
		cout<<octnum[j];
	}
	return 0;
}
