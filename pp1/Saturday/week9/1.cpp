#include <iostream>

using namespace std;

int f(int n){
    if(n == 1) return 1;
    return n + f(n - 1);
}

int f2(int x, int n, int s){
    if(x > n) return s;
    return f2(x + 1, n, s + x);
}


int main(){

    int n;
    cin >> n;
    cout << f2(1, n, 0);

    return 0;
}