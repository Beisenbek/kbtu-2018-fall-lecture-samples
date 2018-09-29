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

    int s[n];

    for(int i = 0; i < n; i++){
        s[i] = 0;
        for(int j = 0; j < m; ++j){
                s[i] = s[i] + a[i][j];
        }
        cout << s[i] << endl;
    }


    return 0;
}