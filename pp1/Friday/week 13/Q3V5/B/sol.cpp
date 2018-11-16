#include<iostream>
#include<map>

using namespace std;

bool f(int x){
    if(x == 1) return false;
    int cnt = 0;
    for(int i = 1; i <= x; ++i){
        if(x % i == 0){
            cnt++;
        }
    }
    if(cnt == 2) return true;
    return false;
}

int main(){
    map<int, int> m;
    map<int, int> :: iterator it;
    int x;

    while(cin >> x){
        if(f(x) == false){
            m[x]++;
        }
    }

    for(it = m.begin(); it != m.end(); ++it){
        pair<int, int> p = *it;
        if(m[p.first] > 1){
            cout << p.first << " ";
        }
    }
    
    return 0;
}