#include <iostream>

using namespace std;

struct student{
    string name;
    string sname;
    string gpa;
    string getInfo(){
        return name + " " + sname + " " + gpa;
    }
};

int main(){

    student s;
    s.gpa = "4";
    s.name = "A";
    s.sname = "A";

    cout << s.getInfo() << endl;

    return 0;
}