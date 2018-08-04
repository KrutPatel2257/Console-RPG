//
//  Item.cpp
//  Console RPG
//
//  Created by Krut Patel on 04/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#include "Item.hpp"

Item::Item(std::string name, int level, int buyValue, int sellValue, int rarity){
    this->name = "NONE";
    this->level = level;
    this->buyValue = 0;
    this->sellValue = 0;
    this->rarity = rarity;
}

Item::~Item(){
    
}
