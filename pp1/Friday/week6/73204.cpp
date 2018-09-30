#include<iostream>

using namespace std;

int main(){

    int n;
    int a[1001];

    for(int i = 1; i <= 1000; ++i){
        a[i] = 0;
    }

    cin >> n;
    int x;

    for(int i = 0; i < n; ++i){
        cin >> x;
        a[x] = a[x] + 1;
        if(a[x] == 2){
            cout << x << endl;
            break;
        }
    }

    return 0;
}