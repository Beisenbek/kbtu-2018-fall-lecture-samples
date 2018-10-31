#include<iostream>
#include<algorithm>

using namespace std;

bool f(int a, int b){
    if(a < b) return false;
    return true;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, -1};

    sort(a, a + 7, f);

    for(int i = 0; i < 7; ++i){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}


