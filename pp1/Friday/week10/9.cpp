#include <iostream>
#include <set>

using namespace std;


int main(){
  
    set<int> s;

    s.insert(1);
    s.insert(10);
    s.insert(-1);
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(11);
    s.insert(122);

    set<int>::iterator x = s.begin();

    for(x = s.begin(); x != s.end(); ++x){
        cout << *x << " ";
    }

    return 0;
}
