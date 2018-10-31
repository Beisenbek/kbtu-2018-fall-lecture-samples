#include<iostream>
#include<queue>

using namespace std;


int main(){

    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(1);
    q.push(4);
    q.push(1);

    while(!q.empty()){
        int x = q.front();
        q.pop();
        cout << x << " ";
    }

    return 0;
}

