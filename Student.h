#ifndef UNTITLED34_STUDENT_H
#define UNTITLED34_STUDENT_H
#include <iostream>

using namespace std;

class Student : public Human {
public:
    int YearOfAdmission, GroupNumber;

    void SetYearOfAdmission(int HYearOfAdmission) {this->YearOfAdmission = HYearOfAdmission;};
    void SetGroupNumber(int HGroupNumber) {this->GroupNumber = HGroupNumber;};

    int GetYearOfAdmission() {return this->YearOfAdmission;};
    int GetGroupNumber() {return this->GroupNumber;};

    void StudentSay() {cout << " I entered the university in " << this->YearOfAdmission << ". I'm in the group ¹" << this->GroupNumber <<".";};
};
#endif //UNTITLED34_STUDENT_H
