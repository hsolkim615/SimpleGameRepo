// SimpleGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"


int main()
{
    Game Simple;    

    while (Simple.IsCreate()) { // 무한루프를 돌려서 창이 바로 꺼지지 않고 유지되게 해줌

        

        // Window.clear(sf::Color(100, 100, 100, 255));
        Window.clear(sf::Color::Magenta);

        Window.display();

    }

}