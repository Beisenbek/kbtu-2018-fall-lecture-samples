#include <iostream>

using namespace std;

int main(){

    int n;
    int m = 0;
    int ans = 0;
    cin >> n;

    for(int i = 1; i <= n; ++i){
        int cnt = 0;

        for(int j = 1; j<= i; ++j){
            if(i % j == 0){
                cnt++;
            }
        }
        if(m < cnt){
            m = cnt;
            ans = i;
        }
    }


    cout << ans << endl;


    return 0;
}
