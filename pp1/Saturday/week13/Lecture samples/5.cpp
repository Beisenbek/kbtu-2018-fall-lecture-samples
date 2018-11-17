#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void f(int x){
    cout << 2 * x << " ";
}

int main(){

    int a[] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 4, 1, 1, 1, 1, 2, 2, 2};
    int n = sizeof(a) / sizeof(int);

    for_each(a, a + n, f);

    cout << endl;

    return 0;
}

