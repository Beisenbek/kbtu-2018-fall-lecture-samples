#include<iostream>
#include<algorithm>

using namespace std;

bool f(int x){
    if(x == 1) return false;
    int cnt = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            cnt++;
        }
    }
    if(cnt == 2) return true;
    return false;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6, 7, 11};
    int n = sizeof(a) / sizeof(int);

    int cnt = count_if(a, a + n, f);

    cout << cnt << endl;


    return 0;
}
