#include <iostream>

using namespace std;

int a[100];

int f(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    return f(n-1) + f(n-2);
}

int f2(int x){
    if(a[x] != -1) return a[x];
    a[x] = f2(x-1) + f2(x-2);
    return a[x];
}


int main(){

    for(int i = 2; i < 100; ++i){
        a[i] = -1;
    }
    a[0] = 0;
    a[1] = 1;

    int n;
    cin >> n;
    cout << f2(n) << endl;

    return 0;
}

//f(5) = f(4) + f(3)
//f(4) = f(3) + f(2)
//f(3) = f(2) + f(1)
//f(3) = f(2) + f(1)
//f(2) = f(1) + f(0)
//f(2) = f(1) + f(0)
//f(1) = 1
//f(2) = f(1) + f(0)
//f(1) = 1
//f(1) = 1
//...