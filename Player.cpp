//
// Created by hang-tran on 11/6/20.
//
#include "Animation.h"
#include "Player.h"
#include "Entity.h"

Player::Player() {}
Player::Player(string name) {
    currentAnimation = Animation(4, name, 1.f/60);
    currentAnimation.setTexture(s);
    this->body.setOrigin((Vector2f)s.getTexture()->getSize() * 0.5f);
    this->body.setSize((Vector2f)s.getTexture()->getSize());
    s.setPosition(200.0f, 100.0f);
}
void Player::Update() {
    Entity::Update();
    currentAnimation.Update();
    currentAnimation.setTexture(s);
    s.setPosition(body.getPosition());
    Input();
    Move(this->Velocity);
}
void Player::Move(Vector2f velocity) {
    s.move(velocity);
    this->body.setPosition(s.getPosition());
}
void Player::Draw(RenderWindow& rd) {
    //Entity::Draw(rd);
    rd.draw(s);
}
void Player::Input() {
    if(Keyboard::isKeyPressed(Keyboard::Right)){
        this->Velocity.x = 1;
        this->Velocity.y = 0;
    }
    if(Keyboard::isKeyPressed(Keyboard::Left)){
        this->Velocity.x = -1;
        this->Velocity.y = 0;
    }
    if(Keyboard::isKeyPressed(Keyboard::Up)){
        this->Velocity.y = -1;
        this->Velocity.x = 0;
    }
    if(Keyboard::isKeyPressed(Keyboard::Down)){
        this->Velocity.y = 1;
        this->Velocity.x = 0;
    }
}