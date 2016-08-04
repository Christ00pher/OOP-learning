#include "Game.h"

void main(int argc, char** argv[])
{
	Game game;
	while (!game.GetWindow()->IsDone())
	{
		game.HandleInput();
		game.Update();
		game.Render();
		game.RestartClock();
	}
}
