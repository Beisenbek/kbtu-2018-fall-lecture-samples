#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> m;
    map<string, string> ::iterator it;
    pair<string, string> p1 = make_pair("userA", "pwdA");
    pair<string, string> p2 = make_pair("userB", "pwdA");
    pair<string, string> p3 = make_pair("userC", "pwdA");
    pair<string, string> p4 = make_pair("userA", "pwdX");
    m.insert(p2);
    m.insert(p1);
    m.insert(p3);
    m.insert(p4);

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
