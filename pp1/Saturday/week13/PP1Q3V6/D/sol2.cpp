#include<iostream>
#include<sstream>

using namespace std;

bool isOK(char c1, char c2){
    int x1 = int(c1);
    int x2 = int(c2);
    return (x2 - x1) == 1;
}

string f(int x){
    stringstream ss;
    ss << x;
    string res;
    ss >> res;
    return res;
}

int main(){

    string str;
    cin >> str;

    str = str + "!";

    string temp = str.substr(0, 1);
    string ans = "";

    for(int i = 1; i < str.size(); ++i){
        if(isOK(temp[temp.size() - 1], str[i])){
            temp = temp + str[i];
        }else{
            if(temp.size() == 1){
                ans = ans + temp;
            }else{
                ans = ans + f(temp.size());
            }
            temp = str.substr(i, 1);
        }
    }

    cout << ans <<  endl;

    return 0;
}