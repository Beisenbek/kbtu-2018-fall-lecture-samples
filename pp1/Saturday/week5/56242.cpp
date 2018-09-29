#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int sum = 0;

    char c;

    for(int i = 0; i < n; ++i){
        cin >> c;
        sum = sum + int(c);
    }

    cout << sum << endl;

    return 0;
}