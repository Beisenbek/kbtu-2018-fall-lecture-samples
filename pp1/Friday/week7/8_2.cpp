#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

bool f(string s){
    string t = s;
    bool res = true;

    for(int i = 0; i < s.size()/2; ++i){
        if(s[i] != s[s.size() - 1 - i]){
            res = false;
            break;
        }
    }

    return res;
}

int main(){

    string s;
    cin >> s;

    if(f(s) == true){
        cout << "yes\n";
    }else{
        cout << "no\n";
    }

    return 0;
}