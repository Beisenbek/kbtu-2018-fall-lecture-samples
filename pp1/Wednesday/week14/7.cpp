#include<iostream>
#include<vector>
#include<algorithm>
#include "point.h"

using namespace std;

bool f(point p1, point p2){
    if(p1.sum() <= p2.sum()) return true;
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