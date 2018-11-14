#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n, x;
    vector<int> v;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    int k;
    cin >> k;

    int l, r;
    cin >> l >> r;

    vector<int> :: iterator it = v.begin();
    v.erase(it + k - 1);
    v.erase(it + l - 1, it + r);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}