
//#include "Header.h"

//#include "Camera.h"
//#include "TileSheet.h"
//#include "GameWindow.h"

#include <iostream>
using namespace std;

/*
void debugCameraClass(){
    cout<<"----------------------------"<<endl;
    cout<<"DEBUGGING OF CAMERA CLASS"<<endl;
    cout<<"----------------------------"<<endl;
    Camera* testCamera = new Camera(640, 400);
    sf::Vector2f position = testCamera->getAbsolutePosition();
    cout << "Start Position: ("<<position.x<<","<<position.y<<")"<<endl;
    
    testCamera->move(100, 50);
    position = testCamera->getAbsolutePosition();
    cout << "Move Position: ("<<position.x<<","<<position.y<<")"<<endl;
    
    testCamera->jumpCameraTo(300, 200);
    position = testCamera->getAbsolutePosition();
    cout << "Jump Position: ("<<position.x<<","<<position.y<<")"<<endl;
    
    testCamera->move(-100, -50);
    position = testCamera->getAbsolutePosition();
    cout << "Move Position: ("<<position.x<<","<<position.y<<")"<<endl;

    cout<<endl;
}

void debugTileSheetClass(){
    cout<<"----------------------------"<<endl;
    cout<<"DEBUGGING OF TILESHEET CLASS"<<endl;
    cout<<"----------------------------"<<endl;
    
    TileSheet* debugTileSheet = new TileSheet(32);
    cout<<"Tile Size: "<<debugTileSheet->getTileSize()<<endl;
    debugTileSheet->setTileSize(64);
    cout<<"Changed Size: "<<debugTileSheet->getTileSize()<<endl;
    debugTileSheet->LoadTileSet("Lumberjack.png", 256, 256);
    
    cout<<endl;
}

void debugGameWindowClass(){
    cout<<"----------------------------"<<endl;
    cout<<"DEBUGGING OF GameWindow CLASS"<<endl;
    cout<<"----------------------------"<<endl;
    
    GameWindow* testWindow = new GameWindow(640, 400, "Love the Life You Live");
    try {
        testWindow->startWindow();
    }
    catch (char* e){
        cout<<"An Error Occured in loading the testWindow"<<endl;
    }
    
    cout<<endl;
}

*/
/*
int main(int, char const**)
{
    debugGameWindowClass();
    sf::Vector2i screenDimensions(800, 600);
    
    //For Sprite Management
    enum Direction {Down, Left, Right, Up};
    sf::Vector2i spriteSource{0, Down};
    float frameCounter = 0, switchFrame = 100, frameSpeed = 500;
    bool isLumberJackMoving = false;
    double lumberjackSpeed = 0.5;

    sf::Texture lumberjackTexture;
    sf::Sprite lumberjack;
    
    sf::Clock clock;
    
    if (!lumberjackTexture.loadFromFile(resourcePath()+"Lumberjack.png"))
        cout << "Error loading Lumberjack.png" <<endl;
    lumberjack.setTexture(lumberjackTexture);

    sf::RenderWindow Window;
    Window.create(sf::VideoMode(screenDimensions.x, screenDimensions.y), "Game Test Lab");
    while (Window.isOpen()){
        sf::Event Event;
        while(Window.pollEvent(Event)){
            switch (Event.type) {
                case sf::Event::Closed:
                    Window.close();
                    break;
                default:
                    break;
            }
            
        
        }
        
       isLumberJackMoving = false;

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)){
            isLumberJackMoving = true;
            spriteSource.y=Up;
            lumberjack.move(0, -lumberjackSpeed);
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
            isLumberJackMoving = true;
            spriteSource.y=Down;
            lumberjack.move(0, lumberjackSpeed);
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
            isLumberJackMoving = true;
            spriteSource.y=Right;
            lumberjack.move(lumberjackSpeed, 0);
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
            isLumberJackMoving = true;
            spriteSource.y=Left;
            lumberjack.move(-lumberjackSpeed, 0);
        }
        
        if (isLumberJackMoving)
        {
            frameCounter += frameSpeed * clock.restart().asSeconds();
            if (frameCounter >= switchFrame)
            {
                frameCounter=0;
                spriteSource.x++;
                if (spriteSource.x * 64 >= lumberjackTexture.getSize().x)
                    spriteSource.x=0;
            }
        }
        //If player not moving, set a neutral stance
        else {spriteSource.x = 0;}
        
        lumberjack.setTextureRect(sf::IntRect(spriteSource.x * 64, spriteSource.y * 64, 64, 64));

        

        
        Window.draw(lumberjack);
        Window.display();
        Window.clear();
    }
    return EXIT_SUCCESS;
 
}
 
*/

#include <SFML/Graphics.hpp>

int main()
{
   sf::RenderWindow window(sf::VideoMode(800, 600), "SFML window");
    
    while(window.isOpen())
    {
        sf::Event Event;
        while(window.pollEvent(Event))
        {
            if(Event.type == sf::Event::Closed || Event.key.code == sf::Keyboard::Escape)
                window.close();
        }
        
        window.display();
    }
    return 0;
}
