#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;

    int a[n];

    for(int i = 0; i < n; i = i + 1){
        cin >> a[i];
    }


    for(int i = 0; i < n; i = i + 1){
        if(i % 2 == 1) continue;
        cout << a[i] << " ";
    }

    return 0;
}
