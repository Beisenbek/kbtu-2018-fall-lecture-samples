#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    int n;
    cin >> n;
    int x;
    cin >> x;

    vector<int> v(n);

    fill(v.begin(), v.begin() + n, x);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }
    
    cout << endl;

    
    return 0;
}