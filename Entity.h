//
// Created by hang-tran on 11/6/20.
//
#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#ifndef MAZE_GAME_ENTITY_H
#define MAZE_GAME_ENTITY_H
using namespace sf;
using namespace std;

class Entity {
protected:
    Vector2f Size;
    string name;
    Vector2f Velocity;
    RectangleShape body;
public:
    Entity();
    virtual void Update();
    virtual void Draw(RenderWindow& rd);
    void resize(Vector2f size);
    void setPosition(Vector2f Position);
    RectangleShape getBody();
    Vector2f getPosition();


};


#endif //MAZE_GAME_ENTITY_H
