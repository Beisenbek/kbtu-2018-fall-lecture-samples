#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;

    bool isPrime[x + 1];

    for(int i = 0; i <=x; i = i + 1){
        isPrime[i] = true;
    }

    isPrime[0] = isPrime[1] = false;

    for(int i = 2; i <= x; i = i + 1){
        if(isPrime[i] == true){
            int z = i;
            while(z + i <= x){
                z = z + i;
                isPrime[z] = false;
            }
        }
    }

    /*for(int i = 0; i <=x; i = i + 1){
        cout << i << " " << isPrime[i] << endl;
    }*/

    if(isPrime[x]){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }

    return 0;
}