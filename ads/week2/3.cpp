#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> v){

    cout << "copy " << &v << endl;
    int res = 0;

    for(int i = 0; i < v.size(); ++i){
        res = res + v[i];
    }
    
    return res;
}

int main(){

    vector<int> v;

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    cout << sum(v) << endl;

    cout << &v << endl;

    return 0;
}