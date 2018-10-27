#include <iostream>

using namespace std;

int f(int x[], int l, int r){
    if(l == r) return x[l];
    int p = (l + r) / 2;
    return max(f(x, l, p), f(x, p + 1, r));
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    cout << f(a, 0, n - 1);

    return 0;
}

//1234
//l = 2
//r = 3
//p = 2
//f(s, 2, 2)
//f(s, 3, 3)
//01234