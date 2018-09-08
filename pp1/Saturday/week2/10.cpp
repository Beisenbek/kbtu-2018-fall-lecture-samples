#include <iostream>

using namespace std;

int main(){
    int i= 1;

    for(;;){
        cout << i << " ";
        i = i + 1;
        if(i == 101) break;
    }

    return 0;
}