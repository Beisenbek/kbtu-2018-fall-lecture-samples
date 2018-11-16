#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

bool f(string s){
    string t = s;
    reverse(s.begin(),s.end());
    if(s == t) return true;
    return false;
}

int main(){
    string x;
    set<string> res;
    set<string> :: iterator it;

    while(cin >> x){
        if(f(x) == false){
            res.insert(x);
        }
    }
    
    for(it = res.begin(); it != res.end(); ++it){
        cout << *it << endl;
    }
    return 0;
}