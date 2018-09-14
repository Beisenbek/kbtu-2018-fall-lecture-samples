#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    cout << a[0] << " ";

    for(int i = 1; i < n; ++i){
        int j = i;
        while(j < n && a[j] == a[i-1]){
            j++;
        }
        if(j < n) cout << a[j] << " ";
    }

    return 0;
}
