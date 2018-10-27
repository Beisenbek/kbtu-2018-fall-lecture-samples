#include <iostream>
#include <set>

using namespace std;


int main(){
  
    set<int> s;

    int x;
    while(cin >> x){
        if(x == 0) break;
        s.insert(x);
    }

    set<int>::iterator it = s.begin();

    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
