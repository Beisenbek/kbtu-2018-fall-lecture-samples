#include <iostream>
#include <stack>

using namespace std;

int main(){

    //LIFO
    stack<int> st;

    st.push(1);
    st.push(10);
    st.push(111);
    st.push(10);

    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    return 0;
}
