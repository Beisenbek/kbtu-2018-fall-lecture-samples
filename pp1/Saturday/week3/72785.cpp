#include <iostream>

using namespace std;

int main(){

    string str;
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; ++i){
        cin >> str;
        for(int j = 0; j < str.size(); ++j){
            if(str[j] == '0'){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}