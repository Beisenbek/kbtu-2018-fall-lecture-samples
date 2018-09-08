#include <iostream>

using namespace std;

struct element{
    int value;
    element * next;
};

int main(){

    element q0;
    q0.value = 4;

    element q1;
    q1.value = 3;

    element q2;
    q2.value = 13;

    element q3;
    q3.value = 31;

    q0.next = &q1;
    q1.next = &q2;
    q2.next = &q3;
    q3.next = NULL;

    element * it = &q0;

    while(it != NULL){
        cout << it->value << endl;
        it = it->next;
    }

    return 0;
}