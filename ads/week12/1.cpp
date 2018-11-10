#include<iostream>


using namespace std;

int main(){

    string s;
    cin >> s;

    int n = s.size();
    int p[n];
    p[0] = 0;

    for(int i = 1; i < n; ++i){
        int j = p[i - 1];
        while(j > 0 && s[i] != s[j]){
            j = p[j - 1];
        }
        if(s[i] == s[j]){
            p[i] = j + 1;
        }else{
            p[i] = 0;
        }
    }

    for(int i = 0; i < n; ++i){
        cout << p[i] << " ";
    }


    return 0;
}