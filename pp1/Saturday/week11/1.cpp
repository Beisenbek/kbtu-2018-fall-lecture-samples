#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> m; 
    m["test"] = 4;
    m["xtest"] = 5;
    m["atest1"] = 6;

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}