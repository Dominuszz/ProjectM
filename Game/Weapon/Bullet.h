#ifndef PORJECT2121_BULLET_H
#define PORJECT2121_BULLET_H
#include "Engine/GameObject.h"
#include<vector>
#include<memory>
class Character;

class Bullet : public GameObject{
private:
    sf::Vector2f m_direction;
    float m_damage;
public:
    Bullet(sf::Texture& texture, sf::Vector2f pos, sf::Vector2f direction);

    void Update(float time);
    bool checkCollisionWithCharacters(std::vector<std::shared_ptr<Character>>& characters);
    bool checkCollisionWithMapBorders();
    void updateDamage(float scale);
};


#endif //PORJECT2121_BULLET_H
