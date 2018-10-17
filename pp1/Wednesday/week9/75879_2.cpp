#include<iostream>

using namespace std;

bool f(long long b, long long x){
    if(b == x) return true;
    if(b > x) return false;
    return f(b * 2 , x);
}


int main(){

    long long x;
    cin >> x;

    if(f(1, x)){
        cout << "Yes";
    }else{
        cout << "No";
    }


    return 0;
}