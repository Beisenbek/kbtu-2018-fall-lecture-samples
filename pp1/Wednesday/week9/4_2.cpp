#include<iostream>

using namespace std;

int a[1001];

int f(int n){
    if(a[n] != -1) return a[n];
    a[n] = f(n - 1) + f(n - 2);
    return a[n];
}

int main(){

    for(int i = 0; i < 1001; ++i){
        a[i] = -1;
    }

    a[0] = 0;
    a[1] = 1;

    int x;

    cin >> x;

    cout << f(x) << endl;


    return 0;
}