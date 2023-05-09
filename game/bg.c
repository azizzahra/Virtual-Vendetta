#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "bg.h"
#include "perso.h"

void initBack(background * b)
{
	b->url=("background/back.png");
	b->img=IMG_Load(b->url);
	if(b->img == NULL){
        printf("unable to load background image %s \n",SDL_GetError());
        return;
    	}
    	b->pos_cam.x=0;
    	b->pos_cam.y=0;
    	
	b->camera.x=0;
	b->camera.y=0;
	b->camera.h= 1000;
    	b->camera.w=4482;
}

void afficherback(background b, SDL_Surface * screen)
{
	SDL_BlitSurface(b.img,&b.camera,screen,&b.pos_cam);
}
void scrolling (background * b,Personne *p)
{	
	/*float dx =0.5* p->acceleration * dt * dt + p->vitesse * dt;
	if (b->camera.x>=0 && b->camera.x<2600)
	{
		switch (p->direction)
		{
			case 1:
			{
				b->camera.x+=dx/2;
				break;
			}
			case 3:
			{
				b->camera.x-=dx/2;
				break;
			}
		}
	}
	if (b->camera.x>=2600)
	{
		b->camera.x-=dx/2;
	}
	if (b->camera.x<=0)
	{
		b->camera.x+=dx/2;
	}*/
	b->camera.x = (p->posScreen.x - (SCREEN_W / 2)) *3;
	    if (b->camera.x < 0) {
		b->camera.x = 0;
	    } else if (b->camera.x > BACK_W-SCREEN_W) {
		b->camera.x = BACK_W-SCREEN_W;
	    }
}

void libererback(background b)
{
	 SDL_FreeSurface(b.img);
}


