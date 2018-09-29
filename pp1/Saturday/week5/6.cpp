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

    int p = -1e+7;

    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; ++j){
            //p = max(p, a[i][j]);
            if(p < a[i][j]){
                p = a[i][j];
            }
        }
    }

    cout << p << endl;



    return 0;
}