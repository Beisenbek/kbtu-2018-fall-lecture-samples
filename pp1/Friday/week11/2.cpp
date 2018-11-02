#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m["test"] = 4;
    m["test2"] = 5;
    m["test11"] = 6;
    m["abcd"] = 4;

    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }



    return 0;
}
