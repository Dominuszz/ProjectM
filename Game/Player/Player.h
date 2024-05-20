#ifndef PORJECT2121_PLAYER_H
#define PORJECT2121_PLAYER_H
#include "Engine/Character.h"
#include "Engine/PlayerController.h"
#include<memory>
#include<vector>
class PlayerController;
class Weapon;

enum class WeaponType;

enum class State{
    IDLE,
    RUN
};

class Player: public Character {
private:
    State m_state;
    std::unique_ptr<PlayerController> m_controller;
    std::shared_ptr<Weapon> m_weapon;
    float m_attack_speed_scale = 1.0;
    float m_attack_range_scale = 1.0;

    void checkCollisionWithMapBorders();
public:
    Player()=delete;
    Player(sf::Texture& texture, sf::Vector2f start_pos, float health);
    ~Player();

    void Update(float time)override;
    void attackEnemies(float time,std::vector<std::shared_ptr<Character>>& characters);
    void initWeapon(WeaponType weapon_type, float damage_scale, const sf::Texture& bullet_texture = sf::Texture());
    void setState(State state);

    std::shared_ptr<Weapon> getWeapon() const;
};


#endif //PORJECT2121_PLAYER_H
