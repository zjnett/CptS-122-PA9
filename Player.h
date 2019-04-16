#pragma once

#include <SFML/Graphics.hpp>

class Player : public sf::RectangleShape {
public:
	Player(sf::Vector2f &size, const sf::Color &color,
		sf::Vector2f &pos) : sf::RectangleShape(size)
	{
		this->setFillColor(color);
		this->setPosition(pos);
	}
};