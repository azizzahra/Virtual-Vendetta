

#include "minimap.h"
#define MINI_W 300
#define MINI_H 805
void initialiser_map (map *m,SDL_Surface *screen)
{
	m->map=IMG_Load("minimap/minimappp.png");
	m->pos_map.x = 750;
	m->pos_map.y = 20;
	m->mini_perso=SDL_CreateRGBSurface(SDL_HWSURFACE|SDL_DOUBLEBUF,10,10,32,0,0,0,0); 
	SDL_FillRect(m->mini_perso,NULL,SDL_MapRGB(screen->format,255,0,0));
	m->perso_pos_map.x=750;
	m->perso_pos_map.y=667;

}


void perso_map(map *m,Personne *p)
{
	m->perso_pos_map.x=p->posScreen.x/4.5+(m->pos_map.x -10);
	m->perso_pos_map.y=p->posScreen.y/10+m->pos_map.y;
	if (m->perso_pos_map.x < m->pos_map.x) 
	{
        	m->perso_pos_map.x = m->pos_map.x;
    	} 
    	else if (m->perso_pos_map.x > m->pos_map.x + MINI_W-10) 
    	{
        	m->perso_pos_map.x = m->pos_map.x + MINI_W-10;
    	}
}



void affiche_map(map *m , SDL_Surface *screen)
{
	SDL_BlitSurface(m->map, NULL, screen,&m->pos_map);
	SDL_BlitSurface(m->mini_perso, NULL, screen,&m->perso_pos_map);
}



/*void sauvegarder(int score,char nomjoueur[],char nomfichier[])
{
	FILE *f,*fnom;
   	int id;
char * nom[255];
	f=fopen(nomfichier, "a+");
	fnom=fopen("minimap/nom.txt", "a+");
	if(f==NULL){
        printf("Erreur lors de l'ouverture d'un fichier");
	
       }
	if(fnom==NULL){
        printf("Erreur lors de l'ouverture d'un fichier");
       }
 	fprintf(f, "%d\n", score);
	while( fscanf(fnom, "%d %s\n",&id,&nom)!=EOF)
	{ 
		printf("%d \n",id);
	}	
	fprintf(fnom,"%d %s\n",id+1,nomjoueur);
	
	fclose(f);
	fclose(fnom);
}


void meilleur (char nomfichier[],int score,char nomjoueur[])
{
		FILE *f,*fnom;
	    char nom[255];
	    
		int id;
	 	
		int t[50];
		int i=0,s=0;
		char* tnom[50];
	    f = fopen("minimap/score.txt", "r");
	 fnom = fopen("minimap/nom.txt", "r");
	    if(f==NULL)
		{
		printf("Erreur lors de l'ouverture d'un fichier");
		exit(1);
	    }
		if(fnom==NULL)
		{
		printf("Erreur lors de l'ouverture d'un fichier");
		exit(1);
	    }
	while(fscanf(f,"%d\n",&t[i])==1)
	{
		i++;
	}	
	for(int j=0;j<i;j++) 
	 	{printf("score : %d\n", t[j]);
	}
	int meilleur=t[0],d=1;
	int x=1;
	for(int h=1;h<i;h++)
	{	x++;
		if(t[h]>meilleur)
		{	d=h+1;
			meilleur=t[h];
			
		}
		
	}
	int z=1;
	char nomjoueurmeilleur[4];

	while( fscanf(fnom, "%d %s\n",&id,&nom)!=EOF)
	{
		printf("%s\n",nom);

		if(id==d)
		{
			strcpy(nomjoueurmeilleur,nom);
			
			break;
		}

	}

	printf("hamdii",nom);
	printf("meilleur score: %d \n ",meilleur);

	printf("meilleur joueur: %s \n ",nomjoueurmeilleur);
	    	fclose(f);
		 fclose(fnom);
}*/

/*void MAjMinimap(Personne p , map *m ){
m->perso_pos_map.x=p.posScreen.x*(0,0666);
m->perso_pos_map.y=m->perso_pos_mapinit.y+p.posScreen.y/3;
p->posScreen.x=pos_joueur.x+camera.x;
p->posScreen.y=pos_joueur.y+camera.y;
}*/

/*void init_animation(animated *a)
{
    a->position.x = 0;
    a->position.y = 0;
    a->frame = 0;
    a->animation[0] = IMG_Load("1.png");
    a->animation[1] = IMG_Load("1.png");
    a->animation[2] = IMG_Load("2.png");
    a->animation[3] = IMG_Load("2.png");
    a->animation[4] = IMG_Load("3.png");
    a->animation[5] = IMG_Load("3.png");
    a->animation[6] = IMG_Load("4.png");
    a->animation[7] = IMG_Load("4.png");
    a->animation[8] = IMG_Load("5.png");
    a->animation[9] = IMG_Load("5.png");
    a->animation[10] = IMG_Load("6.png");
    a->animation[11] = IMG_Load("6.png");
    
}
void aff_animation(SDL_Surface *screen , animated a)
{   
	SDL_BlitSurface(a.animation[a.frame], NULL, screen, &a.position);
	 a.frame++;
    if(a.frame == 12)
        a.frame = 0;
        /*SDL_BlitSurface(a->animation[current_coin], NULL, screen, NULL);
        	current_coin= (current_photo + 1) % 12;
        	SDL_Delay(250);
    
}*/
/*void free_animation(animated a)
{
    int i;
    for(i = 0; i < 12; i++)
    {
        SDL_FreeSurface(a.animation[i]);
    }
}*/
