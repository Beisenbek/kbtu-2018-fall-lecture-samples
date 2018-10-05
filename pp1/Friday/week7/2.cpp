#include<iostream>
#include<sstream>

using namespace std;

int main(){

    string s;
    getline(cin, s);

    stringstream ss;
    ss << s;

    string t;

    while(ss >> t){
        cout << t << endl;
    }



    return 0;
}