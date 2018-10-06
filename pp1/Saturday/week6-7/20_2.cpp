#include <iostream>

using namespace std;

int main(){

    string s;
    cin >> s;

    string t;
    cin >> t;


    s.insert(1, t);

    cout << s << endl;

    return 0;
}