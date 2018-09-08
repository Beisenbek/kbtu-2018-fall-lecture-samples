#include <iostream>

using namespace std;

int main(){

    int n;
    int x;
    int k = 0;

    cin >> n;

    for(int i = 1; i <= n; i = i + 1){
        cin >> x;
        if(x == 0){
            k = k + 1;
        }
    }

    cout << k << endl;

    return 0;
}