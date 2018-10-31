#include<iostream>
#include<stack>

using namespace std;

int main(){

    string str;
    cin >> str;

    bool ok = true;

    stack<char> st;
    for(int i = 0; i < str.size(); ++i){
        if(str[i] == '('){
            st.push(str[i]);
        }else{
            if(st.size() > 0){
                st.pop();
            }else{
                ok = false;
                break;
            }
        } 
    }

    if(!ok || st.size() > 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }


    return 0;
}


