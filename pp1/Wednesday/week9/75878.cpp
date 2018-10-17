#include<iostream>
#include<algorithm>

using namespace std;

string s;

void f(int n){
    if(n % 2 == 0){
        s = s + '0';
    }else{
        s = s + '1';
    }
    if(n == 0) return;
    f(n / 2);
}


int main(){

    int n;
    cin >> n;
    f(n);

    reverse(s.begin(), s.end());

    cout << s << endl;

    return 0;
}