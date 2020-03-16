
//topic : std::vector

//notes :
//1.STD::vector is a sequence container and also know as dynamic array or arraylist
//2.Its size can grow and shrink dynamically , and no need to provide size at compile time.

//ELEMENT ACCESS
//at(),[],front(),back(),data()

//MODIFIERS:
//insert, emplace(), push_back(),emplace_back,pop_back(),resize(),swap(),erase,clear(),

#include<iostream>
#include<vector>

using namespace std;

int main() {

//declaration

    vector<int> arr1;
    vector<int> arr2(5,20); //initialize with size 5 put 20 in every box
    vector<int> arr3 - {1,2,3,4,5};
    vector<int> arr4{1,2,3,4,5};

    //access element
    arr2[3] = 10;
    arr2.at(3) = 10;


}


