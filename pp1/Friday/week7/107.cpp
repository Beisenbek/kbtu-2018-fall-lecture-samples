#include <iostream>

using namespace std;

string str[1000];
int len = 0;

void split(string line){
    string temp = "";
    line = line + " ";
    for(int i = 0; i < line.size(); ++i){
        if(line[i] != ' '){
            temp = temp + line[i];
        }else{
            str[len] = temp;
            temp = "";
            len++;
        }
    }
}

void printMax(){
    string best = str[0];
    for(int i = 1; i < len; ++i){
        if(best.size() < str[i].size()){
            best = str[i];
        }
    }
    cout << best.size() << endl;
    cout << best << endl;
}


int main(){

    string t;
    getline(cin, t);
    split(t);
    printMax();
    
    return 0;
}