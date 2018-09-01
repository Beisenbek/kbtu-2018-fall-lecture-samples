#include <iostream>

using namespace std;

int a[100];
int t = 0;
int h = 0;

void enqueue(int x){
    a[t] = x;    
    t++;
}

int dequeue(){
    int res = a[h];
    h++;
    return res;
}
int front(){
    return a[h];
}

int size(){
    return t - h;
}

void assert(string testName, bool exp){
    cout << testName;
    if(exp == true){
        cout <<": passed" << endl;
    }else{
        cout << ": failed" << endl;
    }
}


int main(){

    //arrange
    int test[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    //act
    for(int i = 0; i < 9; ++i){
        enqueue(test[i]);
    }

    for(int i = 0; i < 9; ++i){
        dequeue();
    }
    //int o1 = dequeue();
    //assert
    assert("test_size",size() == 0);
    //assert("test_dequeu", o1 == 1);
    
    return 0;
}