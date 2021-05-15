#ifndef UNTITLED34_HUMAN_H
#define UNTITLED34_HUMAN_H
#include <iostream>
#include "string"

using namespace std;

class Human{
public:
    string Name;
    char Gender;
    int Age, PassportInf;

    void SetName(string HName) {this->Name = HName;};
    void SetGender(char HGender) {this->Gender = HGender;};
    void SetAge(int HAge) {this->Age = HAge;};
    void SetPassportInf(int HPassportInf) {this->PassportInf = HPassportInf;};

    string GetName() {return this->Name;};
    char GetGender() {return this->Gender;};
    int GetAge() {return this->Age;};
    int GetPassportInf() {return this->PassportInf;};

    void HumanSay() {cout << "Hello, my name is " << this->Name <<". I'm " << this->Age << " years old.";};

};
#endif //UNTITLED34_HUMAN_H
