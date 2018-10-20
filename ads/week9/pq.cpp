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
};

struct pq{
    private:
        heap h;
    public:
        void enqueue(int x){
            h.add(x);
        }
        int dequeue(){
            return h.extract_min();
        }
};


int main(){

    pq q;
    int n;
    cin >> n;
    int x;
    for(int i = 0; i < n; ++i){
        cin >> x;
        q.enqueue(x);
    }

    for(int i = 0; i < n; ++i){
        cout << q.dequeue() << " ";
    }    

    cout << endl;

    return 0;
}