// set::begin/end
//further query of set at - http://www.cplusplus.com/reference/set/set/clear/
#include <iostream>
#include <set>

using namespace std;

int main ()
{
  int myints[] = {75,13,23,65,75,42,13};
  set<int> myset (myints,myints+7);

  cout << "myset contains:";
  for (set<int>::iterator it=myset.begin(); it!=myset.end(); ++it){
        cout << ' ' << *it;
  }

  cout << '\n';

  return 0;
}
/*
class Person {
public:
    float age;
    string name;

    bool operator < (const Person& rhs) const{ return age<rhs.age; }
};

int main(){

    set<Person> Set = {{30,"Rupesh"},{25,"Hitesh"},{22,"john"}};

    for(const auto& e:Set){
        cout<<e.age << " "<<e.name<<endl;
    }
    return 0;
}
*/
