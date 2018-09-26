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

    int mi = 0;
    int mj = 0;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[mi][mj] < a[i][j]){
                mi = i;
                mj = j;
            }
        }
    }

    cout << mi + 1 << " " << mj + 1 << endl;


    return 0;
}   