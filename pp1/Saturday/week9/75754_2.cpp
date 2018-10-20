#include <iostream>

using namespace std;

bool isValid(string s){
    bool ok = true;
    bool p1 = false;//.
    bool p2 = false;//@
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(s[i] == '@'){
            if(p1 == true || p2 == true || cnt == 0){
                ok = false;
                break;
            }
            p2 = true;
            cnt = 0;
        }else if(s[i] == '.'){
            if(p2 == false || p1 == true || cnt == 0){
                ok = false;
                break;
            }
            p1 = true;
            cnt = 0;
        }else if(s[i] <= 'z' && s[i] >= 'a'){
            cnt++; 
        }else{
            ok = false;
            break;
        }
    }  

    if(cnt == 0 || p1 == false || p2 == false){
        ok = false;
    }      

    return ok;
}

int main(){

    string s;
    cin >> s;

    if(!isValid(s)) cout << "No" << endl;
    else cout << "Yes" << endl;

    return 0;
}