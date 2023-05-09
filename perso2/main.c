#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "perso.h"

#define SCREEN_H 1000
#define SCREEN_W 1800
int main()
{
    SDL_Event event;
    SDL_Surface *screen;
    Personne p,p2;
    vie v;
    Mix_Chunk *son;
    background back1;
    Mix_Music *music;
    
    
    
    
    int jump1=0,jump2=0,floor=0,right=0,left=0,up=0,direction=0,acc=0,q=0,d=0,z=0,c=0,direction2;
    int boucle=1;
    
    int pas=30;
    
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO|SDL_INIT_TIMER)==-1)
    {
    	printf("COuld not initialize SDL : %s \n",SDL_GetError());
        return -1;
    }
    screen=SDL_SetVideoMode(SCREEN_W,SCREEN_H,32,SDL_SWSURFACE|SDL_DOUBLEBUF);  
    /*if(Mix_OpenAudio(48000,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1){
	printf("Erreur : %s \n",Mix_GetError());
	return 1;
    }
    son = Mix_LoadWAV("jump.wav");*/
    

    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      Initialisation
    //initialiser_audio(music);
    initPerso(&p);
    initPerso2(&p2);
    initvie(&v); 
    initBack(&back1);
	
    Uint32 t_prev = SDL_GetTicks();
    while(boucle)
    {
    	Uint32 dt = SDL_GetTicks() - t_prev;
    	/////////////////////////////////////////////// affichage
    	afficherback(back1,screen);
    	afficherPerso(p,screen);
    	afficherPerso2(p2,screen);
    	affichervie(v,screen);
    	
    	
    	while(SDL_PollEvent(&event))
        {
            	switch(event.type)
            	{
                 	case SDL_QUIT :
                    	{
                    		boucle=0;
                   		break;
                    	}
                    	case SDL_KEYDOWN:
		      	{
				switch (event.key.keysym.sym)
				{
					case SDLK_ESCAPE:
					{
			    			boucle=0;
			    			break;
			    		}
					case SDLK_RIGHT:
					{
    						right=1;
						break;
					}
					case SDLK_LEFT:
					{
						left=1;
						break;
					}
					case SDLK_UP:
					{
						up=1;
						//Mix_PlayChannel(-1,son,0);
						break;
					}
					case SDLK_SPACE:
					{
						acc=1;
						break;
					}
					case SDLK_d:
					{
    						d=1;
						break;
					}
					case SDLK_q:
					{
						q=1;
						break;
					}
					case SDLK_z:
					{
						z=1;
						//Mix_PlayChannel(-1,son,0);
						break;
					}
					case SDLK_c:
					{
						c=1;
						break;
					}
					
				}
				break;
			}
			case SDL_KEYUP:
			{
				switch (event.key.keysym.sym)
        			{
            				case SDLK_RIGHT:
                			{
                				right=0;
                				direction=0;
                				p.vitesse=0;
                				break;
					}            
					case SDLK_LEFT:
					{
						left=0;
						p.vitesse=0;
						direction=2;
						break;
					}
				    	case SDLK_UP:
				    	{
						up=0;
						break;
					}
					case SDLK_SPACE:
					{
						acc=0;
						break;
					}
					case SDLK_d:
					{
    						d=0;
                				direction2=0;
                				p2.vitesse=0;
                				break;
						break;
					}
					case SDLK_q:
					{
						q=0;
						p2.vitesse=0;
						direction2=2;
						break;
					}
					case SDLK_z:
					{
						z=0;
						//Mix_PlayChannel(-1,son,0);
						break;
					}
					case SDLK_c:
					{
						c=0;
						break;
					}
				}
				break;
			}
			
				
		}
	}
	
	////1er personnage
	if (right==1)
	{
    		p.vitesse=1;
    		p.acceleration+=0.05;
    		p.direction=1;
    		
    		if (acc==1)
		{
	    		p.vitesse=2;
		}
    		
	}
	if (left==1)
	{
   		p.vitesse=1;
	        p.acceleration+=0.05;
	        p.direction=3;
	        if (acc==1)
		{
	    		p.vitesse=2;
		}

	}
	p.acceleration -= 0.3;
	
	if (up==1) 
		saut(&p);
	
	if (p.acceleration<0 ) 
		p.acceleration=0;

	if (p.acceleration>4) 
		p.acceleration=4;
	    
	if ((p.vitesse==0)&&(p.acceleration==0))
	{
	    p.direction=direction;
	}

	p.posScreen.y += p.vitesseVertical;
	p.vitesseVertical += 10; 

	if (p.posScreen.y >= 750)
	{
	    p.vitesseVertical=0;
	    p.posScreen.y=750;
	}
	
	
	movePerso(&p,dt);
	animerPerso(&p);
	////2er personnage
	if (d==1)
	{
    		p2.vitesse=1;
    		p2.acceleration+=0.05;
    		p2.direction=1;
    		
    		if (c==1)
		{
	    		p2.vitesse=2;
		}
    		
	}
	if (q==1)
	{
   		p2.vitesse=1;
	        p2.acceleration+=0.05;
	        p2.direction=3;
	        if (c==1)
		{
	    		p2.vitesse=2;
		}

	}
	p2.acceleration -= 0.3;
	
	if (z==1) 
		saut(&p2);
	
	if (p2.acceleration<0 ) 
		p2.acceleration=0;

	if (p2.acceleration>4) 
		p2.acceleration=4;
	    
	if ((p2.vitesse==0)&&(p2.acceleration==0))
	{
	    p2.direction=direction2;
	}

	p2.posScreen.y += p2.vitesseVertical;
	p2.vitesseVertical += 10; 

	if (p2.posScreen.y >= 750)
	{
	    p2.vitesseVertical=0;
	    p2.posScreen.y=750;
	}
	
	
	movePerso(&p2,dt);
	animerPerso(&p2);
	t_prev = SDL_GetTicks();
	
	
		
	
	
    SDL_Delay(30);
    SDL_Flip(screen); 
    }
    
    //liberer_musique(music);
    liberer_perso(p);
    liberer_perso(p2);
    liberer_vie(v);
    libererback(back1);
    
    SDL_Quit();
    return 0;
}
    	
