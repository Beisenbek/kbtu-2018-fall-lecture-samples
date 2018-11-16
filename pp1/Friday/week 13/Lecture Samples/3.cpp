#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){

    int n;
    cin >> n;
    int x;
    cin >> x;

    int a[n];

    fill(a, a + n, x);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }
    
    cout << endl;
    
    return 0;
}