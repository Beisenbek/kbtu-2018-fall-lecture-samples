#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int n;
    cin >> n;

    vector<int> a(n);

    fill(a.begin(), a.end(), -100);


    for(int i = 0; i < a.size(); ++i){
        cout << a[i] << " ";
    }

    cout << endl;


    return 0;
}



