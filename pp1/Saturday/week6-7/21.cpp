#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    string t;
    cin >> t;

    int k = 0;
    int l = 0;

    string res = "";

    for(int i = 0; i < t.size()  + s.size(); ++i){
        if(i % 2 == 0){
           res += s[k];
            k++;
        }else{
            res += t[l];
            l++;
        }
    }

    cout << res << endl;

    return 0;
}