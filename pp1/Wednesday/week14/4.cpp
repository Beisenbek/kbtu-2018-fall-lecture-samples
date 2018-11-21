#include<iostream>
#include<vector>

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
};

int main(){

    point p1(10, 20, 30);
    p1.printInfo();
    p1.move(1,-1,20);
    p1.printInfo();

    p1.printInfo();

    
    return 0;
}