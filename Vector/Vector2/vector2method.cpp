//https://ide.codingblocks.com/s/190899
#include <iostream>
#include<vector>
using namespace std;
int main() {
    vector<int > d{1,2,3,10,14};

    //push_back() takes O(1) times most time except when expand .
    d.push_back(16);
    for(int x:d){
        cout<<x<<", ";
    }

    // reomoves the last element takes O(1) times most time except when shrink.
    d.pop_back();

    //Insert some elements in the middle in O(n) n elements added
    d.insert(d.begin()+3,4,100);
    cout<<endl;
    for(int x:d){
        cout<<x<<", ";
    }

    //erase some element in the middle
    d.erase(d.begin()+3);
    cout<<endl;
    for(int x:d){
        cout<<x<<", ";
    }

    //range of the elemets can be removed
    d.erase(d.begin()+2,d.begin()+5);

    cout<<endl;
    for(int x:d){
        cout<<x<<", ";
    }
    cout<<endl;
    //size
    cout<<d.size()<<endl;
    cout<<d.capacity()<<endl;

    //we avoid shrink
    d.resize(8);
    cout<<d.capacity()<<endl;

    //remove all the vector
    d.clear();

    cout<<d.size()<<endl;

    cout<<endl;
    for(int x:d){
       // cout<<x<<", ";
    }
    //empty
    if(d.empty()){
        cout<<"This is an empty vector";
    }
    cout<<endl;
    d.push_back(10);
    d.push_back(11);
    d.push_back(12);

    cout<<d.front()<<endl; //front most element of the vector
    cout<<d.back()<<endl;  //back most element of the vector

    //Reserve
    int n;
    cin>>n;
    vector<int> v;
    //to avoid doubling we will use reserve function
    v.reserve(1000);
    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);
        cout<<"change capacity "<<v.capacity()<<endl;

    }
    cout<<"capacity: "<<v.capacity()<<endl;

    cout<<endl;
    for(int x:v){
        cout<<x<<", ";
    }

    return 0;

}
