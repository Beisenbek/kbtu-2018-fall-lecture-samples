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

    int m = min(t.size(), s.size());

    for(int i = 0; i < 2 * m; ++i){
        if(i % 2 == 0){
           res += s[k];
           k++;
        }else{
            res += t[l];
            l++;
        }
    }

    cout << res;


    if(s.size() > t.size()){
        for(int i = m; i < s.size(); ++i){
            cout << s[i];
        }
    }else if(t.size() > s.size()){
        for(int i = m; i < t.size(); ++i){
            cout << t[i];
        }
    }

    cout << endl;



    return 0;
}