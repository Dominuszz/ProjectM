#ifndef PORJECT2121_CHARACTER_H
#define PORJECT2121_CHARACTER_H
#include<SFML/Graphics.hpp>
#include<memory>

class HealthBar;

enum class Direction:bool{
    LEFT = 0,
    RIGHT = 1
};

class Character {
protected:
    float m_health;
    float m_speed;
    sf::Vector2f m_size;
    sf::Vector2f m_pos;
    sf::Sprite m_sprite;
    std::shared_ptr<HealthBar>   m_health_bar;
    Direction m_direction = Direction::RIGHT;
public:
    virtual ~Character();

    virtual void Update(float time)=0;
    virtual void takeDamage(float damage);

    void setPosition(sf::Vector2f& pos);
    void setDirection(Direction direction);

    float getHP()const;
    sf::Vector2f getSize() const;
    sf::Vector2f getPos() const;
    sf::Sprite getSprite() const;
    Direction getDirection() const;
    std::shared_ptr<HealthBar> getHealthBar() const;
};


#endif //PORJECT2121_CHARACTER_H
