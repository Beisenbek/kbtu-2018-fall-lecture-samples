#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    char c[1000];
    int i = 0;
    char x;

    while(cin >> x){
        if(x == '0') break;
        c[i] = x;
        i++;
    }

    sort(c, c + i);

    cout << c << endl;

    return 0;
}
