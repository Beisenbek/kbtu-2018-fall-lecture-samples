#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    bool a[n + 1];

    for(int i = 2; i <=n; i = i + 1){
        a[i] = true;
    }

    a[0] = a[1] = false;

    for(int i = 2; i <=n; i = i + 1){
        if(a[i] == true){
            int x = i;
            while(x + i <= n){
                x = x + i;
                a[x] = false;
            }
        }
    }


    //for(int i = 1; i <= n; i = i + 1){
    //    cout << i << " " << a[i] << endl;
    //}

    if(a[n] == true){
        cout << "Yes";
    }else{
        cout << "No";
    }
    
    return 0;
}
