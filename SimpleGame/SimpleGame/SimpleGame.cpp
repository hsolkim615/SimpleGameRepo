// SimpleGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Game.h"


int main()
{
    Game Simple;    

    while (Simple.IsCreate()) { // ���ѷ����� ������ â�� �ٷ� ������ �ʰ� �����ǰ� ����

        

        // Window.clear(sf::Color(100, 100, 100, 255));
        Window.clear(sf::Color::Magenta);

        Window.display();

    }

}