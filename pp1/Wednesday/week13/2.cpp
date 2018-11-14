#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7, 11};
    int n = sizeof(a) / sizeof(int);

    rotate(a, a + 3, a + n);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " "; 
    }

    cout << endl;


    return 0;
}
