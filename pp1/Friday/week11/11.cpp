#include <iostream>
#include <queue>

using namespace std;

int main(){

    //FIFO
    queue<int> q;

    q.push(1);
    q.push(10);
    q.push(111);
    q.push(10);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
