#include <SFML/Graphics.hpp>


class Object{
private:
    sf::Event event;
    unsigned int health;
    std::string name;
    sf::Sprite sprite;
    sf::Texture texture;

public:
    virtual void update(float deltaTime) = 0;

    virtual void draw(sf::RenderWindow& window) = 0;

    sf::Event getEvent(){
        return this->event;
    }
};