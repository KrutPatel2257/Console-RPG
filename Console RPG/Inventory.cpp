//
//  Inventory.cpp
//  Console RPG
//
//  Created by Krut Patel on 04/08/18.
//  Copyright © 2018 Krut Patel. All rights reserved.
//

#include "Inventory.hpp"

Inventory::Inventory(){
    cap = 10;
    nrOfItems = 0;
    itemArr = new Item*[cap];
}

Inventory::~Inventory(){
    for (size_t i = 0; this->nrOfItems; i++) {
        delete this->itemArr[i];
    }
    delete[] itemArr;
}

void Inventory::expand(){
    this->cap *= 2;
    
    Item **tempArr = new Item*[cap];
    for (size_t i = 0; i < nrOfItems; i++) {
        tempArr[i] = new Item(*itemArr[i]);
    }
    for (size_t i = 0; i < nrOfItems; i++) {
        delete this->itemArr[i];
    }
    delete[] this->itemArr;
    
    this->itemArr = tempArr;
    this->initialize(this->nrOfItems);
}

void Inventory::initialize(const int from){
    for (size_t i = from; i < cap; i++) {
        this->itemArr[i] = nullptr;
    }
}

void Inventory::addItem(const Item &item){
    if(this->nrOfItems >= this->cap){
        expand();
    }
    
    this->itemArr[this->nrOfItems++] = new Item(item);
}

void Inventory::removeItem(int index){
    
}


