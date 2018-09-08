#include <iostream>

using namespace std;

int main(){

    int a, b, c;

    cin >> a >> b >> c;

    if(a > 0 && b > 0 && c > 0){
        cout << 3 << endl;
    }else if((a > 0 && b > 0) || (b > 0 && c > 0) || (a > 0 && c > 0)){
        cout << 2 << endl;
    }else if( a > 0 || b > 0 || c > 0){
        cout << 1 << endl;
    }else {
        cout << 0 << endl;
    }

    return 0;
}