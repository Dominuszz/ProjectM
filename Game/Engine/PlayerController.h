#ifndef PORJECT2121_PLAYERCONTROLLER_H
#define PORJECT2121_PLAYERCONTROLLER_H
#include<memory>

class Player;

class PlayerController {
public:
    static bool controller_created;

    PlayerController();
    void controllPlayer(Player* player, float time);
};


#endif //PORJECT2121_PLAYERCONTROLLER_H
