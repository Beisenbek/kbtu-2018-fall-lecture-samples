#include<iostream>
#include<map>
#include<vector>

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
    return s + "_" + f(x);
}

string key2(string s){
    size_t pos = s.find("_");
    return s.substr(0, pos);
}

int main(){

    map<string, int> m;
    vector<string> v;

    int n;
    cin >> n;
    int x1, x2;
    string sname;

    for(int i = 1; i <= n; ++i){
        cin >> sname >> x1 >> x2;
        string k = key(sname, i);
        m[k] = x1 + x2;
        v.push_back(k);
    }

    for(int i = 0; i < v.size(); ++i){
        sname = v[i];
        cout << key2(sname) << " " << m[sname] << endl;
    }
    
       
    return 0;
}