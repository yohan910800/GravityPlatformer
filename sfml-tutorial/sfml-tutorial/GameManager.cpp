#include "GameManager.h"


//Start
////////////

GameManager::GameManager() :
	player({40,40}),
	platformBlue({ 40,40 }, { sf::Color::Blue }) ,
	platformBlueLongHorizontal({ 400,40 }, { sf::Color::Blue }) ,
	platformRedBig({ 80,80 }, { sf::Color::Red }) ,
	platformWhiteLittle({ 80,40 }, { sf::Color::White }) ,
	
	platformWhite({ 800,40 }, { sf::Color::White }),
	platformWhite2({ 40,800 }, { sf::Color::White }),
	platformRed({ 40,40 }, { sf::Color::Red }),
	exit({ 60,60 }, { sf::Color::Yellow }),
centerWindow((sf::VideoMode::getDesktopMode().width / 2) - 445,
(sf::VideoMode::getDesktopMode().height / 10))
{
	platforms.push_back(platformWhite);
	//for debug
	/*player.ExitCount = 5;
	justOnceInit6 = false;*/
}


GameManager::~GameManager()
{
}

void GameManager::InitWindow()
{
	

	window.create
	(sf::VideoMode(900, 900), "SFML gravity", sf::Style::Titlebar | sf::Style::Close);

	window.setPosition(centerWindow);
	window.setKeyRepeatEnabled(true);
}

void GameManager::InitText()
{
	if (!font.loadFromFile("arial.ttf"))
	{
		// error...
	}
	text.setFont(font); // font is a sf::Font
	
	text.setCharacterSize(24); // in pixels, not points!
	text.setFillColor(sf::Color::Red);
	text.setStyle(sf::Text::Bold );
	

	text2.setFont(font); // font is a sf::Font

	text2.setCharacterSize(24); // in pixels, not points!
	text2.setFillColor(sf::Color::Red);
	text2.setStyle(sf::Text::Bold);

	text2.setPosition(300, 450);




	textEnergy.setFont(font); // font is a sf::Font

	textEnergy.setCharacterSize(24); // in pixels, not points!
	textEnergy.setFillColor(sf::Color::Green);
	textEnergy.setStyle(sf::Text::Bold);

	textEnergy.setPosition(10, 20);
}
///////
////////


//Initialize stages 
////////////
////////////
void GameManager::InitStage1()
{
	//Vector setting
	redPlatforms.clear();
	//
	//Gravity setting
	stageContainsRedPlatform = false;
	//

	//GameObject position Setting
	player.SetPosition({ 50,700 });
	exit.SetPosition({ 800,750 });

	platforms[0].SetPosition({ 200,800 });
	//
}
void GameManager::InitStage2()
{
	//Gravity setting
	stageContainsRedPlatform = false;
	//

	//Vector setting
	ClearPlatformArray();

	platforms.push_back(platformWhite);
	platforms.push_back(platformWhite2);

	bluePlatforms.push_back(platformBlue);
	//

	//GameObject position Setting
	platforms[0].SetPosition({ 200,800 });
	platforms[1].SetPosition({ 200,340 });

	player.SetPosition({ 50,700 });
	bluePlatforms[0].SetPosition({ 200,700 });
	exit.SetPosition({ 800,750 });
	//
}
void GameManager::InitStage3()
{
	//Gravity setting
	stageContainsRedPlatform = true;
	//

	//Vector setting
	ClearPlatformArray();
	
	platforms.push_back(platformWhite);

	redPlatforms.push_back(platformRed);

	//
	//GameObject position Setting
	platforms[0].SetPosition({ 200,800 });
	player.SetPosition({ 50,700 });
	redPlatforms[0].SetPosition({ 300,400 });
	exit.SetPosition({ 800,750 });
	//
}

void GameManager::InitStage4()
{
	//Gravity setting
	stageContainsRedPlatform = true;
	//
	
	//Vector setting
	ClearPlatformArray();

	platforms.push_back(platformWhite);
	platforms.push_back(platformWhite2);
	platforms.push_back(platformWhite2);

	redPlatforms.push_back(platformRed);
	//

	//GameObject position Setting
	platforms[0].SetPosition({ 200,800 });
	platforms[1].SetPosition({ 200,500 });
	platforms[2].SetPosition({ 400,500 });

	redPlatforms[0].SetPosition({ 300,00 });

	player.SetPosition({ 50,700 });
	exit.SetPosition({ 800,750 });
	//
}
void GameManager::InitStage5()
{
	//Gravity setting
	stageContainsRedPlatform = true;
	//

	//Vector setting
	ClearPlatformArray();

	platforms.push_back(platformWhite);
	platforms.push_back(platformWhite2);
	platforms.push_back(platformWhite2);

	redPlatforms.push_back(platformRed);

	bluePlatforms.push_back(platformBlueLongHorizontal);
	//

	//GameObject position Setting
	platforms[0].SetPosition({ 200,800 });
	platforms[1].SetPosition({ 200,900 });
	platforms[2].SetPosition({ 400,900 });

	redPlatforms[0].SetPosition({ 300,0 });

	bluePlatforms[0].SetPosition({ 300,500 });

	player.SetPosition({ 50,700 });
	exit.SetPosition({ 800,750 });
	//
}
void GameManager::InitStage6()
{
	//Gravity setting
	stageContainsRedPlatform = true;
	//
	
	//Vector setting
	ClearPlatformArray();

	platforms.push_back(platformWhite);

	redPlatforms.push_back(platformRedBig);

	bluePlatforms.push_back(platformBlue);
	//

	//GameObject position Setting
	platforms[0].SetPosition({ 200,800 });

	redPlatforms[0].SetPosition({ 300,400 });

	bluePlatforms[0].SetPosition({ 100,700 });
	
	player.SetPosition({ 50,700 });
	exit.SetPosition({ 800,750 });
	//
}
void GameManager::InitStage7()
{
	//Gravity setting
	stageContainsRedPlatform = true;
	//

	//Vector setting
	ClearPlatformArray();

	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);
	platforms.push_back(platformWhiteLittle);

	bluePlatforms.push_back(platformBlue);

	//redPlatforms.push_back(platformRed);
	//

	//GameObject position Setting
	platforms[0].SetPosition({ 200,800 });
	platforms[1].SetPosition({ 700,700 });
	platforms[2].SetPosition({ 500,600 });
	//down platforms
	platforms[3].SetPosition({ 200,800 });
	platforms[4].SetPosition({ 300,800 });
	platforms[5].SetPosition({ 200,800 });
	platforms[6].SetPosition({ 100,800 });

	platforms[7].SetPosition({ 400,400 });
	platforms[8].SetPosition({ 100,300 });
	platforms[9].SetPosition({ 500,300 });
	platforms[10].SetPosition({ 500,200 });

	//redPlatforms[0].SetPosition({ 300,400 });

	bluePlatforms[0].SetPosition({ 500,100 });

	player.SetPosition({ 50,700 });
	exit.SetPosition({ 800,200 });
	//
}


void GameManager::LoadCurrentStage()
{
	//set text
	text.setString("Stage clear : "+std::to_string(player.ExitCount)+"/6");
	float displayedEnergy = jumpMaxEnergy - jumpVelocity;
	if (displayedEnergy < 0) {
		displayedEnergy = 0;
	}
	textEnergy.setString("Jump energy : "+std::to_string(displayedEnergy));

	if (justOnceInit1 == false) {
		InitStage1();
		player.ExitCount = 0;
		justOnceInit1 = true;
	}
	else if (justOnceInit2 == false) {
		InitStage2();
		player.ExitCount = 1;
		justOnceInit2 = true;
	}
	else if (justOnceInit3 == false) {
		InitStage3();
		player.ExitCount = 2;
		justOnceInit3 = true;
	}
	else if (justOnceInit4 == false) {
		InitStage4();
		player.ExitCount = 3;
		justOnceInit4 = true;
	}
	else if (justOnceInit5 == false) {
		InitStage5();
		player.ExitCount = 4;
		justOnceInit5 = true;
	}
	else if (justOnceInit6 == false) {
		InitStage6();
		player.ExitCount = 5;
		justOnceInit6 = true;
	}
	else if (justOnceInit7 == false) {
		InitStage7();
		player.ExitCount = 6;
		justOnceInit7 = true;
	}
}

void GameManager::ClearPlatformArray()
{
	redPlatforms.clear();
	platforms.clear();
	bluePlatforms.clear();
}

////////////
////////////


// Render Elements
//////////////
////////////////


void GameManager::MainRender()
{
	window.clear();

	for (auto platform : platforms) {
		platform.Draw(window);
	}
	for (auto redPlatform : redPlatforms) {
		redPlatform.Draw(window);
	}
	for (auto bluePlatform : bluePlatforms) {
		bluePlatform.Draw(window);
	}

	if (player.ExitCount == 4) {
		SpawnRedPlatform();
	}
	else if (player.ExitCount == 6) {
		SpawnRedPlatform();
		window.draw(text2);
	}
	window.draw(text);
	window.draw(textEnergy);
	exit.Draw(window);
	player.DrawTo(window);
	window.display();
}
void GameManager::SpawnRedPlatform()
{
	if (redPlatforms.size() < maxEnemies) {
		if (enemySpawnTimer >= enemySpawnTimerMax) {
			platformRed.SetPosition({ static_cast <float>(rand() % 900),40 });


			//spawn the enemy
			redPlatforms.push_back(platformRed);
			enemySpawnTimer = 0.f;
		}
		else {
			enemySpawnTimer += 1.f;
		}
	}
}
//////////////
////////////////


//System
////////////
//////////
void GameManager::ControlGravity()
{
	if (player.GetY() < groundHeight) {
		player.Move({ 0.f, gravitySpeed });
	}
	for (auto bluePlatform = bluePlatforms.begin(); bluePlatform != bluePlatforms.end(); ++bluePlatform) {
		if (bluePlatform->GetY() < groundHeight) {
			bluePlatform->Fall({ 0.f, gravitySpeed });
		}
	}
	
	//std::cout << player.ExitCount<< "\n";
	if (stageContainsRedPlatform == true) {
		for (auto redPlatform = redPlatforms.begin(); redPlatform != redPlatforms.end(); ++redPlatform) {
			if (redPlatform->GetY() < groundHeight) {
				redPlatform->Fall({ 0.f, redGravitySpeed });
			}
		}
	}
}

void GameManager::PlayerInput()
{
	
	CheckResetJumpCounter();
	if (jumpVelocity < 1) {
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space)) {
			jumpVelocity += 0.01f;
			if (jumpVelocity > 0.5f) {
				player.Move({ 0,-player.jumpStrenght*jumpVelocity * 5 });
			}
			else {
				player.Move({ 0,-player.jumpStrenght*5 });
			}
		}
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
		player.Move({ player.speed,0 });
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
		player.Move({ -player.speed,0 });
	}
	/*if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {

	}*/
}

void GameManager::ControlCollision()
{
	for (auto platform : platforms) {
		platform.GetCollider().CheckCollision(player.GetCollider(), 1.0f);
		platformBlue.GetCollider().CheckCollision(platform.GetCollider(), 0.0f);
		for (auto redPlatform = redPlatforms.begin(); redPlatform != redPlatforms.end(); ++redPlatform) {
			for (auto bluePlatform = bluePlatforms.begin(); bluePlatform != bluePlatforms.end();
				++bluePlatform) {
				bluePlatform->GetCollider().CheckCollision(redPlatform->GetCollider(), 1.0f);
			}
			for (auto platform = platforms.begin(); platform != platforms.end(); ++platform) {
				redPlatform->GetCollider().CheckCollision(platform->GetCollider(), 1.0f);
			}
		}
	}
	
	//platformWhite2.GetCollider().CheckCollision(player.GetCollider(), 1.0f);
	exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f);

	for (auto bluePlatform = bluePlatforms.begin(); bluePlatform != bluePlatforms.end();
		++bluePlatform) {
		bluePlatform->GetCollider().CheckCollision(player.GetCollider(), 0.0f);
	}
	for (auto bluePlatform = bluePlatforms.begin(); bluePlatform != bluePlatforms.end();
		++bluePlatform) {
		for (auto platform = platforms.begin(); platform != platforms.end(); ++platform) {
			bluePlatform->GetCollider().CheckCollision(platform->GetCollider(), 0.0f);
		}
	}
	

	CheckIfPlayerWon();
	CheckIfPlayerLoose();
	CheckIfPlayerCollideWithRedPlatform();
}

void GameManager::CheckIfPlayerWon()
{
	if (exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true&&player.ExitCount==0) {
			player.ExitCount=1;
			justOnceInit2 = false;
	}
	else if (exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true 
		&& player.ExitCount == 1) {
		player.ExitCount = 2;
		justOnceInit3 = false;
	}
	else if (exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true
		&& player.ExitCount == 2) {
		player.ExitCount = 3;
		justOnceInit4 = false;
	}
	else if (exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true
		&& player.ExitCount == 3) {
		player.ExitCount = 4;
		justOnceInit5 = false;
	}
	else if (exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true
		&& player.ExitCount == 4) {
		player.ExitCount = 5;
		justOnceInit6 = false;
	}
	else if (exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true
		&& player.ExitCount == 5) {
		player.ExitCount = 6;
		justOnceInit7 = false;
	}
	else if (exit.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true
		&& player.ExitCount == 6) {

		text2.setString("Thank you for playing to this demo ! ");
		gameEnded = true;
	}
	if (gameEnded == true) {
		if (enemySpawnTimer >= 700.f) {

			window.close();
			enemySpawnTimer = 0.f;
		}
		else {
			enemySpawnTimer += 1.f;
		}
	}
	//CheckIfEndGame();
	//std::cout << std::boolalpha;

	
}
void GameManager::CheckResetJumpCounter()
{
	for (auto platform : platforms) {
		if (player.GetCollider().CheckCollision(platform.GetCollider(), 1.0f) == true) {
			player.jumpCounter = 0;
			jumpVelocity = 0.f;
		}
	}
}

void GameManager::CheckIfPlayerLoose()
{
	if (player.GetY() == groundHeight) {
		Respawn();
	}
}

void GameManager::CheckIfPlayerCollideWithRedPlatform()
{
	for (auto redPlatform : redPlatforms) {
		if (redPlatform.GetCollider().CheckCollision(player.GetCollider(), 1.0f) == true) {
			Respawn();
		}
	}
}

void GameManager::Respawn()
{
	if (player.ExitCount == 0) {
		player.ExitCount = 0;
		justOnceInit1 = false;
		//text.setString(std::to_string(player.ExitCount));
	}
	else if (player.ExitCount == 1) {
		player.ExitCount = 1;
		justOnceInit2 = false;
	}
	else if (player.ExitCount == 2) {
		player.ExitCount = 2;
		justOnceInit3 = false;

	}
	else if (player.ExitCount == 3) {
		player.ExitCount = 3;
		justOnceInit4 = false;

	}
	else if (player.ExitCount == 4) {
		player.ExitCount = 4;
		justOnceInit5 = false;

	}
	else if (player.ExitCount == 5) {
		player.ExitCount = 5;
		justOnceInit6 = false;

	}
	else if (player.ExitCount == 6) {
		player.ExitCount = 6;
		justOnceInit7 = false;

	}
}


////////////
//////////
