#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int a[] = {1, 2, 3, 1, 1, 1, 1, 1, 5, 6, 7, 11, 11, 11, 12};
    int n = sizeof(a) / sizeof(int);

    vector<int> v(a, a + n);
    vector<int>::iterator it, it2;

    it2 = unique(v.begin(), v.end());

    for(it = v.begin(); it != it2; ++it){
        cout << *it << " "; 
    }

    cout << endl;

    return 0;
}
