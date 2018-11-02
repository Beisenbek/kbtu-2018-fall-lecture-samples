#include <iostream>
#include <map>

using namespace std;

int main(){

    map<string, int> m;
    map<string, int> ::iterator it;

    int n;
    cin >> n;
    string itemName;
    int itemCnt;

    for(int i = 0; i < n; ++i){
        cin >> itemName >> itemCnt;
        m[itemName] += itemCnt;
    }

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}
