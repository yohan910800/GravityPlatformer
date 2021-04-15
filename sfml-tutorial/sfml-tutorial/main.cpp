
#include "GameManager.H"


int main()
{
	GameManager gm;

	gm.InitText();
	gm.InitWindow();
	
	//game loop
	while (gm.window.isOpen())
	{
		gm.LoadCurrentStage();

		sf::Event Event;

		gm.PlayerInput();

		while (gm.window.pollEvent(Event)) {
			switch (Event.type) {
			case sf::Event::Closed:
				gm.window.close();
			//case sf::Event::KeyReleased:
			//	//gm.isJumping = false;
			}
		}
		gm.ControlGravity();

		gm.ControlCollision();

		gm.MainRender();
		
	}
	//end of the loop

	return 0;
}