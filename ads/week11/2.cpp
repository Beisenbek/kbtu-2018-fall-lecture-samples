#include<iostream>

using namespace std;

int main(){

    string s, t;

    getline(cin, s);
    getline(cin, t);

    int n = s.size();
    int m = t.size();

    //012345678901
    //hello world! <-i
    //      worldx <-j

    bool found = false;

    for(int i = 0; i <= n - m; ++i){
        bool ok = true;
        for(int j = 0; j < m; ++j){
            if(s[i + j] != t[j]){
                ok = false;    
                break;
            }
        }
        if(ok){
            found = true;
            cout << i << endl;
            break;
        } 
    }

    if(!found){
        cout << "not found!" << endl;
    }

    return 0;
}