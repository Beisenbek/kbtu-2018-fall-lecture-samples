#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int a[32000];

    int i = 0;

    while(i * i <= 1000000000){
        a[i] = i * i;
        i = i + 1;
    }

    int x;
    cin >> x;

    bool found = false;

    for(int i = 0; i <= 32000; ++i){
        if(x == a[i]){
            cout << "Yes" << endl;
            found = true;
            break;
        }
    }


    if(found == false){
        cout << "No" << endl;
    }
    

    return 0;
}
