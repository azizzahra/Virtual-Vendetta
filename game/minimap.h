#ifndef minimap_H_INCLUDED
#define minimap_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

#include <SDL/SDL.h>
#include <stdbool.h>
#include <math.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include "perso.h"



typedef struct 
{	
	SDL_Surface *map ;
	SDL_Rect pos_map;
	SDL_Surface *mini_perso;
	SDL_Rect perso_pos_map;

}map;

typedef struct
{
    SDL_Surface *animation[12] ;
    SDL_Rect position;
    int frame;
}animated;


	void initialiser_map (map *m,SDL_Surface *screen) ;
	void perso_map(map *m,Personne *p);
	void affiche_map(map *m, SDL_Surface *screen);
	void sauvegarder(int score,char nomjoueur[],char nomfichier[]);
	void meilleur (char nomfichier[],int score,char nomjoueur[]);
        void MAjMinimap(Personne p , map *m );

	void init_animation( animated *a);
	void aff_animation(SDL_Surface *screen, animated a);
	//void animationcoin(animated *a);
	void free_animation(animated a);
#endif
