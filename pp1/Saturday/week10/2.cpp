#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;
    
    char x;

    while(cin >> x){
        if(x == 0) break;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}