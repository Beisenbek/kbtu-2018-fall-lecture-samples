#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int n, x;
vector<int> v;

void readInput(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }
}

void printOutput(){
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    cout << endl;
}

void f(int x){
    cout << 2 * x << " ";
}

int main(){

    readInput();

    for_each(v.begin(), v.end(), f);

    return 0;
}