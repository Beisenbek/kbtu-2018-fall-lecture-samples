#include<iostream>
#include<algorithm>

using namespace std;

bool f(int l, int r){
    if(l > r) return true;
    return false;
}

int main(){

    int a[] = {1, 4, 5, 3, 2, 100};

    int n = sizeof(a) / sizeof(int);

    sort(a, a + n, f);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }



    return 0;
}