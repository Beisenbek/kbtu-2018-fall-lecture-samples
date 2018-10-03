#include<iostream>

using namespace std;

int main(){

    string s = "hello";

    cout << s.substr(0,4) << endl;
    cout << s.substr(2) << endl;//suffix from pos = 2 to end

    return 0;
}