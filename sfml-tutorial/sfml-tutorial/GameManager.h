#pragma once

#include <iostream>
#include <vector>
#include <ctime>
#include <string> 
#include <array> 

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

#include "Collider.H"
#include "Player.H"
#include "Platform.H"
#include "Exit.H"

class GameManager
{
	
public:

	GameManager();
	~GameManager();

	//variables
	bool justOnceInit1=false;
	bool justOnceInit2=true;
	bool justOnceInit3=true;
	bool justOnceInit4=true;
	bool justOnceInit5=true;
	bool justOnceInit6=true;
	bool justOnceInit7=true;

	bool stageContainsRedPlatform = false;

	//class
	Player player;
	

	std::vector<Platform> platforms;
	std::vector<Platform> redPlatforms;
	std::vector<Platform> bluePlatforms;

	Platform platformWhite;
	Platform platformWhite2;
	Platform platformWhiteLittle;
	Platform platformRed;
	Platform platformRedBig;
	Platform platformBlue;
	Platform platformBlueLongHorizontal;

	sf::RenderWindow window;
	sf::Vector2i centerWindow;

	sf::Font font;

	

	sf::Text text;
	sf::Text text2;
	sf::Text textEnergy;

	//functions
	void InitWindow();
	void InitText();
	void LoadCurrentStage();
	void ClearPlatformArray();
	void InitStage1();
	void InitStage2();
	void InitStage3();
	void InitStage4();
	void InitStage5();
	void InitStage6();
	void InitStage7();
	void MainRender();

	void SpawnRedPlatform();

	void ControlGravity();
	void PlayerInput();
	void ControlCollision();

	void CheckIfPlayerWon();
	void CheckResetJumpCounter();
	void CheckIfPlayerLoose();
	void CheckIfPlayerCollideWithRedPlatform();
	void Respawn();
	

private:
	const int groundHeight = 900;
	const float gravitySpeed = 0.6f;
	const float redGravitySpeed = 0.9f;
	float jumpVelocity = 0.f;
	float jumpMaxEnergy = 1.0f;

	float enemySpawnTimer=0.f;
	float enemySpawnTimerMax=700.0f;
	int maxEnemies=10;

	bool gameEnded = false;

	Exit exit;
	
};

