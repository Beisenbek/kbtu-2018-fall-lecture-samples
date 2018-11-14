#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int a[] = {1, 2, 3, 4};
    int n = sizeof(a) / sizeof(int);

    int cnt = 0;
    while(next_permutation(a, a + n)){
        cnt++;
        cout << cnt << endl;
        for(int i = 0; i < n; ++i){
            cout << a[i] << " "; 
        }
        cout << endl;
    }

    return 0;
}
