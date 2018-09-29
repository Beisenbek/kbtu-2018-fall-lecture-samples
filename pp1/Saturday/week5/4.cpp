#include <iostream>

using namespace std;

int main(){

    
    cout << "int a[] = {";
    for(int i = 1; i <=9; ++i){
        for(int j = 0; j <= 9; ++j){
            for(int k = 0; k <= 9; ++k){
                for(int l = 0; l <= 9; ++l){
                    if(i != j && i != k && i != l){
                        if(j != k && j != l){
                            if(k != l){
                                cout << i << j << k << l << ", ";
                            }
                        }
                    }
                }
            }
        }
    }
    cout << "};";

    return 0;
}