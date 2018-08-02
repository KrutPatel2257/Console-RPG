//
//  Game.cpp
//  Console RPG
//
//  Created by Krut Patel on 02/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#include "Game.hpp"

Game::Game(){
    choice = 0;
    playing = true;
}

Game::~Game(){
    
}

void Game::mainMenu(){
    std::cout << "Main Menu" << std::endl;
    std::cout << "0: Quit" << std::endl;
    std::cout << "1: Travel" << std::endl;
    std::cout << "2: Shop" << std::endl;
    std::cout << "3: Level up" << std::endl;
    std::cout << "4: Rest" << std::endl;
    
    std::cout << std::endl << "Choice: ";
    std::cin >> choice;
    
    switch (choice) {
        case 0:
            playing = false;
            break;
            
        default:
            break;
    }
    
}
