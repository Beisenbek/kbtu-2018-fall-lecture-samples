#include<iostream>
#include<algorithm>

using namespace std;

int g(int x){
    int cnt = 0;
    for(int i = 1; i <=x; ++i){
        if(x % i == 0){
            cnt++;
        }
    }
    return cnt;
}

bool f(int a, int b){
    int ka = g(a);
    int kb = g(b);

    if(ka < kb) return false;
    return true;
}

int main(){

    int a[] = {1, 2, 3, 4, 5, 6};

    sort(a, a + 6, f);

    for(int i = 0; i < 6; ++i){
        cout << a[i] << " ";
    }

    cout << endl;

    return 0;
}


