#include <iostream>
#include <algorithm>

using namespace std;

int f(int n, int s, int m){
    if(n == m) return s; 
    return f(n + 1, s + n, m);
}

int main(){

    int n;
    cin >> n;

    cout << f(1, 0, n + 1);

    int s = 0;
    for(int i = 1; i <= 100; ++i){
        s = s + i;
    }

    return 0;
}