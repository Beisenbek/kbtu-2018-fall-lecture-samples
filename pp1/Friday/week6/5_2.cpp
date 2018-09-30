#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    char c[1000];
    int i = 0;

    while(cin >> c[i]){
        if(c[i] == '0') break;
        i++;
    }

    for(int j = 0; j < i; ++j){
        cout << c[j];
    }
    
    return 0;
}