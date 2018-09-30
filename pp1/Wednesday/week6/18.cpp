#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s = "test";

    s.append(10,'!');

    cout << s << endl;

    return 0;
} 