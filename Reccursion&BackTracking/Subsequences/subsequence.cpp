#include<iostream>
using namespace std;
void subsequence(char *in,char *out,int i,int j){

    //base case
    if(in[i] =='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return ;
    }

    //recursive case
    //first lets take the ith character
    out[j] = in[i];
    subsequence(in,out,i+1,j+1);

    subsequence(in,out,i+1,j);

}

int main(){
    char in[100];
    cin>>in;
    char out[100];

    subsequence(in,out,0,0);

    return 0;
}
