#ifndef ENTITY_H
#define ENTITY_H

#include <SDL.h>

class Entity
{
	
protected:

	int m_nSpeed;
	int m_nXPosition;
	int m_nYPosition;
	int m_nXVelocity;
	int m_nYVelocity;
	int m_nAnimationState;
	SDL_Rect m_Clip;

public:

	Entity();

	void Show( SDL_Surface *_pSource, *_pDestination );
	vitrual bool bCheckCollision( Entity *_pObject );
	virtual void Move();

};


#endif