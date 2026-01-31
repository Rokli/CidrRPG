#pragma once

#include <SFML/Graphics.hpp>


class Object{
private:
    sf::Sprite sprite;
    sf::Texture texture;

public:
    virtual void update(float deltaTime) = 0;

    virtual void draw(sf::RenderWindow& window) = 0;

    void set_sprite(sf::Sprite &sprite);

    void set_texture(sf::Texture &texture);
};

