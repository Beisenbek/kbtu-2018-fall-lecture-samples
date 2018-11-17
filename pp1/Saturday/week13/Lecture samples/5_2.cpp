#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

void f(int x){
    cout << 2 * x << " ";
}

int main(){

    int a[] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 4, 1, 1, 1, 1, 2, 2, 2};
    int n = sizeof(a) / sizeof(int);
    set<int> s(a, a + n);

    for_each(s.begin(), s.end(), f);

    cout << endl;

    return 0;
}

