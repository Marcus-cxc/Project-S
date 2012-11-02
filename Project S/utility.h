#ifndef UTILITY_H
#define UTILITY_H

#include <SDL.h>
#include <string>
using namespace std;

SDL_Surface* load_image(string filename);
void apply_surface(int x, int y, SDL_Surface* source, SDL_Surface* destination, SDL_Rect *srcClip = NULL);
Uint32 get_pixel32( SDL_Surface *surface, int x, int y );
void put_pixel32( SDL_Surface *surface, int x, int y, Uint32 pixel );
SDL_Surface *flip_surface( SDL_Surface *surface, int flags );


#endif
