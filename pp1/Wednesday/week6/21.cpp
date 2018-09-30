#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s = "test";
    int n = s.size();
    char buffer[n];
    s.copy(buffer, n);
    buffer[n] = '\0';


    cout << buffer << endl;


    return 0;
} 