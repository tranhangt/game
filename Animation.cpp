//
// Created by hang-tran on 11/6/20.
//

#include "Animation.h"
Animation::Animation() {

}
Animation::Animation(int countImg, string file_name, float deltaTime) {
    for(int i = 1; i <= countImg; i++){
        Texture tmpImg;
        tmpImg.loadFromFile("../" + file_name + to_string(i) + ".png");
        listTexture.push_back(tmpImg);
    }
    this->deltaTime = deltaTime;
}
void Animation::Update() {
    currentFrame += deltaTime;
    if(currentFrame > listTexture.size()){
        currentFrame = 0;
    }
}
void Animation::setTexture(Sprite &s) {
    s.setTexture(listTexture[currentFrame]);
    s.setTextureRect(IntRect(0, 0, listTexture[currentFrame].getSize().x, listTexture[currentFrame].getSize().y));
    s.setOrigin((Vector2f)listTexture[currentFrame].getSize() * 0.5f);
}