#include "object.hpp"

void Object::set_sprite(sf::Sprite &sprite) {
    this->sprite = sprite;
}

void Object::set_texture(sf::Texture &texture) {
    this->texture = texture;
}