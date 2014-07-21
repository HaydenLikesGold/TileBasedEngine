//
//  Renderer.cpp
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#include "Renderer.h"


Renderer::Renderer(sf::RenderWindow* windowToRender){
    windowBeingRendered = windowToRender;
}

Renderer::~Renderer(){
    
}

void Renderer::renderScene(){
   windowBeingRendered->clear();
   
    
    
    
    windowBeingRendered->display();
}