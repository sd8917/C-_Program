//Break-that is used to stop a loop based upon certain condition
//Problem statement - Reade a stream of number until you get a multiple of 7.
#include<iostream>
using namespace std;

int main(){

   int no;

   /*Accept and print number until you get a number which is multiple of 7.
   an you will skip all numbers which are multiple of 13 and 7*/

    while(true){
    //This loop run for the infinite because it always true.
    cin>>no;
    if(no%13==0){
        continue; //multiple times
    }
        if(no%7==0){
            //stop processing more Numbers;
           //  break; //Take you out to line number 18
           // continue  //Take you out to line number 10 and skip line 21
            //starting of the loop !!
           break; //only once
        }
        cout<<"No proceesed "<<no<<" "<<endl;;
    }
    cout<<"Came of the loop"
}
