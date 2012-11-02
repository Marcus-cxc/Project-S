#ifndef SHIPHANDLER_H
#define SHIPHANDLER_H

#include "StarShip.h"

class ShipHandler
{

private:

	StarShip *m_pSSList;
	Timer m_nElapsed;

public:

	ShipHandler();
	void RandomlyGenerateShips();
	void DeleteShips( StarShip *_pDelete );
	void MoveShips();
	void ShowShips( SDL_Surface *_pSource, *_pDestination );

}


#endif