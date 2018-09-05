#include <iostream>

using namespace std;

int main(){
    int i = 1;
    
    for(int i = 0 ; i < 10; i = i + 1){
        if(i % 2 == 1) continue;
        cout << i << " ";  
        cout << "hello" << endl;   
    }

    return 0;
}