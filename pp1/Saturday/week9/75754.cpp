#include <iostream>

using namespace std;

bool isValid(string s){
    if(s.size() == 0) return false;
    bool ok = true;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] > 'z' || s[i] < 'a'){
            ok = false;
            break;
        }
    }        
    return ok;
}

int main(){

    string s;
    cin >> s;

    bool ok = true;

    size_t pos1 = s.find("@");
    if(pos1 != string::npos){
        size_t pos2 = s.find(".");
        if(pos2 != string::npos){
            if(pos1 < pos2){
                string part1 = s.substr(0, pos1);
                string part2 = s.substr(pos1 + 1, pos2 - pos1 - 1);
                string part3 = s.substr(pos2 + 1);
                if(!isValid(part1) || !isValid(part2) || !isValid(part3)){
                    ok = false;
                }
            }else{
                ok = false;
            }
        }else{
            ok = false;
        }
    }else{
        ok = false;
    }
    
    if(!ok) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}