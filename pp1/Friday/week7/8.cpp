#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

bool f(string s){
    string t = s;
    reverse(s.begin(), s.end());
    return (t == s);
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