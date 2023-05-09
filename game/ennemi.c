#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "ennemi.h"
#include "perso.h"
#define SPRITE_We 1059
#define SPRITE_He 130

void initennemi(ennemi *e)
{
	e->url="ennemi/ennemi.png";
        e->sprite=IMG_Load(e->url);
        if(e->sprite == NULL){
        	printf("unable to load perso's image %s \n",SDL_GetError());
        	return;
    	}
    	e->posScreen.x = 1000;
    	e->posScreen.y = 850;
    	e->posSprite.x=0;
    	e->posSprite.y=0;
    	e->posSprite.w=63; 
    	e->posSprite.h=SPRITE_He/2; 
 	e->directionvitesse=1;
 	e->direction=1;
 	e->vitesse = 5;
}		

void afficherennemi(ennemi e, SDL_Surface *screen)
{
	SDL_BlitSurface(e.sprite,&e.posSprite,screen,&e.posScreen);
}
void move_ennemi(ennemi *e,Personne p)
{
    	int posmax=1700,posmin=900;    						/////kifech n7ot l'ennemi fel position 2300 w yothhorli
    	int distance = p.posScreen.x - e->posScreen.x;
	
	if (abs(distance) >400)
	{
		e->posScreen.x += e->vitesse * e->directionvitesse;
		if (e->posScreen.x < posmin) {
		    e->posScreen.x = posmin;
		    e->directionvitesse= 1;
		    e->direction=1; 
		}
		else if (e->posScreen.x + e->posSprite.w > posmax) {
		    e->posScreen.x = posmax - e->posSprite.w;
		    e->directionvitesse= -1; 
		    e->direction=0;
		}
	}
	else
	{
        	if (distance > 0)
		{
		    e->direction=1;
		    e->posScreen.x += e->vitesse;
		}
		else
		{
		    e->direction=0;
		    e->posScreen.x -= e->vitesse;
		}
	}
		
		
   
}
/*void moveIA(ennemi *e,Personne p)
{
    int distance = p.posScreen.x - e->posScreen.x;

    if (distance > 0)
    {
        e->direction = 1;
    }
    else
    {
        e->direction = 0;
    }

    if (abs(distance) > 200)
    {
        if (e->posScreen.x >1000 && e->direction == 1)
        {
            e->direction = 0;
        }
        else if (e->posScreen.x < 500 && e->direction == 0)
        {
            e->direction = 1;
        }

        if (e->direction == 1)
        {
            e->posScreen.x += e->vitesse;
        }
        else
        {
            e->posScreen.x -= e->vitesse;
        }
    }
    else
    {
        if (distance > 0)
        {
            e->posScreen.x += e->vitesse;
        }
        else
        {
            e->posScreen.x -= e->vitesse;
        }
    }
}*/


void liberer_ennemi(ennemi e)
{
	SDL_FreeSurface(e.sprite);
}

int checkcollision(Personne p, ennemi e)
{
   
	if (p.posScreen.x + p.posSprite.w < e.posScreen.x || p.posScreen.x > e.posScreen.x + e.posSprite.w || p.posScreen.y + p.posSprite.h < e.posScreen.y || p.posScreen.y > e.posScreen.y + e.posSprite.h)   
    	{
        	return 0; 
    	}
    	else
    	{
        	return 1; 
    	}
}
void collision(Personne *p, ennemi *e, vie *v)
{
    if (checkcollision(*p,*e))
    {
        if (!p->collision)
        {
            p->collision = 1;
            animervie(v);
             
        }
    }
    else
    {
        p->collision = 0; 
    }
}

void animerennemi (ennemi *e)
{
	e->posSprite.y = e->direction*e->posSprite.h;
    	e->posSprite.x += e->posSprite.w;
    	if (e->posSprite.x >= SPRITE_We)
    	{
        	e->posSprite.x = 0;
        }
}


	
