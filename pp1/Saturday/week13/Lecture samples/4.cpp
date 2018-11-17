#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int a[] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 4, 1, 1, 1, 1, 2, 2, 2};
    int n = sizeof(a) / sizeof(int);

    vector<int> v(a, a + n);

    vector<int> :: iterator newend = unique(v.begin(), v.end());
    vector<int> :: iterator it;

    for(it = v.begin(); it != newend; ++it){
        cout << *it << " ";
    }    

    cout << endl;

    return 0;
}

