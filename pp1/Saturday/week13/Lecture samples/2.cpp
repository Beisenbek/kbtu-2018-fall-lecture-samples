#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> v;

    for(int i = 0; i <= 10; ++i){
        v.push_back(i);
    }

    rotate(v.begin(), v.begin() + 1, v.end());

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    cout << endl;


    return 0;
}

