#include<iostream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    for(int len = 1; len <= s.size(); ++len){
        for(int i = 0; i < len; ++i){
            cout << s[i];
        }
        cout << endl;
    }

    return 0;
}