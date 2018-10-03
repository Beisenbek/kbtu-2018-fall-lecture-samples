#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

int main(){

    string s = "64";
    char c[s.size()];
    
    s.copy(c, s.size(), 0);

    int x = atoi(c);

    cout << sqrt(x) << endl;

    return 0;
}