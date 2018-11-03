#include<iostream>
#include<algorithm>

using namespace std;

bool f(pair<int, int> l, pair<int, int> r){
    if(l.first > r.first) return false;
    
    if(l.first == r.first && 
        l.second > r.second) return false;

    return true;
}

int main(){

    int n;
    cin >> n;

    pair<int, int> p[n];
    int x, y;

    for(int i = 0; i < n; ++i){
        cin >> x >> y;
        p[i] = make_pair(x, y);
    }

    sort(p, p + n, f);

    for(int i = 0; i < n; ++i){
        cout << p[i].first << " " << p[i].second << endl;
    }

    return 0;
}