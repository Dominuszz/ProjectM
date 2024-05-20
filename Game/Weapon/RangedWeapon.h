#ifndef PORJECT2121_RANGEDWEAPON_H
#define PORJECT2121_RANGEDWEAPON_H
#include "Weapon.h"


class RangedWeapon : public Weapon {
private:
    std::vector<std::shared_ptr<Bullet>> m_bullets;
    sf::Texture m_bullet_texture;
public:
    RangedWeapon(const sf::Texture& bullet_texture, sf::Vector2f pos, float damage_scale, float reload_time);
    ~RangedWeapon() = default;

    void Update(float time, sf::Vector2f pos, std::vector<std::shared_ptr<Character>>& characters) override;
    void Attack(sf::Vector2f direction) override;

    std::vector<std::shared_ptr<Bullet>> getBullets() const;
};

#endif //PORJECT2121_RANGEDWEAPON_H
