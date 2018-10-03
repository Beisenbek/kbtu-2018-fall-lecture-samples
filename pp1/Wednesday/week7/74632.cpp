#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

int f(int n){
    int res = 0;

    while(n > 0){
        res =res + n % 10;
        n = n / 10;
    }

    return res;
}

int main(){

    int n;
    cin >> n;

    cout << f(n);

    return 0;
}