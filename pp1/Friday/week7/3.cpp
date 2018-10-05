#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    string s = "6809800984";
    stringstream ss;
    ss << s;
    int x;
    ss >> x;
    cout << sqrt(x);

    return 0;
}