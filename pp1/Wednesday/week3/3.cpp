#include <iostream>

using namespace std;

int main(){

    int a[5];

    a[0] = 1;
    a[1] = 3;
    a[2] = 5;
    a[3] = 2;
    a[4] = 4;

    int s = 0;

    for(int i = 0; i < 5; i = i + 1){
        s = s + a[i];
    }

    cout << s << endl;
    
    return 0;
}