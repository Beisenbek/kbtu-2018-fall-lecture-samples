#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s = "";
    char c;

    while(cin >> c){
        if(c == '0') break;
        s = s + c;
    }

    cout << s << endl;

    for(int i = 0; i < s.size(); ++i){
        cout << s[i] << endl;
    }
    
    return 0;
}