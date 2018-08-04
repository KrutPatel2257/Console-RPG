//
//  Character.hpp
//  Console RPG
//
//  Created by Krut Patel on 02/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#ifndef Character_hpp
#define Character_hpp

#include <math.h>
#include "Inventory.hpp"

class Character {
private:
    double xPos;
    double yPos;
    
    Inventory inventory;
    Weapon weapon;
    Armor armor_head;
    Armor armor_chest;
    Armor armor_arms;
    Armor armor_legs;
    
    std::string name;
    int level;
    int exp;
    int expNext;
    int hp;
    int hpMax;
    int stamina;
    int staminaMax;
    int damageMin;
    int damageMax;
    int defence;
    int luck;
    
    int strength;
    int vitality;
    int dexterity;
    int intelligence;
    
    int statPoints;
    int skillPoints;
public:
    Character();
    virtual ~Character();
    
    // Functions
    void initialize(std::string name);
    void printStats() const;
    void levelUp();
    std::string getAsString() const;
    
    // Accessors
    inline const double& getX() const { return this->xPos; }
    inline const double& getY() const { return this->yPos; }
    inline const std::string& getName() const { return this->name; }
    inline const int& getLevel() const { return this->level; }
    inline const int& getExp() const { return this->exp; }
    inline const int& getExpNext() const { return this->expNext; }
    inline const int& getHP() const { return this->hp; }
    inline const int& getHPMax() const { return this->hpMax; }
    inline const int& getStamina() const { return this->stamina; }
    inline const int& getDamageMin() const { return this->damageMin; }
    inline const int& getDamageMax() const { return this->damageMax; }
    inline const int& getDefence() const { return this->defence; }
    
    // Modifiers
};

#endif /* Character_hpp */
