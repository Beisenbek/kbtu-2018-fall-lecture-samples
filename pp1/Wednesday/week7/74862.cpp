#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

int a[10000];
int b[10000];
int d[10000];
int n;

void readArrays(){
    cin >> n;

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    for(int i = 0; i < n; ++i){
        cin >> b[i];
    }
}

void findDiff(){
    for(int i = 0; i < n; ++i){
       d[i] = abs(a[i] - b[i]);
    }
}

void printArray(){
    for(int i = 0; i < n; ++i){
        cout << d[i] << " ";
    }
}

int main(){

    readArrays();
    findDiff();
    printArray();

    return 0;
}