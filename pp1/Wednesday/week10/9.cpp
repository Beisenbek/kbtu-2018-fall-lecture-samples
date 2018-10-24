#include<iostream>
#include<set>
#include<algorithm>
using namespace std;

int main(){

    set<int> s;
    int x;

    while(true){
        cin >> x;
        if(x == 0) break;
        s.insert(x);
    }

    int k;
    cin >> k;

    if(s.find(k) == s.end()){
        cout << "not found!";
    }else{
        cout << "found!";
    }

    

    return 0;
}
