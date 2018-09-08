#include <iostream>

using namespace std;

struct element{
    int value;
    element * next;
    element(int x){
        value = x;
        next = NULL;
    }
};

struct mQueue{
    private:
        element * head = NULL;
        element * tail = NULL;
        int count = 0;
    public:
        void push(int x){
            element * el = new element(x);
            if(tail != NULL){
                tail -> next = el; 
            }

            if(head == NULL){
                head = el;
            }

            tail = el;
            count++;
        }

        void pop(){
            head = head->next;
            count--;
        }
        int front(){
            return head->value;
        }

        void clear(){
            count = 0;
            head = NULL;
            tail = NULL;
        }

        int size(){
            return count;
        }
        bool empty(){
            return count == 0;
        }
};


int main(){

    mQueue q;
    int a[] = {1, 2, 22, 21, 45, 3, 11};

    for(int i = 0; i < 7; ++i){
        q.push(a[i]);
    }

    cout << q.front() << endl;

    cout << q.size() << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop(); 
    }

    return 0;
}