#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    string s = "";

    do{
        s = char(n % 2 + 48) + s;
        n /= 2;
    }while(n > 0);

    cout << s << endl;

    return 0;
}