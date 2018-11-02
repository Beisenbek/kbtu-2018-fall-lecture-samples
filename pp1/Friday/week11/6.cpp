#include <iostream>
#include <map>
#include <set>

using namespace std;

set<char> vo;

int f(string s){
    int cnt = 0;
    for(int i = 0; i < s.size(); ++i){
        if(vo.find(s[i]) != vo.end()){
            cnt++;
        }
    }
    return cnt;
}

int main(){

    vo.insert('a');
    vo.insert('e');
    vo.insert('i');
    vo.insert('o');
    vo.insert('u');
    vo.insert('y');

    map<string, int> m;
    map<string, int>::iterator it;

    int n;
    cin >> n;
    string str;

    for(int i = 0; i < n; ++i){
        cin >> str;
        m[str] = f(str);
    }

    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
