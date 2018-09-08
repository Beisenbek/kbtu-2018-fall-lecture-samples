#include <iostream>

using namespace std;

int main(){

    for(char x = 'A'; x <= 'Z'; x = x + 1){
        cout << x << " = " << int(x) << endl;
    }

    return 0;
}