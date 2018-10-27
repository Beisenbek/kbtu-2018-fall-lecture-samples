#include<iostream>
#include<set>

using namespace std;

int main(){

    set<char> s;
    char x;

    while(cin >> x){
        s.insert(x);
    }

    for(set<char>::iterator it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }


    return 0;
}