//
//  Character.cpp
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#include "Character.h"

Character::Character(std::string spriteFileName, sf::Vector2f startPosition){
    //Sets the sprite of the character
    if (!characterTexture.loadFromFile(resourcePath()+spriteFileName))
        std::cout << "Error loading "<<spriteFileName<<std::endl;
    characterSprite.setTexture(characterTexture);
    
    //Sets the position of the character
    characterPosition = startPosition;
    characterSprite.move(characterPosition);
}

Character::~Character(){
    
}

void Character::moveCharacter(float horizontalMovement, float verticalMovement){
    characterPosition.x += horizontalMovement;
    characterPosition.y += verticalMovement;
    characterSprite.move(characterPosition);

}

void Character::renderCharacter(sf::RenderWindow* renderWindow){
    renderWindow->draw(characterSprite);
}

