#include<iostream>

using namespace std;

bool f(long long x){
    if(x == 1) return true;
    if(x == 0 || x % 2 == 1) return false;
    return f(x / 2);
}


int main(){

    long long x;
    cin >> x;

    if(f(x)){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}