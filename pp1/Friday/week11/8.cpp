#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> m;
    map<string, string> ::iterator it;
    m["userB"] = "pwdA";
    m["userA"] = "pwdA";
    m["userC"] = "pwdA";
    m["userA"] = "pwdX";

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
