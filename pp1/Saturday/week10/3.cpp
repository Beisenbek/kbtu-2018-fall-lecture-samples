#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v;

    int x;
    while(cin >> x){
        if(x == 0) break;
        v.push_back(x);
    }

    sort(v.begin(), v.end());

    cout << v.size() << endl;
    
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}