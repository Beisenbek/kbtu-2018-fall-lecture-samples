#include<iostream>

using namespace std;

string f2(int l, int r, string s){
   if(l >= r) return "YES";
   if(s[l] != s[r]) return "NO";
   return f2(l + 1, r - 1, s);
}

string f(string s){
    bool res = true;
    for(int i = 0; i < s.size() / 2; ++i){
        if(s[i] != s[s.size() - 1 - i]){
            res = false;
            break;
        }
    }
    if(res == true) return "YES";
    return "NO";
}

int main(){

    string s;
    cin >> s;
    cout << f2(0, s.size() -1 , s);

    return 0;
}