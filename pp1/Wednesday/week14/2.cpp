#include<iostream>
#include<vector>

using namespace std;

struct point{
    int x;
    int y;
    int z;
};

int main(){

    point p1;
    p1.x = 10;
    p1.y = 20;
    p1.z = 30;

    point p2;
    p2.x = 100;
    p2.y = 200;
    p2.z = 300;

    vector<point> v;
    v.push_back(p1);
    v.push_back(p2);

    for(int i = 0; i < v.size(); ++i){
        cout << v[i].x << " " << v[i].y << " " << v[i].z << endl;
    }

    return 0;
}