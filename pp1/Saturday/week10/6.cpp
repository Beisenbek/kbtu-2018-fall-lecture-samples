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

    //sort(v.begin() + 1, v.end() - 1);
    sort(v.begin() + 1, v.begin() + v.size() - 1);

    cout << v.size() << endl;
    
    vector<int>::iterator it;

    for(it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    return 0;
}