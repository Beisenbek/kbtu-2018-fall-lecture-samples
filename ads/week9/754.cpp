#include <iostream>
#include <vector>

using namespace std;

struct heap{
    vector<int> v;
    void add(int x){
        v.push_back(x);
        sift_up(v.size() - 1);
    }
    void sift_up(int pos){
        if(pos <= 0) return;
        int parent = (pos - 1) / 2;
        if(v[parent] > v[pos]){
            swap(v[parent], v[pos]);
            sift_up(parent);
        }
    }
    void sift_down(int pos, int k){
        if(pos >= k) return;
        int ch1 = 2 * pos + 1;
        int ch2 = 2 * pos + 2;
        if(ch1 < k){
            if(ch2 < k){
                if(v[ch1] < v[pos] && v[ch1] <= v[ch2]){
                    swap(v[pos], v[ch1]);
                    sift_down(ch1, k);
                }else if(v[ch2] < v[pos] && v[ch2] < v[ch1]){
                    swap(v[pos], v[ch2]);
                    sift_down(ch2, k);
                } 
            }else if(v[ch1] < v[pos]){
                swap(v[pos], v[ch1]);
                sift_down(ch1, k);
            }
        }
    }

    void sort(int k){
        if( k <= 0) return;
        swap(v[0], v[k - 1]);
        sift_down(0, k - 1);
        sort(k - 1);
    }
    int extract_min(){
        int res = v[0];
        v[0] = v[v.size() - 1];
        v.pop_back();
        sift_down(0, v.size());
        return res;
    }
    void print(){
        for(int i = 0; i < v.size(); ++i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
    void rprint(){
        for(int i = v.size() - 1; i >=0 ; --i){
            cout << v[i] << " ";
        }
        cout << endl;
    }
};


int main(){

    heap h;

    int n, x;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> x;
        h.add(x);
    }

    h.sort(n);

    h.rprint();

    

    return 0;
}