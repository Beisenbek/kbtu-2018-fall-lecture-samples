#include <iostream>
#include <algorithm>

using namespace std;

char tolowerc(char c){
    if(c <= 'Z' && c >= 'A') 
        return char(c-32);
    return c;
}

string tolowers(string s){
    string res = "";

    for(int i = 0; i < s.size(); ++i){
        res = res + tolowerc(s[i]);
    }

    return res;
}

int main(){

    string t = "abcdefghijklmnopqrstuvwxyz";
    string s;
    cin >> s;

    s = tolowers(s);

    sort(s.begin(), s.end());    

    if(s == t){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}