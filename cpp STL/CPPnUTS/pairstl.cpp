//pair problem

//syntax
// std:: pair<T1,T2> OBJ;

#include <iostream>
#include<vector>
#include<string>
using namespace std;

void print(pair<int ,int>& obj) {cout<<obj.first<<" "<<obj.second<<endl; }
int main() {
    {
        pair<int,int> obj(10,20);
        print(obj);
    }

    {
        pair<int,int> obj = make_pair(10,20);
        print(obj);
    }

    {
        vector<  pair<string ,int>  > list;
        list.push_back(make_pair("Rupesh", 30));
        list.push_back(make_pair("Hitesh",28));

        list.push_back(pair<string,int> ("Bhupendra", 22) );
       // list.push_back(pair("Sagar", 18));

        for(auto& elem: list){
            cout<<elem.first<<" "<<elem.second<<endl;
        }
    }
    return 0;
}
