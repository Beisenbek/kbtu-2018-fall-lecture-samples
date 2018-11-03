#include<iostream>

using namespace std;

int f(string s){
    int sum = 0;
    for(int i = 0; i < s.size(); ++i){
        sum += int(s[i]);
    }
    return sum;
}

int main(){

    string s;
    cin >> s;

    cout << f(s) << endl;

    return 0;
}