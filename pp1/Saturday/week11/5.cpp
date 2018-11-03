#include<iostream>
#include<map>
#include<set>

using namespace std;

int main(){
    map<int, set<string> > m; 

    m[0].insert("Bob");
    m[0].insert("Bobby");
    m[0].insert("B");

    m[7].insert("Bond");
    m[7].insert("James Bond");
    m[7].insert("Agent 007");

    map<int, set<string> > :: iterator it;
    set<string>:: iterator it2;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first  << ": ";
        set<string> s = (*it).second;
        for(it2 = s.begin(); it2 != s.end(); ++it2){
            cout << *it2 << " ";
        }
        cout << endl;
    }


    return 0;
}