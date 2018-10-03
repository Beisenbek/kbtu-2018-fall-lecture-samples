#include<iostream>
#include<sstream>

using namespace std;

int main(){

    stringstream ss;
    ss << "test" << " "<< "ok";
    string s;

    getline(ss, s);

    cout << s << endl;

    s.clear();

    return 0;
}