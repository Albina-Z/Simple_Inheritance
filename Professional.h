#ifndef UNTITLED34_PROFESSIONAL_H
#define UNTITLED34_PROFESSIONAL_H
#include <iostream>

using namespace std;

class Professional : public Human {
public:
    int WorkExperience;
    int Salary;
    bool HasBonus;

    void SetWorkExperience(int HWorkExperience) {this->WorkExperience = HWorkExperience;};
    void SetSalary(int HSalary) {this->Salary = HSalary;};
    void SetHasBonus(bool HHasBonus) {this->HasBonus = HHasBonus;};

    int GetWorkExperience() {return this->WorkExperience;};
    int GetSalary() {return this->Salary;};
    bool GetHasBonus() {return this->HasBonus;};

    void ProfessionalSay() {cout << " I've been working for " << this->WorkExperience << " years. I earn " << this->Salary <<" a month.";};
};
#endif //UNTITLED34_PROFESSIONAL_H
