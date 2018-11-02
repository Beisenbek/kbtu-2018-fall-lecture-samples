#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){

    map<string, int> m;
    vector<string> v;

    string str;
    int n;

    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> str;
        m[str] = str.size();
        v.push_back(str);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " " << m[v[i]] << endl;
    }

    return 0;
}
