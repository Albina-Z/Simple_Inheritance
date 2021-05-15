#ifndef UNTITLED34_CIRCUSPERFORMER_H
#define UNTITLED34_CIRCUSPERFORMER_H
#include <iostream>

using namespace std;

class CircusPerformer : public Professional {
public:
    string CircusName;
    string OutfitColor;
    int PerformanceTime;

    void SetCircusName(string HCircusName) {this->CircusName = HCircusName;};
    void SetOutfitColor(string HOutfitColor) {this->OutfitColor = HOutfitColor;};
    void SetPerformanceTime(int HPerformanceTime) {this->PerformanceTime = HPerformanceTime;};

    string GetName() {return this->CircusName;};
    string GetOutfitColor() {return this->OutfitColor;};
    int GetPerformanceTime() {return this->PerformanceTime;};

    void CircusPerformerSay() {cout << " I perform at the " << this->CircusName << " Circus.";};
};
#endif //UNTITLED34_CIRCUSPERFORMER_H
