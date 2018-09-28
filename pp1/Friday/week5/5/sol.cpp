#include <iostream>

using namespace std;

int main(){

    int studentNumber;
    int quizNumber;

    cin >> studentNumber >> quizNumber;

    double a[quizNumber + 1][studentNumber];

    for(int i = 0; i < quizNumber; ++i){
        for(int j = 0; j < studentNumber; ++j){
            cin >> a[i][j];
        }
    }

    //sdtIdx = student Index
    for(int stdIdx = 0; stdIdx < studentNumber; ++stdIdx){
        a[quizNumber][stdIdx] = 0;
        for(int quizIndex = 0; quizIndex < quizNumber; ++quizIndex){
            a[quizNumber][quizIndex] = a[quizNumber][stdIdx] + a[quizIndex][stdIdx];
        }
        a[quizNumber][stdIdx] /= quizNumber;
    }

    for(int i = 0; i <= quizNumber; ++i){
        for(int j = 0; j < studentNumber; ++j){
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }


    return 0;
}
