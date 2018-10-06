#include <iostream>

using namespace std;

int apb(int a, int b){
    int c = a + b;
    return c;    
}

int main(){
   int a, b;
    cin >> a >> b;

    cout << apb(b, a);

    return 0;
}

