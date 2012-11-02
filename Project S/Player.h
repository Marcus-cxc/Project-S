#ifndef PLAYER_H
#define PLAYER_H

#include "StarShip.h"

class Player
{

private:

	int m_nShipType;

public:

	Player();
	void HandleInput( SDL_Event &_rEvent );

};


#endif