#include<iostream>
#include<deque>

using namespace std;

int main(){

    deque<int> dq;

    dq.push_front(1);
    dq.push_front(11);
    dq.push_front(10);
    dq.push_back(2);
    dq.push_back(2);
    dq.push_back(3);
    dq.push_back(4);
    dq.push_back(7);
    dq.push_back(5);
    dq.push_back(6);

    while(!dq.empty()){
        int x = dq.front();
        int y = dq.back();
        cout << x << " " << y << endl;
        if(dq.size() > 0) dq.pop_back();
       if(dq.size() > 0) dq.pop_front();
    }

    return 0;
}


