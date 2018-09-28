#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m = a[0];

    for(int i = 1; i < n; ++i){
        m = max(m, a[i]);
    }

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(a[i] == m){
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}