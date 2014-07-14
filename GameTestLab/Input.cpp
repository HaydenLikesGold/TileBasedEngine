//
//  Input.cpp
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#include "Input.h"

void processInput(sf::RenderWindow* currentWindow){
    sf::Event event;
    while (currentWindow->pollEvent(event))
    {
        if (event.type == sf::Event::Closed)
            currentWindow->close();
        
        if (event.type == sf::Event::MouseButtonReleased)
            std::cout<<"Mouse Realeased"<<std::endl;
    }
};