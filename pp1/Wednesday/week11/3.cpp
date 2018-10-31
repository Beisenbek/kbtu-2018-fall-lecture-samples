#include<iostream>
#include<map>

using namespace std;


int main(){

    int n;
    cin >> n;
    string f, i, o;
    map<string, pair<string, string> > m;

    for(int j = 0; j < n; ++j){
        cin >> f >> i >> o;
        //m.insert(make_pair(f, make_pair(i, o)));
        m[f] = make_pair(i, o);
    }


    map<string, pair<string, string> > :: iterator it;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second.second << endl;
    }




    return 0;
}

