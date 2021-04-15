#include "Player.h"



Player::Player(sf::Vector2f size)
{
	body.setOrigin(size / 2.f);
	body.setSize(size);
	body.setFillColor(sf::Color::Green);
}

void Player::DrawTo(sf::RenderWindow & window)
{
	window.draw(body);
}

void Player::Move(sf::Vector2f distance)
{
	body.move(distance);
}

void Player::SetPosition(sf::Vector2f newPos)
{
	body.setPosition(newPos);
}

int Player::GetY()
{
	return body.getPosition().y;
}

int Player::GetX()
{
	return body.getPosition().x;
}


Player::~Player()
{
}








