#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

int f(int x[], int size, int i){
    if(i == size) return 0;
    return x[i] + f(x, size, i + 1);
}

int main(){

     int n;
     cin >> n;
     int a[n];

     for(int i = 0; i < n; ++i){
         cin >> a[i];
     }

     cout << f(a, n, 0);

    return 0;
}