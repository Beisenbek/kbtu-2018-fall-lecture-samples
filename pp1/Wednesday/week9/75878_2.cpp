#include<iostream>

using namespace std;

string f(int n, string s){
    if(n == 0) return '0' + s;
    if(n % 2 == 0) return f(n/2, '0' + s);
    return f(n/2, '1' + s);
}

int main(){

    int n;
    cin >> n;
    cout << f(n, "");

    return 0;
}