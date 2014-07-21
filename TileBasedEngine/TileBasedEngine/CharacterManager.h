//
//  PlayerManager.h
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#ifndef __GameTestLab__CharacterManager__
#define __GameTestLab__CharacterManager__

#include <iostream>
#include "Header.h"
#include "Character.h"


class CharacterManager{
private:
    
    sf::RenderWindow* renderWindow;
    
    std::vector<Character> characters;
    std::map<int, int> characterIDs;
    int characterCount;

    
public:
    CharacterManager(sf::RenderWindow* renderWindow);
    ~CharacterManager();

    void addCharacter(std::string characterSpritePath, sf::Vector2f characterStartPosition);
    
    void renderAllCharacters();
};

#endif /* defined(__GameTestLab__CharacterManager__) */
