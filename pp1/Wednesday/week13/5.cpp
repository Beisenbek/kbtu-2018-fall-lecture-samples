#include<iostream>
#include<algorithm>

using namespace std;

void f(int x){
    cout << 2 * x  << " ";
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7, 11};
    int n = sizeof(a) / sizeof(int);

    for_each(a, a + n, f);


    return 0;
}
