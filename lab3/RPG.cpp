//RPG.cpp
#include <iostream>
#include <string>
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