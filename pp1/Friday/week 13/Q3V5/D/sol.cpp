#include<iostream>

using namespace std;

int f1(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(isdigit(s[i])) 
            cnt++;
    }
    return cnt;
}

bool f2(int l, int r, string s){
   if(l >= r) return true;
   if(s[l] != s[r]) return false;
   return f2(l + 1, r - 1, s);
}

int main(){

    string s;
    cin >> s;

    if(!f2(0, s.size() - 1, s) && s.size() <= 10 && f1(s) >= 3){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}