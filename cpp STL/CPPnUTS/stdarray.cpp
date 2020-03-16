
//TOPIC : STD::ARRAY

//SYNTAX : STD::ARRAY<T, N>array;
//NOTICE

//1.STD::ARRAY is a container that encapsulates fixed size arrays.
//2.arraysize is needed at compile time.
//3.Assign by value is actually by value.
//4.Access Elements:

//  a. a()
//  b. []
//  c. front()
//  d. back()
//  e.data() //gives access to the underlying array
#include<iostream>
#include<array>

using namespace std;
int main() {

    //declare
    std:: array<int, 5> myarray;//myarray is an object of array class

    //Initialization
    std::array<int, 5> myarray = {1,2,3,4,5}; //Initializer list
    std::array<int, 5> myarray2 {1,2,3,4,5}; //uniform initialization

    //assign  using initializer list
    std:: array<int, 5> myarray;
    myarray = {1,2,3,4,5};

    cout<<myarray.at(3)<<endl;
    return 0;

}
