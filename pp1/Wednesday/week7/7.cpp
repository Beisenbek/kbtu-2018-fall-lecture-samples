#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

int main(){

    stringstream ss;
    string s;
    cin >> s;

    ss << s;
    int x;
    ss >> x;

    cout << sqrt(x) << endl;


    return 0;
}