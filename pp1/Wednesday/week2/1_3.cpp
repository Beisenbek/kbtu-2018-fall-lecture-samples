#include <iostream>

using namespace std;

int main(){

    int a,b,c;
    cin >> a >> b >> c;

    bool f1 = a + b > c;
    bool f2 = a + c > b;
    bool f3 = c + b > a;

    //f1 - ...
    //f2 - ...
    if(f1 and f2 and f3){
        cout << "OK" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}