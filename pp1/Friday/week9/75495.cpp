#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int cnt = 0;
    string s;
    cin >> s;

    size_t pos;

    while(true){
        pos = s.find("375");
        if(pos != string::npos){
            cnt++;
        }else{
            break;
        }
        s = s.substr(pos + 1);
    }

    cout << cnt << endl;

    return 0;
}