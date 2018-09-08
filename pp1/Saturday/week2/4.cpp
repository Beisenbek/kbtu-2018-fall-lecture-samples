#include <iostream>

using namespace std;

int main(){

    int x;
    cin >> x;   

    bool b = (x % 2 != 0);

    if(b){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}