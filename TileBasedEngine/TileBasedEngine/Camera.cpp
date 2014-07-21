//
//  Camera.cpp
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#include "Camera.h"

Camera::Camera(int width, int height){
    viewportSize.x = width;
    viewportSize.y = height;
    
    absolutePosition.x = 0;
    absolutePosition.y = 0;
}
Camera::~Camera(){
    
}

void Camera::move(int horizontalMovement, int verticalMovement){
    absolutePosition.x += (float)horizontalMovement;
    absolutePosition.y += (float)verticalMovement;
}

void Camera::jumpCameraTo(int horizontalPosition, int verticalPosition){
    absolutePosition.x = (float)horizontalPosition;
    absolutePosition.y = (float)verticalPosition;
}

sf::Vector2f Camera::getAbsolutePosition(){
    return absolutePosition;
}