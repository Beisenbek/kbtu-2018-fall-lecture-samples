#include <iostream>

using namespace std;

int f(string s){
    if(s.size() == 0) return 0;
    if(s[0] == '0') return 1 + f(s.substr(1));
    return f(s.substr(1));
}

string int2bin(int n, string s){
    if(n == 0){
        if(s.size() == 0) return "0";
        else return s;
    }
    return int2bin(n/2, char(n % 2 + 48) + s);
}

int main(){

    int n;
    cin >> n;
    string binaryString = int2bin(n, "");

    cout << f(binaryString) << endl;
    
    return 0;
}