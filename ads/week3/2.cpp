#include <iostream>
#include <algorithm>

using namespace std;

int a[] = {1, 2, 4, 5, 7, 23, 40, 100, 101};

bool find(int x, int l, int r){
    if(l > r) return false;
    int m = (l + r) / 2;
    if(a[m] == x) return true;
    else if(a[m] > x) return find(x, l, m - 1);
    else return find(x, m + 1, r);
}

int main(){
    int x;
    cin >> x;

    if(find(x, 0, 8)){
        cout << "found!" << endl;
    }else{
        cout << "not found!" << endl;
    }

    return 0;
}