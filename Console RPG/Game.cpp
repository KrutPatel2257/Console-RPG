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

void Game::initGame(){
    std::string name;
    std::cout << "Enter name for character: ";
    getline(std::cin, name);
    
    character.initialize(name);
}

void Game::mainMenu(){
    std::cout << "= Main Menu =" << std::endl;
    std::cout << "0: Quit" << std::endl;
    std::cout << "1: Travel" << std::endl;
    std::cout << "2: Shop" << std::endl;
    std::cout << "3: Level up" << std::endl;
    std::cout << "4: Rest" << std::endl;
    std::cout << "5: Character sheet" << std::endl;
    std::cout << std::endl;
 
    std::cout << std::endl << "Choice: ";
    std::cin >> choice;
    std::cout << std::endl;
    
    switch (choice) {
        case 0:
            playing = false;
            break;
        case 5:
            character.printStats();
            break;
        default:
            break;
    }
    
}
