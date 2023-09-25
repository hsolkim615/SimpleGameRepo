#include "Game.h"

void Game::InitVariable() // 변수값 초기화
{
	// nullptr : 주소값이 없는 상태 -> 아무것도 가리키지 않는 상태
	this->Window = nullptr; // Window포인터 초기화 
}

void Game::InitWindow() // 윈도우창 설정
{
	this->VMode.width = 1024;
	this->VMode.height = 768;
	this->Window = new sf::RenderWindow(this->VMode, "Simple Game", sf::Style::Titlebar | sf::Style::Close);
}

Game::Game() // 생성자, 변수 및 원도우창 설정 함수들 실행
{
	this->InitVariable();
	this->InitWindow();
}

Game::~Game() // 소멸자
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
            if (Event.key.code == sf::Keyboard::Escape) { //  ESC누르면 창이 종료
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
