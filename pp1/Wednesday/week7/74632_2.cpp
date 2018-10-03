#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

int f(int n){
    if(n == 0) return 0;
    return n % 10 + f(n / 10);
}

int main(){

    int n;
    cin >> n;

    cout << f(n);

    return 0;
}