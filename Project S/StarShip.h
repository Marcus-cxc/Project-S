#ifndef STARSHIP_H
#define STARSHIP_H

#include "Entity.h"
#include "Timer.h"

class StarShip : public Entity
{

protected:

	int m_nHealth;
	bool m_bIsAlive;
	Timer m_Elapsed;
	BulletHandler *m_BulletHandler;
	StarShip *m_pNext;

public:

	StarShip();
	virtual void ShootBullet() = 0;
	bool bCheckIsAlive();
	StarShip *pGetNextShip();
	void SetNextShip( StarShip *_pShip );

};



#endif