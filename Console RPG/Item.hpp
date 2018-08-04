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
    int buyValue;
    int sellValue;
public:
    Item();
    virtual ~Item();
    
    inline std::string debugPrint() const { return this->name; }
};

#endif /* Item_hpp */
