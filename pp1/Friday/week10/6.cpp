#include <iostream>
#include <vector>

using namespace std;

int main(){
  
    vector<int> v;

    int x;

    while(cin >> x){
        v.push_back(x);
    }
    
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << " ";
    }

    return 0;
}
