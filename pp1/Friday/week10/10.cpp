#include <iostream>
#include <vector>

using namespace std;

void print(vector<int> * x){
    x->at(0) = -1000;
    for(int i = 0; i < x->size(); ++i){
        cout << x->at(i) << " ";
    }
}

int main(){
  
    vector<int> v;

    int x;

    while(cin >> x){
        if(x == 0) break;
        v.push_back(x);
    }

    print(&v);
    
    cout << "======" << endl;

    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
