#include <iostream>

using namespace std;

int main(){

    int a[] = {1, 3, 5, 2, 4};

    int s = 0;

    for(int i = 0; i < 5; i = i + 1){
        s = s + a[i];
    }

    cout << s << endl;
    
    return 0;
}