#include<iostream>
#include<vector>

using namespace std;

vector<int> p;
    
void prefix(string str){
    p.clear();
    p.push_back(0);
    for(int i = 1; i < str.size(); ++i){
        int j = p[i - 1];
        while(j > 0 && str[i] != str[j]){
            j = p[j - 1];
        }
        int res = 0;
        if(str[i] == str[j]){
            res = j + 1;
        }
        p.push_back(res);
    }
}

int main(){

    string s, t;
    cin >> s >> t;

    string str = s + "#" + t;

    cout << str << endl;

    prefix(str);

    for(int i = 0; i < p.size(); ++i){
        cout << p[i] << " ";
    }


    return 0;
}