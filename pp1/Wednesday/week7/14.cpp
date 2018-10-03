#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

int main(){

   stringstream ss;

    ss << "123" << " " << "hello";

    cout << ss.str() << endl;

    return 0;
}