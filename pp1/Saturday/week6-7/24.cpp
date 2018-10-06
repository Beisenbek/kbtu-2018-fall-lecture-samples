#include <iostream>

using namespace std;

int apb(int a, int b){
    int c = a + b;
    return c;    
}

int main(){
    int x,y;
    cin >> x >> y;

    cout << apb(x, y);

    return 0;
}