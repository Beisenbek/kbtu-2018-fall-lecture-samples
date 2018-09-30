#include<iostream>

using namespace std;

int main(){

    string s, z;
    cin >> s >> z;

    size_t res = s.find(z);  

    if(res == string::npos){
        cout << "not found!";
    }else{
        cout << "found!";
    }

    cout << endl;

    return 0;
}