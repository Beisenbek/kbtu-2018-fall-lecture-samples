#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> q, int l, int r){
    if(l == r) return q[l];
    int p = (l + r) / 2;
    return f(q, l, p) + f(q, p + 1, r);
}

int f2(vector<int> q, int len){
    if(len == 0) return 0;
    return q[len-1] + f2(q, len - 1); 
}

//   0  1 2 3 4
//q: 10 4 5 6 11
//len: 5

//11 + 25 => 36
//6 + 19
//5 + 14
//4 + 10
//10 + 0
//0

int main(){
  
    vector<int> v;

    int x;

    while(cin >> x){
        if(x == 0) break;
        v.push_back(x);
    }

    cout << f(v, 0, v.size() - 1);
    cout << f2(v, v.size());

    return 0;
}
