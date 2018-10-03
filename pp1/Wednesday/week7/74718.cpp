#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

bool isValid2(string s, int n){
    int cnt = 0;

    for(int i = 0; i < s.size(); ++i){
        if(isdigit(s[i])){
            cnt++;
        }
    }

    return cnt >= n;
}

bool isValid(string s, int n){
    int cnt = 0;

    for(int i = 0; i < s.size(); ++i){
        if(int(s[i]) <= 57 && int(s[i]) >=48){
            cnt++;
        }
    }

    return cnt >= n;
}

int main(){

    string s;
    int x;
    cin >> s >> x;

    if(isValid2(s,x)){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}