#include <iostream>

using namespace std;

bool IsDigit(char c){
    bool res = false;
    
    if(c <= '9' && c >= '0'){
        res = true;
    }

    return res;
}

int main(){

    char c;
    cin >> c;

    if(IsDigit(c)== true){
        cout << "yes";
    }else{
        cout << "no";
    }
    
    return 0;
}