#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cin >> n;
    int b[n];

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }


    sort(b + 1, b + n);

    for(int i = 0; i < n; ++i){
        cout << b[i] << " ";
    }


    return 0;
}