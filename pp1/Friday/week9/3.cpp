#include <iostream>
#include <algorithm>

using namespace std;

int a[100];

int f(int i){
    if(a[i] != -1) return a[i];
    a[i] = f(i-1) + f(i-2);
    return a[i];
}

int main(){

    for(int i = 0; i < 100; ++i){
        a[i] = - 1;
    }
    a[0] = 0;
    a[1] = 1;

    int n;
    cin >> n;

    cout << f(n);

    return 0;
}