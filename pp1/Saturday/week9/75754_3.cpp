#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;
    bool ok = true;

    if(s[0] == '@' || s[s.size() - 1] == '.'){
        ok = false;
    }

    int temp = "";

    for(int i = 0; i < s.size(); ++i){
        if(s[i] > 'z')
    }

    if(ok) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}