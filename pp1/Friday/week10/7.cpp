#include <iostream>
#include <vector>

using namespace std;

int main(){
  
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

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
