#include<iostream>
#include<algorithm>
#include<map>

using namespace std;

void f(pair<string, string > x){
    cout <<  x.first << " " << x.second << endl;
}

int main(){


    map<string, string > m;

    m["DDD"] = "D1";
    m["AAA"] = "A1";
    m["BBB"] = "B1";
    m["CCC"] = "C1";

    for_each(m.begin(), m.end(), f);

    return 0;
}

