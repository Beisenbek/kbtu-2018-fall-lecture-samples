#include <iostream>
#include <deque>

using namespace std;

int main(){

    //LIFO
    deque<int> d;

   d.push_back(1);
   d.push_front(12);
   d.push_back(11);
   d.push_front(112);
   d.push_back(100);
   d.push_front(1299);
   d.push_back(21);
   d.push_front(122);

   //122 1299 112 12 1 11 100 21

    /*while(!d.empty()){
        cout << d.front() << " ";
        d.pop_front();
    }*/

    while(!d.empty()){
        cout << d.back() << " ";
        d.pop_back();
    }

    return 0;
}
