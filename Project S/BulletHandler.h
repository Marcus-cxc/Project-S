#ifndef BULLETHANDLER_H
#define BULLETHANDLER_H

#include "Bullet.h"

class BulletHandler
{

private:

	Bullet *m_pBulletList;
	int m_nShipType;
	int m_nCount;
	bool m_bIsPlayer;

public:

	BulletHandler( int _nShipType, bool _isPlayer );
	void MoveBullets();
	void CreateBullet( int _nX, _nY );
	void DeleteBullet( Bullet *_pDelete );
	void ShowBullets( SDL_Surface *_pSource, *_pDestination );
	bool bCheckCollisionWithShips( StarShip *_pShip );

};

#endif