#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    if(n > 2){
        int x = 2;
        int y = n - 2;
        if(y % 2 == 0){
            cout << "YES";
        }else{
            cout << "NO";
        }
    }else{
        cout << "NO";
    }

    return 0;
}