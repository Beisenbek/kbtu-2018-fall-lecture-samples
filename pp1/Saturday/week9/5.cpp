#include <iostream>
#include <algorithm>

using namespace std;

int f(string s){
    //cout << "point 2:"  << s << endl;
    if(s.size() == 0) return 0;
    if(isdigit(s[0])) return 1 + f(s.substr(1));
    return f(s.substr(1)); 
}

int main(){

    string s;
    cin >> s;
    //cout << "point 1:"  << s << endl;
    cout << f(s) << endl;

    return 0;
}