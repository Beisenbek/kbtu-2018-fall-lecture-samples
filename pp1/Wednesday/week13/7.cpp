#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main(){

    srand(time(0));

    for(int i = 0; i < 100; ++i){
        cout << rand() % 1000 << " ";
    }

    cout << endl;

    return 0;
}
