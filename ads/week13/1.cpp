#include<iostream>
#include<vector>

using namespace std;


int main(){

    int n, m, x;
    cin >> n;

    vector<vector<int> > v;

    for(int i = 0; i < n; ++i){
        cin >> m;   
        vector<int> t;
        for(int j = 0; j < m; ++j){
            cin >> x;
            t.push_back(x);
        }
        v.push_back(t);
    }



    return 0;
}