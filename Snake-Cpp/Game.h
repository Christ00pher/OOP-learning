#pragma once
#include <SFML/Graphics.hpp>
class Game 
{
public:
	Game();
	~Game();
	void HandleInput();
	void Update();
	void Render();
	void RestartClock();
private:
	sf::Vector2i m_increment;
	sf::Clock m_clock;
	sf::Time m_elapsed;
};
