#include <iostream>
#include "string"
#include "Human.h"
#include "Student.h"
#include "Professional.h"
#include "CircusPerformer.h"
#include "Clown.h"
#include "Mim.h"

using namespace std;

int main() {
    Human human;
    human.SetName("Bella");
    human.SetAge(18);
    human.SetGender('W');
    human.SetPassportInf(123456);
    human.HumanSay();
    cout << endl;
    cout << endl;

    Professional professional;
    professional.SetName("Henry");
    professional.SetAge(23);
    professional.SetGender('M');
    professional.SetWorkExperience(2);
    professional.SetSalary(23000);
    professional.SetHasBonus(true);
    professional.HumanSay();
    professional.ProfessionalSay();
    cout << endl;
    cout << endl;

    CircusPerformer circusPerformer;
    circusPerformer.SetName("Lena");
    circusPerformer.SetAge(20);
    circusPerformer.SetGender('W');
    circusPerformer.SetWorkExperience(3);
    circusPerformer.SetSalary(30000);
    circusPerformer.SetHasBonus(false);
    circusPerformer.SetCircusName("Red Dawn");
    circusPerformer.SetOutfitColor("Green");
    circusPerformer.SetPerformanceTime(20);
    circusPerformer.HumanSay();
    circusPerformer.ProfessionalSay();
    circusPerformer.CircusPerformerSay();
    cout << endl;
    cout << endl;

    Clown clown;
    clown.SetName("Mina");
    clown.SetAge(40);
    clown.SetGender('W');
    clown.SetWorkExperience(20);
    clown.SetSalary(70000);
    clown.SetHasBonus(true);
    clown.SetCircusName("Red Dawn");
    clown.SetOutfitColor("White");
    clown.SetPerformanceTime(40);
    clown.SetNoseColor("Red");
    clown.SetIsBeeping(true);
    clown.HumanSay();
    clown.ProfessionalSay();
    clown.CircusPerformerSay();
    clown.ClownSay();
    cout << endl;
    cout << endl;

    Mim mim;
    mim.SetName("Mike");
    mim.SetAge(45);
    mim.SetGender('M');
    mim.SetWorkExperience(20);
    mim.SetSalary(70000);
    mim.SetHasBonus(true);
    mim.SetCircusName("Red Dawn");
    mim.SetOutfitColor("Black");
    mim.SetPerformanceTime(40);
    mim.SetNoseColor("Red");
    mim.SetIsBeeping(false);
    mim.MimSay();
}
