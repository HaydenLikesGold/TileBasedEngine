//
//  Character.h
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#ifndef __GameTestLab__Character__
#define __GameTestLab__Character__

#include <iostream>
#include "Header.h"

class Character{
private:
    sf::Sprite characterSprite;
    sf::Texture characterTexture;

    sf::Vector2f characterPosition;
    
    int characterID;
    
public:
    Character(std::string spriteFileName, sf::Vector2f startPosition);
    ~Character();
    
    sf::Vector2f getCharacterPosition(){return characterPosition;}
    void setCharacterPosition(sf::Vector2f newPosition){characterPosition = newPosition;}
    
    
    void moveCharacter(float horizontalMovement, float verticalMovement);
    void renderCharacter(sf::RenderWindow* renderWindow);
    
    
};

#endif /* defined(__GameTestLab__Character__) */
