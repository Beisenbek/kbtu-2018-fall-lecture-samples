#include <iostream>

using namespace std;

int main(){

    int x;
    int cnt = 0;
    cin >> x;

    for(int i = 1; i <= x; i = i + 1){
        if(x % i == 0){
            cnt = cnt + 1;
        }
    }

    cout << cnt << endl;

    return 0;
}