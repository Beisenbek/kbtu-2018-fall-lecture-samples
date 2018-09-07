#include <iostream>

using namespace std;

int main(){

    bool a = true;
    bool b = true;
    bool c;
    cin >> c;

    if(c && a && b){
        cout << "1hr" << endl;
    }else{
        cout << "5min" << endl;
    }

    return 0;
}