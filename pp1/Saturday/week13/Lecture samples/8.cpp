#include<iostream>
#include<algorithm>
#include<cstdlib>

using namespace std;

int f(){
    return rand() % 1000;
}

int main(){

    srand(time(0));

    int n;
    cin >> n;
    int a[n];

    generate(a, a + n, f);


    sort(a, a + n);

    do{
        for(int i = 0; i < n; ++i){
            cout << a[i] << " ";
        }
        cout << endl;
    }while(next_permutation(a, a + n));

    return 0;
}

