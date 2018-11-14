#include<iostream>
#include<set>

using namespace std;

int main(){

    int x;
    set<int> s;
    set<int> :: iterator it;

    while(cin >> x){
        if(x == 0) break;
        s.insert(-x);
    }

    int res = *(s.begin());

    cout << -res << endl;

    return 0;
}