#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> st;

    st.push_back(1);
    st.push_back(2);
    st.push_back(3);
    st.push_back(4);
    st.push_front(5);
    st.push_front(6);
    st.push_front(7);
    st.push_front(8);

    //8 7 6 5 1 2 3 4

    /*while(!st.empty()){
        cout << st.back() << " ";
        st.pop_back();
    }*/

    while(!st.empty()){
        cout << st.front() << " ";
        st.pop_front();
    }

    return 0;
}