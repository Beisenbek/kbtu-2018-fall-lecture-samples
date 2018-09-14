#include <iostream>

using namespace std;


int main(){

    int a[] = {1,3,4,6,10};

    int x;
    cin >> x;

    bool f = false;

    for(int i = 0; i < 5; i = i + 1){
        if(x == a[i]){
            f = true;
            break;
        }
    }

    if(f == true){
        cout << "found!" << endl;
    }else{
        cout << "not found!" << endl;
    }

    return 0;
}
