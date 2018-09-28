#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int a[10001];

    for(int i = 1; i <= 10000; ++i){
        a[i] = 0;
    }

    int x;
    int m = -1;
    for(int i = 0; i < n; ++i){
        cin >> x;
        m = max(m, x);
        a[x] = a[x] + 1;
    }

    cout << a[m] << endl;

    return 0;
}   