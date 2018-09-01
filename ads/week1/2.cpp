#include <iostream>
#include "testhelper.h"

using namespace std;

int a[100];
int t = 0;

bool empty(){
    return t == 0;
}

void push(int x){
    a[t] = x;    
    t++;
}

int pop(){
    int res = a[t-1];
    t--;
    return res;
}
int peek(){
    return a[t-1];
}

int size(){
    return t;
}

void clear(){
    t = 0;
}

int main(){

    //arrange
    int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //act
    for(int i = 0; i < 9; ++i){
        push(test[i]);
    }
    //assert
    cout << assert("test_size",size() == 9);
    
    return 0;
}