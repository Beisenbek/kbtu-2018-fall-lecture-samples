#include<iostream>

using namespace std;

int main(){

    int n, m;

    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n; ++i){
        int maxi = a[i][0];
        for(int j = 1; j < m; ++j){
           if(maxi < a[i][j]){
               maxi = a[i][j];
           }
        }
        cout << maxi << endl;
    }


    return 0;
}   