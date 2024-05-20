#include "Engine/GameObject.h"


sf::Sprite GameObject::getSprite() const{
    return m_sprite;
}

sf::Vector2f GameObject::getSize() const{
    return m_size;
}

sf::Vector2f GameObject::getPos() const{
    return m_pos;
}