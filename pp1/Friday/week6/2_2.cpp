#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int minEl = a[0];
    int maxEl = a[0];


    for(int i = 1; i < n; ++i){
       minEl = min(minEl, a[i]);
       maxEl = max(maxEl, a[i]);
    }

    cout << maxEl;//max
    cout << minEl;//min

    return 0;
}