//topic :Set
//remove the duplicate

#include<iostream>
#include<set>
#include<string>
#include<functional>

using namespace std;

int main(){
    set<int> Set = {1,2,3,4,5,1,2,3,4,5};
    for(const auto& e: Set){
        cout<<e<<endl;
    }
    return 0;
}
