#include <iostream>

using namespace std;

int mpow(int a, int n){
    int res = 1;

    for(int i = 1; i <=n; ++i){
        res = res * a;
    }

    return res;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << mpow(a, b) << endl;

    return 0;
}

