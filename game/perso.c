#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "perso.h"
#define BACK_H 1000
#define BACK_W 5000

#include <math.h>
#define SPRITE_W 1001
#define SPRITE_H 805
#define SPRITEv_W 300
#define SPRITEv_H 49
#define MAX_SPEED 30
#define JUMPX 3
#define GRAVITY 9.8
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      Initialisation


void initPerso(Personne *p)
{
	p->url="perso/hero.png";
        p->sprite=IMG_Load(p->url);
        if(p->sprite == NULL){
        	printf("unable to load perso's image %s \n",SDL_GetError());
        	return;
    	}
    	p->posScreen.x = 200;
    	p->posScreen.y = 500;
    	p->posSprite.x=0;
    	p->posSprite.y=0;
    	p->posSprite.w=SPRITE_W/10; 
    	p->posSprite.h=SPRITE_H/4; 
	p->vitesse=0;
	p->acceleration=0;
	p->up=0 ;
 	p->direction=1;
 	p->collision = 0;
 	p->touch = 0;
}		
void initPerso2(Personne *p)
{
	p->url="perso/hero2.png";
        p->sprite=IMG_Load(p->url);
        if(p->sprite == NULL){
        	printf("unable to load perso's image %s \n",SDL_GetError());
        	return;
    	}
    	p->posScreen.x = 1200;
    	p->posScreen.y = 500;
    	p->posSprite.x=0;
    	p->posSprite.y=0;
    	p->posSprite.w=SPRITE_W/10; 
    	p->posSprite.h=SPRITE_H/4; 
	p->vitesse=0;
	p->acceleration=0;
	p->up=0 ;
 	p->direction=1;
 	p->collision = 0;
}
void initvie(vie *v)
{
	v->url="perso/vie.png";
        v->sprite=IMG_Load(v->url);
        if(v->sprite == NULL){
        	printf("unable to load perso's image %s \n",SDL_GetError());
        	return;
    	}
    	v->posScreen.x = 1600;
    	v->posScreen.y = 20;
    	v->posSprite.x=0;
    	v->posSprite.y=0;
    	v->posSprite.w=SPRITEv_W/5; 
    	v->posSprite.h=SPRITEv_H; 
	
}		

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      Affichage


void afficherPerso(Personne p, SDL_Surface * screen)
{
	
	SDL_BlitSurface(p.sprite,&p.posSprite,screen,&p.posScreen);
}
void afficherPerso2(Personne p2, SDL_Surface * screen)
{
	
	SDL_BlitSurface(p2.sprite,&p2.posSprite,screen,&p2.posScreen);
}
void affichervie(vie v, SDL_Surface * screen)
{
	SDL_BlitSurface(v.sprite,&v.posSprite,screen,&v.posScreen);
}
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////       Deplacement

void movePerso (Personne *p, Uint32 dt)
{
	float dx =0.5* p->acceleration * dt * dt + p->vitesse * dt;
 	//if((b->camera.x >= 0 && b->camera.x<=SCREEN_W/2) || (b->camera.x > BACK_W-SCREEN_W))
 	//{
	 	if (p->vitesse=MAX_SPEED)
	 	{
			p->vitesse=MAX_SPEED;
		}
	 	if ((p->direction==1)&&(p->posScreen.x<=SCREEN_W - 70))
	    	{
	    		p->posScreen.x += dx/4 ;
	    	}
	    	else if ((p->direction==3)&&(p->posScreen.x>=0))
		{
	    		p->posScreen.x -= dx/4 ;
		}
	//}
}
	

void animerPerso (Personne *p)
{
	p->posSprite.y = p->direction*p->posSprite.h;
    	p->posSprite.x += p->posSprite.w;
    	if (p->posSprite.x >= SPRITE_W)
    	{
        	p->posSprite.x = 0;
        }
}	
void animervie (vie *v)
{
    	v->posSprite.x += v->posSprite.w;
    	if (v->posSprite.x >= SPRITEv_W)
    	{
        	v->posSprite.x = 0;
        }
}	

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////          Saut

void saut(Personne *p) 
{
	if (p->posScreen.y==750)
    	{
        	p->vitesseVertical=-80;
    	}
    	if(p->posScreen.x<=SCREEN_W - p->posSprite.w)
    	{
	    	if(p->direction==0)
			p->posScreen.x+=JUMPX;
		if(p->direction==1)
			p->posScreen.x+=JUMPX;
	}
	if(p->posScreen.x>=0)
	{
		
		if(p->direction==2)
			p->posScreen.x-=JUMPX;
		
		if(p->direction==3)
			p->posScreen.x-=JUMPX;
	}
	p->posScreen.y+=GRAVITY;
}


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      Liberation


void liberer_perso(Personne p)
{
    SDL_FreeSurface(p.sprite);
}
void liberer_vie(vie v)
{
    SDL_FreeSurface(v.sprite);
}




















		
