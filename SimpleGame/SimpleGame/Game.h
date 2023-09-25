#pragma once

#include <iostream>

#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

using namespace sf;
using namespace std;


class Game
{
private:
	/*
	* Window
	*/
	RenderWindow* Window;
	Event e;

	// Window ������ ���� �ʱ�ȭ
	void InitWindowPointer();

	// Window ���� ����
	void InitWindow();

	// ���� ������ Window ����
	void DeleteWindow();

	/*
	* Enemy
	*/
	RectangleShape RectEnemy;

public:
	/* 
	* ������ & �Ҹ���
	*/
	Game();
	~Game();


	/*
	* Enemy
	*/




	/*
	* Game Loop
	*/


	// �� const : ��ȯ ���� ������� ����
	// �� const : �Ű�����, �Լ� ���� ���� ������� ����
	const bool Running() const;

	void EventHandler();

	void Update();

	void Render();

};