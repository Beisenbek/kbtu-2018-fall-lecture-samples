#include<iostream>
#include<algorithm>

using namespace std;

int main(){

    string s;
    string t;
    cin >> s >> t;

    size_t x = s.find(t);

    if(x == string::npos){
        cout << "not found!" << endl;
    }else{
        cout << "found!" << endl;
    }


    return 0;
}