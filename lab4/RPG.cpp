//RPG.cpp
#include <iostream>
#include <string>
#include <random>
#include "RPG.h"

//Constructors
RPG::RPG(){
    name = "NPC";
    hits_taken = 0;
    luck = .1;
    exp = 50.0;
    level = 1;
}

RPG::RPG(string name, int hits_taken, float luck, float exp, int level){
    this->name = name;
    this->hits_taken = hits_taken;
    this->luck = luck;
    this->exp = exp;
    this->level = level;
}

// //Destructor
// RPG::~RPG() {

// }

//Accessors

/**
 * @brief Returns name
 * 
 * @return string 
 */
string RPG::getName() const {
    return name;
}

/**
 * @brief Returns the number of hits taken
 * 
 * @return int 
 */
int RPG::getHitsTaken() const {
    return hits_taken;
}

/**
 * @brief Returns the luck value
 * 
 * @return float 
 */
float RPG::getLuck() const {
    return luck;
}

/**
 * @brief Returns the exp value
 * 
 * @return float 
 */
float RPG::getExp() const {
    return exp;
}

/**
 * @brief Returns the level
 * 
 * @return int 
 */
int RPG::getLevel() const {
    return level;
}

void RPG::printStats() {
    cout << "\nName: " << name
    << " Hits Taken: " << hits_taken
    << " Luck: " << luck
    << " Exp: " << exp
    << " Level: "<< level
    << " Status: " << (isAlive()? "Alive" : "Dead");
}



//Mutators

/**
 * @brief sets hits_taken to new_htis value
 * 
 * @param new_hits 
 */
void RPG::setHitsTaken(int new_hits) {
    hits_taken = new_hits;
}

/**
 * @brief Returns if hits_taken is less than MAX_HITS_TAKEN
 * 
 * @return true 
 * @return false 
 */
bool RPG::isAlive() const{
    return hits_taken < MAX_HITS_TAKEN;
}

void RPG::setName(string name){
    this->name = name;
}

void RPG::updateExpLevel() {
    exp += 50;
    if(exp >= 100){
        level += 1;
        exp = 0;
        luck += 0.1;
    }
}

void RPG::attack(RPG * opponent) {
    random_device rd;
    mt19937 gen(rd());
    uniform_real_distribution<double> dis(0.0, 1.0);

    float random_num = dis(gen);

    if (random_num > HIT_FACTOR * luck){
        (*opponent).setHitsTaken((*opponent).getHitsTaken() + 1);
    }

}