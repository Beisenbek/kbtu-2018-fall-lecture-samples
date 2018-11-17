#include<iostream>
#include<algorithm>
#include<cstdlib>

using namespace std;

int f(){
    return rand() % 10;
}

int main(){

    srand(time(0));


    int n;
    cin >> n;
    int a[n];

    generate(a, a + n, f);

    for(int i = 0; i < n; ++i){
        cout << a[i] << " ";
    }

    cout << endl;
    return 0;
}

