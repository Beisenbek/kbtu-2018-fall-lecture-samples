#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    string t;
    cin >> t;

    cout << s[0];
    cout << t;
    for(int i = 1; i < s.size(); ++i){
        cout << s[i];
    }

    return 0;
}