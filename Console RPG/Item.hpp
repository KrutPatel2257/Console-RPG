//
//  Item.hpp
//  Console RPG
//
//  Created by Krut Patel on 04/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#ifndef Item_hpp
#define Item_hpp

#include <string>
#include <iostream>
#include <iomanip>

class Item {
private:
    std::string name;
    int level;
    int buyValue;
    int sellValue;
    int rarity;
    
public:
    Item(std::string name = "NONE", int level = 0, int buyValue = 0, int sellValue = 0, int rarity = 0);
    virtual ~Item();
    
    inline std::string debugPrint() const { return this->name; }
    virtual Item* clone()const = 0;
    
    // Accessors
    inline const std::string& getName() const { return this->name; }
    inline const int& getLevel() const { return this->level; }
    inline const int& getBuyValue() const { return this->buyValue; }
    inline const int& getSellValue() const { return this->sellValue; }
    inline const int& getRarity() const { return this->rarity; }
    
    // Modifiers
};

#endif /* Item_hpp */
