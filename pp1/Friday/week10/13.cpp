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

    for(int i = 0; i < 2; ++i){
        it++;
    }

    cout << *it << endl;

    return 0;
}
