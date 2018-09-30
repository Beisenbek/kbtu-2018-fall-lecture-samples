#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s,t;
    char c[100];

    getline(cin, s);
    getline(cin, t);

    cout << s << endl;
    cout << t << endl;

    cout << s.length() << endl;
    cout << t.size() << endl;
    
    return 0;
}