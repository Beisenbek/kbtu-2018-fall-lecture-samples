#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){

    int n, x;
    cin >> n >> x;

    string sname;
    int salary, age;
    string dob;

    int max_salary = -1;
    string max_salary_username = "";

    int avg = 0;

    string res = "";

    for(int i = 0; i < n; ++i){
        cin >> sname >> salary >> age >> dob;
        avg += age;
        if(salary > max_salary){
            max_salary = salary;
            max_salary_username = sname;
        }
        if(salary >= x){
            res = res  + sname  +  " ";
        }
    }


    cout << max_salary_username << endl;
    cout << avg / n << endl;
    cout << res << endl;


    return 0;
}