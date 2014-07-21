//
//  Renderer.h
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#ifndef __GameTestLab__Renderer__
#define __GameTestLab__Renderer__

#include <iostream>
#include "Header.h"

class Renderer{
private:
    sf::RenderWindow* windowBeingRendered;
    
public:
    Renderer(sf::RenderWindow* windowToRender);
    ~Renderer();
    
    void renderScene();
};

#endif /* defined(__GameTestLab__Renderer__) */
