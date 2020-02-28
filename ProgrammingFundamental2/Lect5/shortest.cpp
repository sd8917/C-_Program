/*sHORTEST PATH PROBLEM IN CPP*/
#include<iostream>
using namespace std;

int main() {
    //Problem - Find the displacement

    char ch;
    ch = cin.get();

    int x = 0;
    int y = 0;

    while(ch!='\n'){

        if(ch=='N' or ch == 'n'){
            y++;
        }
        else if(ch=='S' or ch == 's'){
            y--;
        }
        else if(ch=='E' or ch == 'e'){
            x++;
        }
        else{
             x--;
        }

    }
     cout<<"Final Displacement is "<<x<<" and "<<y<<endl;

    return 0;
}
