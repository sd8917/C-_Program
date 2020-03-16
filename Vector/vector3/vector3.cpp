/* Problem statement :-

It is given that n number cabs okk now we have to find the
minimum distance from the origin in sorted order
assume that we are on the origin nice!!!

sol- make a vector< pair<int,int> > - car id and
distance from the origin and sort using comperator function.

//https://ide.codingblocks.com/s/190912

*/

#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
//first - x
//second - y
bool compare(pair<int,int> p1,pair<int,int> p2) {
    int d1 = p1.first*p1.first + p1.second*p1.second;
    int d2 = p2.first*p2.first + p2.second*p2.second;
    //sort according to x co-ordinate.
    if(d1==d2){
        return p1.first<p2.first;
    }

    return d1<d2;
}
int main() {
    int n;
    cin>>n;
    vector<pair<int,int> >v;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;

        v.push_back(make_pair(x,y));
    }

    sort(v.begin(),v.end(),compare);

    //for each loop
    for(auto p:v){
        cout<<"Car "<<p.first<<", "<<p.second<<endl;
    }

}
