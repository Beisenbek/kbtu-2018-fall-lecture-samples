#include<iostream>
#include<vector>

using namespace std;

struct point{
    int x;
    int y;
    int z;
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
};

int main(){

    point p1(10, 20, 30);
    point p2(100, 200, 300);

    vector<point> v;
    v.push_back(p1);
    v.push_back(p2);

    for(int i = 0; i < v.size(); ++i){
        v[i].printInfo();
    }

    return 0;
}