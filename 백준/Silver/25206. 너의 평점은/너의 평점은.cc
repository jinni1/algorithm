#include <iostream>
#include <string>

using namespace std;

class Grade {
    public:
        string subject;
        string score;
        double count;
        double calculateGrade();
};

double Grade::calculateGrade() {
    if (score == "A+"){
        return count*4.5;
    } else if (score == "A0") {
        return count*4.0;
    } else if (score == "B+") {
        return count*3.5;
    } else if (score == "B0") {
        return count*3.0;
    } else if (score == "C+") {
        return count*2.5;
    } else if (score == "C0") {
        return count*2.0;
    } else if (score == "D+") {
        return count*1.5;
    } else if (score == "D0") {
        return count*1.0;
    } else {
        return 0.0;
    }
}

int main() { 

    Grade grade[20];
    for (int i=0; i<20; i++) {
        cin >> grade[i].subject >> grade[i].count >> grade[i].score;
    }

    double scoreSum = 0.0;
    double countSum = 0.0;

    for (int i=0; i<20; i++){
        if (grade[i].score != "P"){
            scoreSum += grade[i].calculateGrade();
            countSum += grade[i].count;
        }
    }

    double final = scoreSum / countSum;
    cout << final;
}