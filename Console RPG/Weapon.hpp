//
//  Weapon.hpp
//  Console RPG
//
//  Created by Krut Patel on 04/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#ifndef Weapon_hpp
#define Weapon_hpp

#include "Item.hpp"

class Weapon : public Item {
private:
    int damageMin;
    int damageMax;
    
public:
    Weapon(int damageMin = 0, int damageMax = 0, std::string name = "NONE", int level = 0,
           int buyValue = 0, int sellValue = 0, int rarity = 0);
    virtual ~Weapon();
    
    // Pure virtual
    virtual Weapon* clone()const;
    
    // Functions
    std::string toString();
};

#endif /* Weapon_hpp */
