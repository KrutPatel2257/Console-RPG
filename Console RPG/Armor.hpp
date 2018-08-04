//
//  Armor.hpp
//  Console RPG
//
//  Created by Krut Patel on 05/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#ifndef Armor_hpp
#define Armor_hpp

#include "Item.hpp"

class Armor : Item {
private:
    int type;
    int defence;
public:
    Armor(int type = 0, int defence = 0, std::string name = "NONE", int level = 0,
          int buyValue = 0, int sellValue = 0, int rarity = 0); 
    virtual ~Armor();
    
    // Pure virtual
    virtual Armor* clone()const;
    
    // Functions
    std::string toString();
};

#endif /* Armor_hpp */
