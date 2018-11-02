#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    m["test"] = 4;
    m["test2"] = 5;
    m["test11"] = 6;
    m["abcd"] = 4;


    string s[] = {"test", "test2", "test11", "abcd"};

    for(int i = 0; i < 4; ++i){
        cout << s[i] << " " << m[s[i]] << " " << endl;
    }


    return 0;
}
