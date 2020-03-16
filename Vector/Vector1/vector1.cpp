//https://ide.codingblocks.com/s/190890
#include <iostream>
#include<vector>

using namespace std;
int main() {

    //You can create and initialize a vector
    vector<int> a; //syntax -> vector<typeof> nameofvector;
    vector<int> b(5,10);  //five in with value 10-init a vector zeroes (n,0),
    vector<int> c(b.begin(),b.end());
    vector<int> d{1,2,3,10,14};

    //Look at how we iterate over the vector
    for(int i=0;i<c.size();i++){
        cout<<c[i]<<", ";
    }

    cout<<endl;

    for(auto it = b.begin();it!=b.end();it++){
        cout<<(*it)<<", ";
    }

    cout<<endl;
    //For each loop
    for(int x:d){
        cout<<x<<", ";
    }

    cout<<endl;

    //Discuss more fucntion
    vector<int> v;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int no;
        cin>>no;
        v.push_back(no);

    }
    for(int x:v){
        cout<<x<<", ";
    }

    cout<<endl;
    //understand at memory level ,that are the difference in the two
    cout<<v.size()<<endl; // 5
    cout<<v.capacity()<<endl;// 8
    cout<<v.max_size()<<endl;

    cout<<endl;
    cout<<d.size()<<endl; // 5
    cout<<d.capacity()<<endl;// 5
    cout<<d.max_size()<<endl

    return 0;

}
//  Notes- doubling operation in vector is expersive so we use reserve() to avoid some what.extent.
