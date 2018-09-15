#include <iostream>

using namespace std;


int main(){

    int n;
    cin >> n;
    char a[n];

    for(int i = 0; i < n; i = i + 1){
        cin >> a[i];
    }

    for(int i = 0; i < n; i = i + 1){
        bool found = false;
        
        for(int j = i - 1; j >= 0; j = j - 1){
            if(a[i] == a[j]){
                found = true;
                break;
            }
        }
        
        if(found == false){
            cout << a[i] << " ";
        }
    }

    cout << endl;

    return 0;
}