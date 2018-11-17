#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    vector<int> v;

    for(int i = n; i >=1; --i){
        if(n % i == 0){
            v.push_back(i);
        }
    }

    cout << v[k-1] << endl;

    return 0;
}