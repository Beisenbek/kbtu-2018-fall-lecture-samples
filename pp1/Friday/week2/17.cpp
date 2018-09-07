#include <iostream>

using namespace std;

int main(){

    int x = 1;
    
    for(;;){
        cout << x << " ";
        x = x + 1;

        if(x == 101) break;
    }

    return 0;
}