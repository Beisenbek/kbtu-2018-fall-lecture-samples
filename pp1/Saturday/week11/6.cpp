#include<iostream>
#include<map>
#include<set>

using namespace std;

int main(){
    map<int, map<string, string> > m; 
    map<string, string> m2;
    m2["A"] = "AA";
    m[0] = m2;

    cout << m[0]["A"] << endl;

    return 0;
}