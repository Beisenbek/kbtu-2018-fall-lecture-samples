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

int main(){

    readInput();

    rotate(v.begin(), v.begin() + 2, v.end());

    printOutput();
    return 0;
}