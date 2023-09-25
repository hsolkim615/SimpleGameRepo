#include "Game.h"

Game::Game()
{
	this->InitWindow();
	this->InitWindowPointer();
}

Game::~Game()
{
	this->DeleteWindow();
}

void Game::InitWindowPointer()
{
	this->Window = nullptr;
}

void Game::InitWindow()
{
	// int* a = enw int(3);
	this->Window = new RenderWindow(VideoMode(1024, 768), "Simple Game", Style::Titlebar | Style::Close);
}

void Game::DeleteWindow()
{
	delete this->Window;
}

const bool Game::Running() const
{
	return this->Window->isOpen();
}

void Game::EventHandler()
{
	while (this->Window->pollEvent(e)) 
	{ 		
		switch (e.type)
		{
		case Event::Closed: 
			this->Window->close();
			break;
		}
	}
}

void Game::Update()
{
}

void Game::Render()
{
}