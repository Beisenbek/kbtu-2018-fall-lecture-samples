#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    if(x % 2 == 0){
        cout << "YES" << endl;
        cout << x << endl;
    }

    if(x % 2 == 1){
        cout << "NO" << endl;
        cout << x + 1 << endl;
    }
    return 0;
}