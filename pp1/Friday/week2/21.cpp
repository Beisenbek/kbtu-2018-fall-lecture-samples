#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x;
    int m = -(1 << 30);

    cout << m << endl;

    for(int i = 1; i <= n; i = i + 1){
        cin >> x;
        if(x > m){
            m = x;
        }
    }

    cout << m << endl;

    return 0;
}