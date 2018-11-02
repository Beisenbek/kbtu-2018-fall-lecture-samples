#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;

    int n;
    cin >> n;
    string str;
    for(int i = 0; i < n; ++i){
        cin >> str;
        m[str] = str.size();
    }

    map<string, int>::iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
