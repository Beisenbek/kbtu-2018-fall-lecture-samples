#include <iostream>

using namespace std;


int main(){

    int a[10];

    for(int i = 0; i < 10; i = i + 1){
        a[i] = i;
    }

    for(int i = 0; i < 10; i = i + 1){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}