#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

int x;

int min4(int a, int b, int c, int d){
    return min(a, min(b, min(c, d)));
}

int main(){

    int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << min4(a, b, c, d);

    return 0;
}