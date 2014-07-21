//
//  Engine.h
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#ifndef __GameTestLab__GameWindow__
#define __GameTestLab__GameWindow__

#include <iostream>
#include "Header.h"
#include "Camera.h"
#include "Input.h"
#include "Renderer.h"

#include "CharacterManager.h"


class GameWindow
{
private:
    sf::Vector2i windowSize;
    sf::RenderWindow* renderWindow;
    Camera* camera;
    Renderer* renderManager;
    CharacterManager* characterManager;
    
    
    std::string windowName;
    
    
    void forTesting();
    
    bool init();
    void mainLoop();
    
public:
    GameWindow(int width, int height, std::string windowName);
    ~GameWindow();
    
    void startWindow();
};

#endif /* defined(__GameTestLab__GameWindow__) */
