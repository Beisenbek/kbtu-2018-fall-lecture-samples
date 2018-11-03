#include<iostream>
#include<map>

using namespace std;

string f(int x){
    string res = "";
    while(x > 0){
        res = char((x % 10) + 48) + res;
        x = x / 10;
    }
    return res;
}

string key(string s, int x){
    return f(x) + "_" + s;
}

string key2(string s){
    size_t pos = s.find("_");
    return s.substr(pos + 1);
}

int main(){

    map<string, int> m;
    map<string, int> :: iterator it;

    int n;
    cin >> n;
    int x1, x2;
    string sname;

    for(int i = 1; i <= n; ++i){
        cin >> sname >> x1 >> x2;
        string k = key(sname, i);
        m[k] = x1 + x2;
    }

    for(it = m.begin(); it != m.end(); ++it){
        cout << key2((*it).first) << " " << (*it).second << endl;
    }

    
       
    return 0;
}