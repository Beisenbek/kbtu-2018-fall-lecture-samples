#include<iostream>
#include<set>

using namespace std;

int main(){

    int x;
    set<int> s;
    set<int> :: iterator it;

    while(cin >> x){
        if(x == 0) break;
        s.insert(x);
    }

    it = s.end();
    it--;

    cout << *it << endl;

    return 0;
}