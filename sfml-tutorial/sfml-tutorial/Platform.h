#pragma once

#include "Collider.h"


class Platform
{
public:
	Platform(sf::Vector2f size, sf::Color color);
	~Platform();

	//Functions
	void Draw(sf::RenderWindow& window);
	void SetPosition(sf::Vector2f newPos);
	void Fall(sf::Vector2f distance);
	
	float GetSizeX();
	int GetY();
	Collider GetCollider() { return Collider(body); }
		

private:
	sf::RectangleShape body;
};

