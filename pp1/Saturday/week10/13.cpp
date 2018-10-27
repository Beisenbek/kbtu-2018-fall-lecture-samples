#include<iostream>
#include<set>

using namespace std;

void printSet(set<char> s){
    cout << s.size() << endl;
    for(set<char>::iterator it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    set<char> d;
    set<char> lc;
    set<char> uc;
    string str;
    
    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        if(str[i] >= '0' && str[i] <= '9') d.insert(str[i]);
        else if(str[i] >= 'a' && str[i] <= 'z') lc.insert(str[i]);
        else if(str[i] >= 'A' && str[i] <= 'Z') uc.insert(str[i]);
    }

    printSet(d);
    printSet(lc);
    printSet(uc);

    return 0;
}