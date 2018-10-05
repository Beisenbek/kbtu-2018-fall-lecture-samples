#include <iostream>

using namespace std;

int main(){

    char c;
    cin >> c;

    int k = int(c);

    if(k <= 57 && k >= 48){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}