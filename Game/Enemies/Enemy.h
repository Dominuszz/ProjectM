#ifndef PORJECT2121_ENEMY_H
#define PORJECT2121_ENEMY_H
#include "Engine/Character.h"
#include "Player/Player.h"
#include "Engine/Timer.h"
#include<cmath>
#include<memory>

class Enemy : public Character{
private:
    std::shared_ptr<Player> m_player;
    std::unique_ptr<Timer>  m_attack_cooldown;
    float m_speed;
    float m_damage;

    void followPlayer(float time);
    void updateDirection();
    void attackIfCanAttack();
public:
    Enemy(const sf::Texture& textures,sf::Vector2f pos, float attack_cooldown,float speed,float damage,float health);
    ~Enemy()=default;

    void Update(float time);

    void setPlayer(std::shared_ptr<Player> player);
};


#endif //PORJECT2121_ENEMY_H
