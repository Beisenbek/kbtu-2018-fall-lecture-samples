#include<iostream>
#include<set>

using namespace std;

int main(){
    set<char> s;
    string str;
    
    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        s.insert(tolower(str[i]));
    }

    cout << s.size() << endl;

    for(set<char>::iterator it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }


    return 0;
}