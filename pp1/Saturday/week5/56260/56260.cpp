#include <iostream>

using namespace std;

int main(){

    int n;
    cin >> n;
    int a[n];

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    int m1 = 0;
    int m2 = 0;
    int m3 = 0;

    for(int i = 0; i < n; ++i){
        if(m1 < a[i]){
            m3 = m2;
            m2 = m1;
            m1 = a[i];
        }else if(m2 < a[i]){
            m3 = m2;
            m2 = a[i];
        }else if(m3 < a[i]){
            m3 = a[i];
        }
    }

    //cout << m1 << " " << m2 << " " << m3 << endl;

    cout << m1 + m2 + m3 << endl;
    
    return 0;
}