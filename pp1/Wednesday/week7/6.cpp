#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

int main(){

    string s = "64";

    int x = s[0] - int('0'); 
    int y = s[1] - int('0'); 

    cout << sqrt(x * 10 + y);



    return 0;
}