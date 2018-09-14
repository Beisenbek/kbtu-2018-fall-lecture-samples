#include <iostream>

using namespace std;


int main(){

    int x;
    cin >> x;
    bool f = true;

    for(int i = 2; i < x; i = i + 1){
        if(x % i == 0){
            f = false;
            break;
        }
    }

    if(f == true && x != 1 && x != 0){
        cout << "Yes";
    }else{
        cout << "No";
    }

    return 0;
}
