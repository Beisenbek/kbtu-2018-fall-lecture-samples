#include <iostream>

using namespace std;

int main(){

    string t;
    string best = "";

    while(cin >> t){
        if(best.size() < t.size()){
            best = t;
        }
    }

    cout << best.size() << endl;
    cout << best << endl;
    
    return 0;
}