#include<iostream>
#include<map>

using namespace std;

int main(){

    int n;
    map<string, int> m;
    map<string, int> :: iterator it;

    cin >> n;
    string w;

    for(int i = 0; i < n; ++i){
        cin >> w;
        m[w]++;
    }

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }


    return 0;
}