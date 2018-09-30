#include<iostream>

using namespace std;

int main(){

    string s, t;
    cin >> s >> t;
    
    bool ok = true;

    for(int i = 0; i < s.size(); ++i){
        ok = true;
        for(int j = 0; j < t.size(); ++j){
            if(s[i + j] != t[j]){
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout << "found" << endl;
            break;   
        }
    }

    if( ok == false){
        cout << "not found!" << endl;
    }

    return 0;
}