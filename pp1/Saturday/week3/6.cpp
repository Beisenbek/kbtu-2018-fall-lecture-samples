#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    int x;


    for(int i = 0; i < n; i = i + 1){
        cin >> x;
        if(x % 2 == 0) cout << x << " ";
    }

    cout << endl;

    return 0;
}