#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    bool ok = true;

    while(true){
        int r = n % 2;
        if(r == 0){
            n = n / 2;
        }else{
            if(n == 1){
               ok = true;
            }else{
                ok =false;
            }
            break;
        }
    }    

    if(ok){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}