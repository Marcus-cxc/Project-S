#ifndef BULLET_H
#define BULLET_H

#include "Entity.h"

class Bullet : public Entity
{

private:

	Bullet *m_pNext;
	int m_nDamage;
	int m_nType;

public:

	Bullet();

	int nGetDamage();
	int nGetType();
	Bullet pGetNextBullet();
	void SetNextBullet( Bullet *_pBullet );

};


#endif