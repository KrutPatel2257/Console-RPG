//
//  main.cpp
//  Console RPG
//
//  Created by Krut Patel on 02/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#include "Game.hpp"

int main() {
    
    srand(time(NULL));
    
    Game game;
    game.initGame();
    
    while (game.getPlaying()) {
        game.mainMenu();
    }
    
    return 0;
}
