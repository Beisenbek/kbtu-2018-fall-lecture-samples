#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s;
    cin >> s;

    sort(s.begin() + 1, s.end());

    cout << s << endl;

    return 0;
} 