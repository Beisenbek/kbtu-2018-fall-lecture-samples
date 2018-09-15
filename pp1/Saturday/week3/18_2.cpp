#include <iostream>

using namespace std;

int main(){

    int cnt;
    cin >> cnt;
    char ch;
    int arr[26];

    for(int i = 0; i < 26; i++){
        arr[i] = 0;
    }

    for(int i = 0; i < cnt; i = i + 1){
        cin >> ch;
        int d = int(ch) - 97;
        arr[d] = arr[d] + 1;
    }

    for(int i = 0; i < 26; i = i + 1){
        cout << char(97 + i) << " " << arr[i] << "\n";
    }

    return 0;
}