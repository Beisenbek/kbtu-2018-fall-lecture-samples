#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

bool f(int x){
    if(x % 2 == 0) return true;
    return false;
}

int main(){

    vector<int> v;

    for(int i = 0; i <= 10; ++i){
        v.push_back(i);
    }

    int k = count_if(v.begin(), v.end(), f);

    
    cout << k << endl;

    return 0;
}