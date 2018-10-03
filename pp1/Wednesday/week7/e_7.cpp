#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;

int main(){

    int n;
    cin >> n;

    char a[n][n];


    for(int i = 0; i < n; ++i){
        for(int j = 0; j <n; ++j){
            a[i][j] = '*';        
        }
    }

    for(int i = 0; i < n / 2; ++i){
        for(int j = 0; j < n/2 - i; ++j){
            a[i][j] = '.';
        }
    }

    for(int i = n/2 + 1; i < n; ++i){
        for(int j = 0; j < i - n/2; ++j){
            a[i][j] = '.';
        }
    }

    for(int i = 0; i < n / 2; ++i){
        for(int j = n/2 + 1 + i; j < n; ++j){
            a[i][j] = '.';
        }
    }

    for(int i = n/2 + 1; i < n; ++i){
        for(int j = n; j >= n - (i - n/2); --j){
            a[i][j] = '.';
        }
    }


    for(int i = 0; i < n; ++i){
        for(int j = 0; j <n; ++j){
            cout << a[i][j];        
        }
        cout << endl;
    }


    return 0;
}