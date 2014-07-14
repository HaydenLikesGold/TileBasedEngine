//
//  Camera.h
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#ifndef __GameTestLab__Camera__
#define __GameTestLab__Camera__

#include <iostream>
#include "Header.h"

class Camera{
private:
    sf::Vector2f absolutePosition;
    sf::Vector2i viewportSize;
    
public:
    Camera(int width, int height);
    ~Camera();
    
    void move(int horizontalMovement, int verticalMovement);
    void jumpCameraTo(int horizontalPosition, int verticalPosition);

    sf::Vector2f getAbsolutePosition();
};



#endif /* defined(__GameTestLab__Camera__) */
