#include <iostream>

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

    int minEl = 1e+6;
    int maxEl = -1e+6;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            minEl = min(minEl, a[i][j]);
            maxEl = max(maxEl, a[i][j]);
        }
    }    

    cout << "=====================" << endl;

    cout << minEl << endl;
    cout << maxEl << endl;

    cout << "=====================" << endl;


    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    cout << "=====================" << endl;

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            if(a[i][j] == minEl){
                a[i][j] = maxEl;
            }
        }
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < m; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
