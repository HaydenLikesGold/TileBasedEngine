//
//  TileSheet.cpp
//  GameTestLab
//
//  Created by Hayden Goldstien on 9/15/13.
//  Copyright (c) 2013 com.HaydenGoldstien. All rights reserved.
//

#include "TileSheet.h"

TileSheet::TileSheet(int tileSize){
    this->tileSize=tileSize;
}

TileSheet::~TileSheet(){
    
}

void TileSheet::LoadTileSet(std::string fileName, int tileSetWidth, int tileSetHeight){
    std::cout<<"Loading Tile Set..."<<std::endl;
    
    //Mark id of 0 as an empty texture for TileSheets
    sf::Texture emptyTexture;
    if (emptyTexture.create(tileSize, tileSize))
        addImageTexture(emptyTexture);
    
    //Load contents from tileSheet
    sf::Image tileSheet;
    tileSheet.loadFromFile(resourcePath()+fileName);
    
    int tilesAcross = tileSetWidth/tileSize;
    int tilesDown = tileSetHeight/tileSize;
    
    int currentYTile = 0, currentXTile = 0;
    while (currentYTile < tilesDown)
    {
        while (currentXTile < tilesAcross)
        {
            //Get the Image to Add
            sf::Image tileImageToAdd;
            tileImageToAdd.create(tileSize, tileSize);
            tileImageToAdd.copy(tileSheet, 0, 0, sf::IntRect(currentXTile*tileSize, currentYTile*tileSize,
                                                             tileSize, tileSize), true);
            
            //Convert Image to a Texture
            sf::Texture tileTextureToAdd;
            tileTextureToAdd.loadFromImage(tileImageToAdd);
            
            addImageTexture(tileTextureToAdd);
            currentXTile++;
        }
        currentYTile++;
        currentXTile = 0;
    }
}

