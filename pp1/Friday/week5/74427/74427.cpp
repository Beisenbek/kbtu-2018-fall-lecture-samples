#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    int m = a[0][0];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            m = max(m, a[i][j]);
        }
    }

    int k = -1e+9 - 10;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] == m){
                a[i][j] = k;
            }
        }
    }

    m = a[0][0];

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            m = max(m, a[i][j]);
        }
    }

    if(m == k){
        cout << 0 << endl;
    }else{
        cout << m << endl;
    }

    return 0;
}