#include <SDL.h>

#include "Game.h"

int main( int argc, char *args[])
{
	SDL_Init( SDL_INIT_EVERYTHING );

	Game *pGame = new Game();

	SDL_Quit();
	return 0;
}