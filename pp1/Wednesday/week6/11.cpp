#include<iostream>

using namespace std;

int main(){

    string s, t;
    getline(cin, s);
    getline(cin, t);

    int cnt = 0;
    size_t ind = 0;

    for(int i = 0; i < s.size(); ++i){
        ind = s.find(t, ind);
        if(ind != string::npos){
            cnt++;
            ind++;
        }
    }

    cout << cnt << endl;


    return 0;
}