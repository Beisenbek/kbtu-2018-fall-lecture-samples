#include <iostream>

using namespace std;

int main(){
    int i= 1;

    for(int i = 1; i <=10; i = i + 1){
        if(i % 2 == 1) continue;
        cout << i << " ";
    }

    return 0;
}