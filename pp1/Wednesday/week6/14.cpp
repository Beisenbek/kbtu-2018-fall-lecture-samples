#include<iostream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    s.erase(1,2);

    cout << s;

    return 0;
}