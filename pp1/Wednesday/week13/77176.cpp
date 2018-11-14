#include<iostream>
#include<set>

using namespace std;

int main(){

    string x;
    set<string> s;

    while(cin >> x){
        s.insert(x);
    }

    if(s.size() >= 7) cout << "Good" << endl;
    else cout << "Not good" << endl;

    return 0;
}