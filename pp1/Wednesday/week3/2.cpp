#include <iostream>

using namespace std;

int main(){

    int a[5];

    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    a[3] = 2;
    a[4] = 4;

    int s = a[0] + a[1] + a[2] + a[3] + a[4];

    cout << s << endl;
    
    return 0;
}