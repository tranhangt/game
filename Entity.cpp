//
// Created by hang-tran on 11/6/20.
//

#include "Entity.h"
Entity::Entity() {
    body.setFillColor(Color(0, 0, 0, 0));
    body.setOutlineThickness(3.0f);
    name = "Default";
    Velocity.x = Velocity.y = 0;
}
void Entity::Draw(RenderWindow &rd) {
    rd.draw(body);
}
void Entity::Update() {

}
void Entity::setPosition(Vector2f Position) {
    body.setPosition(Position);
}
Vector2f Entity::getPosition() {
    return body.getPosition();
}
RectangleShape Entity::getBody() {
    return body;
}
void Entity::resize(Vector2f size) {
    body.setSize(size);
}