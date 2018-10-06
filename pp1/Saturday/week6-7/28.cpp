#include <iostream>

using namespace std;

int mpow(int a, int n){
   if(n == 0) return 1;
   return a * mpow(a, n-1);
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << mpow(a, b) << endl;

    return 0;
}

