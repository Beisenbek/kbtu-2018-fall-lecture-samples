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

    sort(a + 1, a + n);

    for(int i = 0; i <n; ++i){
        cout << a[i] << " ";
    }

    return 0;
}