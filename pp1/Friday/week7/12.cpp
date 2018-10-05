#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>

using namespace std;

int f(int i){
    if(i == 0) return 0;
    if(i == 1) return 1;
    return f(i-1) + f(i-2);
}

int main(){

    int n;
    cin >> n;

    cout << f(n);

    return 0;
}