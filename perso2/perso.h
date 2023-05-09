#ifndef FONCTION_H_INCLUDED
#define FONCTION_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define SCREEN_H 1000
#define SCREEN_W 1800

typedef struct
{
	char *url;
	SDL_Surface *img;
	SDL_Rect pos_cam;      //position de lecran
	SDL_Rect camera;   // quoi je vais afficher
	int direc;
	
}background;
typedef struct
{
	char *url;
    	SDL_Surface *sprite;
    	SDL_Rect posScreen;
    	SDL_Rect posSprite;
}vie;


typedef struct
{
	char *url;
    	SDL_Surface *sprite;
    	SDL_Rect posScreen;
    	SDL_Rect posSprite;
	double vitesse,acceleration;
	int direction,vitesseVertical; 
	int up;
	int collision;
}Personne;

/////////////////////////////////////////////////////////////////////////////////////////////////////////      Initialisation

void initPerso(Personne *p);
void initPerso2(Personne *p);
void initvie(vie *v);
void initBack(background * b);
//void init (Personne * p, int numperso);
	
/////////////////////////////////////////////////////////////////////////////////////////////////////////      Affichage

void afficherPerso(Personne p, SDL_Surface * screen);
void afficherPerso2(Personne p2, SDL_Surface * screen);
void affichervie(vie v, SDL_Surface * screen);
void afficherback(background b, SDL_Surface * screen);	
/////////////////////////////////////////////////////////////////////////////////////////////////////////      Deplacement

void movePerso (Personne *p,Uint32 dt);	
void animerPerso (Personne* p);		
void animervie (vie *v);
void saut(Personne *p);

//////////////////////////////////////////////////////////////////////////////////////////////////////////      Liberation

void liberer_perso(Personne p);
void liberer_vie(vie v);
void libererback(background b);


#endif
