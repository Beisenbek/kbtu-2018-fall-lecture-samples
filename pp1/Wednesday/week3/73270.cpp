#include <iostream>
#include <cmath>

using namespace std;

    //ceil(4.3) = 5
    //floor(4.8) = 4
    //round(3.3) = 3
    //round(3.6) = 4
    //int(5.4) = 5
    //int(5.6) = 5

int main(){

    int x;
    cin >> x;

    int y = floor(sqrt(x));

    if(y * y == x){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }


    return 0;
}
