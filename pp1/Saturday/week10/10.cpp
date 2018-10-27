#include<iostream>
#include<set>

using namespace std;

int main(){

    set<int> s;
    int x;

    while(cin >> x){
        s.insert(x);
    }

    set<int> :: reverse_iterator it;
    for(it = s.rbegin(); it != s.rend(); it++){
        cout << *it << " ";
    }

    return 0;
}