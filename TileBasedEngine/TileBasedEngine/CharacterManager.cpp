//
//  CharacterManager.cpp
//  TileBasedEngine
//
//  Created by Hayden Goldstien on 7/21/14.
//  Copyright (c) 2014 HaydenGoldstien. All rights reserved.
//

#include "CharacterManager.h"

CharacterManager::CharacterManager(sf::RenderWindow* renderWindow){
    this->renderWindow = renderWindow;
    characterCount = 0;
}
CharacterManager::~CharacterManager(){
    
}

void CharacterManager::addCharacter(std::string characterSpritePath, sf::Vector2f characterStartPosition){
    Character* characterToAdd = new Character(characterSpritePath, characterStartPosition);
    if (characterToAdd){
        characters.push_back(*characterToAdd);
        characterIDs[characterCount] = int(characters.size()) - 1;
        characterCount++;
    }
    else
        std::cout<<"Error on Character Load"<<std::endl;
}

void CharacterManager::renderAllCharacters(){
    for (int i=0; i<characters.size(); i++){
        characters[i].renderCharacter(renderWindow);
    }
}