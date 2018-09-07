#include <iostream>

using namespace std;

int main(){


    for(int i = 1; i <= 100; i = i + 1){
        if(i % 2 == 0) continue;
        cout << i << " ";  
        cout << "ok" << endl;
    }    

    return 0;
}