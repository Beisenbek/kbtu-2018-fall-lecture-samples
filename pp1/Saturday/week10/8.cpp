#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    vector<int> v;

    int x;
    while(cin >> x){
        v.push_back(x);
    }

    cout << v.size() << endl;
    
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}