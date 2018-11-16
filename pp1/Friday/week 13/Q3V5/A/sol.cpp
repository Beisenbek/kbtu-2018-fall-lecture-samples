#include<iostream>
#include<map>

using namespace std;

int main(){
    map<char, int> m;
    string x;

    while(cin >> x){
        char c = tolower(x[0]);
        m[c]++;
    }

    for(char t = 'a'; t <= 'z'; ++t){
        cout << m[t] << endl;
    }
    
    return 0;
}