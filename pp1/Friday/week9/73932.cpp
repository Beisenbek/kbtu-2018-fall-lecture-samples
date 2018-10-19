#include <iostream>
#include <algorithm>

using namespace std;

int f(int x1, int x2){
    return abs(x2 - x1);
}

int main(){

    int n;
    cin >> n;

    int x;
    int px;
    cin >> px;

    int s = 0;

    for(int i = 1; i < n; ++i){
        cin >> x;
        s += f(px, x);
        px = x;
    }

    cout << s << endl;

    return 0;
}