#include <iostream>
#include <algorithm>

using namespace std;

int modadd(int a, int b, int x) {
       return (a + b ) % x;
}

int main(){
    int a, b, x;
    cin >> a >> b >> x;
    cout << modadd(a, b , x);
    return 0;
}