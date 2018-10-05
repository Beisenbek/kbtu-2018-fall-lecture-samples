#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;


void f(){
    string s;
    cin >> s;

    int x = atoi(s.c_str());
    cout << sqrt(x) << endl;
}

int main(){

    f();

    return 0;
}