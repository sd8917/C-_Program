/*Write program to calculate digits
whitespaces and other character terminated by $

https://en.cppreference.com/w/cpp/language/operator_precedence */
#include<iostream>
using namespace std;

int main() {

    int digits = 0;
    int alphabets = 0;
    int spaces = 0;
    int other = 0;


    char ch;
    ch = cin.get();

    while(ch!='$'){

        if(ch>='0' and ch<='9'){  //'0' convert into there ascii value
            digits++;
        }
        else if( (ch>='a' and ch<='z') or (ch>='A' and ch<='Z')){
           alphabets++;
        }
        else if(ch==' ' or ch=='\n' or ch=='\t'){
            spaces++;
        }
        else{
            other++;
        }

        ch = cin.get();
    }

    cout<<"Digits "<<digits<<endl;
    cout<<"Alphabest "<<alphabets<<endl;
    cout<<"Spaces "<<spaces<<endl;
    cout<<"Others "<<spaces<<endl;

    return 0;
}
