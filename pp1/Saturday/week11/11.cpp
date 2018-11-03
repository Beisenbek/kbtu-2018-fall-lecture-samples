#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> m;

    m.insert(make_pair("test", 4));
    m.insert(make_pair("test", 5));

    m["test"] = 3;

    map<string, int>  :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}