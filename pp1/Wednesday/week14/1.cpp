#include<iostream>
#include<vector>

using namespace std;

int main(){

    pair<int, pair<int, int> > p1;
    p1.first = 10;//x
    p1.second.first = 20;//y
    p1.second.second = 30;//z

    vector<pair<int, pair<int, int> > > v;
    v.push_back(p1);
    v.push_back(make_pair(20,make_pair(100,200)));

    for(int i = 0; i < v.size(); ++i){
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
    }

    return 0;
}