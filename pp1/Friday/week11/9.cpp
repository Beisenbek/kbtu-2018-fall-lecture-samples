#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, string> m;
    map<string, string> ::iterator it;

    int n;
    cin >> n;
    string key, value;

    for(int i = 0; i < n; ++i){
        cin >> key >> value;
        m[key] = value;
    }

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
