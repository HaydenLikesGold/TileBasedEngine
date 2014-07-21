//
//  ImageSheet.h
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#ifndef __GameTestLab__ImageSheet__
#define __GameTestLab__ImageSheet__

#include <iostream>
#include "Header.h"

class ImageSheet{
private:
    std::vector<sf::Texture> imageList;
    std::map <int, int> imageIDs;
    
    int imageCount;
    
public:
    ImageSheet();
    ~ImageSheet();
    
    void addImageTexture(sf::Texture& imageTextureToAdd);
    sf::Texture& GetImage(int imageID);
};

#endif /* defined(__GameTestLab__ImageSheet__) */
