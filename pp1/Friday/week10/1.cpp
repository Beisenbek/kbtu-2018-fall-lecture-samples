#include <iostream>

using namespace std;

int g(char c){
    return int(c) - 48;
}

int f(string s, int l, int r){
    if(l == r) return g(s[l]);
    int p = (l + r) / 2;
    return f(s, l, p) + f(s, p + 1, r);
}

int main(){

    string s;
    cin >> s;
    cout << f(s, 0, s.size() - 1);

    return 0;
}

//1234
//l = 2
//r = 3
//p = 2
//f(s, 2, 2)
//f(s, 3, 3)
//01234