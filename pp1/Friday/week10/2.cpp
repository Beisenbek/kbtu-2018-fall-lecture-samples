#include <iostream>

using namespace std;

int g(char c){
    return int(c) - 48;
}

int f(string s){
    if(s.size() == 0) return 0;
    return g(s[0]) + f(s.substr(1));
}

int main(){

    string s;
    cin >> s;
    cout << f(s);

    return 0;
}