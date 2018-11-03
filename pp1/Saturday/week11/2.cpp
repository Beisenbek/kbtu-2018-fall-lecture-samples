#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> m; 
    m["test"] = 4;
    m["xtest"] = 5;
    m["atest1"] = 6;

    cout << m["test"] << endl;

    return 0;
}