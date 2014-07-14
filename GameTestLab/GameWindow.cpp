//
//  Engine.cpp
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#include "GameWindow.h"


GameWindow::GameWindow(int width, int height, std::string windowName){
    windowSize = sf::Vector2i(width,height);
    this->windowName = windowName;
}

GameWindow::~GameWindow(){

}

void GameWindow::forTesting(){
    characterManager->addCharacter("Lumberjack.png", sf::Vector2f(300.0, 300.0));
    characterManager->addCharacter("Lumberjack.png", sf::Vector2f(0.0, 0.0));
}

bool GameWindow::init(){
    //Set up new Render Window
    renderWindow = new sf::RenderWindow(sf::VideoMode(windowSize.x, windowSize.y), windowName);
    camera = new Camera(windowSize.x, windowSize.y);
    renderManager = new Renderer(renderWindow);
    characterManager = new CharacterManager(renderWindow);

    if (!renderWindow || !camera || !renderManager)
        return false;


    forTesting();

    return true;
}



void GameWindow::mainLoop(){
    while (renderWindow->isOpen()){
        processInput(renderWindow); //ProcessInput is in Input.cpp
       // renderManager->renderScene();

        renderWindow->clear();
        characterManager->renderAllCharacters();
        renderWindow->display();
    }
}


void GameWindow::startWindow(){
    if(!init())
        throw "Could not initialize Window";
    mainLoop();
}
