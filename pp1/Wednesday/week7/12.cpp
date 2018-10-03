#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

int main(){

    string s;
    cin >> s;

    int p = 1;
    int x = 0;

    for(int i = s.size() - 1; i >=0; --i){
        x = x + p * (s[i] - 48);
        p = p * 10;
    }

    cout << sqrt(x) << endl;

    return 0;
}