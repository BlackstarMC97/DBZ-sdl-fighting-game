#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#include <conio.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/fmod.h>


#define nbpers 50
#define fps 20

typedef struct personnage
{
    SDL_Surface *COD;//posture initiale
    SDL_Surface *COD1;//coup de poing
    SDL_Surface *COD2;//coup de pied
    SDL_Surface *COD22;//coup de pied 2
    SDL_Surface *CODe;//posture touché
    SDL_Surface *CODb;//posture bloquer
    SDL_Surface *CODav;//posture avancer
    SDL_Surface *CODar;//posture reculer
    SDL_Surface *CODv;//posture accelerrer
    SDL_Surface *rCOD;//posture initiale
    SDL_Surface *rCOD1;//coup de poing
    SDL_Surface *rCOD2;//coup de pied
    SDL_Surface *rCOD22;//coup de pied 2
    SDL_Surface *rCODe;//posture touché
    SDL_Surface *rCODb;//posture bloquer
    SDL_Surface *rCODav;//posture avancer
    SDL_Surface *rCODar;//posture reculer
    SDL_Surface *rCODv;//posture accelerer
    SDL_Surface *image;//photo 4*4
    SDL_Surface *poster;//photo profil du joueur
    char nom[50];
    float attaque;//niveau d'attaque
    float defense;//niveau de defense
    float fatale;//niveau de degat cause par l'attaque speciale du joueur
    float resistance;//niveau de resistance
    int energie;//niveau d'energie
    int hauteur;//hauteur maximale du saut
    int vitesse;//nombre de pixels de depaclement d'un joueur
    int portee;//distance maximale en pixels pour reussir une attaque
}person;


void Chargement_environnement(SDL_Surface *screen);
void charger_tableau_personnage(person tab[]);
int menu_principal(SDL_Surface *screen);
void duel(SDL_Surface *screen);
void combattre_linteligence_artificielle(SDL_Surface *screen);
