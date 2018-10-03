#include<iostream>
#include<sstream>
#include<algorithm>

using namespace std;

void printSum(int a, int b){
   cout << a  + b << endl;
}

int main(){

    int a,b;
    cin >> a >> b;

    printSum(a, b);

    return 0;
}