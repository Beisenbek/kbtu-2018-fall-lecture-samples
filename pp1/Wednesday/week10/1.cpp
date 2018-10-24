#include<iostream>
#include <vector>

using namespace std;

int main(){

    vector<int> v;

    v.push_back(12);
    v.push_back(1);
    v.push_back(2);
    v.push_back(10);

    cout << v.size() << endl;

    return 0;
}
