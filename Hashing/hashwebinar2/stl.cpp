
#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    unordered_map<string, int> myMap;

    //INsert in 3 ways;
    myMap["Mango"] = 100;

    myMap.insert(make_pair("Apple",120));
    pair<string, int> p ("Gauva",130);
    myMap.insert(p);

    //print
    for(auto node:myMap){
        cout<<node.first<<","<<node.second<<endl;
    }
}
