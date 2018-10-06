#include <iostream>

using namespace std;

int main(){

    char c;

    char arr[1000];
    int i = 0;

    while(cin >> c){
        if(c == '0') {
            break;
        }
        arr[i] = c;
        i++;
    }

    cout << i << endl;
    for(int j = 0; j < i; ++j){
        cout << arr[j] << endl;
    }

    //arr[i] = '\0';

    cout << "=====" << endl;
    cout << arr << endl;


    return 0;
}
