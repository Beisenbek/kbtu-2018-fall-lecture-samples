#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    int dif = 1e+6;
    int r = 0;
    int c = 0;

    for(int a = 1; a <= n; ++a){
        if(n % a == 0){
            int b = n / a;
            if(a <= b){
                if(abs(b - a) < dif){
                    r = a;
                    c = b;
                    dif = abs(b - a);
                }
            }
        }
    }

    cout << r << " " << c << endl;


    return 0;
}