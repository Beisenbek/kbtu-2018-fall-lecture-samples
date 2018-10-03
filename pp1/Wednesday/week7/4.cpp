#include<iostream>
#include<sstream>

using namespace std;

int main(){

    stringstream ss;
    ss << "test" << " "<< "ok";
    string s;
    ss >> s;

    cout << s << endl;

    return 0;
}