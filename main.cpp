// This example will use SFML libraries to implement
// the game of Pong

// History: 4/15 - Classmates added ball and paddle movements. 
//                 These will need to be changed for
//                 actual game movement.
//          4/12 - Designed a Paddle class. Have yet to 
//                 instantiate one of these.
//          4/10 - Designed and implemented a Ball class that's
//                 derived from a sf::CircleShape.
//          4/8 - Started from the SFML tutorial code that draws
//                a circle in the window.

#include <SFML/Graphics.hpp>
#include "GameTest.h"
#include "Player.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Test Game");
	while (window.isOpen())
	{
		sf::Event event;
		Player playerObject(*(new sf::Vector2f(100, 100)), sf::Color::White, *(new sf::Vector2f(250, 250)));

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.display();
	}

	return 0;
}

void handleInput() {
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) { // Up

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) { // Down

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) { // Left

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) { // Right

	}
}