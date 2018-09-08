#include <iostream>
#include <vector>

using namespace std;

int sum(vector<int> * v){

    int res = 0;

    for(int i = 0; i < v->size(); ++i){
        res = res + v->at(i);
    }

    v->push_back(10);

    cout << "copy " << v->size() << endl;
    
    return res;
}

int main(){

    vector<int> v;

    int n, x;
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> x;
        v.push_back(x);
    }

    cout << sum(&v) << endl;

    cout << "origin " << v.size() << endl;


    return 0;
}