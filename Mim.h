#ifndef UNTITLED34_MIM_H
#define UNTITLED34_MIM_H
#include <iostream>
#include "string"

using namespace std;

class Mim : public Clown {
public:
    string EmotionOfMim;
    int VolumeLevel;

    void SetEmotionOfMim(string HEmotionOfMim) {this->EmotionOfMim = HEmotionOfMim;};
    void SetVolumeLevel(int HVolumeLevel) {this->VolumeLevel = HVolumeLevel;};

    string GetEmotionOfMim() {return this->EmotionOfMim;};
    int GetVolumeLevel() {return this->VolumeLevel;};

    void MimSay() {cout << "...";};
};
#endif //UNTITLED34_MIM_H
