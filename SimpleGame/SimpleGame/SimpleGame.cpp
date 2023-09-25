// SimpleGame.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

// #include "SimpleGame.h"
#include "Game.h"

int main()
{
    Game SimpleGame;

    // Game Loop
	while (SimpleGame.Running())
	{

		SimpleGame.EventHandler();

		SimpleGame.Update();

		SimpleGame.Render();
				
	}
}