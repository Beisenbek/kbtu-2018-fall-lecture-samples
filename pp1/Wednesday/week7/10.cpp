#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

int main(){

    string s = "64";
    char c[s.size()];
    for(int i = 0; i < s.size(); ++i){
        c[i] = s[i];
    }

    int x = atoi(c);

    cout << sqrt(x) << endl;

    return 0;
}