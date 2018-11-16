#include<iostream>
#include<set>
#include<algorithm>

using namespace std;

int n, x;
set<int> v;

void readInput(){
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        v.insert(x);
    }
}

void f(int x){
    cout << 2 * x << " ";
}

int main(){

    readInput();

    for_each(v.begin(), v.end(), f);

    return 0;
}