#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    int a = x % 2;

    x = x / 2;

    int b = x % 2;
    x = x / 2;

    int c = x % 2;
    x = x / 2;

    int d = x % 2;

    cout << 8 * a + 4 * b + 2 * c + d << endl;

    return 0;
}