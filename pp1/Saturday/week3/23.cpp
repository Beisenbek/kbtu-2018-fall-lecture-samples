#include <iostream>

using namespace std;

int main(){

    int i = 1;
    int j = i++ + ++i;

    cout << i << " " << j << endl;

    return 0;
}