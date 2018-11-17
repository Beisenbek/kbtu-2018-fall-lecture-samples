#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

int main(){

    map<string, int> m;
    map<string, int> :: iterator it;

    string name;
    int points;

    while(cin >> name >> points){
        if(m[name] < points){
            m[name] = points;
        }
    }

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " "  << (*it).second << endl;
    }


    return 0;
}