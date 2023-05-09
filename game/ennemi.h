#ifndef FICHIER_H_INCLUDED
#define FICHIER_H_INCLUDED

#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include <math.h>

#define SCREEN_H 1000
#define SCREEN_W 1800
#include "perso.h"

typedef struct
{
	char *url;
    	SDL_Surface *sprite;
    	SDL_Rect posScreen;
    	SDL_Rect posSprite;
	double vitesse,directionvitesse;
	int direction; 
	
}ennemi;

void initennemi(ennemi *e);
void afficherennemi(ennemi e,SDL_Surface *screen);
void animerennemi(ennemi *e);
//void move(ennemi *e,Personne p);
void liberer_ennemi(ennemi e);
int checkcollision(Personne p,ennemi e); // (SDL_Resctposp,SDL_Rect pose)
void collision(Personne *p, ennemi *e, vie *v);
void move_ennemi(ennemi *e,Personne p);
#endif /* FICHIER_H_INCLUDED */




