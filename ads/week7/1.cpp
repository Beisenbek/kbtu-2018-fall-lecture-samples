#include <iostream>

using namespace std;

struct heap{
    int value[100001];
    int size = 0;

    void add(int x){
        value[size] = x;
        sift_up(size, false);
        size++;
    }

    void update(int pos, int d){
        value[pos] += d;
        sift_up(pos, true);
    }

    void sift_up(int pos, bool isPrintable){
        if(pos == 0){
            if(isPrintable){
                cout << pos + 1 << endl;
            }
            return;
        } 
        int parent_pos = (pos - 1) / 2;
        if(value[parent_pos] < value[pos]){
            swap(value[parent_pos], value[pos]);
            sift_up(parent_pos, isPrintable);
        }else if(isPrintable){
            cout << pos + 1 << endl;
        }
    }

    void sift_down(int pos){
        if(pos >= size) return;
        int ch1_pos =2 * pos + 1;
        int ch2_pos =2 * pos + 2;
        if(value[pos] < max(value[ch1_pos], value[ch2_pos])){
            if(value[ch1_pos] > value[ch2_pos]){
                swap(value[pos], value[ch1_pos]);
                sift_down(ch1_pos);
            }else{
                swap(value[pos], value[ch2_pos]);
                sift_down(ch2_pos);   
            }
        }
    }

    void print(){
        for(int i = 0; i < size; ++i){
            cout << value[i] << " ";
        }
    }
};


int main(){

    heap h;
    int n;
    cin >> n;
    int v;

    for(int i = 0; i < n; ++i){
        cin >> v;
        h.add(v);
    }

    int k, p, d;
    cin >> k;

    for(int i = 0; i < k; ++i){
        cin >> p >> d;
        h.update(p - 1, d);
    }

    h.print();


    return 0;
}