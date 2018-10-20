#include<iostream>

using namespace std;

string compression4(string s){
    string res = "";
    for(int i = 0; i < s.size(); ++i){
        bool ok = true;
        for(int j = i - 1; j >=0; --j){
            if(s[i] == s[j]){
                ok = false;
                break;
            }
        }
        if(ok){
            res = res + s[i];
        }
    }
    return res;
}

string compression3(string s){
    for(int i = 0; i < s.size(); ++i){
        for(int j = i + 1; j < s.size(); ++j){
            if(s[i] == s[j]){
                s.erase(j,1);
                j--;
            }
        }
    }
    return s;
}

string compression2(string s){
    string res = "";
    bool a[26];
    for(int i = 0; i < 26; ++i){
        a[i] = false;
    }
    for(int i = 0; i < s.size(); ++i){
        int x = int(s[i]) - int('A');
        if(a[x] == false){
            a[x] = true;
            res = res + s[i];
        }
    }
    return res;
}

string compression(string s){
    string res = "";

    for(int i = 0; i < s.size(); ++i){
        for(int j = i + 1; j < s.size(); ++j){
            if(s[i] == s[j]){
                s[j] = '$';
            }
        }
    }

    for(int i = 0; i < s.size(); ++i){
        if(s[i] != '$'){
            res = res + s[i];
        }
    }

    return res;
}

int main(){
    string s;
    cin >> s;
    cout << compression4(s) << endl;
    return 0;
}