#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int a[] = {1, 2, 3, 1, 1, 1, 1, 1, 5, 6, 7, 11, 11, 11, 12};
    int n = sizeof(a) / sizeof(int);

    int x = *unique(a, a + n);

    cout << x << endl;

    cout << endl;

    return 0;
}
