#ifndef UNTITLED34_CLOWN_H
#define UNTITLED34_CLOWN_H
#include <iostream>

using namespace std;

class Clown : public CircusPerformer {
public:
    string NoseColor;
    bool IsBeeping;

    void SetNoseColor(string HNoseColor) {this->NoseColor = HNoseColor;};
    void SetIsBeeping(bool HIsBeeping) {this->IsBeeping = HIsBeeping;};

    string GetGender() {return this->NoseColor;};
    bool GetAge() {return this->IsBeeping;};

    void ClownSay() {cout << " My nose is " << this->NoseColor << ".";};
};
#endif //UNTITLED34_CLOWN_H
