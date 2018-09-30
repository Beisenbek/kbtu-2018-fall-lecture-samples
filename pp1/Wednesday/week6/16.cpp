#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    char c[3];
    c[0] = 'z';
    c[1] = 'y';
    c[2] = 't';

    sort(c + 0, c + 3);

    for(int i = 0; i < 3; ++i){
        cout << c[i];
    }

    return 0;
} 