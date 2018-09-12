#include <iostream>

using namespace std;

int main(){

    int a, i;
    cin >> a >> i;

    int x = 1 << i;
    int b = a ^ x;

    cout << b << endl;

    return 0;
}