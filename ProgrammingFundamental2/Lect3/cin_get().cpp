#include<iostream>
using namespace std;

int main(){
    //Problem - Read a list of characters(sentences)
    //cin.get()

    char ch;
   // cin>>ch;

    ch = cin.get() ;// this method reads any single char including spaces/newlines

    while(ch!='.'){
            //print the last character that we have read
        cout<<ch;
        //update the my char in the memory (read the next character)
        //read the rest of the characters
        ch = cin.get();

    }

    return 0;
}

/*
INput - A
oUTPUT - A
till encounter a '.'


*/

/*
Concept -
cin ->does'nt read the white space
eg:- hello world the read only hello buffer pointer skip at space

So,we cin.get()

*/
