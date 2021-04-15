#pragma once

#include "Collider.h"


class Player
{
public:
	Player(sf::Vector2f size);

	~Player();

	//variables
	sf::RectangleShape body;

	int ExitCount;
	
	const float speed=0.9f;
	const float jumpStrenght=0.6f;
	int jumpCounter = 0;

	//function
	Collider GetCollider() { return Collider(body); }
	
	void DrawTo(sf::RenderWindow &window);
	void Move(sf::Vector2f distance);
	void SetPosition(sf::Vector2f newPos);
	int GetY();
	int GetX();

};

