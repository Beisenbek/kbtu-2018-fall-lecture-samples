#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i = i + 1){
        cin >> a[i];
    }

    int m = n;

    if(m % 2 == 1){
        m = m - 1;
    }

    for(int i = 0; i < m; i = i + 2){
        swap(a[i],a[i+1]);
    }

    for(int i = 0; i < n; i = i + 1){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}