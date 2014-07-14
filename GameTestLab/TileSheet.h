//
//  TileSheet.h
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#ifndef __GameTestLab__TileSheet__
#define __GameTestLab__TileSheet__

#include <iostream>
#include "ImageSheet.h"

class TileSheet: public ImageSheet{
private:
    int tileSize;
public:
    TileSheet(int tileSize);
    ~TileSheet();
    
    int getTileSize(){return tileSize;}
    void setTileSize(int newTileSize){this->tileSize = newTileSize;}
    
    void LoadTileSet(std::string fileName, int tileSetWidth, int tileSetHeight);
};

#endif /* defined(__GameTestLab__TileSheet__) */
