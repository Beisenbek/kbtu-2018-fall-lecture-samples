#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int k = 0;

    for(int i = 1; i <= n; i = i + 1){
        if(n % i == 0){
            k = k + 1;
        }
    }

    cout << k << endl;

    return 0;
}