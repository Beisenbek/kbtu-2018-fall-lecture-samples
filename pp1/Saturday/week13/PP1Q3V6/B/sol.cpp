#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    string a, b, c;
    cin >> a >> b >> c;

    for(char x = 'a'; x <= 'z'; ++x){
        size_t sa = a.find(x);
        size_t sb = b.find(x);
        size_t sc = c.find(x);
        if(sa == string::npos){
            if(sb == string::npos){
                if(sc == string::npos){
                   cout << x;
                }
            }
        }
    }

    cout << endl;

    return 0;
}