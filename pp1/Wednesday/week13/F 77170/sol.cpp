#include<map>
#include<iostream>

using namespace std;

map<string, int> m;
map<string, int> :: iterator it;


void printWithLength(int k){
    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        if(p.first.size() == k){
            cout << p.first << " ";
        }
    }
    cout << endl;
}

string getBestWithLength(int k){
    string res = "";

    for(it = m.begin(); it != m.end(); ++it){
        pair<string, int> p = *it;
        if(p.first.size() == k){
            if(m[p.first] > m[res]){
                res = p.first;
            }
        }
    }
    
    return res;
}

int main(){

    int n;

    cin >> n;
    string w;

    bool oks = false;
    bool okl = false;
    string sw = "", lw = "";

    for(int i = 0; i < n; ++i){
        cin >> w;
        if(oks == false || sw.size() > w.size()){
            sw = w;
            oks = true;
        }
        if(okl == false || lw.size() < w.size()){
            lw = w;
            okl = true;
        }
        m[w]++;
    }

    sw = getBestWithLength(sw.size());
    lw = getBestWithLength(lw.size());

    if(m[sw] >= m[lw]){
        cout << "My type!" << endl;
    }else{
        cout << "Not my type" << endl;
    }

    return 0;
}
