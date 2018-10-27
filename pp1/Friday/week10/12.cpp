#include <iostream>
#include <vector>

using namespace std;


int main(){
  
    vector<int> s;

    int x;
    while(cin >> x){
        if(x == 0) break;
        s.push_back(x);
    }

    vector<int>::iterator it = s.begin();


    for(it = s.begin(); it != s.end(); ++it){
        cout << *it << " ";
    }

    return 0;
}
