//
//  Game.hpp
//  Console RPG
//
//  Created by Krut Patel on 02/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <iostream>
#include <iomanip>
#include <ctime>
#include "Character.hpp"
#include "Functions.h"

class Game {

public:
    Game();
    virtual ~Game();
    
    //Operators
    
    //Functions
    void mainMenu();
    
    //Accessors
    inline bool getPlaying() const { return this->playing; }
    
    //Modifiers
private:
    int choice;
    bool playing;
};


#endif /* Game_hpp */
