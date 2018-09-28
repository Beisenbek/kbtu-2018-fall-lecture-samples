#include <iostream>

using namespace std;

int main(){


    int n;
    cin >> n;
    
    bool a[n + 1];

    for(int i = 2; i <=n; ++i){
        a[i] = true;
    }

    for(int i = 2; i <= n;++i){
        if(a[i] == true){
            int x  =  i;
            while(x + i <= n){
                x = x + i;
                a[x] = false;
            }
        }
    }

    for(int i = 2; i <=n; ++i){
        cout << i << "=>" << a[i] << endl;
    }

    return 0;
}   