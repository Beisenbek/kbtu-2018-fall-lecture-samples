#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int a[100][100];
bool used[100];
int n;

int main(){

    cin >> n;

    for(int i = 0; i < n; ++i){
        used[i] = false;
    }

    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            cin >> a[i][j];
        }
    }

    queue<int> q;
    q.push(0);
    used[0] = true;

    while(!q.empty()){
        int cur = q.front();
        q.pop();
        cout << cur << " ";
        for(int i = 0; i < n; ++i){
            if(a[cur][i] == 1 && !used[i]){
                q.push(i);
                used[i] = true;
            }
        }
    }

    return 0;
}