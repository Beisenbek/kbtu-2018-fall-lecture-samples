#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct empl{
    string sname;
    int age;
    int salary;
    string date_of_birth;
};

int main(){

    int n, x;
    cin >> n >> x;

    vector<empl> v;

    for(int i = 0; i < n; ++i){
        empl temp;
        cin >> temp.sname >> temp.salary >> temp.age >> temp.date_of_birth;
        v.push_back(temp);
    }

    empl max_salary = v[0];
    int avg = v[0].age;
    string res = "";

    if(v[0].salary >= x){
        res = v[0].sname + " ";
    }


    for(int i = 1; i < v.size(); ++i){
        avg += v[i].age;
        if(v[i].salary > max_salary.salary){
            max_salary = v[i];
        }
        if(v[i].salary >= x){
            res += v[i].sname + " ";
        }
    }

    cout << max_salary.sname << endl;
    cout << avg / n << endl;
    cout << res << endl;


    return 0;
}