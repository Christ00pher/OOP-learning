#include "Game.h"

Game::Game() : m_window("Snake", sf::Vector2u(800, 600)),
			m_snake(m_world.GetBlockSize()), 
			m_world(sf::Vector2u(800, 600)),
			m_textbox(5, 14, 350, sf::Vector2f(225, 0))
{
	m_textbox.Add("Seeded random number generator with: " + std::to_string(time(NULL)));
	m_sound.PlayMusic();
}

Game::~Game() {}

void Game::Update()
{
	//window update
	sf::Time timestep = 5; //sf::seconds(1.0f / m_snake.GetSpeed());

	if (m_elapsed >= timestep)
	{
		//snake update
		//world update
		m_elapsed -= timestep;
	}
}

void Game::Render()
{
	
}

void Game::HandleInput()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up) && m_snake.GetPhysicalDirection() != Direction::Down)
		//move snake up

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down) && m_snake.GetPhysicalDirection() != Direction::Up)
		//move snake down

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) && m_snake.GetPhysicalDirection() != Direction::Right)
		//move snake left

	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) && m_snake.GetPhysicalDirection() != Direction::Left)
		//move snake right
}

void Game::RestartClock()
{
	m_elapsed += m_clock.restart();
}
