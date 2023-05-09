#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "perso.h"
#include "ennemi.h"
#include "bg.h"
#include "minimap.h"
#include "temps.h"
#include "enigmetf.h"
#include "Enigme.h"
#include "menu.h"
#define SCREEN_H 1000
#define SCREEN_W 1800
int main()
{
    /////////////////////////////////////////////////////////////////////////////////////menu
    SDL_Surface *screen;  
    image IMAGEmenu,IMAGEoption,IMAGEplay,IMAGEmaps,IMAGEjoueur, IMAGE_BTN1 , IMAGE_BTN2, IMAGE_BTN3 ,IMAGE_BTN11 , IMAGE_BTN22, IMAGE_BTN33, IMAGE_BTNret , IMAGE_BTNret2, IMAGE_BTNfull, IMAGE_BTNfull2, IMAGE_BTNplus, IMAGE_BTNplus2,  IMAGE_BTNmoin, IMAGE_BTNmoin2, IMAGE_BTNnew, IMAGE_BTNnew2, IMAGE_BTNload, IMAGE_BTNload2, IMAGE_BTNsingle, IMAGE_BTNsingle2, IMAGE_BTNmultiplayer, IMAGE_BTNmultiplayer2 , IMAGE_BTNaziz, IMAGE_BTNaziz2 ,IMAGE_BTNhamdi, IMAGE_BTNhamdi2 , IMAGE_BTNdhia ,IMAGE_BTNdhia2 ,IMAGE_BTNdali ,IMAGE_BTNdali2 ,IMAGE_BTNjeribi ,IMAGE_BTNjeribi2, IMAGE_BTNmap1 ,IMAGE_BTNmap12 ,IMAGE_BTNmap2 ,IMAGE_BTNmap22 ,IMAGE_BTNmap3, IMAGE_BTNmap32;
    
    ///animation
    SDL_Surface *photos[4]; 
    int current_photo = 0;
    
    int volume = MIX_MAX_VOLUME / 3;
    int fullscreen = 0;
    
    
    Mix_Music *music;
    Mix_Chunk *mus;
    texte txte;
    int menu=1;
    int play=0;
    int option=0;
    int mode=0;
    int maps=0;
    int joueur=0;
    int map1=0;
    
    int boucle=1;
    int boutonselcted1=0;
    int boutonselcted2=0;
    int boutonselcted3=0;
    int boutonselcted4=0;
    int boutonselcted5=0;
    int boutonselcted6=0;
    int boutonselcted7=0;
    int boutonselcted8=0;
    int boutonselcted9=0;
    int boutonselcted10=0;
    int boutonselcted11=0;
    int boutonselcted12=0;
    int boutonselcted13=0;
    int boutonselcted14=0;
    int boutonselcted15=0;
    int boutonselcted16=0;
    int boutonselcted17=0;
    int boutonselcted18=0;
    int boutonselcted19=0;
    int boutonselcted20=0;
    int boutonselcted21=0;
    int boutonselcted22=0;
    int boutonselcted23=0;
    int boutonselcted24=0;
    int boutonselcted25=0;
    int boutonselcted26=0;
    

    int boutton=1; //menu
    int boutton2=1;//play
    int boutton3=1;//option
    int boutton4=1; //mode
    int boutton5=1; //maps
    int boutton6=1; //joueur
	    
    /// animation
    photos[0] = IMG_Load("menu/1.png");
    photos[1] = IMG_Load("menu/2.png");
    photos[2] = IMG_Load("menu/3.png");
    photos[3] = IMG_Load("menu/4.png");//
    
    if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO|SDL_INIT_TIMER)==-1)
    {
    	printf("COuld not initialize SDL : %s \n",SDL_GetError());
        return -1;
    }
    screen=SDL_SetVideoMode(SCREEN_W,SCREEN_H,32,SDL_SWSURFACE|SDL_DOUBLEBUF);  
    
    if(Mix_OpenAudio(48000,MIX_DEFAULT_FORMAT,MIX_DEFAULT_CHANNELS,1024)==-1)
    {
	printf("Erreur : %s \n",Mix_GetError());
	return 1;
    }
    
    initialiser_imageBACKmenu(&IMAGEmenu);
    initialiser_imageBACKoption(&IMAGEoption);
    initialiser_imageBACKplay(&IMAGEplay);
    initialiser_imageBACKjoueur(&IMAGEjoueur);
    initialiser_imageBACKmaps(&IMAGEmaps);
    initialiser_imageBOUTON1(&IMAGE_BTN1);
    initialiser_imageBOUTON2(&IMAGE_BTN2);
    initialiser_imageBOUTON3(&IMAGE_BTN3);
    initialiser_imageBOUTON11(&IMAGE_BTN11);
    initialiser_imageBOUTON22(&IMAGE_BTN22);
    initialiser_imageBOUTON33(&IMAGE_BTN33);
    initialiser_imageBOUTONreturn(&IMAGE_BTNret);
    initialiser_imageBOUTONreturn2(&IMAGE_BTNret2);
    initialiser_imageBOUTONfull(&IMAGE_BTNfull);
    initialiser_imageBOUTONfull2(&IMAGE_BTNfull2);
    initialiser_imageBOUTONplus(&IMAGE_BTNplus);
    initialiser_imageBOUTONplus2(&IMAGE_BTNplus2);
    initialiser_imageBOUTONmoin(&IMAGE_BTNmoin);
    initialiser_imageBOUTONmoin2(&IMAGE_BTNmoin2);
    initialiser_imageBOUTONnew(&IMAGE_BTNnew);
    initialiser_imageBOUTONnew2(&IMAGE_BTNnew2);
    initialiser_imageBOUTONload(&IMAGE_BTNload);
    initialiser_imageBOUTONload2(&IMAGE_BTNload2);
    initialiser_imageBOUTONsingle(&IMAGE_BTNsingle);
    initialiser_imageBOUTONsingle2(&IMAGE_BTNsingle2);
    initialiser_imageBOUTONmultiplayer(&IMAGE_BTNmultiplayer);
    initialiser_imageBOUTONmultiplayer2(&IMAGE_BTNmultiplayer2);
    
    initialiser_imageBOUTONaziz(&IMAGE_BTNaziz);
    initialiser_imageBOUTONaziz2(&IMAGE_BTNaziz2);
    initialiser_imageBOUTONhamdi(&IMAGE_BTNhamdi);
    initialiser_imageBOUTONhamdi2(&IMAGE_BTNhamdi2);
    initialiser_imageBOUTONdali(&IMAGE_BTNdali);
    initialiser_imageBOUTONdali2(&IMAGE_BTNdali2);
    initialiser_imageBOUTONdhia(&IMAGE_BTNdhia);
    initialiser_imageBOUTONdhia2(&IMAGE_BTNdhia2);
    initialiser_imageBOUTONjeribi(&IMAGE_BTNjeribi);
    initialiser_imageBOUTONjeribi2(&IMAGE_BTNjeribi2);
    initialiser_imageBOUTONmap1(&IMAGE_BTNmap1);
    initialiser_imageBOUTONmap12(&IMAGE_BTNmap12);
    initialiser_imageBOUTONmap2(&IMAGE_BTNmap2);
    initialiser_imageBOUTONmap22(&IMAGE_BTNmap22);
    initialiser_imageBOUTONmap3(&IMAGE_BTNmap3);
    initialiser_imageBOUTONmap32(&IMAGE_BTNmap32);
    
    //initialiser_texte(&txte);
    //initialiser_audio(music);
    
    /////////////////////////////////////////////////////////////////////////////game
    SDL_Event event;
    Personne p,p2;
    vie v;
    ennemi e;
    enigmetf eg;
    
    background back1,ba;
    
    map m;
    Time temps;
    
    /*SDL_Surface *coin[12];
    int current_coin = 0;*/
    
    
    int floor=0,right=0,left=0,up=0,direction=0,acc=0,q=0,d=0,z=0,c=0,direction2;
    int ground=750;
    int coll=0;
    int enigme=0,x=-1;
    int testcollision=0;
    int nbjoueur=1;
    
    
    //son = Mix_LoadWAV("sounds/jump.wav");
    /*/////////////////////////////////////////////////////////////////////////////////// enigme
    // Declaration les surfaces

	
	SDL_Surface *background=NULL;
	SDL_Surface *passed=NULL;
	SDL_Surface *failed=NULL;
	SDL_Surface *afficherTemps=NULL;
	//opt

	SDL_Surface* optemizedbackground = NULL;
	SDL_Surface* optemizedpassed = NULL;
	SDL_Surface* optemizedfailed = NULL;


	//rectangle
	SDL_Rect position_passed;
	SDL_Rect position_failed;
	SDL_Rect positionbackground;

	char solution;
	int r=-1,res,k,x,a=0,b=0;
	Enigme e6;

	SDL_Init(SDL_INIT_VIDEO);
	TTF_Init();
	// Creation screen

	screen=SDL_SetVideoMode(1200,628,32,SDL_HWSURFACE|SDL_DOUBLEBUF);

	// Ajouter background

	  background=IMG_Load("background.png");
	    positionbackground.x=10;
	    positionbackground.y=10;


	// image passed

	    passed=IMG_Load("passs.png");
	   position_passed.x=740;
	   position_passed.y=350;


	// image failed

	    failed=IMG_Load("fail1.png");
	   position_failed.x=740;
	   position_failed.y=350;

	optemizedbackground=SDL_DisplayFormat(background);
	optemizedpassed=SDL_DisplayFormat(passed);
	optemizedfailed=SDL_DisplayFormat(failed);
	SDL_WM_SetCaption( "SOLVE IT ", NULL );

	SDL_FreeSurface(background);
	SDL_FreeSurface(passed);
	SDL_FreeSurface(failed);

	genererEnigme ("enigme6/fichier6.txt",&e6);*/
    //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      Initialisation
   
    //initialiser_audio(music);
    initPerso(&p);
    initPerso2(&p2);
    initvie(&v); 
    initennemi(&e);
    
    initBack(&back1);
    //initBack(&ba);
    
    initialiser_map (&m,screen) ;
    inittemps(&temps);
    
    InitEnigme(&eg, "enigme5/fichier5.txt");
    
    /*coin[0] = IMG_Load("1.png");
    coin[1] = IMG_Load("1.png");
    coin[2] = IMG_Load("2.png");
    coin[3] = IMG_Load("2.png");
    coin[4] = IMG_Load("3.png");
    coin[5] = IMG_Load("3.png");
    coin[6] = IMG_Load("4.png");
    coin[7] = IMG_Load("4.png");
    coin[8] = IMG_Load("5.png");
    coin[9] = IMG_Load("5.png");
    coin[10] = IMG_Load("6.png");
    coin[11] = IMG_Load("6.png");*/
    
	
    Uint32 t_prev = SDL_GetTicks();
    while(boucle)
    {
    	
    	if(menu==1)
    	{ 
        	play=0;
        	option=0;
        	afficher_imageBMP(screen,IMAGEmenu);	
        	afficher_imageBTN(screen,IMAGE_BTN1);
       		afficher_imageBTN(screen,IMAGE_BTN2);
        	afficher_imageBTN(screen,IMAGE_BTN3);
        	
        	while(SDL_PollEvent(&event))
        	{
            		switch(event.type)
            		{
                    		case SDL_QUIT :
                    		{
                    			boucle=0;
                    			break;
                    		}
                    		case SDL_MOUSEMOTION:
                    		{
                    
                       			if(event.motion.y>=350 && event.motion.y<=440 && event.motion.x>=250 && event.motion.x<=600)
                        		{                                                      			
                            			//initialiser_audiobref(mus);
                            			boutonselcted1=1;	                                                                              
                        		}
                        		else
                        		{
                        			boutonselcted1=0;
                        		}
                                           
                        		if(event.motion.y>=550 && event.motion.y<=640 && event.motion.x>=250 && event.motion.x<=740)
                        		{                           
                            			//initialiser_audiobref(mus);
                            			boutonselcted2=1;                                                                              
                        		}
                        		else
                        		{
                        			boutonselcted2=0;
                        		}
                        		if(event.motion.y>=750 && event.motion.y<=840 && event.motion.x>=250 && event.motion.x<=600)
                        		{                           
                            			//initialiser_audiobref(mus);
                            			boutonselcted3=1;
                        		}
                        		else
                        		{
                        			boutonselcted3=0;
                        		}               
				        break;
		            	}
		            	case SDL_MOUSEBUTTONDOWN:
		            	{
		            		if (event.button.button == SDL_BUTTON_LEFT)
				    	{		
		            	
				    		if((event.motion.y>=350 && event.motion.y<=440 && event.motion.x>=250 && event.motion.x<=600))   ////play
				        	{
				        		 mode=1;
		  				}
		  				if(event.motion.y>=550 && event.motion.y<=640 && event.motion.x>=250 && event.motion.x<=740)    ////option
				      	  	{
				       	     		 option=1;
				       	 	}
		  				if(event.motion.y>=750 && event.motion.y<=840 && event.motion.x>=250 && event.motion.x<=600)   ////quit
		  				{
		  					boucle=0;
				    			break;
		  				}  		
					}
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
				    		case SDLK_p:
				    		{
				    		 	mode=1;
				    		 	break;
				    		}	
				    		case SDLK_o:
				    		{
				    	 		option=1;
				    	 		break;
				    		}
				    		case SDLK_q:
						{
				    			boucle=0;
				    			break;
				    		}
				    		case SDLK_UP:
						{
							//initialiser_audiobref(mus);
							if(boutton==1)
							{
								boutton=3;
							}
							else
							{
								boutton--;
							}
							break;
				        	}
				       		case SDLK_DOWN:
						{
				           		//initialiser_audiobref(mus);
				           		if(boutton==3)
							{
								boutton=1;
							}
							else
							{
								boutton++;
							}
							break;
				        	}
				        	case SDLK_RETURN:
				        	{
				        		if (boutton==1)
				        		{
				        			mode=1;
				        		}
				        		else if (boutton==2)
				        		{
								option=1;		
				        		}
				        		else if (boutton==3) 	
				        		{
				        			boucle=0;	
				        		}
				        		break;
				        	}
				    	}
				}              
			}
		}
		///animation
		SDL_BlitSurface(photos[current_photo], NULL, screen, NULL);
        	current_photo = (current_photo + 1) % 4;
        	SDL_Delay(150);//
		
		if ((boutonselcted1)||(boutton==1))
		{
			afficher_imageBTN(screen,IMAGE_BTN11);
                }
                else
                {
                	afficher_imageBTN(screen,IMAGE_BTN1);
                }
                if ((boutonselcted2)||(boutton==2))
		{
			afficher_imageBTN(screen,IMAGE_BTN22);
                }
                else
                {
                	afficher_imageBTN(screen,IMAGE_BTN2);
                }	
                if ((boutonselcted3)||(boutton==3))
		{
			afficher_imageBTN(screen,IMAGE_BTN33);
                }
                else
                {
                	afficher_imageBTN(screen,IMAGE_BTN3);
                }		
    	}
    	if(mode==1)                                                                                                              /////// menu single-multiplayer
        { 	
		afficher_imageBMP(screen,IMAGEplay); 
		menu=0;
		option=0;
		play=0;
		afficher_imageBTN(screen,IMAGE_BTNsingle);
		afficher_imageBTN(screen,IMAGE_BTNmultiplayer);
		afficher_imageBTN(screen,IMAGE_BTNret);
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
		        {
		    		case SDL_QUIT :
		            	{
		            		boucle=0;
		            	}
		            	case SDL_MOUSEMOTION:
		    		{
		    			if(event.motion.y>=280 && event.motion.y<=418 && event.motion.x>=570 && event.motion.x<=1250)      //single
		    			{
		    				boutonselcted11=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted11=0;
		    				}
		    			if(event.motion.y>=560 && event.motion.y<=698 && event.motion.x>=570 && event.motion.x<=1250)     //multiplayer
		    			{
		    				boutonselcted12=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted12=0;
		    				}
		    			if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)     //return
		    			{
		    				boutonselcted13=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted13=0;
		    				}
		    			break;
		    		}
		    		case SDL_MOUSEBUTTONDOWN:
				{
				    	if (event.button.button == SDL_BUTTON_LEFT)
				    	{
				    		
				    		if(event.motion.y>=280 && event.motion.y<=418 && event.motion.x>=570 && event.motion.x<=1250)   //single
				    		{
				    			nbjoueur=1;
				    			play=1;
				    			mode=0;
				    		}
				    		if(event.motion.y>=560 && event.motion.y<=698 && event.motion.x>=570 && event.motion.x<=1250)     //multi
				    		{
				    			nbjoueur=2;
				    			play=1;
				    			mode=0;
				    		}
				    		if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)  //return
				    		{
				    			menu=1;
				    			mode=0;
				    		}
				    	}
			        }
		    		case SDL_KEYDOWN:
				{
					switch (event.key.keysym.sym)
					{
						case SDLK_r:
						{
							menu=1;
				    			mode=0;
							break;
						}
						case SDLK_ESCAPE:
						{
				    			boucle=0;
				    			break;
				    		}
				    		case SDLK_UP:
						{
							initialiser_audiobref(mus);
							if(boutton4==1)
							{
								boutton4=3;
							}
							else
							{
								boutton4--;
							}
							break;
						}
				       		case SDLK_DOWN:
						{
					   		initialiser_audiobref(mus);
					   		if(boutton4==3)
							{
								boutton4=1;
							}
							else
							{
								boutton4++;
							}
							break;
						}
						case SDLK_RETURN:
						{
							if (boutton4==1) 	
							{
								play=1;
				    				mode=0;			        				
							}
							if (boutton4==2) 	
							{
								nbjoueur=2;
								play=1;
				    				mode=0;			        				
							}
							if (boutton4==3) 	
							{
								menu=1;
				    				mode=0;			        				
							}
							
							break;
						}
					}
			 		break;
				}
		    	}
         	} 
		if ((boutonselcted11)||(boutton4==1))
		{
			afficher_imageBTN(screen,IMAGE_BTNsingle2);
		}
			else
			{
		      		afficher_imageBTN(screen,IMAGE_BTNsingle);
			}
		if ((boutonselcted12)||(boutton4==2))
		{
			afficher_imageBTN(screen,IMAGE_BTNmultiplayer2);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNmultiplayer);
		        }	
		if ((boutonselcted13)||(boutton4==3))
		{
			afficher_imageBTN(screen,IMAGE_BTNret2);
		}
		        else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNret);
		        }               		                       	
    	}
	
    	if(play==1)                                                                                                              /////// menu play
        { 	
		afficher_imageBMP(screen,IMAGEplay); 
		menu=0;
		option=0;
		afficher_imageBTN(screen,IMAGE_BTNnew);
		afficher_imageBTN(screen,IMAGE_BTNload);
		afficher_imageBTN(screen,IMAGE_BTNret);
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
		        {
		    		case SDL_QUIT :
		            	{
		            		boucle=0;
		            	}
		            	case SDL_MOUSEMOTION:
		    		{
		    			if(event.motion.y>=280 && event.motion.y<=418 && event.motion.x>=570 && event.motion.x<=1250)      //new game
		    			{
		    				boutonselcted4=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted4=0;
		    				}
		    			if(event.motion.y>=560 && event.motion.y<=698 && event.motion.x>=570 && event.motion.x<=1250)     //load game
		    			{
		    				boutonselcted5=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted5=0;
		    				}
		    			if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)     //return
		    			{
		    				boutonselcted6=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted6=0;
		    				}
		    			break;
		    		}
		    		case SDL_MOUSEBUTTONDOWN:
				{
				    	if (event.button.button == SDL_BUTTON_LEFT)
				    	{
				    		if(event.motion.y>=280 && event.motion.y<=418 && event.motion.x>=570 && event.motion.x<=1250)   //new game
				    		{
				    			joueur=1;
				    			play=0;
				    		}
				    		if(event.motion.y>=560 && event.motion.y<=698 && event.motion.x>=570 && event.motion.x<=1250)     //load game
				    		{
				    			joueur=1;
				    			play=0;
				    		}
				    		if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)  //return
				    		{
				    			mode=1;
				    			play=0;
				    		}
				    	}
			        }
		    		case SDL_KEYDOWN:
				{
					switch (event.key.keysym.sym)
					{
						case SDLK_r:
						{
							mode=1;
							play=0;
							break;
						}
						case SDLK_ESCAPE:
						{
				    			boucle=0;
				    			break;
				    		}
				    		case SDLK_UP:
						{
							initialiser_audiobref(mus);
							if(boutton3==1)
							{
								boutton3=3;
							}
							else
							{
								boutton3--;
							}
							break;
						}
				       		case SDLK_DOWN:
						{
					   		initialiser_audiobref(mus);
					   		if(boutton3==3)
							{
								boutton3=1;
							}
							else
							{
								boutton3++;
							}
							break;
						}
						case SDLK_RETURN:
						{
							if (boutton3==1) 	
							{
								joueur=1;
								play=0;				        				
							}
							if (boutton3==2) 	
							{
								joueur=1;
								play=0;				        				
							}
							if (boutton3==3) 	
							{
								mode=1;
				    				play=0;			        				
							}
							break;
						}
					}
			 		break;
				}
		    	}
         	} 
		if ((boutonselcted4)||(boutton3==1))
		{
			afficher_imageBTN(screen,IMAGE_BTNnew2);
		}
			else
			{
		      		afficher_imageBTN(screen,IMAGE_BTNnew);
			}
		if ((boutonselcted5)||(boutton3==2))
		{
			afficher_imageBTN(screen,IMAGE_BTNload2);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNload);
		        }	
		if ((boutonselcted6)||(boutton3==3))
		{
			afficher_imageBTN(screen,IMAGE_BTNret2);
		}
		        else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNret);
		        }               		                       	
    	}
    	
    	if(joueur==1)                                                                                                              /////// menu joueur
        { 	
		afficher_imageBMP(screen,IMAGEjoueur); 
		menu=0;
		option=0;
		play=0;
		afficher_imageBTN(screen,IMAGE_BTNaziz);
		afficher_imageBTN(screen,IMAGE_BTNhamdi);
		afficher_imageBTN(screen,IMAGE_BTNdali);
		afficher_imageBTN(screen,IMAGE_BTNdhia);
		afficher_imageBTN(screen,IMAGE_BTNjeribi);
		afficher_imageBTN(screen,IMAGE_BTNret);
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
		        {
		    		case SDL_QUIT :
		            	{
		            		boucle=0;
		            	}
		            	case SDL_MOUSEMOTION:
		    		{
		    			if(event.motion.y>=250 && event.motion.y<=845 && event.motion.x>=250 && event.motion.x<=463)      //aziz
		    			{
		    				boutonselcted14=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted14=0;
		    				}
		    			if(event.motion.y>=250 && event.motion.y<=845 && event.motion.x>=525 && event.motion.x<=740)     //hamdi
		    			{
		    				boutonselcted15=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted15=0;
		    				}
		    			if(event.motion.y>=250 && event.motion.y<=845 && event.motion.x>=800 && event.motion.x<=1015)     //jeribi
		    			{
		    				boutonselcted16=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted16=0;
		    				}
		    			if(event.motion.y>=250 && event.motion.y<=845 && event.motion.x>=1075 && event.motion.x<=1290)     //dhia
		    			{
		    				boutonselcted17=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted17=0;
		    				}
		    			if(event.motion.y>=250 && event.motion.y<=845 && event.motion.x>=1350 && event.motion.x<=1565)     //dali
		    			{
		    				boutonselcted18=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted18=0;
		    				}	
		    			if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)     //return
		    			{
		    				boutonselcted19=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted19=0;
		    				}
		    			break;
		    		}
		    		case SDL_MOUSEBUTTONDOWN:
				{
				    	if (event.button.button == SDL_BUTTON_LEFT)
				    	{
				    		
				    		
				    		if(event.motion.y>=250 && event.motion.y<=845 && event.motion.x>=525 && event.motion.x<=740)     //hamdi
				    		{
				    			maps=1;
				    			joueur=0;
				    		}
				    		if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)  //return
				    		{
				    			play=1;
				    			joueur=0;
				    		}
				    	}
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
				    		case SDLK_LEFT:
						{
							initialiser_audiobref(mus);
							if(boutton6==1)
							{
								boutton6=6;
							}
							else
							{
								boutton6--;
							}
							break;
						}
				       		case SDLK_RIGHT:
						{
					   		initialiser_audiobref(mus);
					   		if(boutton6==6)
							{
								boutton6=1;
							}
							else
							{
								boutton6++;
							}
							break;
						}
						case SDLK_RETURN:
						{
							if (boutton6==6) 	
							{
								play=1;
				    				joueur=0;			        				
							}
							if (boutton6==2) 	
							{
								maps=1;
				    				joueur=0;			        				
							}
							break;
						}
					}
			 		break;
				}
		    	}
         	} 
		if ((boutonselcted14)||(boutton6==1))
		{
			afficher_imageBTN(screen,IMAGE_BTNaziz2);
		}
			else
			{
		      		afficher_imageBTN(screen,IMAGE_BTNaziz);
			}
		if ((boutonselcted15)||(boutton6==2))
		{
			afficher_imageBTN(screen,IMAGE_BTNhamdi2);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNhamdi);
		        }
		if ((boutonselcted16)||(boutton6==3))
		{
			afficher_imageBTN(screen,IMAGE_BTNjeribi2);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNjeribi);
		        }
		if ((boutonselcted17)||(boutton6==4))
		{
			afficher_imageBTN(screen,IMAGE_BTNdhia2);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNdhia);
		        }
		if ((boutonselcted18)||(boutton6==5))
		{
			afficher_imageBTN(screen,IMAGE_BTNdali2);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNdali);
		        }	
		if ((boutonselcted19)||(boutton6==6))
		{
			afficher_imageBTN(screen,IMAGE_BTNret2);
		}
		        else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNret);
		        }               		                       	
    	}
    	if(maps==1)                                                                                                              /////// menu maps
        { 	
		afficher_imageBMP(screen,IMAGEmaps); 
		menu=0;
		option=0;
		play=0;
		afficher_imageBTN(screen,IMAGE_BTNmap1);
		afficher_imageBTN(screen,IMAGE_BTNmap2);
		afficher_imageBTN(screen,IMAGE_BTNmap3);
		afficher_imageBTN(screen,IMAGE_BTNret);
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
		        {
		    		case SDL_QUIT :
		            	{
		            		boucle=0;
		            	}
		            	case SDL_MOUSEMOTION:
		    		{
		    			if(event.motion.y>=120 && event.motion.y<=446 && event.motion.x>=250 && event.motion.x<=717)      //map1
		    			{
		    				boutonselcted20=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted20=0;
		    				}
		    			if(event.motion.y>=120 && event.motion.y<=446 && event.motion.x>=1100 && event.motion.x<=1567)     //map2
		    			{
		    				boutonselcted21=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted21=0;
		    				}
		    			if(event.motion.y>=500 && event.motion.y<=827 && event.motion.x>=670 && event.motion.x<=1137)     //map3
		    			{
		    				boutonselcted22=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted22=0;
		    				}
		    			if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)     //return
		    			{
		    				boutonselcted23=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted23=0;
		    				}
		    			break;
		    		}
		    		case SDL_MOUSEBUTTONDOWN:
				{
				    	if (event.button.button == SDL_BUTTON_LEFT)
				    	{
				    		
				    		if(event.motion.y>=120 && event.motion.y<=446 && event.motion.x>=250 && event.motion.x<=717)   //map1
				    		{
				    			map1=1;
				    			maps=0;
				    		}
				    		
				    		if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)  //return
				    		{
				    			joueur=1;
				    			maps=0;
				    		}
				    	}
			        }
		    		case SDL_KEYDOWN:
				{
					switch (event.key.keysym.sym)
					{
						case SDLK_r:
						{
							joueur=1;
				    			maps=0;
							break;
						}
						case SDLK_ESCAPE:
						{
				    			boucle=0;
				    			break;
				    		}
				    		case SDLK_LEFT:
						{
							initialiser_audiobref(mus);
							if(boutton5==1)
							{
								boutton5=4;
							}
							else
							{
								boutton5--;
							}
							break;
						}
				       		case SDLK_RIGHT:
						{
					   		initialiser_audiobref(mus);
					   		if(boutton5==4)
							{
								boutton5=1;
							}
							else
							{
								boutton5++;
							}
							break;
						}
						case SDLK_RETURN:
						{
							if (boutton5==4) 	
							{
								joueur=1;
				    				maps=0;		        				
							}
							if (boutton5==1) 	
							{
								map1=1;
				    				maps=0;		        				
							}
							break;
						}
					}
			 		break;
				}
		    	}
         	} 
		if ((boutonselcted20)||(boutton5==1))
		{
			afficher_imageBTN(screen,IMAGE_BTNmap12);
		}
			else
			{
		      		afficher_imageBTN(screen,IMAGE_BTNmap1);
			}
		if ((boutonselcted21)||(boutton5==2))
		{
			afficher_imageBTN(screen,IMAGE_BTNmap22);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNmap2);
		        }
		if ((boutonselcted22)||(boutton5==3))
		{
			afficher_imageBTN(screen,IMAGE_BTNmap32);
		}
			else
			{
		      		afficher_imageBTN(screen,IMAGE_BTNmap3);
			}	
		if ((boutonselcted23)||(boutton5==4))
		{
			afficher_imageBTN(screen,IMAGE_BTNret2);
		}
		        else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNret);
		        }               		                       	
    	}
    	if(option==1)                                                                                                       /////////menu option
	{ 	
		afficher_imageBMP(screen,IMAGEoption);
	    	menu=0;
	    	play=0;	
	       	afficher_imageBTN(screen,IMAGE_BTNplus);
		afficher_imageBTN(screen,IMAGE_BTNmoin);
		afficher_imageBTN(screen,IMAGE_BTNret); 
		while(SDL_PollEvent(&event))
		{
			switch(event.type)
		        {
		    		case SDL_QUIT :
		            	{
		            		boucle=0;
		            	}
		    		case SDL_MOUSEMOTION:
		    		{
		    			if(event.motion.y>=380 && event.motion.y<=500 && event.motion.x>=750 && event.motion.x<=900)      //moin
		    			{
		    				boutonselcted7=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted7=0;
		    				}
		    			if(event.motion.y>=380 && event.motion.y<=700 && event.motion.x>=990 && event.motion.x<=1100)     ///plus
		    			{
		    				boutonselcted8=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted8=0;
		    				}
		    			if(event.motion.y>=680 && event.motion.y<=790 && event.motion.x>=600 && event.motion.x<=1290)    ///full screen
		    			{
		    				boutonselcted9=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted9=0;
		    				}
		    			if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)    ///return
		    			{
		    				boutonselcted10=1;
		    				initialiser_audiobref(mus);
		    			}
		    				else
		    				{
		    					boutonselcted10=0;
		    				}
		    			break;
		    		}
		    		case SDL_MOUSEBUTTONDOWN:
		    		{
		    			if (event.button.button == SDL_BUTTON_LEFT)
		            		{
		    				if(event.motion.y>=900 && event.motion.y<=950 && event.motion.x>=50 && event.motion.x<=300)  ///return
		    				{	
		    					menu=1;
		    					option=0;
		    				}
		    				if(event.motion.y>=680 && event.motion.y<=790 && event.motion.x>=600 && event.motion.x<=1290)    ///full screen
		    				{
		    					fullscreen = !fullscreen;
					       	 	if (fullscreen)
					       	 	{
					       	     		screen = SDL_SetVideoMode(0, 0, 32, SDL_DOUBLEBUF | SDL_HWSURFACE | SDL_FULLSCREEN);
					       	 	}
					       	 	else
							    	screen = SDL_SetVideoMode(SCREEN_W,SCREEN_H, 32, SDL_DOUBLEBUF | SDL_HWSURFACE);
							    	
		    				}
		    				if(event.motion.y>=380 && event.motion.y<=700 && event.motion.x>=990 && event.motion.x<=1100)     ///plus
		    				{
		    					volume += MIX_MAX_VOLUME / 4;
						        if (volume > MIX_MAX_VOLUME)
						        { 
								volume = MIX_MAX_VOLUME;
							}
						}
						if(event.motion.y>=380 && event.motion.y<=500 && event.motion.x>=750 && event.motion.x<=900)      //moin
		    				{
		    					volume -= MIX_MAX_VOLUME / 4;
							if (volume < 0) 
							{
								volume = 0;
							}
						}			
		    			}
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
					    		
					    		case SDLK_UP:
							{
								initialiser_audiobref(mus);
								if(boutton2==1)
								{
									boutton2=4;
								}
								else
								{
									boutton2--;
								}
								break;
							}
					       		case SDLK_DOWN:
							{
						   		initialiser_audiobref(mus);
						   		if(boutton2==4)
								{
									boutton2=1;
								}
								else
								{
									boutton2++;
								}
								break;
							}
							case SDLK_RETURN:
							{
								if (boutton2==1)
								{
									volume -= MIX_MAX_VOLUME / 5;
									if (volume < 0) 
									{
										volume = 0;
									}
								}
								else if (boutton2==2)
								{
									volume += MIX_MAX_VOLUME / 5;
								        if (volume > MIX_MAX_VOLUME)
								        { 
										volume = MIX_MAX_VOLUME;
									}
								}
								else if (boutton2==3) 	
								{
									fullscreen = !fullscreen;
					       	 			if (fullscreen)
					       	 			{
					       	     				screen = SDL_SetVideoMode(0, 0, 32, SDL_DOUBLEBUF | SDL_HWSURFACE | SDL_FULLSCREEN);
					       	 			}
					       	 			else
							    			screen = SDL_SetVideoMode(SCREEN_W,SCREEN_H, 32, SDL_DOUBLEBUF | SDL_HWSURFACE);
								}
								else if (boutton2==4) 	
								{
									menu=1;
									option=0;				        				
								}
								break;
							}
							case SDLK_m:
							{
								volume -= MIX_MAX_VOLUME / 5;
									if (volume < 0) 
									{
										volume = 0;
									}
									break;
							}
							case SDLK_p:
							{
								volume += MIX_MAX_VOLUME / 5;
								        if (volume > MIX_MAX_VOLUME)
								        { 
										volume = MIX_MAX_VOLUME;
									}
								break;
							}
							case SDLK_r:
							{
								menu=1;
								option=0;
								break;
							}
							case SDLK_f:
							{
								fullscreen = !fullscreen;
					       	 		if (fullscreen)
					       	 		{
					       	     			screen = SDL_SetVideoMode(0, 0, 32, SDL_DOUBLEBUF | SDL_HWSURFACE | SDL_FULLSCREEN);
					       	 		}
					       	 		else
							    		screen = SDL_SetVideoMode(SCREEN_W,SCREEN_H, 32, SDL_DOUBLEBUF | SDL_HWSURFACE);
							}	
					    	}
					    	break;
				}
			}               
		}
		Mix_Volume(-1, volume);
		Mix_VolumeMusic(volume);
		if ((boutonselcted7)||(boutton2==1))
		{
			afficher_imageBTN(screen,IMAGE_BTNmoin2);
		}
			else
			{
		      		afficher_imageBTN(screen,IMAGE_BTNmoin);
			}
		if ((boutonselcted8)||(boutton2==2))
		{
			afficher_imageBTN(screen,IMAGE_BTNplus2);
		}
			else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNplus);
		        }	
		if ((boutonselcted9)||(boutton2==3))
		{
			afficher_imageBTN(screen,IMAGE_BTNfull2);
		}
		        else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNfull);
		        }
		if ((boutonselcted10)||(boutton2==4))
		{
			afficher_imageBTN(screen,IMAGE_BTNret2);
		}
		        else
		        {
		        	afficher_imageBTN(screen,IMAGE_BTNret);
		        }	
	}
    	if(map1==1)
    	{
	    	x=0;
	    	enigme=0;
	    	menu=0;
	    	play=0;	
	    	Uint32 dt = SDL_GetTicks() - t_prev;
	    	/////////////////////////////////////////////// affichage
	    	afficherback(back1,screen);
	    	afficherPerso(p,screen);
	    	if (nbjoueur==2)
	    	{
	    		afficherPerso2(p2,screen);
	    	}
	    	affichervie(v,screen);
	    	afficherennemi(e,screen);
	    	move_ennemi(&e,p);
		animerennemi (&e);
	    	affiche_map(&m,screen);  
		
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
						/*case SDLK_e:
						{
							enigme=1;
							break;
						}*/
						
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
				/*case SDL_MOUSEBUTTONDOWN:
		     		{
		      			a=event.button.x;
		      			b=event.button.y ;
		      			r=resolutionEnigme (e6,screen,a,b);

		      			break;
		     		}*/
			}
		}
		/*SDL_BlitSurface(coin[current_coin], NULL, screen, NULL);
			current_coin = (current_coin + 1) % 12;
			SDL_Delay(20);*/
		if(nbjoueur==2)               //////////////////////// multiplayer
		{
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
		}
		
		collision(&p, &e, &v);
		
		if (p.posScreen.x==200)
		{
			
			enigme=1;
			map1=0;
		}
			
		if (right==1)
		{
	    		p.vitesse=1;
	    		p.acceleration+=0.05;
	    		p.direction=1;
	    		
	    		scrolling (&back1,&p);
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
			scrolling (&back1,&p);
			if (acc==1)
			{
		    		p.vitesse=2;
			}
		}
		p.acceleration -= 0.3;
		
		if (up==1)
		{
			saut(&p);
			scrolling (&back1,&p);
		}
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
		if (p.posScreen.y != ground)
		{
		    p.posScreen.y-=9;
		}
		if (p.posScreen.y >= ground)
		{
		    p.vitesseVertical=0;
		    p.posScreen.y=ground;
		}
		
		perso_map(&m,&p);
		//MAjMinimap(p,&m);
		update_time(&temps);
		displaytime(temps,screen);
		
		movePerso(&p,dt);
		animerPerso(&p);
		t_prev = SDL_GetTicks();
	}
	if (enigme==1)
	{
		map1=0;
		afficherEnigme(eg, screen);
		animer(&eg);
		while (SDL_PollEvent(&event)&& x==0)
		{
			switch (event.type)
			{
				case SDL_QUIT:
				{	
					boucle=0;
					break;
				}
				case SDL_KEYDOWN:
		      		{
		      			switch (event.key.keysym.sym)
					{
						case SDLK_a:
						{
							eg.pos_selected = 1;
							break;
						}

						case SDLK_b:
						{
							eg.pos_selected = 2;
							break;
						}

						case SDLK_c:
						{
							eg.pos_selected = 3;
							break;
						}
						case SDLK_RETURN:
						{
							verify_enigme(&eg, screen);
							x=1;
							break;
						}
						default:
							printf("\nhello");
					}
				}
				case SDL_MOUSEMOTION:
				{
					if ((event.motion.x > eg.pos_reponse1.x) && (event.motion.x < eg.pos_reponse1.x + 240 ) && (event.motion.y > eg.pos_reponse1.y) && (event.motion.y < eg.pos_reponse1.y + 90))
					{
						eg.pos_selected = 1;
					}
					else if ((event.motion.x > eg.pos_reponse2.x) && (event.motion.x < eg.pos_reponse2.x + 240) && (event.motion.y > eg.pos_reponse2.y ) && (event.motion.y < eg.pos_reponse2.y + 90))
					{
						eg.pos_selected = 2;

					}
					else if ((event.motion.x > eg.pos_reponse3.x) && (event.motion.x < eg.pos_reponse3.x + 240) && (event.motion.y > eg.pos_reponse3.y ) && (event.motion.y < eg.pos_reponse3.y + 90))
					{
						eg.pos_selected = 3;
					}
					else
					{
						eg.pos_selected = 0;
					}
					break;

				}
				
				case SDL_MOUSEBUTTONDOWN:
				{
					if( event.button.button == SDL_BUTTON_LEFT )
					{
						if(eg.pos_selected == 1 )
						{
							verify_enigme(&eg,screen);
							x=1;
						}
						else if(eg.pos_selected == 2 )
						{
							verify_enigme(&eg,screen);
							x=1;
						}
						else if(eg.pos_selected == 3 )
						{
							verify_enigme(&eg,screen);
							x=1;
						}
					}
					break;
				}
			}
		}
		if (x==1)
		{
			p.posScreen.x+=20;
			map1=1;
			enigme=0;
			//testcollision=1;
			//p.collision=0;
			SDL_Flip(screen);
			}
	
	}
	//////////////////////////////enigme
	/*if (enigme=1)
	{
		//////////////////////////////////////enigme
		if(e6.gameover==1)
	    	{
	      		boucle=0;
	    	}
	    	SDL_Event event;

	    	SDL_BlitSurface(optemizedbackground,NULL,screen,&positionbackground);

	     	e6=AfficherEnigme (e6,screen);
		//////////////////////////////////////
		while(SDL_PollEvent(&event))
		{
		    	switch(event.type)
		    	{
		    		case SDL_MOUSEBUTTONDOWN:
				     {
				      a=event.button.x;
				      b=event.button.y ;
				      r=resolutionEnigme (e6,screen,a,b);

				      break;
				     }
			}
		}

		
		if(r==0)

		{
						SDL_BlitSurface(optemizedfailed,&positionbackground,screen,&position_failed);
			SDL_Delay(150);
			boucle=0;
		}


		else if (r==1)
		{

			SDL_BlitSurface(optemizedpassed,&positionbackground,screen,&position_passed);
			SDL_Delay(150);
			boucle=0;

		}
		else if (r==2)
		{
				boucle=0;
		}
		/////////////////////////////////////
	}*/
		
	
	
    SDL_Delay(30);
    SDL_Flip(screen); 
    }
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////      Liberation
    ///////////////////////////////////////////////////////////////////////////////////////////menu
    liberer_image(IMAGEmenu);
    liberer_image(IMAGEoption);
    liberer_image(IMAGEplay);
    liberer_image(IMAGEjoueur);
    liberer_image(IMAGEmaps);
    
    liberer_image(IMAGE_BTN1);
    liberer_image(IMAGE_BTN2);
    liberer_image(IMAGE_BTN3);
    liberer_image(IMAGE_BTN11);
    liberer_image(IMAGE_BTN22);
    liberer_image(IMAGE_BTN33);
    liberer_image(IMAGE_BTNret);
    liberer_image(IMAGE_BTNret2);
    liberer_image(IMAGE_BTNfull);
    liberer_image(IMAGE_BTNfull2);
    liberer_image(IMAGE_BTNnew);
    liberer_image(IMAGE_BTNnew2);
    liberer_image(IMAGE_BTNload);
    liberer_image(IMAGE_BTNload2);
    liberer_image(IMAGE_BTNplus);
    liberer_image(IMAGE_BTNplus2);
    liberer_image(IMAGE_BTNmoin);
    liberer_image(IMAGE_BTNmoin2);
    liberer_image(IMAGE_BTNsingle);
    liberer_image(IMAGE_BTNsingle2);
    liberer_image(IMAGE_BTNmultiplayer);
    liberer_image(IMAGE_BTNmultiplayer2);
    liberer_image(IMAGE_BTNaziz);
    liberer_image(IMAGE_BTNaziz2);
    liberer_image(IMAGE_BTNhamdi);
    liberer_image(IMAGE_BTNhamdi2);
    liberer_image(IMAGE_BTNjeribi);
    liberer_image(IMAGE_BTNjeribi2);
    liberer_image(IMAGE_BTNdhia);
    liberer_image(IMAGE_BTNdhia2);
    liberer_image(IMAGE_BTNdali);
    liberer_image(IMAGE_BTNdali2);
    liberer_image(IMAGE_BTNmap1);
    liberer_image(IMAGE_BTNmap12);
    liberer_image(IMAGE_BTNmap2);
    liberer_image(IMAGE_BTNmap22);
    liberer_image(IMAGE_BTNmap3);
    liberer_image(IMAGE_BTNmap32);
    
    //liberer_musique(music);
    //liberer_musiquebref(mus);
    //liberer_texte(txte);
    
    SDL_FreeSurface(photos[0]);
    SDL_FreeSurface(photos[1]);
    SDL_FreeSurface(photos[2]);
    SDL_FreeSurface(photos[3]);
    /////////////////////////////////////////////////////////////////////////////////////////////////////game
    /*sauvegarder(100,"hamdi","minimap/score.txt");
    char* nomjoueur;
    int score;
    meilleur ("minimap/score.txt",score,nomjoueur);*/
    
    	
    freeTexttime(temps.temps);
    //liberer_musique(music);
    liberer_perso(p);
    liberer_perso(p2);
    liberer_vie(v);
    liberer_ennemi(e);
    
    
    libererback(back1);
     //libererback(ba);
    
    TTF_CloseFont(eg.police1);
    TTF_CloseFont(eg.police);
    TTF_Quit();
    /*SDL_FreeSurface(optemizedbackground);
    SDL_FreeSurface(optemizedpassed);
    SDL_FreeSurface(optemizedfailed);*/
    
    SDL_Quit();
    return 0;
}
    	
