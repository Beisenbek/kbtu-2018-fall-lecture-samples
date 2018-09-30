#include<iostream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    for(int len = 1; len <= s.size(); ++len){
        cout << s.substr(s.size() - len, len) << endl;
    }

    return 0;
}