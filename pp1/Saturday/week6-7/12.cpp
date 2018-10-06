#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){

    string str;
    cin >> str;

    int p = 1;
    int x = 0;

    for(int i = str.size() - 1; i >=0; --i){
        x = x + (int(str[i]) - 48) * p;
        p = p * 10;
    }

    cout << sqrt(x) << endl;

    return 0;
}


/**/