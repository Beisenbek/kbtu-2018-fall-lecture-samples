#include<iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int h[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    bool isAlmostHappy = false;

    for(int i = 0; i < 14; ++i){
        if(n % h[i] == 0){
            isAlmostHappy = true;
            break;
        }
    }

    if(isAlmostHappy){
        cout << "YES";
    }else{
        cout << "NO";
    }

    return 0;
}   