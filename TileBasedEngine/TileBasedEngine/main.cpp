
#include <iostream>
#include <SFML/Graphics.hpp>

using namespace std;

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