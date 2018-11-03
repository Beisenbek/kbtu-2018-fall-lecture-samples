#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector<int> x;
    vector<int> y;

    int n;
    cin >> n;
    int px, py;

    for(int i = 0; i < n; ++i){
        cin >> px >> py;
        x.push_back(px);
        y.push_back(py);
    }

    
    for(int i = 0; i < x.size() - 1; ++i){
        for(int j = i + 1; j < x.size(); ++j){
            if(x[i] > x[j]){
                swap(x[i], x[j]);
                swap(y[i], y[j]);
            }
            else if(x[i] == x[j]){
                if(y[i] > y[j]){
                    swap(x[i], x[j]);
                    swap(y[i], y[j]);
                }
            }
        }
    }
    

    for(int i = 0; i < n; ++i){
        cout << x[i] << " " << y[i] << endl;
    }

    return 0;
}