#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int x = 1;

    while(x < n){
        x *= 2;
    }

    if(x == n){
        cout << "yes";
    }else{
        cout << "no";
    }

    return 0;
}