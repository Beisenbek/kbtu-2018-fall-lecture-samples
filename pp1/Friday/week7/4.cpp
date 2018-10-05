#include <iostream>
#include <sstream>
#include <cmath>

using namespace std;

int main(){

    string s;
    cin >> s;

    int x = 0;
    int p = 1;

    for(int i = s.size() - 1; i >=0; --i){
        int d = (s[i] - '0');
        x = x + d * p;
        p = p * 10;
    }

    cout << sqrt(x) << endl;
    
    return 0;
}