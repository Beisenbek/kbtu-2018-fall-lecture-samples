#include<iostream>
#include<set>

using namespace std;

void doit(set<int> * s){
    cout << "point 1: " << s->size() << endl;
    s->clear();
    cout << "point 2: " << s->size() << endl;
}

int main(){

    set<int> s;
    s.insert(1);
    s.insert(11);
    s.insert(12);

    cout << "point 0: " << s.size() << endl;
    doit(&s);
    cout << "point 3: " << s.size() << endl;

    return 0;
}
/*
    0: 3
    1: 3
    2: 0
    3: 3
*/