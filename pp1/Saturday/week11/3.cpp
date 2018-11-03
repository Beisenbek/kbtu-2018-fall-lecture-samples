#include<iostream>
#include<map>

using namespace std;

int main(){

    map<string, int> m; 
    m["test"] = 4;
    m["xyzt"] = 4;
    m["xtest"] = 5;
    m["atest1"] = 6;

    map<string, int> :: iterator it;

    int x;
    cin >> x;

    for(it = m.begin(); it != m.end(); ++it){
        if((*it).second == x){
            cout << (*it).first << endl;
        }
    }

    return 0;
}