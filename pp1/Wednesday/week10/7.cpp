#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<vector<int> > v;

    vector<int> t1;
    t1.push_back(2);
    t1.push_back(1);

    vector<int> t2;
    t2.push_back(20);
    t2.push_back(-1);
    t2.push_back(-10);

    v.push_back(t1);
    v.push_back(t2);

    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v[i].size(); ++j){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }



    return 0;
}
