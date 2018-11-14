#include<iostream>
#include<map>

using namespace std;

int main(){

    int n;
    cin >> n;

    string x, y;
    map<string, string > m;

    for(int i = 0; i < n; ++i){
        cin >> y >> x;
        m[x] = y;
    }

    int k;
    cin >> k;
    string s;
    for(int i = 0; i < k; ++i){
        cin >> s;
        cout << m[s] << endl;
    }

    return 0;
}