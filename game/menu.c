#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "menu.h"

void initialiser_imageBACKmenu(image *imge){
    imge->url="menu/BACKGROUND.bmp";
    imge->img=SDL_LoadBMP(imge->url);
    if(imge->img == NULL){
        printf("unable to load background image %s \n",SDL_GetError());
        return;
    }
    imge->pos_img_ecran.x=0;
    imge->pos_img_ecran.y=0;
    imge->pos_img_affice.x=0;
    imge->pos_img_affice.y=0;
    imge->pos_img_affice.h=SCREEN_H;
    imge->pos_img_affice.w=SCREEN_W;
}
void initialiser_imageBACKoption(image *imge){
    imge->url="menu/menuoption.bmp";
    imge->img=SDL_LoadBMP(imge->url);
    if(imge->img == NULL){
        printf("unable to load background image 2%s \n",SDL_GetError());
        return;
    }
    imge->pos_img_ecran.x=0;
    imge->pos_img_ecran.y=0;
    imge->pos_img_affice.x=0;
    imge->pos_img_affice.y=0;
    imge->pos_img_affice.h=SCREEN_H;
    imge->pos_img_affice.w=SCREEN_W;
}
void initialiser_imageBACKplay(image *imge){
    imge->url="menu/menuplay.bmp";
    imge->img=SDL_LoadBMP(imge->url);
    if(imge->img == NULL){
        printf("unable to load background image 2%s \n",SDL_GetError());
        return;
    }
    imge->pos_img_ecran.x=0;
    imge->pos_img_ecran.y=0;
    imge->pos_img_affice.x=0;
    imge->pos_img_affice.y=0;
    imge->pos_img_affice.h=SCREEN_H;
    imge->pos_img_affice.w=SCREEN_W;
}
void initialiser_imageBACKjoueur(image *imge){
    imge->url="menu/menuplayer.png";
    imge->img=IMG_Load(imge->url);
    if(imge->img == NULL){
        printf("unable to load background image 2%s \n",SDL_GetError());
        return;
    }
    imge->pos_img_ecran.x=0;
    imge->pos_img_ecran.y=0;
    imge->pos_img_affice.x=0;
    imge->pos_img_affice.y=0;
    imge->pos_img_affice.h=SCREEN_H;
    imge->pos_img_affice.w=SCREEN_W;
}
void initialiser_imageBACKmaps(image *imge){
    imge->url="menu/menumaps.png";
    imge->img=IMG_Load(imge->url);
    if(imge->img == NULL){
        printf("unable to load background image 2%s \n",SDL_GetError());
        return;
    }
    imge->pos_img_ecran.x=0;
    imge->pos_img_ecran.y=0;
    imge->pos_img_affice.x=0;
    imge->pos_img_affice.y=0;
    imge->pos_img_affice.h=SCREEN_H;
    imge->pos_img_affice.w=SCREEN_W;
}
void initialiser_imageBOUTON1(image *imgbtn){
    imgbtn->url="menu/play.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=250;
    imgbtn->pos_img_ecran.y=350;
}
void initialiser_imageBOUTON11(image *imgbtn){
    imgbtn->url="menu/play2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 11 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=249;
    imgbtn->pos_img_ecran.y=350;
}
void initialiser_imageBOUTON2(image *imgbtn){
    imgbtn->url="menu/options.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 2 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=250;
    imgbtn->pos_img_ecran.y=550;
}
void initialiser_imageBOUTON22(image *imgbtn){
    imgbtn->url="menu/options2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 22 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=250;
    imgbtn->pos_img_ecran.y=548;
}
void initialiser_imageBOUTON3(image *imgbtn){
    imgbtn->url="menu/quit.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 3 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=55;
    imgbtn->pos_img_affice.w=236;
    imgbtn->pos_img_ecran.x=250;
    imgbtn->pos_img_ecran.y=750;
}
void initialiser_imageBOUTON33(image *imgbtn){
    imgbtn->url="menu/quit2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 33 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=55;
    imgbtn->pos_img_affice.w=236;
    imgbtn->pos_img_ecran.x=250;
    imgbtn->pos_img_ecran.y=751;
}
void initialiser_imageBOUTONreturn(image *imgbtn){
    imgbtn->url="menu/return.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=50;
    imgbtn->pos_img_ecran.y=900;
}
void initialiser_imageBOUTONreturn2(image *imgbtn)
{
    imgbtn->url="menu/return2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=50;
    imgbtn->pos_img_ecran.y=901;
}
void initialiser_imageBOUTONfull(image *imgbtn)
{
    imgbtn->url="menu/window.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=600;
    imgbtn->pos_img_ecran.y=679;
}
void initialiser_imageBOUTONfull2(image *imgbtn)
{
    imgbtn->url="menu/full.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=600;
    imgbtn->pos_img_ecran.y=680;
}

void initialiser_imageBOUTONplus(image *imgbtn)
{
    imgbtn->url="menu/plus.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=990;
    imgbtn->pos_img_ecran.y=380;
}
void initialiser_imageBOUTONplus2(image *imgbtn)
{
    imgbtn->url="menu/plus2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=988;
    imgbtn->pos_img_ecran.y=380;
}
void initialiser_imageBOUTONmoin(image *imgbtn)
{
    imgbtn->url="menu/moin.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=750;
    imgbtn->pos_img_ecran.y=380;
}
void initialiser_imageBOUTONmoin2(image *imgbtn)
{
    imgbtn->url="menu/moin2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=750;
    imgbtn->pos_img_ecran.y=381;
}
void initialiser_imageBOUTONnew(image *imgbtn)
{
    imgbtn->url="menu/newgame.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=570;
    imgbtn->pos_img_ecran.y=280;
}
void initialiser_imageBOUTONnew2(image *imgbtn)
{
    imgbtn->url="menu/newgame2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=570;
    imgbtn->pos_img_ecran.y=279;
}
void initialiser_imageBOUTONload(image *imgbtn)
{
    imgbtn->url="menu/loadgame.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=570;
    imgbtn->pos_img_ecran.y=560;
}
void initialiser_imageBOUTONload2(image *imgbtn)
{
    imgbtn->url="menu/loadgame2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=570;
    imgbtn->pos_img_ecran.y=559;
}
void initialiser_imageBOUTONsingle(image *imgbtn)
{
    imgbtn->url="menu/single.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=570;
    imgbtn->pos_img_ecran.y=280;
}
void initialiser_imageBOUTONsingle2(image *imgbtn)
{
    imgbtn->url="menu/single2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=570;
    imgbtn->pos_img_ecran.y=279;
}
void initialiser_imageBOUTONmultiplayer(image *imgbtn)
{
    imgbtn->url="menu/multiplayer.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=570;
    imgbtn->pos_img_ecran.y=560;
}
void initialiser_imageBOUTONmultiplayer2(image *imgbtn)
{
    imgbtn->url="menu/multiplayer2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=100;
    imgbtn->pos_img_affice.w=280;
    imgbtn->pos_img_ecran.x=571;
    imgbtn->pos_img_ecran.y=560;
}
void initialiser_imageBOUTONaziz(image *imgbtn)
{
    imgbtn->url="menu/aziz.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=250;
    imgbtn->pos_img_ecran.y=251;
}
void initialiser_imageBOUTONaziz2(image *imgbtn)
{
    imgbtn->url="menu/aziz2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=250;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONhamdi(image *imgbtn)
{
    imgbtn->url="menu/hamdi.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=525;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONhamdi2(image *imgbtn)
{
    imgbtn->url="menu/hamdi2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=524;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONjeribi(image *imgbtn)
{
    imgbtn->url="menu/jeribi.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=800;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONjeribi2(image *imgbtn)
{
    imgbtn->url="menu/jeribi2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=803;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONdhia(image *imgbtn)
{
    imgbtn->url="menu/dhia.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=1075;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONdhia2(image *imgbtn)
{
    imgbtn->url="menu/dhia2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=1075;
    imgbtn->pos_img_ecran.y=249;
}
void initialiser_imageBOUTONdali(image *imgbtn)
{
    imgbtn->url="menu/dali.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=1350;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONdali2(image *imgbtn)
{
    imgbtn->url="menu/dali2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=1351;
    imgbtn->pos_img_ecran.y=250;
}
void initialiser_imageBOUTONmap1(image *imgbtn)
{
    imgbtn->url="menu/map1.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=240;
    imgbtn->pos_img_ecran.y=120;
}
void initialiser_imageBOUTONmap12(image *imgbtn)
{
    imgbtn->url="menu/map12.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=240;
    imgbtn->pos_img_ecran.y=120;
}
void initialiser_imageBOUTONmap2(image *imgbtn)
{
    imgbtn->url="menu/map2.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=1100;
    imgbtn->pos_img_ecran.y=120;
}
void initialiser_imageBOUTONmap22(image *imgbtn)
{
    imgbtn->url="menu/map22.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=1100;
    imgbtn->pos_img_ecran.y=120;
}
void initialiser_imageBOUTONmap3(image *imgbtn)
{
    imgbtn->url="menu/map3.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=593;
    imgbtn->pos_img_affice.w=214;
    imgbtn->pos_img_ecran.x=670;
    imgbtn->pos_img_ecran.y=500;
}
void initialiser_imageBOUTONmap32(image *imgbtn)
{
    imgbtn->url="menu/map32.png";
    imgbtn->img=IMG_Load(imgbtn->url);
    if(imgbtn->img == NULL){
        printf("unable to load button 1 %s \n",SDL_GetError());
        return;
    }

    imgbtn->pos_img_affice.x=0;
    imgbtn->pos_img_affice.y=0;
    imgbtn->pos_img_affice.h=595;
    imgbtn->pos_img_affice.w=213;
    imgbtn->pos_img_ecran.x=670;
    imgbtn->pos_img_ecran.y=500;
}
void afficher_imageBMP(SDL_Surface *screen,image imge)
{
    SDL_BlitSurface(imge.img,&imge.pos_img_affice,screen,&imge.pos_img_ecran);
}

void afficher_imageBTN(SDL_Surface *screen,image imge)
{
    SDL_BlitSurface(imge.img,NULL,screen,&imge.pos_img_ecran);
}

void liberer_image(image imge)
{
    SDL_FreeSurface(imge.img);
}

void initialiser_audio(Mix_Music *music)
{
    if (Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 1024)){ 
        printf("%s",SDL_GetError());
    }
    music=Mix_LoadMUS("sounds/bgmusic.mp3");
    Mix_PlayMusic(music,-1);
   
}
void liberer_musique(Mix_Music *music)
{
    Mix_FreeMusic(music);
}
void initialiser_audiobref(Mix_Chunk *music)
{
    Mix_OpenAudio(MIX_DEFAULT_FREQUENCY, MIX_DEFAULT_FORMAT, 2, 1024);
    music= Mix_LoadWAV("sounds/simple.wav");
    Mix_PlayChannel(-1,music,0);
    if(music==NULL)
    {
        printf("%s",SDL_GetError());
    }
}

void liberer_musiquebref(Mix_Chunk *music)
{
    Mix_FreeChunk(music);
}

/*void initialiser_texte(texte *txte)
{
    TTF_Init();
    txte->police=TTF_OpenFont("futur.ttf",45);
    txte->color_txt.r=255;
    txte->color_txt.g=255;
    txte->color_txt.b=255;

    txte->pos_txt.x=800;
    txte->pos_txt.y=0;
}

void afficher_texte(SDL_Surface *screen, texte txte)
{
    txte.txt=TTF_RenderText_Blended(txte.police,"BIENVENUE",txte.color_txt);
    SDL_BlitSurface(txte.txt,NULL,screen,&txte.pos_txt);
}

void liberer_texte(texte txte)
{
    TTF_CloseFont(txte.police);
    TTF_Quit();
}
*/

