//
//  Inventory.hpp
//  Console RPG
//
//  Created by Krut Patel on 04/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#ifndef Inventory_hpp
#define Inventory_hpp

#include "Item.hpp"

class Inventory{
private:
    int cap;
    int nrOfItems;
    Item **itemArr;
    void expand();
    void initialize(const int from);
    
public:
    Inventory();
    virtual ~Inventory();
    void addItem(const Item &item);
    void removeItem(int index);
    
    inline void debugPrint() const {
        for (size_t i = 0; i < this->nrOfItems; i++) {
            std::cout << this->itemArr[i]->debugPrint() << std::endl;
        }
    }
};

#endif /* Inventory_hpp */
