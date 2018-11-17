#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

bool f(string s, string t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;
}

int main(){

    string s, t;

    cin >> s;

    set<string> res;

    while(cin >> t){
        if(f(s, t) == false){
            res.insert(t);
        }
    }

    set<string> :: iterator it;

    for(it = res.begin(); it != res.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}