#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s;
    cin >> s;

    s.erase(4,3);

    cout << s << endl;

    return 0;
}