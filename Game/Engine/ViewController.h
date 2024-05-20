#ifndef PORJECT2121_VIEWCONTROLLER_H
#define PORJECT2121_VIEWCONTROLLER_H
#include <SFML/Graphics.hpp>
#include <memory>
class Player;

class ViewController {
private:
    std::shared_ptr<Player> m_player;
    std::unique_ptr<sf::View> m_view;
public:
    ViewController(std::shared_ptr<Player> player);
    ~ViewController() = default;

    void Update(float time, sf::RenderWindow& Window);
};


#endif //PORJECT2121_VIEWCONTROLLER_H
