#include<iostream>
#include<algorithm>
#include<cstdlib>
#include<ctime>

using namespace std;

void f(int x){
    cout << x  << " ";
}

int randomNumber(){
    return rand() % 10;
}

int main(){

    //srand(time(0));

    int n;
    cin >> n;
    int a[n];

    generate(a, a + n, randomNumber);

    for_each(a, a + n, f);


    return 0;
}
