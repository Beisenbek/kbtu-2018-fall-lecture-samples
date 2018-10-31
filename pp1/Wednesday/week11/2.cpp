#include<iostream>
#include<map>

using namespace std;


int main(){

    map<string, int> m;
    pair<string, int> p2 = make_pair("orange", 6);
    pair<string, int> p1 = make_pair("apple", 5);

    m.insert(p1);
    m.insert(p2);
    m.insert(make_pair("potato", 6));
    m["onion"] = 5;

    map<string, int> :: iterator it;

    for(it = m.begin(); it != m.end(); it++){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}

