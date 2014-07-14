//
//  ImageSheet.cpp
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#include "ImageSheet.h"

ImageSheet::ImageSheet(){
    imageCount=0;

}
ImageSheet::~ImageSheet(){
    
}

void ImageSheet::addImageTexture(sf::Texture& imageTextureToAdd){
    imageList.push_back(imageTextureToAdd);
    imageIDs[imageCount] = int(imageList.size()) - 1;
    imageCount++;
}

sf::Texture& ImageSheet::GetImage(int imageID){
    return imageList[imageIDs[imageID]];
}


