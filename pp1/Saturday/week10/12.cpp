#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<char> s;
    char x;

    while(cin >> x){
        s.push_back(x);
    }

    for(int i = 0; i < s.size(); ++i){
        bool ok = true;
        for(int j = i - 1; j >=0; --j){
            if(s[i] == s[j]){
                ok = false;
                break;
            }
        }

        if(!ok) continue;
        cout << s[i] << " ";
    }

    return 0;
}