#include<iostream>

using namespace std;

bool isOK(char c1, char c2){
    int x1 = int(c1);
    int x2 = int(c2);
    return (x2 - x1) == 1;
}

int main(){

    string str;
    cin >> str;

    for(int i = 0; i < str.size(); ++i){
        int j = i + 1;
        while(j < str.size() && isOK(str[j-1], str[j])){
            j++;
        }
        if(j <= str.size()){
            if(j - i > 1){
                cout << j - i;
            }else{
                cout << str[i];
            }
            i = j - 1;
        }
    }

    cout << endl;


    return 0;
}