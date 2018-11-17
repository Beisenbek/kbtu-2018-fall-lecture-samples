#include<iostream>
#include<algorithm>
#include<set>

using namespace std;

int main(){

    string a, b ,c;

    cin >> a >> b >> c;
    set<char> res;

    for(int i = 0; i < a.size(); ++i){
        size_t posb = b.find(a[i]); 
        size_t posc = c.find(a[i]); 
        if(posb != string::npos){
            if(posc != string::npos){
                res.insert(a[i]);
            }
        }
    }

    set<char> :: iterator it;

    for(it = res.begin(); it != res.end(); ++it){
        cout << *it;
    }

    return 0;
}