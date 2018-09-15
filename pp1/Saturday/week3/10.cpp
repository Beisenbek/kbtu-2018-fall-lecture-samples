#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i = i + 1){
        cin >> a[i];
    }

    int s = 0;

    for(int i = 0; i < n; i = i + 1){
        if(i % 2 == 1) continue;
        s = s + a[i];
    }

    cout << s << endl;

    return 0;
}