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

bool isPrime(int x){
    if(x == 1) return false;
    int k = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            k++;
        }
    }
    return k == 2;
}

int main(){

    readInput();

    int cnt = count_if(v.begin(), v.end(), isPrime);

    cout << cnt << endl;
    
    return 0;
}