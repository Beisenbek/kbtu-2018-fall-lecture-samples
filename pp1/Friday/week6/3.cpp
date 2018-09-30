#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s;
    cin >> s;

    cout << s << endl;
    cout << s[0] << endl;
    cout << s[s.size() - 1] << endl;

    for(int i = 0; i < s.size(); ++i){
        cout << s[i] << " ";
    }
    
    return 0;
}