#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v;

    int n, k;
    cin >> n >> k;

    for(int i = 0; i < n; ++i){
        v.push_back(i);
    }

    for(int i = k - 1; v.size() > 1; i += k){
        i = i % v.size();
        cout << i << endl;
        v.erase(v.begin() + i);
        i--;
    }

    cout << v[0] << endl;

    return 0;
}
