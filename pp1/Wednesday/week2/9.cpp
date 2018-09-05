#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    if(n == 0){
        cout << 0 << endl;
    }
    else{
        while(n > 0){
            cout << n % 10 << endl;
            n = n / 10;
        }
    }

    return 0;
}