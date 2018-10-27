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
        if(isdigit(str[i])) d.insert(str[i]);
        else if(islower(str[i])) lc.insert(str[i]);
        else if(isupper(str[i])) uc.insert(str[i]);
    }

    printSet(d);
    printSet(lc);
    printSet(uc);

    return 0;
}