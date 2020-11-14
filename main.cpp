#include<SFML/Graphics.hpp>
#include "Animation.h"
#include "Entity.h"
#include "Player.h"
#include <iostream>
using namespace std;
using namespace sf;
int main() {
    RenderWindow window(VideoMode(655.0f, 315.0f), "ha");
    window.setFramerateLimit(90);

    Entity* player = new Player("front");
    Entity* front = new Player("front");
    Entity* back = new Player("back");
    Entity* left = new Player("left");  
    Entity* right = new Player("right");

    //player->setPosition(200.0f, 100.0f);

    RectangleShape a;
    Texture texture;
    Sprite s;
    s.setTexture(texture);
    a.setSize(Vector2f(15.0, 15.0));
    a.setFillColor(Color::Green);
    string ban[32] = {"#################   #############", "#           #       #           #", "#####   #   #   #   #####   #   #", "#   #   #       #       #   #   #", "#   #   #############   #   #####", "#   #           #   #       #   #", "#   #   #####   #   #########   #", "#           #           #       #", "#   #       #       #           #", "#########   #   #####   #########", "#           #           #        ", "#   #########   #########   #   #", "#           #       #   #   #   #", "#####   #########   #   #   #   #", "#       #           #       #   #", "################   ##############"};

    while(window.isOpen()){
        Event event;
        while(window.pollEvent(event)){
            if(event.type == Event::Closed)
                window.close();
            if(Keyboard::isKeyPressed(Keyboard::Right)){
                right->setPosition(player->getPosition());
                player = right;
                player->setPosition(right->getPosition());
            }
            if(Keyboard::isKeyPressed(Keyboard::Left)){
                left->setPosition(player->getPosition());
                player = left;
                player->setPosition(left->getPosition());
            }
            if(Keyboard::isKeyPressed(Keyboard::Down)){
                front->setPosition(player->getPosition());
                player = front;
                player->setPosition(front->getPosition());
            }
            if(Keyboard::isKeyPressed(Keyboard::Up)){
                back->setPosition(player->getPosition());
                player = back;
                player->setPosition(back->getPosition());
            }
        }
        player->Update();
        window.clear(Color(99, 170, 191));
        /*
        for(int i = 0; i < 32; i++){
            for(int j = 0; j < ban[i].size(); j++){
                if(ban[i][j] == '#'){
                    a.setPosition(20.0 * j, 20.0 * i);
                    window.draw(a);
                }
            }
        }
         */
        //window.draw(a);
        //window.draw(rec);
        //player->setPosition(player->getPosition());
        player->Draw(window);
        window.draw(s);
        window.display();
    }

    return 0;
}
