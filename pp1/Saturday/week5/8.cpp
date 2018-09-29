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

    int minEl = a[0][0];
    int maxEl = a[0][0];

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
            minEl = min(minEl, a[i][j]);
            maxEl = max(maxEl, a[i][j]);
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
          if(a[i][j] == minEl){
              a[i][j] = maxEl;
          }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
          cout << a[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}