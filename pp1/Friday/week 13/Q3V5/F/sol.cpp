#include<iostream>

using namespace std;

int main(){

    int cnt = 0;
    int x;
    
    while(cin >> x){
        if(x == 0){
            cnt++;
        }else{
            cout << x  << " ";
        }
    }

    for(int i = 0; i < cnt; ++i){
        cout << "0 ";
    }

    return 0;
}