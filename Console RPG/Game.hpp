//
//  Game.hpp
//  Console RPG
//
//  Created by Krut Patel on 02/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#ifndef Game_hpp
#define Game_hpp

#include <ctime>
#include <vector>
#include <fstream>
#include "Character.hpp"
#include "Functions.h"

class Game {

public:
    Game();
    virtual ~Game();
    
    //Operators
    
    //Functions
    void mainMenu();
    void initGame();
    void createNewCharacter();
    void saveCharacters();
    void loadCharacters();
    
    //Accessors
    inline bool getPlaying() const { return this->playing; }
    
    //Modifiers
private:
    int choice;
    bool playing;
    
    // Character related
    int activeCharacter;
    std::vector<Character> characters;
    std::string fileName;
};


#endif /* Game_hpp */
