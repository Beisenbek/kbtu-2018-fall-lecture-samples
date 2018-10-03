#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

int apb(int a, int b){
    return a + b;
}

int main(){

    int a,b;
    cin >> a >> b;

    cout << apb(a, b);

    return 0;
}