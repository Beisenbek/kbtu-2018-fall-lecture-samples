#include <iostream>

using namespace std;

int main(){

    char c;
    cin >> c;

    if(c <= '9' && c >= '0'){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}