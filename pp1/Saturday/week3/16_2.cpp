#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i = i + 1){
        cin >> a[i];
    }

    for(int i = 0; i < n/2; i = i + 1){
        swap(a[i], a[n-1-i]);
    }

    for(int i = 0; i < n; i = i + 1){
       cout << a[i] <<" ";
    }

    cout << endl;


    return 0;
}