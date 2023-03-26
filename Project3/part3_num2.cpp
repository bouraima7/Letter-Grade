#include <iostream>

using namespace std;



char getLetterGrade(int numberGrade) {
    if (numberGrade >= 90 && numberGrade <= 100) { // A range
        return 'A';
    }
    else if (numberGrade >= 80 && numberGrade < 90) { // B range
        return 'B';
    }
    else if (numberGrade >= 70 && numberGrade < 80) { // C range
        return 'C';
    }
    else if (numberGrade >= 60 && numberGrade < 70) { // D range
        return 'D';
    }
    else if (numberGrade >= 0 && numberGrade < 60) { // E range 
        return 'E';
    }
}

int main() {
    int grade = 0;
    bool reset = false;

    cout << "Hello and welcome to my grading program. Please enter your following grade: " << endl;
    cin >> grade;
    while (reset != true) {

        if (grade < 0) {
            cout << "The grade you gave must be greater than 0! Try again.";
            cin >> grade;
        }
        else if (grade > 100) {
            cout << "The grade you gave must be less than 100! Try again.";
            cin >> grade;
        }
        else {
            reset = true;
        }
    }

    char letterGrade = getLetterGrade(grade);

    cout << "Your letter grade is :"; cout << letterGrade; cout << endl;

}