#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

int main(){

    string s[] = {"ZZZZ", "AAAA", "AAAB", "CAAA"};

    sort(s, s + 4);

    for(int i = 0; i < 4; ++i){
        cout << s[i] << " ";
    }

    return 0;
}