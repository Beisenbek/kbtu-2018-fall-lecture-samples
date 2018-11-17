#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n];

    fill(a, a + n, -100);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    cout << endl;


    return 0;
}

