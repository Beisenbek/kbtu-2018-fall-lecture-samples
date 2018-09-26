#include<iostream>

using namespace std;

int main(){

    int n;

    cin >> n;

    string s[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            s[i][j] = "[*]";
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
           if(i >= j) cout << s[i][j];
        }
        cout << endl;
    }


    return 0;
}   