#include <iostream>

using namespace std;


int main(){

    int x, d, n;
    cin >> x >> d >> n;

    int a[n];
    a[0] = x;

    for(int i = 1; i < n; i = i + 1){
        a[i] = a[0] + d * i;
    }

    for(int i = 0; i < n; i = i + 1){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}
