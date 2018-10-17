#include<iostream>

using namespace std;

int g(char c){
    if(c <= '9' && c >= '0') return 1;
    return 0;
}

int f3(string s){
    if(s.size() == 0) return 0;
    return g(s[0]) +  f3(s.substr(1));
}

int f2(string s){
    if(s.size() == 0) return 0;
    if(s[0] <= '9' && s[0] >= '0'){
        return 1 + f2(s.substr(1,s.size() - 1));
    }else{
        return  f2(s.substr(1,s.size() - 1));
    }
}

int f(string s){
    int cnt = 0;

    for(int i = 0; i < s.size(); ++i){
        if(s[i] <= '9' && s[i] >= '0'){
            cnt++;
        }
    }

    return cnt;
}

int main(){

    string s;
    cin >> s;

    cout << f3(s) << endl;

    return 0;
}