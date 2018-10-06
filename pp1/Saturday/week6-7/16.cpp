#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

    string s;
    cin >> s;

    char c[s.size()];
    s.copy(c, s.size(), 0);

    cout << c << endl;
    cout << s.c_str() << endl;

    return 0;
}


/**/