#include "prototypes.h"

int main(int argc, char **argv)
{
    SDL_Init(SDL_INIT_VIDEO);
    TTF_Init();
    SDL_Surface *ecran=SDL_SetVideoMode(1296, 512, 16, SDL_HWSURFACE|SDL_DOUBLEBUF);
    SDL_WM_SetCaption("Blackstar DBZ: La saga des saiyans", NULL);
    int game;

    //Chargement_environnement(ecran);
    debut:
    game=menu_principal(ecran);
    if(game==3)
    {
        duel(ecran);
    }
    else if(game!=5)
    {
        goto debut;
    }
    SDL_FreeSurface(ecran);
    TTF_Quit();
    SDL_Quit();
    return 1;
}
