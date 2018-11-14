#include<iostream>
#include<set>

using namespace std;

int main(){

    int x;
    set<int> s;

    while(cin >> x){
        if(x == 0) break;
        s.insert(x);
    }

    int res = *(s.rbegin());

    cout << res << endl;

    return 0;
}