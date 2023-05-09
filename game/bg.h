#ifndef BG_H_INCLUDED
#define BG_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define SCREEN_H 1000
#define SCREEN_W 1800
#define BACK_H 1000
#define BACK_W 5000
#include "perso.h"

typedef struct
{
	char *url;
	SDL_Surface *img;
	SDL_Rect pos_cam;      //position de lecran
	SDL_Rect camera;   // quoi je vais afficher
	int direc;
	
}background;

typedef struct{
	background t[6];
	int dir;
	int num;
}anim; 

typedef struct{
	char name[25];
	int scoree;
}score;

/*typedef struct{
	SDL_Rect pos[3];
	TTF_Font *police;
	SDL_Surface *img[3];
	SDL_Color color;
	char texte[20];
}Text;*/

/*void initext(Text *t,int compteur);
void blit_text(SDL_Surface *screen,Text t,int compteur);
void liberer_text(Text t,int n);

void enregistrer_score(char chemin[],score a);
void affiche_score(char chemin[],Text t,SDL_Surface *screen);*/

void initBack(background * b);					
void afficherback(background b, SDL_Surface * screen);									
void scrolling (background * b,Personne * p);
void libererback(background b);

void initialiseanim(anim *a);
void animation(anim *a);		
void animerBack (SDL_Surface *screen,anim animation,int i);


void initialiser_audio(Mix_Music *music);
void liberer_musique(Mix_Music *music);
	
//void boutton(image btn);	
//void tri(score t[],int n);
#endif
