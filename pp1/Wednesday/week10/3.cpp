#include<iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    int n;
    cin >> n;

    for(int i = 2; i <= n; i += 2){
        v.push_back(i);
    }

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
