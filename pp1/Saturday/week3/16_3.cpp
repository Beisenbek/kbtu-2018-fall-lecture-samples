#include <iostream>
#include <algorithm>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; i = i + 1){
        cin >> a[i];
    }

    reverse(a, a + n);

    for(int i = 0; i < n; i = i + 1){
       cout << a[i] <<" ";
    }

    cout << endl;


    return 0;
}