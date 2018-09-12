#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i = i + 1){
       cin >> a[i];
    }

    int k = 0;

    for(int i = 0; i < n; i = i + 1){
        if(a[i] >= 0){
            k = k + 1;
        }
    }

    cout << k << endl;

    return 0;
}