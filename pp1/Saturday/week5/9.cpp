#include <iostream>

using namespace std;

int main(){

    int n;
    int m;
    cin >> n >> m;

    int a[n][m];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < n * m; ++i){
        int r = i / m;
        int c = i % m;

        //cout << "(" << r << "," << c << ") ";

        cout << a[r][c] << " ";
        if(c == m - 1){
            cout << endl;
        }
        
    }

    return 0;
}