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

    int k = -1e+9 - 10;
    int m1 = -1e+9 - 10;
    int m2 = -1e+9 - 10;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            if(a[i][j] > m1){
                m2 = m1;
                m1 = a[i][j];
            }else if(a[i][j] > m2 && a[i][j] != m1){
                m2 = a[i][j];
            }
        }
    }

    if(m2 == k){
        cout << 0 << endl;
    }else{
        cout << m2 << endl;
    }

    return 0;
}