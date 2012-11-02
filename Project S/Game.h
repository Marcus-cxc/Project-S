#ifndef GAME_H
#define GAME_H

#include <SDL.h>
#include "Player.h"
#include "ShipHandler.h"
#include "Timer.h"

class Game
{

private:

	SDL_Surface *m_pEntitySheetPlayer;
	SDL_Surface *m_pEntitySheetEnemy;
	SDL_Surface *m_pBackground;
	SDL_Surface *m_pScreen;
	SDL_Surface *m_pPlanets;

	ShipHandler *m_pEnemyFleet;
	Player *m_pPlayerShip;
	SDL_Event m_Event;
	Timer m_Elapsed;
	bool m_bRunning;
	int m_nScore;

public:

	Game();

	bool bInit();
	bool bUpdateGame();
	bool bUpdateScreen();
	bool bGameLoop();
	bool bCheckLose();
	bool bStateIntro();
	bool bStatePlay();
	bool bStateWinLose(bool _IsWin);



};

#endif