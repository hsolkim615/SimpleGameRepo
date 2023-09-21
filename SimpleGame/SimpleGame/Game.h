#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

class Game
{
private:

	// Window
	sf::RenderWindow* Window; // 동적선언, 포인터사용
	sf::VideoMode VMode; // 정적선언

	//Event

	sf::Event Event;

	void InitVariable();
	void InitWindow();

public:
	// constructor
	Game();
	
	// destructor
	~Game();

	// function
	const bool IsCreate();

	void ExecEvent();

	void Update();

	void Render();
	

};