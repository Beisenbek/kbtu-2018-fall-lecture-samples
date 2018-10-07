#include <iostream>

using namespace std;

void print(int x, int n){
    for(int i = 0; i < n; ++i){
        cout << x << " ";
    }
}

int main(){

    int n, x;

    cin >> x >> n;

    print(x, n);

    return 0;2 20
}