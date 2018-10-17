#include<iostream>

using namespace std;

int f(int n){
    int s = 0;

    for(int i = 1; i <= n; ++i){
        s = s + i;
    }

    return s;
}

int main(){

    cout << f(10) << endl;

    return 0;
}