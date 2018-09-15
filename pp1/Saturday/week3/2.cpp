#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    
    int a[n];

    for(int i = 0; i < n; i = i + 1){
        a[i] = i;
    }

    for(int i = 0; i < n; i = i + 1){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}