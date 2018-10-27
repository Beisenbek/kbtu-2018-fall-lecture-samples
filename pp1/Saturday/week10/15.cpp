#include<iostream>
#include<set>

using namespace std;


int main(){

    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(40);

    int x;
    cin >> x;

    if(s.find(x) == s.end()){
        cout << "not found" << endl;
    }else{
        cout << "found!" << endl;
    }

    return 0;
}