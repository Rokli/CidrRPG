#include <SFML/Graphics.hpp>
#include <iostream>

void setSpriteToWindowSize(sf::Sprite& sprite, const sf::RenderWindow& window)
{

}

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "CidrRPG");
    window.setFramerateLimit(60);
    
    sf::Texture texture, textureGrass;
    texture.loadFromFile("sprites/Characters(100x100)/Soldier/Soldier/Soldier.png");
    textureGrass.loadFromFile("sprites/world/grass.png");
    sf::Sprite sprite, spriteGrass;
    spriteGrass.setTexture(textureGrass);
    spriteGrass.setScale(1.2,1.5);
    // sprite.setTexture(texture);
    // sprite.setTextureRect(sf::IntRect(10, 10, 50, 30));
    // sprite.setColor(sf::Color(255, 255, 255, 200));
    // sprite.setPosition(100, 25);

    sf::CircleShape circle;
    circle.setTexture(&texture);
    circle.setTextureRect(sf::IntRect(40,39,20,20));
    // circle.setFillColor(sf::Color::Black);
    circle.setRadius(50);
    circle.setPosition(10,10);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
                circle.move(0,-10);

            if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
                circle.setPosition(circle.getPosition().x,circle.getPosition().y + 10);
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
                circle.setPosition(circle.getPosition().x - 10,circle.getPosition().y);
            
            if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
                circle.setPosition(circle.getPosition().x + 10,circle.getPosition().y);
        }   
        
        window.clear(sf::Color::White);
        window.draw(spriteGrass);
        window.draw(sprite);
        window.draw(circle);
        window.display();
    }

    return 0;
}