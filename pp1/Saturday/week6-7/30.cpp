#include <iostream>

using namespace std;

int f(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;

    int a0 = 0;
    int a1 = 1;

    int x;

    for(int i = 2; i<= n; ++i){
        x = a0 + a1;
        a0 = a1;
        a1 = x;    
    }

    return x;
}

int main(){

    int n;
    cin >> n;
    cout << f(n) << endl;

    return 0;
}

