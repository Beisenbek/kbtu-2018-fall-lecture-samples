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

    vector<int>::iterator it = v.begin() + 2;

    cout << *it << endl;


    return 0;
}