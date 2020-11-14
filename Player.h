//
// Created by hang-tran on 11/6/20.
//

#ifndef MAZE_GAME_PLAYER_H
#define MAZE_GAME_PLAYER_H
#include "Animation.h"
#include "Entity.h"

class Player : public Entity{
private:
    Sprite s;
    Animation currentAnimation;
public:
    Player();
    Player(string name);
    void Update();
    void Draw(RenderWindow& rd);
    void Move(Vector2f velocity);
    void Input();
};


#endif //MAZE_GAME_PLAYER_H
