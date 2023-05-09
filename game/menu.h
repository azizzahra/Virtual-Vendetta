#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#define SCREEN_H 1000
#define SCREEN_W 1800

typedef struct{
    char *url;
    SDL_Rect pos_img_affice;
    SDL_Rect pos_img_ecran;
    SDL_Surface *img;
}image;

typedef struct{
    SDL_Surface *txt;
    SDL_Rect pos_txt;
    SDL_Color color_txt;
    TTF_Font *police;
}texte;


void initialiser_imageBACKmenu(image *imge);
void initialiser_imageBACKoption(image *imge);
void initialiser_imageBACKplay(image *imge);
void initialiser_imageBACKmaps(image *imge);
void initialiser_imageBACKjoueur(image *imge);

void initialiser_imageBOUTON1(image *imgbtn);
void initialiser_imageBOUTON2(image *imgbtn);
void initialiser_imageBOUTON3(image *imgbtn);
void initialiser_imageBOUTON11(image *imgbtn);
void initialiser_imageBOUTON22(image *imgbtn);
void initialiser_imageBOUTON33(image *imgbtn);
void initialiser_imageBOUTONreturn(image *imgbtn);
void initialiser_imageBOUTONreturn2(image *imgbtn);
void initialiser_imageBOUTONfull(image *imgbtn);
void initialiser_imageBOUTONfull2(image *imgbtn);
void initialiser_imageBOUTONplus(image *imgbtn);
void initialiser_imageBOUTONplus2(image *imgbtn);
void initialiser_imageBOUTONmoin(image *imgbtn);
void initialiser_imageBOUTONmoin2(image *imgbtn);
void initialiser_imageBOUTONnew(image *imgbtn);
void initialiser_imageBOUTONnew2(image *imgbtn);
void initialiser_imageBOUTONload(image *imgbtn);
void initialiser_imageBOUTONload2(image *imgbtn);
void initialiser_imageBOUTONsingle(image *imgbtn);
void initialiser_imageBOUTONsingle2(image *imgbtn);
void initialiser_imageBOUTONmultiplayer(image *imgbtn);
void initialiser_imageBOUTONmultiplayer2(image *imgbtn);
void initialiser_imageBOUTONaziz(image *imgbtn);
void initialiser_imageBOUTONaziz2(image *imgbtn);
void initialiser_imageBOUTONhamdi(image *imgbtn);
void initialiser_imageBOUTONhamdi2(image *imgbtn);
void initialiser_imageBOUTONjeribi(image *imgbtn);
void initialiser_imageBOUTONjeribi2(image *imgbtn);
void initialiser_imageBOUTONdhia(image *imgbtn);
void initialiser_imageBOUTONdhia2(image *imgbtn);
void initialiser_imageBOUTONdali(image *imgbtn);
void initialiser_imageBOUTONdali2(image *imgbtn);
void initialiser_imageBOUTONmap1(image *imgbtn);
void initialiser_imageBOUTONmap12(image *imgbtn);
void initialiser_imageBOUTONmap2(image *imgbtn);
void initialiser_imageBOUTONmap22(image *imgbtn);
void initialiser_imageBOUTONmap3(image *imgbtn);
void initialiser_imageBOUTONmap32(image *imgbtn);

void afficher_imageBMP(SDL_Surface *screen,image imge);
void afficher_imageBTN(SDL_Surface *screen,image imge);
void liberer_image(image imge);

void initialiser_audio(Mix_Music *music);
void liberer_musique(Mix_Music *music);

void initialiser_audiobref(Mix_Chunk *music);
void liberer_musiquebref(Mix_Chunk *music);

/*void initialiser_texte(texte *txte);
void afficher_texte(SDL_Surface *screen,texte txte);
void liberer_texte(texte txte);*/


#endif
