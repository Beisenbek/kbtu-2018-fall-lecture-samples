#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i = n + 1; i <= 9999; ++i){
        int d1 = i / 1000;
        int d2 = (i / 100) % 10;
        int d3 = (i / 10) % 10;
        int d4 = i % 10;

        if(d1 != d2 && d1 != d3 && d1 != d4){
            if(d2 != d3 && d2 != d4){
                if(d3 != d4){
                    cout << i << endl;
                    break;        
                }
            }
        }
    }

    return 0;
}