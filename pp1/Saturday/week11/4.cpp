#include<iostream>
#include<map>

using namespace std;

int main(){


    map<int, int> m; 
    map<int, int> :: iterator it;

    m[-1] = 4;
    m[-1] = 41;
    m[-3] = 14;

    for(it = m.begin(); it != m.end(); ++it){
        cout << (*it).first << " " << (*it).second << endl;
    }

    return 0;
}