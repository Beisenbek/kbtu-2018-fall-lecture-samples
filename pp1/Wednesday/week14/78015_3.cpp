#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

struct empl{
    string sname;
    int age;
    int salary;
    string date_of_birth;
    empl(){
        salary = -1;
    }
};

struct result{
    int x;
    int n;

    empl userWithMaxSalary;
    int ageSumOfAllEmployees;
    vector<string> allUsersWhoseSalaryGreaterThanX;

    result(int xx, int nn){
        x = xx;
        n = nn;
        ageSumOfAllEmployees = 0;
    }

    void process(empl t){
        ageSumOfAllEmployees += t.age;
        if(x <= t.salary){
            allUsersWhoseSalaryGreaterThanX.push_back(t.sname);
        } 
        if(userWithMaxSalary.salary < t.salary){
            userWithMaxSalary = t;
        }
    }

    void print(){
        cout << userWithMaxSalary.sname << endl;
        cout << ageSumOfAllEmployees / n << endl;
        for(int i = 0; i < allUsersWhoseSalaryGreaterThanX.size(); ++i){
            cout << allUsersWhoseSalaryGreaterThanX[i] << " ";
        }
    }
};

int main(){

    int n, x;
    cin >> n >> x;

    result r(x, n);

    for(int i = 0; i < n; ++i){
        empl temp;
        cin >> temp.sname >> temp.salary >> temp.age >> temp.date_of_birth;
        r.process(temp);
    }

    r.print();


    return 0;
}