#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct point{
    private:
        int x;
        int y;
        int z;

    public:
        point(int xx, int yy, int zz){
            x = xx;
            y = yy;
            z = zz;
        }
        void printInfo(){
            cout << x << " " << y << " " << z << endl;
        }
        void move(int dx, int dy, int dz){
            x = x + dx;
            y = y + dy;
            z = z + dz; 
        }
        void setX(int xx){
            x = xx;
        }
        void setY(int yy){
            y = yy;
        }
        void setZ(int zz){
            z = zz;
        }
        int sum(){
            return x + y + z;
        }
};

bool f(point p1, point p2){
    if(p1.sum() >= p2.sum()) return true;
    return false;
}

int main(){

    point p1(10, 20, 30);
    point p2(-10, 20, -30);
    point p3(-10, 20, 30);

    vector<point> v;
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);

    sort(v.begin(), v.end(), f);

    for(int i = 0; i < v.size(); ++i){
        v[i].printInfo();
    }

    return 0;
}