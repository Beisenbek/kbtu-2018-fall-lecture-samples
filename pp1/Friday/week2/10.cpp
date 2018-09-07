#include <iostream>

using namespace std;

int main(){
    bool a;
    bool b;
    bool c;
    cin >> a >> b >> c;

    if(a && b && c){
        cout << "three" << endl;
    }
    else if((a && b) || (a && c) || (b && c)){
        cout << "two from three" << endl;
    }else if(a || b || c){
        cout << "one from three" << endl;
    }else{
        cout << "zero from three" << endl;
    }

    return 0;
}