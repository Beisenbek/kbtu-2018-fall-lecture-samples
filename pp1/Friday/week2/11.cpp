#include <iostream>

using namespace std;

int main(){
    bool a;
    bool b;
    bool c;
    cin >> a >> b >> c;

    if(a and b and c){
        cout << "three" << endl;
    }
    else if((a and b) or (a and c) or (b && c)){
        cout << "two from three" << endl;
    }else if(a or b or c){
        cout << "one from three" << endl;
    }else{
        cout << "zero from three" << endl;
    }

    return 0;
}