#include<iostream>
#include<algorithm>
#include<set>
#include<map>

using namespace std;

string f(string temp, string str){
    for(int i = 0; i < str.size(); ++i){
        for(int j = 0; j < 26; ++j){
            if(str[i] == temp[j]){
                temp.erase(j, 1);
                break;
            }
        }
    }
    return temp;
}

int main(){

    string temp = "abcdefghijklmnopqrstuvwxyz";

    string a, b, c;
    cin >> a >> b >> c;

    temp = f(temp, a);
    temp = f(temp, b);
    temp = f(temp, c);
    
    cout << temp << endl;

    return 0;
}