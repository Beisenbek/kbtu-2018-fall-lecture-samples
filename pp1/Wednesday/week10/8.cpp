#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    set<int> s;
    int x;

    while(true){
        cin >> x;
        if(x == 0) break;
        s.insert(x);
    }

    for(set<int>::iterator it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
