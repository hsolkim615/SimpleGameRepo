#include "Game.h"

void Game::InitVariable() // ������ �ʱ�ȭ
{
	// nullptr : �ּҰ��� ���� ���� -> �ƹ��͵� ����Ű�� �ʴ� ����
	this->Window = nullptr; // Window������ �ʱ�ȭ 
}

void Game::InitWindow() // ������â ����
{
	this->VMode.width = 1024;
	this->VMode.height = 768;
	this->Window = new sf::RenderWindow(this->VMode, "Simple Game", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game() // ������, ���� �� ������â ���� �Լ��� ����
{
	this->InitVariable();
	this->InitWindow();
}

Game::~Game() // �Ҹ���
{
}

const bool Game::IsCreate()
{
	return this->Window->isOpen();
}

void Game::ExecEvent()
{
    while (this->Window->pollEvent(this->Event)) {
            
        switch (this->Event.type)
        {
        case sf::Event::Closed:
            this->Window->close();
            break;
        case sf::Event::KeyPressed:
            if (Event.key.code == sf::Keyboard::Escape) { //  ESC������ â�� ����
                this->Window->close();
            }
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
