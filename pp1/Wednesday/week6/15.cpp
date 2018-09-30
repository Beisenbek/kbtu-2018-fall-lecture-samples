#include<iostream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    s.erase(s.begin(),s.begin() + 2);

    cout << s;

    return 0;
}