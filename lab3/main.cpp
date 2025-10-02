//main.cpp
#include<iostream>
#include "RPG.h"
using namespace std;

int main() {
    RPG p1 = RPG("Wiz", 0, .2, 60, 1);
    RPG p2 = RPG();

    printf("%s Current Stats\n", p1.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n \n", p1.getHitsTaken(), p1.getLuck(), p1.getExp(), p1.getLevel());
    
    printf("%s Current Stats\n", p2.getName().c_str());
    printf("Hits Taken: %i\t Luck: %f\t Exp: %f\t Level: %i\n \n", p2.getHitsTaken(), p2.getLuck(), p2.getExp(), p2.getLevel());

    p2.setHitsTaken(3);
    cout<< "P2 takes 3 hits!";

    cout<< "\nP2 hits taken: ";
    cout<< p2.getHitsTaken();

    cout << "\n\n0 is dead, 1 is alive\n";
    cout << "P1 is alive: " << p1.isAlive() << "\n";
    cout << "P2 is alive: " << p2.isAlive();

    return 0;
}