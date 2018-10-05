#include "prototypes.h"

void charger_tableau_personnage(person tab[])
{
    int i;
    //SANGOKU
    sprintf(tab[0].nom, "SANGOKU");
    tab[0].COD=SDL_LoadBMP("Characters\\Sangoku\\positSGK.bmp");
    tab[0].COD1=SDL_LoadBMP("Characters\\Sangoku\\positSGK1.bmp");
    tab[0].COD2=SDL_LoadBMP("Characters\\Sangoku\\positSGK2.bmp");
    tab[0].COD22=SDL_LoadBMP("Characters\\Sangoku\\positSGK2+.bmp");
    tab[0].CODar=SDL_LoadBMP("Characters\\Sangoku\\positSGKar.bmp");
    tab[0].CODav=SDL_LoadBMP("Characters\\Sangoku\\positSGKav.bmp");
    tab[0].CODb=SDL_LoadBMP("Characters\\Sangoku\\positSGKb.bmp");
    tab[0].CODe=SDL_LoadBMP("Characters\\Sangoku\\positSGKe.bmp");
    tab[0].rCOD=SDL_LoadBMP("Characters\\Sangoku\\rpositSGK.bmp");
    tab[0].rCOD1=SDL_LoadBMP("Characters\\Sangoku\\rpositSGK1.bmp");
    tab[0].rCOD2=SDL_LoadBMP("Characters\\Sangoku\\rpositSGK2.bmp");
    tab[0].rCOD22=SDL_LoadBMP("Characters\\Sangoku\\rpositSGK2+.bmp");
    tab[0].rCODar=SDL_LoadBMP("Characters\\Sangoku\\rpositSGKar.bmp");
    tab[0].rCODav=SDL_LoadBMP("Characters\\Sangoku\\rpositSGKav.bmp");
    tab[0].rCODb=SDL_LoadBMP("Characters\\Sangoku\\rpositSGKb.bmp");
    tab[0].rCODe=SDL_LoadBMP("Characters\\Sangoku\\rpositSGKe.bmp");
    tab[0].image=SDL_LoadBMP("Characters\\Sangoku\\photogoku.bmp");
    tab[0].attaque=2;
    tab[0].defense=1;
    tab[0].vitesse=2;
    tab[0].resistance=140;
    tab[0].portee=90;
    tab[0].hauteur=40;
    tab[0].fatale=45;

    //PICOLLO
    sprintf(tab[1].nom, "PICOLLO");
    tab[1].COD=SDL_LoadBMP("Characters\\Picollo\\positPCL.bmp");
    tab[1].COD1=SDL_LoadBMP("Characters\\Picollo\\positPCL1.bmp");
    tab[1].COD2=SDL_LoadBMP("Characters\\Picollo\\positPCL2.bmp");
    tab[1].COD22=SDL_LoadBMP("Characters\\Picollo\\positPCL2+.bmp");
    tab[1].CODar=SDL_LoadBMP("Characters\\Picollo\\positPCLar.bmp");
    tab[1].CODav=SDL_LoadBMP("Characters\\Picollo\\positPCLav.bmp");
    tab[1].CODb=SDL_LoadBMP("Characters\\Picollo\\positPCLb.bmp");
    tab[1].CODe=SDL_LoadBMP("Characters\\Picollo\\positPCLe.bmp");
    tab[1].rCOD=SDL_LoadBMP("Characters\\Picollo\\rpositPCL.bmp");
    tab[1].rCOD1=SDL_LoadBMP("Characters\\Picollo\\rpositPCL1.bmp");
    tab[1].rCOD2=SDL_LoadBMP("Characters\\Picollo\\rpositPCL2.bmp");
    tab[1].rCOD22=SDL_LoadBMP("Characters\\Picollo\\rpositPCL2+.bmp");
    tab[1].rCODar=SDL_LoadBMP("Characters\\Picollo\\rpositPCLar.bmp");
    tab[1].rCODav=SDL_LoadBMP("Characters\\Picollo\\rpositPCLav.bmp");
    tab[1].rCODb=SDL_LoadBMP("Characters\\Picollo\\rpositPCLb.bmp");
    tab[1].rCODe=SDL_LoadBMP("Characters\\Picollo\\rpositPCLe.bmp");
    tab[1].image=SDL_LoadBMP("Characters\\Picollo\\photopicollo.bmp");
    tab[1].attaque=1;
    tab[1].defense=1;
    tab[1].vitesse=1;
    tab[1].resistance=130;
    tab[1].portee=100;
    tab[1].hauteur=60;
    tab[1].fatale=30;

    //SANGOHAN
    sprintf(tab[2].nom, "SANGOHAN");
    tab[2].COD=SDL_LoadBMP("Characters\\Sangohan\\positGOH.bmp");
    tab[2].COD1=SDL_LoadBMP("Characters\\Sangohan\\positGOH1.bmp");
    tab[2].COD2=SDL_LoadBMP("Characters\\Sangohan\\positGOH2.bmp");
    tab[2].COD22=SDL_LoadBMP("Characters\\Sangohan\\positGOH2+.bmp");
    tab[2].CODar=SDL_LoadBMP("Characters\\Sangohan\\positGOHar.bmp");
    tab[2].CODav=SDL_LoadBMP("Characters\\Sangohan\\positGOHav.bmp");
    tab[2].CODb=SDL_LoadBMP("Characters\\Sangohan\\positGOHb.bmp");
    tab[2].CODe=SDL_LoadBMP("Characters\\Sangohan\\positGOHe.bmp");
    tab[2].rCOD=SDL_LoadBMP("Characters\\Sangohan\\rpositGOH.bmp");
    tab[2].rCOD1=SDL_LoadBMP("Characters\\Sangohan\\rpositGOH1.bmp");
    tab[2].rCOD2=SDL_LoadBMP("Characters\\Sangohan\\rpositGOH2.bmp");
    tab[2].rCOD22=SDL_LoadBMP("Characters\\Sangohan\\rpositGOH2+.bmp");
    tab[2].rCODar=SDL_LoadBMP("Characters\\Sangohan\\rpositGOHar.bmp");
    tab[2].rCODav=SDL_LoadBMP("Characters\\Sangohan\\rpositGOHav.bmp");
    tab[2].rCODb=SDL_LoadBMP("Characters\\Sangohan\\rpositGOHb.bmp");
    tab[2].rCODe=SDL_LoadBMP("Characters\\Sangohan\\rpositGOHe.bmp");
    tab[2].image=SDL_LoadBMP("Characters\\Sangohan\\photosangohan.bmp");
    tab[2].attaque=1;
    tab[2].defense=0;
    tab[2].vitesse=1;
    tab[2].resistance=100;
    tab[2].portee=70;
    tab[2].hauteur=50;
    tab[2].fatale=22;

    //VEGETA
    sprintf(tab[3].nom, "VEGETA");
    tab[3].COD=SDL_LoadBMP("Characters\\Vegeta\\positVGT.bmp");
    tab[3].COD1=SDL_LoadBMP("Characters\\Vegeta\\positVGT1.bmp");
    tab[3].COD2=SDL_LoadBMP("Characters\\Vegeta\\positVGT2.bmp");
    tab[3].COD22=SDL_LoadBMP("Characters\\Vegeta\\positVGT2+.bmp");
    tab[3].CODar=SDL_LoadBMP("Characters\\Vegeta\\positVGTar.bmp");
    tab[3].CODav=SDL_LoadBMP("Characters\\Vegeta\\positVGTav.bmp");
    tab[3].CODb=SDL_LoadBMP("Characters\\Vegeta\\positVGTb.bmp");
    tab[3].CODe=SDL_LoadBMP("Characters\\Vegeta\\positVGTe.bmp");
    tab[3].rCOD=SDL_LoadBMP("Characters\\Vegeta\\rpositVGT.bmp");
    tab[3].rCOD1=SDL_LoadBMP("Characters\\Vegeta\\rpositVGT1.bmp");
    tab[3].rCOD2=SDL_LoadBMP("Characters\\Vegeta\\rpositVGT2.bmp");
    tab[3].rCOD22=SDL_LoadBMP("Characters\\Vegeta\\rpositVGT2+.bmp");
    tab[3].rCODar=SDL_LoadBMP("Characters\\Vegeta\\rpositVGTar.bmp");
    tab[3].rCODav=SDL_LoadBMP("Characters\\Vegeta\\rpositVGTav.bmp");
    tab[3].rCODb=SDL_LoadBMP("Characters\\Vegeta\\rpositVGTb.bmp");
    tab[3].rCODe=SDL_LoadBMP("Characters\\Vegeta\\rpositVGTe.bmp");
    tab[3].image=SDL_LoadBMP("Characters\\Vegeta\\photovegeta.bmp");
    tab[3].attaque=2;
    tab[3].defense=2;
    tab[3].vitesse=2;
    tab[3].resistance=170;
    tab[3].portee=80;
    tab[3].hauteur=40;
    tab[3].fatale=42;

    //KRILIN
    sprintf(tab[4].nom, "KRILIN");
    tab[4].COD=SDL_LoadBMP("Characters\\Krilin\\positKRI.bmp");
    tab[4].COD1=SDL_LoadBMP("Characters\\Krilin\\positKRI1.bmp");
    tab[4].COD2=SDL_LoadBMP("Characters\\Krilin\\positKRI2.bmp");
    tab[4].COD22=SDL_LoadBMP("Characters\\Krilin\\positKRI2+.bmp");
    tab[4].CODar=SDL_LoadBMP("Characters\\Krilin\\positKRIar.bmp");
    tab[4].CODav=SDL_LoadBMP("Characters\\Krilin\\positKRIav.bmp");
    tab[4].CODb=SDL_LoadBMP("Characters\\Krilin\\positKRIb.bmp");
    tab[4].CODe=SDL_LoadBMP("Characters\\Krilin\\positKRIe.bmp");
    tab[4].rCOD=SDL_LoadBMP("Characters\\Krilin\\rpositKRI.bmp");
    tab[4].rCOD1=SDL_LoadBMP("Characters\\Krilin\\rpositKRI1.bmp");
    tab[4].rCOD2=SDL_LoadBMP("Characters\\Krilin\\rpositKRI2.bmp");
    tab[4].rCOD22=SDL_LoadBMP("Characters\\Krilin\\rpositKRI2+.bmp");
    tab[4].rCODar=SDL_LoadBMP("Characters\\Krilin\\rpositKRIar.bmp");
    tab[4].rCODav=SDL_LoadBMP("Characters\\Krilin\\rpositKRIav.bmp");
    tab[4].rCODb=SDL_LoadBMP("Characters\\Krilin\\rpositKRIb.bmp");
    tab[4].rCODe=SDL_LoadBMP("Characters\\Krilin\\rpositKRIe.bmp");
    tab[4].image=SDL_LoadBMP("Characters\\Krilin\\photokrilin.bmp");
    tab[4].attaque=1;
    tab[4].defense=0;
    tab[4].vitesse=1;
    tab[4].resistance=100;
    tab[4].portee=72;
    tab[4].hauteur=50;
    tab[4].fatale=32;

    //YAMCHA
    sprintf(tab[5].nom, "YAMCHA");
    tab[5].COD=SDL_LoadBMP("Characters\\Yamcha\\positYAM.bmp");
    tab[5].COD1=SDL_LoadBMP("Characters\\Yamcha\\positYAM1.bmp");
    tab[5].COD2=SDL_LoadBMP("Characters\\Yamcha\\positYAM2.bmp");
    tab[5].COD22=SDL_LoadBMP("Characters\\Yamcha\\positYAM2+.bmp");
    tab[5].CODar=SDL_LoadBMP("Characters\\Yamcha\\positYAMar.bmp");
    tab[5].CODav=SDL_LoadBMP("Characters\\Yamcha\\positYAMav.bmp");
    tab[5].CODb=SDL_LoadBMP("Characters\\Yamcha\\positYAMb.bmp");
    tab[5].CODe=SDL_LoadBMP("Characters\\Yamcha\\positYAMe.bmp");
    tab[5].rCOD=SDL_LoadBMP("Characters\\Yamcha\\rpositYAM.bmp");
    tab[5].rCOD1=SDL_LoadBMP("Characters\\Yamcha\\rpositYAM1.bmp");
    tab[5].rCOD2=SDL_LoadBMP("Characters\\Yamcha\\rpositYAM2.bmp");
    tab[5].rCOD22=SDL_LoadBMP("Characters\\Yamcha\\rpositYAM2+.bmp");
    tab[5].rCODar=SDL_LoadBMP("Characters\\Yamcha\\rpositYAMar.bmp");
    tab[5].rCODav=SDL_LoadBMP("Characters\\Yamcha\\rpositYAMav.bmp");
    tab[5].rCODb=SDL_LoadBMP("Characters\\Yamcha\\rpositYAMb.bmp");
    tab[5].rCODe=SDL_LoadBMP("Characters\\Yamcha\\rpositYAMe.bmp");
    tab[5].image=SDL_LoadBMP("Characters\\Yamcha\\photoyamcha.bmp");
    tab[5].attaque=1;
    tab[5].defense=0;
    tab[5].vitesse=1;
    tab[5].resistance=100;
    tab[5].portee=90;
    tab[5].hauteur=53;
    tab[5].fatale=22;

    //TENSHINHAN
    sprintf(tab[6].nom, "TENSHINHAN");
    tab[6].COD=SDL_LoadBMP("Characters\\Tenshinhan\\positTEN.bmp");
    tab[6].COD1=SDL_LoadBMP("Characters\\Tenshinhan\\positTEN1.bmp");
    tab[6].COD2=SDL_LoadBMP("Characters\\Tenshinhan\\positTEN2.bmp");
    tab[6].COD22=SDL_LoadBMP("Characters\\Tenshinhan\\positTEN2+.bmp");
    tab[6].CODar=SDL_LoadBMP("Characters\\Tenshinhan\\positTENar.bmp");
    tab[6].CODav=SDL_LoadBMP("Characters\\Tenshinhan\\positTENav.bmp");
    tab[6].CODb=SDL_LoadBMP("Characters\\Tenshinhan\\positTENb.bmp");
    tab[6].CODe=SDL_LoadBMP("Characters\\Tenshinhan\\positTENe.bmp");
    tab[6].rCOD=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTEN.bmp");
    tab[6].rCOD1=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTEN1.bmp");
    tab[6].rCOD2=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTEN2.bmp");
    tab[6].rCOD22=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTEN2+.bmp");
    tab[6].rCODar=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTENar.bmp");
    tab[6].rCODav=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTENav.bmp");
    tab[6].rCODb=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTENb.bmp");
    tab[6].rCODe=SDL_LoadBMP("Characters\\Tenshinhan\\rpositTENe.bmp");
    tab[6].image=SDL_LoadBMP("Characters\\Tenshinhan\\phototenshin.bmp");
    tab[6].attaque=1;
    tab[6].defense=1;
    tab[6].vitesse=1;
    tab[6].resistance=120;
    tab[6].portee=94;
    tab[6].hauteur=53;
    tab[6].fatale=30;

    //CHAOZU
    sprintf(tab[7].nom, "CHAOZU");
    tab[7].COD=SDL_LoadBMP("Characters\\Chaozu\\positCHA.bmp");
    tab[7].COD1=SDL_LoadBMP("Characters\\Chaozu\\positCHA1.bmp");
    tab[7].COD2=SDL_LoadBMP("Characters\\Chaozu\\positCHA2.bmp");
    tab[7].COD22=SDL_LoadBMP("Characters\\Chaozu\\positCHA2+.bmp");
    tab[7].CODar=SDL_LoadBMP("Characters\\Chaozu\\positCHAar.bmp");
    tab[7].CODav=SDL_LoadBMP("Characters\\Chaozu\\positCHAav.bmp");
    tab[7].CODb=SDL_LoadBMP("Characters\\Chaozu\\positCHAb.bmp");
    tab[7].CODe=SDL_LoadBMP("Characters\\Chaozu\\positCHAe.bmp");
    tab[7].rCOD=SDL_LoadBMP("Characters\\Chaozu\\rpositCHA.bmp");
    tab[7].rCOD1=SDL_LoadBMP("Characters\\Chaozu\\rpositCHA1.bmp");
    tab[7].rCOD2=SDL_LoadBMP("Characters\\Chaozu\\rpositCHA2.bmp");
    tab[7].rCOD22=SDL_LoadBMP("Characters\\Chaozu\\rpositCHA2+.bmp");
    tab[7].rCODar=SDL_LoadBMP("Characters\\Chaozu\\rpositCHAar.bmp");
    tab[7].rCODav=SDL_LoadBMP("Characters\\Chaozu\\rpositCHAav.bmp");
    tab[7].rCODb=SDL_LoadBMP("Characters\\Chaozu\\rpositCHAb.bmp");
    tab[7].rCODe=SDL_LoadBMP("Characters\\Chaozu\\rpositCHAe.bmp");
    tab[7].image=SDL_LoadBMP("Characters\\Chaozu\\photochaozu.bmp");
    tab[7].attaque=1;
    tab[7].defense=0;
    tab[7].vitesse=1;
    tab[7].resistance=100;
    tab[7].portee=70;
    tab[7].hauteur=63;
    tab[7].fatale=10;

    //KAOIH
    sprintf(tab[8].nom, "KAIOH");
    tab[8].COD=SDL_LoadBMP("Characters\\Kaioh\\positKAO.bmp");
    tab[8].COD1=SDL_LoadBMP("Characters\\Kaioh\\positKAO1.bmp");
    tab[8].COD2=SDL_LoadBMP("Characters\\Kaioh\\positKAO2.bmp");
    tab[8].COD22=SDL_LoadBMP("Characters\\Kaioh\\positKAO2+.bmp");
    tab[8].CODar=SDL_LoadBMP("Characters\\Kaioh\\positKAOar.bmp");
    tab[8].CODav=SDL_LoadBMP("Characters\\Kaioh\\positKAOav.bmp");
    tab[8].CODb=SDL_LoadBMP("Characters\\Kaioh\\positKAOb.bmp");
    tab[8].CODe=SDL_LoadBMP("Characters\\Kaioh\\positKAOe.bmp");
    tab[8].rCOD=SDL_LoadBMP("Characters\\Kaioh\\rpositKAO.bmp");
    tab[8].rCOD1=SDL_LoadBMP("Characters\\Kaioh\\rpositKAO1.bmp");
    tab[8].rCOD2=SDL_LoadBMP("Characters\\Kaioh\\rpositKAO2.bmp");
    tab[8].rCOD22=SDL_LoadBMP("Characters\\Kaioh\\rpositKAO2+.bmp");
    tab[8].rCODar=SDL_LoadBMP("Characters\\Kaioh\\rpositKAOar.bmp");
    tab[8].rCODav=SDL_LoadBMP("Characters\\Kaioh\\rpositKAOav.bmp");
    tab[8].rCODb=SDL_LoadBMP("Characters\\Kaioh\\rpositKAOb.bmp");
    tab[8].rCODe=SDL_LoadBMP("Characters\\Kaioh\\rpositKAOe.bmp");
    tab[8].image=SDL_LoadBMP("Characters\\Kaioh\\photokaioh.bmp");
    tab[8].attaque=1;
    tab[8].defense=0;
    tab[8].vitesse=1;
    tab[8].resistance=100;
    tab[8].portee=75;
    tab[8].hauteur=33;
    tab[8].fatale=25;

    //NAPPA
    sprintf(tab[9].nom, "NAPPA");
    tab[9].COD=SDL_LoadBMP("Characters\\Nappa\\positNAP.bmp");
    tab[9].COD1=SDL_LoadBMP("Characters\\Nappa\\positNAP1.bmp");
    tab[9].COD2=SDL_LoadBMP("Characters\\Nappa\\positNAP2.bmp");
    tab[9].COD22=SDL_LoadBMP("Characters\\Nappa\\positNAP2+.bmp");
    tab[9].CODar=SDL_LoadBMP("Characters\\Nappa\\positNAPar.bmp");
    tab[9].CODav=SDL_LoadBMP("Characters\\Nappa\\positNAPav.bmp");
    tab[9].CODb=SDL_LoadBMP("Characters\\Nappa\\positNAPb.bmp");
    tab[9].CODe=SDL_LoadBMP("Characters\\Nappa\\positNAPe.bmp");
    tab[9].rCOD=SDL_LoadBMP("Characters\\Nappa\\rpositNAP.bmp");
    tab[9].rCOD1=SDL_LoadBMP("Characters\\Nappa\\rpositNAP1.bmp");
    tab[9].rCOD2=SDL_LoadBMP("Characters\\Nappa\\rpositNAP2.bmp");
    tab[9].rCOD22=SDL_LoadBMP("Characters\\Nappa\\rpositNAP2+.bmp");
    tab[9].rCODar=SDL_LoadBMP("Characters\\Nappa\\rpositNAPar.bmp");
    tab[9].rCODav=SDL_LoadBMP("Characters\\Nappa\\rpositNAPav.bmp");
    tab[9].rCODb=SDL_LoadBMP("Characters\\Nappa\\rpositNAPb.bmp");
    tab[9].rCODe=SDL_LoadBMP("Characters\\Nappa\\rpositNAPe.bmp");
    tab[9].image=SDL_LoadBMP("Characters\\Nappa\\photonappa.bmp");
    tab[9].attaque=1;
    tab[9].defense=1;
    tab[9].vitesse=1;
    tab[9].resistance=150;
    tab[9].portee=105;
    tab[9].hauteur=33;
    tab[9].fatale=35;

    //RADITZ
    sprintf(tab[10].nom, "RADITZ");
    tab[10].COD=SDL_LoadBMP("Characters\\Raditz\\positRDX.bmp");
    tab[10].COD1=SDL_LoadBMP("Characters\\Raditz\\positRDX1.bmp");
    tab[10].COD2=SDL_LoadBMP("Characters\\Raditz\\positRDX2.bmp");
    tab[10].COD22=SDL_LoadBMP("Characters\\Raditz\\positRDX2+.bmp");
    tab[10].CODar=SDL_LoadBMP("Characters\\Raditz\\positRDXar.bmp");
    tab[10].CODav=SDL_LoadBMP("Characters\\Raditz\\positRDXav.bmp");
    tab[10].CODb=SDL_LoadBMP("Characters\\Raditz\\positRDXb.bmp");
    tab[10].CODe=SDL_LoadBMP("Characters\\Raditz\\positRDXe.bmp");
    tab[10].rCOD=SDL_LoadBMP("Characters\\Raditz\\rpositRDX.bmp");
    tab[10].rCOD1=SDL_LoadBMP("Characters\\Raditz\\rpositRDX1.bmp");
    tab[10].rCOD2=SDL_LoadBMP("Characters\\Raditz\\rpositRDX2.bmp");
    tab[10].rCOD22=SDL_LoadBMP("Characters\\Raditz\\rpositRDX2+.bmp");
    tab[10].rCODar=SDL_LoadBMP("Characters\\Raditz\\rpositRDXar.bmp");
    tab[10].rCODav=SDL_LoadBMP("Characters\\Raditz\\rpositRDXav.bmp");
    tab[10].rCODb=SDL_LoadBMP("Characters\\Raditz\\rpositRDXb.bmp");
    tab[10].rCODe=SDL_LoadBMP("Characters\\Raditz\\rpositRDXe.bmp");
    tab[10].image=SDL_LoadBMP("Characters\\Raditz\\photoraditz.bmp");
    tab[10].attaque=1;
    tab[10].defense=0;
    tab[10].vitesse=1;
    tab[10].resistance=140;
    tab[10].portee=100;
    tab[10].hauteur=43;
    tab[10].fatale=18;

    //SAÏBAÏMAN
    sprintf(tab[11].nom, "SAIBAIMAN");
    tab[11].COD=SDL_LoadBMP("Characters\\Saibaiman\\positSBM.bmp");
    tab[11].COD1=SDL_LoadBMP("Characters\\Saibaiman\\positSBM1.bmp");
    tab[11].COD2=SDL_LoadBMP("Characters\\Saibaiman\\positSBM2.bmp");
    tab[11].COD22=SDL_LoadBMP("Characters\\Saibaiman\\positSBM2+.bmp");
    tab[11].CODar=SDL_LoadBMP("Characters\\Saibaiman\\positSBMar.bmp");
    tab[11].CODav=SDL_LoadBMP("Characters\\Saibaiman\\positSBMav.bmp");
    tab[11].CODb=SDL_LoadBMP("Characters\\Saibaiman\\positSBMb.bmp");
    tab[11].CODe=SDL_LoadBMP("Characters\\Saibaiman\\positSBMe.bmp");
    tab[11].rCOD=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBM.bmp");
    tab[11].rCOD1=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBM1.bmp");
    tab[11].rCOD2=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBM2.bmp");
    tab[11].rCOD22=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBM2+.bmp");
    tab[11].rCODar=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBMar.bmp");
    tab[11].rCODav=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBMav.bmp");
    tab[11].rCODb=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBMb.bmp");
    tab[11].rCODe=SDL_LoadBMP("Characters\\Saibaiman\\rpositSBMe.bmp");
    tab[11].image=SDL_LoadBMP("Characters\\Saibaiman\\photosaibai.bmp");
    tab[11].attaque=1;
    tab[11].defense=0;
    tab[11].vitesse=1;
    tab[11].resistance=100;
    tab[11].portee=72;
    tab[11].hauteur=49;
    tab[11].fatale=15;

    //YAJIROBE
    sprintf(tab[12].nom, "YAJIROBE");
    tab[12].COD=SDL_LoadBMP("Characters\\Yajirobe\\positYAJav.bmp");
    tab[12].COD1=SDL_LoadBMP("Characters\\Yajirobe\\positYAJ1.bmp");
    tab[12].COD2=SDL_LoadBMP("Characters\\Yajirobe\\positYAJ1.bmp");
    tab[12].COD22=SDL_LoadBMP("Characters\\Yajirobe\\positYAJ1.bmp");
    tab[12].CODar=SDL_LoadBMP("Characters\\Yajirobe\\positYAJav.bmp");
    tab[12].CODav=SDL_LoadBMP("Characters\\Yajirobe\\positYAJav.bmp");
    tab[12].CODb=SDL_LoadBMP("Characters\\Yajirobe\\positYAJav.bmp");
    tab[12].CODe=SDL_LoadBMP("Characters\\Yajirobe\\positYAJav.bmp");
    tab[12].rCOD=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJav.bmp");
    tab[12].rCOD1=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJ1.bmp");
    tab[12].rCOD2=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJ1.bmp");
    tab[12].rCOD22=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJ1.bmp");
    tab[12].rCODar=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJav.bmp");
    tab[12].rCODav=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJav.bmp");
    tab[12].rCODb=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJv.bmp");
    tab[12].rCODe=SDL_LoadBMP("Characters\\Yajirobe\\rpositYAJv.bmp");
    tab[12].image=SDL_LoadBMP("Characters\\Yajirobe\\photoyajirobe.bmp");
    tab[12].attaque=0.5;
    tab[12].defense=0;
    tab[12].vitesse=1;
    tab[12].resistance=40;
    tab[12].portee=90;
    tab[12].hauteur=80;
    tab[12].fatale=6;

    //OZARU GOHAN
    sprintf(tab[13].nom, "OZARU GOHAN");
    tab[13].COD=IMG_Load("Characters\\Ozarugohan\\positOZR.gif");
    tab[13].COD1=IMG_Load("Characters\\Ozarugohan\\positOZR1.gif");
    tab[13].COD2=IMG_Load("Characters\\Ozarugohan\\positOZR2.gif");
    tab[13].COD22=IMG_Load("Characters\\Ozarugohan\\positOZR2+.gif");
    tab[13].CODar=IMG_Load("Characters\\Ozarugohan\\positOZRar.gif");
    tab[13].CODav=IMG_Load("Characters\\Ozarugohan\\positOZRav.gif");
    tab[13].CODb=IMG_Load("Characters\\Ozarugohan\\positOZRb.gif");
    tab[13].CODe=IMG_Load("Characters\\Ozarugohan\\positOZRe.gif");
    tab[13].rCOD=IMG_Load("Characters\\Ozarugohan\\rpositOZR.gif");
    tab[13].rCOD1=IMG_Load("Characters\\Ozarugohan\\rpositOZR1.gif");
    tab[13].rCOD2=IMG_Load("Characters\\Ozarugohan\\rpositOZR2.gif");
    tab[13].rCOD22=IMG_Load("Characters\\Ozarugohan\\rpositOZR2+.gif");
    tab[13].rCODar=IMG_Load("Characters\\Ozarugohan\\rpositOZRar.gif");
    tab[13].rCODav=IMG_Load("Characters\\Ozarugohan\\rpositOZRav.gif");
    tab[13].rCODb=IMG_Load("Characters\\Ozarugohan\\rpositOZRb.gif");
    tab[13].rCODe=IMG_Load("Characters\\Ozarugohan\\rpositOZRe.gif");
    tab[13].image=IMG_Load("Characters\\Ozarugohan\\photoozaru.bmp");
    tab[13].attaque=1;
    tab[13].defense=0;
    tab[13].vitesse=1;
    tab[13].resistance=200;
    tab[13].portee=270;
    tab[13].hauteur=50;
    tab[13].fatale=60;

    //OZARU VEGETA
    sprintf(tab[14].nom, "OZARU VEGETA");
    tab[14].COD=IMG_Load("Characters\\Ozaruvegeta\\positOZV.gif");
    tab[14].COD1=IMG_Load("Characters\\Ozaruvegeta\\positOZV1.gif");
    tab[14].COD2=IMG_Load("Characters\\Ozaruvegeta\\positOZV2.gif");
    tab[14].COD22=IMG_Load("Characters\\Ozaruvegeta\\positOZV2+.gif");
    tab[14].CODar=IMG_Load("Characters\\Ozaruvegeta\\positOZVar.gif");
    tab[14].CODav=IMG_Load("Characters\\Ozaruvegeta\\positOZVav.gif");
    tab[14].CODb=IMG_Load("Characters\\Ozaruvegeta\\positOZVb.gif");
    tab[14].CODe=IMG_Load("Characters\\Ozaruvegeta\\positOZVe.gif");
    tab[14].rCOD=IMG_Load("Characters\\Ozaruvegeta\\rpositOZV.gif");
    tab[14].rCOD1=IMG_Load("Characters\\Ozaruvegeta\\rpositOZV1.gif");
    tab[14].rCOD2=IMG_Load("Characters\\Ozaruvegeta\\rpositOZV2.gif");
    tab[14].rCOD22=IMG_Load("Characters\\Ozaruvegeta\\rpositOZV2+.gif");
    tab[14].rCODar=IMG_Load("Characters\\Ozaruvegeta\\rpositOZVar.gif");
    tab[14].rCODav=IMG_Load("Characters\\Ozaruvegeta\\rpositOZVav.gif");
    tab[14].rCODb=IMG_Load("Characters\\Ozaruvegeta\\rpositOZVb.gif");
    tab[14].rCODe=IMG_Load("Characters\\Ozaruvegeta\\rpositOZVe.gif");
    tab[14].image=IMG_Load("Characters\\Ozaruvegeta\\photoozaru.bmp");
    tab[14].attaque=2;
    tab[14].defense=2;
    tab[14].vitesse=1;
    tab[14].resistance=240;
    tab[14].portee=265;
    tab[14].hauteur=30;
    tab[14].fatale=80;

    //PUIPUI
    sprintf(tab[15].nom, "PUIPUI");
    tab[15].COD=IMG_Load("Characters\\Puipui\\positPUI.gif");
    tab[15].COD1=IMG_Load("Characters\\Puipui\\positPUI1.gif");
    tab[15].COD2=IMG_Load("Characters\\Puipui\\positPUI2.gif");
    tab[15].COD22=IMG_Load("Characters\\Puipui\\positPUI2+.gif");
    tab[15].CODar=IMG_Load("Characters\\Puipui\\positPUIar.gif");
    tab[15].CODav=IMG_Load("Characters\\Puipui\\positPUIav.gif");
    tab[15].CODb=IMG_Load("Characters\\Puipui\\positPUIb.gif");
    tab[15].CODe=IMG_Load("Characters\\Puipui\\positPUIe.gif");
    tab[15].rCOD=IMG_Load("Characters\\Puipui\\rpositPUI.gif");
    tab[15].rCOD1=IMG_Load("Characters\\Puipui\\rpositPUI1.gif");
    tab[15].rCOD2=IMG_Load("Characters\\Puipui\\rpositPUI2.gif");
    tab[15].rCOD22=IMG_Load("Characters\\Puipui\\rpositPUI2+.gif");
    tab[15].rCODar=IMG_Load("Characters\\Puipui\\rpositPUIar.gif");
    tab[15].rCODav=IMG_Load("Characters\\Puipui\\rpositPUIav.gif");
    tab[15].rCODb=IMG_Load("Characters\\Puipui\\rpositPUIb.gif");
    tab[15].rCODe=IMG_Load("Characters\\Puipui\\rpositPUIe.gif");
    tab[15].image=IMG_Load("Characters\\Puipui\\photoozaru.bmp");
    tab[15].attaque=2;
    tab[15].defense=2;
    tab[15].vitesse=1;
    tab[15].resistance=240;
    tab[15].portee=265;
    tab[15].hauteur=30;
    tab[15].fatale=80;

    //BOUBA
    sprintf(tab[16].nom, "BOUBA");
    tab[16].COD=SDL_LoadBMP("Characters\\Bouba\\positNEW.bmp");
    tab[16].COD1=SDL_LoadBMP("Characters\\Bouba\\positNEW1.bmp");
    tab[16].COD2=SDL_LoadBMP("Characters\\Bouba\\positNEW2.bmp");
    tab[16].COD22=SDL_LoadBMP("Characters\\Bouba\\positNEW2+.bmp");
    tab[16].CODar=SDL_LoadBMP("Characters\\Bouba\\positNEWar.bmp");
    tab[16].CODav=SDL_LoadBMP("Characters\\Bouba\\positNEWav.bmp");
    tab[16].CODb=SDL_LoadBMP("Characters\\Bouba\\positNEWb.bmp");
    tab[16].CODe=SDL_LoadBMP("Characters\\Bouba\\positNEWe.bmp");
    tab[16].rCOD=SDL_LoadBMP("Characters\\Bouba\\rpositNEW.bmp");
    tab[16].rCOD1=SDL_LoadBMP("Characters\\Bouba\\rpositNEW1.bmp");
    tab[16].rCOD2=SDL_LoadBMP("Characters\\Bouba\\rpositNEW2.bmp");
    tab[16].rCOD22=SDL_LoadBMP("Characters\\Bouba\\rpositNEW2+.bmp");
    tab[16].rCODar=SDL_LoadBMP("Characters\\Bouba\\rpositNEWar.bmp");
    tab[16].rCODav=SDL_LoadBMP("Characters\\Bouba\\rpositNEWav.bmp");
    tab[16].rCODb=SDL_LoadBMP("Characters\\Bouba\\rpositNEWb.bmp");
    tab[16].rCODe=SDL_LoadBMP("Characters\\Bouba\\rpositNEWe.bmp");
    tab[16].image=SDL_LoadBMP("Characters\\Bouba\\photobouba.bmp");
    tab[16].attaque=1;
    tab[16].defense=0;
    tab[16].vitesse=1;
    tab[16].resistance=110;
    tab[16].portee=82;
    tab[16].hauteur=40;
    tab[16].fatale=15;

    //ELVIS
    sprintf(tab[17].nom, "ELVIS");
    tab[17].COD=SDL_LoadBMP("Characters\\Elvis\\positELV.bmp");
    tab[17].COD1=SDL_LoadBMP("Characters\\Elvis\\positELV1.bmp");
    tab[17].COD2=SDL_LoadBMP("Characters\\Elvis\\positELV2.bmp");
    tab[17].COD22=SDL_LoadBMP("Characters\\Elvis\\positELV2+.bmp");
    tab[17].CODar=SDL_LoadBMP("Characters\\Elvis\\positELVar.bmp");
    tab[17].CODav=SDL_LoadBMP("Characters\\Elvis\\positELVav.bmp");
    tab[17].CODb=SDL_LoadBMP("Characters\\Elvis\\positELVb.bmp");
    tab[17].CODe=SDL_LoadBMP("Characters\\Elvis\\positELVe.bmp");
    tab[17].rCOD=SDL_LoadBMP("Characters\\Elvis\\rpositELV.bmp");
    tab[17].rCOD1=SDL_LoadBMP("Characters\\Elvis\\rpositELV1.bmp");
    tab[17].rCOD2=SDL_LoadBMP("Characters\\Elvis\\rpositELV2.bmp");
    tab[17].rCOD22=SDL_LoadBMP("Characters\\Elvis\\rpositELV2+.bmp");
    tab[17].rCODar=SDL_LoadBMP("Characters\\Elvis\\rpositELVar.bmp");
    tab[17].rCODav=SDL_LoadBMP("Characters\\Elvis\\rpositELVav.bmp");
    tab[17].rCODb=SDL_LoadBMP("Characters\\Elvis\\rpositELVb.bmp");
    tab[17].rCODe=SDL_LoadBMP("Characters\\Elvis\\rpositELVe.bmp");
    tab[17].image=SDL_LoadBMP("Characters\\Elvis\\photoelvis.bmp");
    tab[17].attaque=1;
    tab[17].defense=0;
    tab[17].vitesse=1;
    tab[17].resistance=110;
    tab[17].portee=80;
    tab[17].hauteur=40;
    tab[17].fatale=15;

    //KIWI
    sprintf(tab[18].nom, "KIWI");
    tab[18].COD=SDL_LoadBMP("Characters\\Kiwi\\positKIW.bmp");
    tab[18].COD1=SDL_LoadBMP("Characters\\Kiwi\\positKIW1.bmp");
    tab[18].COD2=SDL_LoadBMP("Characters\\Kiwi\\positKIW2.bmp");
    tab[18].COD22=SDL_LoadBMP("Characters\\Kiwi\\positKIW2+.bmp");
    tab[18].CODar=SDL_LoadBMP("Characters\\Kiwi\\positKIWar.bmp");
    tab[18].CODav=SDL_LoadBMP("Characters\\Kiwi\\positKIWav.bmp");
    tab[18].CODb=SDL_LoadBMP("Characters\\Kiwi\\positKIWb.bmp");
    tab[18].CODe=SDL_LoadBMP("Characters\\Kiwi\\positKIWe.bmp");
    tab[18].rCOD=SDL_LoadBMP("Characters\\Kiwi\\rpositKIW.bmp");
    tab[18].rCOD1=SDL_LoadBMP("Characters\\Kiwi\\rpositKIW1.bmp");
    tab[18].rCOD2=SDL_LoadBMP("Characters\\Kiwi\\rpositKIW2.bmp");
    tab[18].rCOD22=SDL_LoadBMP("Characters\\Kiwi\\rpositKIW2+.bmp");
    tab[18].rCODar=SDL_LoadBMP("Characters\\Kiwi\\rpositKIWar.bmp");
    tab[18].rCODav=SDL_LoadBMP("Characters\\Kiwi\\rpositKIWav.bmp");
    tab[18].rCODb=SDL_LoadBMP("Characters\\Kiwi\\rpositKIWb.bmp");
    tab[18].rCODe=SDL_LoadBMP("Characters\\Kiwi\\rpositKIWe.bmp");
    tab[18].image=SDL_LoadBMP("Characters\\Kiwi\\photokiwi.bmp");
    tab[18].attaque=2;
    tab[18].defense=2;
    tab[18].vitesse=2;
    tab[18].resistance=100;
    tab[18].portee=80;
    tab[18].hauteur=40;
    tab[18].fatale=30;

    //DODORIA
    sprintf(tab[19].nom, "DODORIA");
    tab[19].COD=SDL_LoadBMP("Characters\\Dodoria\\positDOD.bmp");
    tab[19].COD1=SDL_LoadBMP("Characters\\Dodoria\\positDOD1.bmp");
    tab[19].COD2=SDL_LoadBMP("Characters\\Dodoria\\positDOD2.bmp");
    tab[19].COD22=SDL_LoadBMP("Characters\\Dodoria\\positDOD2+.bmp");
    tab[19].CODar=SDL_LoadBMP("Characters\\Dodoria\\positDODar.bmp");
    tab[19].CODav=SDL_LoadBMP("Characters\\Dodoria\\positDODav.bmp");
    tab[19].CODb=SDL_LoadBMP("Characters\\Dodoria\\positDODb.bmp");
    tab[19].CODe=SDL_LoadBMP("Characters\\Dodoria\\positDODe.bmp");
    tab[19].rCOD=SDL_LoadBMP("Characters\\Dodoria\\rpositDOD.bmp");
    tab[19].rCOD1=SDL_LoadBMP("Characters\\Dodoria\\rpositDOD1.bmp");
    tab[19].rCOD2=SDL_LoadBMP("Characters\\Dodoria\\rpositDOD2.bmp");
    tab[19].rCOD22=SDL_LoadBMP("Characters\\Dodoria\\rpositDOD2+.bmp");
    tab[19].rCODar=SDL_LoadBMP("Characters\\Dodoria\\rpositDODar.bmp");
    tab[19].rCODav=SDL_LoadBMP("Characters\\Dodoria\\rpositDODav.bmp");
    tab[19].rCODb=SDL_LoadBMP("Characters\\Dodoria\\rpositDODb.bmp");
    tab[19].rCODe=SDL_LoadBMP("Characters\\Dodoria\\rpositDODe.bmp");
    tab[19].image=SDL_LoadBMP("Characters\\Dodoria\\photododoria.bmp");
    tab[19].attaque=2;
    tab[19].defense=2;
    tab[19].vitesse=2;
    tab[19].resistance=120;
    tab[19].portee=90;
    tab[19].hauteur=40;
    tab[19].fatale=36;

    //FREEZER
    sprintf(tab[20].nom, "FREEZER");
    tab[20].COD=SDL_LoadBMP("Characters\\Freezer\\positPOP.bmp");
    tab[20].COD1=SDL_LoadBMP("Characters\\Freezer\\positPOP1.bmp");
    tab[20].COD2=SDL_LoadBMP("Characters\\Freezer\\positPOP2.bmp");
    tab[20].COD22=SDL_LoadBMP("Characters\\Freezer\\positPOP2+.bmp");
    tab[20].CODar=SDL_LoadBMP("Characters\\Freezer\\positPOPar.bmp");
    tab[20].CODav=SDL_LoadBMP("Characters\\Freezer\\positPOPav.bmp");
    tab[20].CODb=SDL_LoadBMP("Characters\\Freezer\\positPOPb.bmp");
    tab[20].CODe=SDL_LoadBMP("Characters\\Freezer\\positPOPe.bmp");
    tab[20].rCOD=SDL_LoadBMP("Characters\\Freezer\\rpositPOP.bmp");
    tab[20].rCOD1=SDL_LoadBMP("Characters\\Freezer\\rpositPOP1.bmp");
    tab[20].rCOD2=SDL_LoadBMP("Characters\\Freezer\\rpositPOP2.bmp");
    tab[20].rCOD22=SDL_LoadBMP("Characters\\Freezer\\rpositPOP2+.bmp");
    tab[20].rCODar=SDL_LoadBMP("Characters\\Freezer\\rpositPOPar.bmp");
    tab[20].rCODav=SDL_LoadBMP("Characters\\Freezer\\rpositPOPav.bmp");
    tab[20].rCODb=SDL_LoadBMP("Characters\\Freezer\\rpositPOPb.bmp");
    tab[20].rCODe=SDL_LoadBMP("Characters\\Freezer\\rpositPOPe.bmp");
    tab[20].image=SDL_LoadBMP("Characters\\Freezer\\photofreezer1.bmp");
    tab[20].attaque=3;
    tab[20].defense=3;
    tab[20].vitesse=3;
    tab[20].resistance=140;
    tab[20].portee=80;
    tab[20].hauteur=30;
    tab[20].fatale=55;

    //ZABON
    sprintf(tab[21].nom, "ZABON");
    tab[21].COD=SDL_LoadBMP("Characters\\Zabon\\positZAB.bmp");
    tab[21].COD1=SDL_LoadBMP("Characters\\Zabon\\positZAB1.bmp");
    tab[21].COD2=SDL_LoadBMP("Characters\\Zabon\\positZAB2.bmp");
    tab[21].COD22=SDL_LoadBMP("Characters\\Zabon\\positZAB2+.bmp");
    tab[21].CODar=SDL_LoadBMP("Characters\\Zabon\\positZABar.bmp");
    tab[21].CODav=SDL_LoadBMP("Characters\\Zabon\\positZABav.bmp");
    tab[21].CODb=SDL_LoadBMP("Characters\\Zabon\\positZABb.bmp");
    tab[21].CODe=SDL_LoadBMP("Characters\\Zabon\\positZABe.bmp");
    tab[21].rCOD=SDL_LoadBMP("Characters\\Zabon\\rpositZAB.bmp");
    tab[21].rCOD1=SDL_LoadBMP("Characters\\Zabon\\rpositZAB1.bmp");
    tab[21].rCOD2=SDL_LoadBMP("Characters\\Zabon\\rpositZAB2.bmp");
    tab[21].rCOD22=SDL_LoadBMP("Characters\\Zabon\\rpositZAB2+.bmp");
    tab[21].rCODar=SDL_LoadBMP("Characters\\Zabon\\rpositZABar.bmp");
    tab[21].rCODav=SDL_LoadBMP("Characters\\Zabon\\rpositZABav.bmp");
    tab[21].rCODb=SDL_LoadBMP("Characters\\Zabon\\rpositZABb.bmp");
    tab[21].rCODe=SDL_LoadBMP("Characters\\Zabon\\rpositZABe.bmp");
    tab[21].image=SDL_LoadBMP("Characters\\Zabon\\photozabon.bmp");
    tab[21].attaque=2;
    tab[21].defense=2;
    tab[21].vitesse=2;
    tab[21].resistance=120;
    tab[21].portee=92;
    tab[21].hauteur=40;
    tab[21].fatale=36;

    //ZABON MECHANT
    sprintf(tab[22].nom, "ZABON");
    tab[22].COD=SDL_LoadBMP("Characters\\ZabonM\\positZBN.bmp");
    tab[22].COD1=SDL_LoadBMP("Characters\\ZabonM\\positZBN1.bmp");
    tab[22].COD2=SDL_LoadBMP("Characters\\ZabonM\\positZBN2.bmp");
    tab[22].COD22=SDL_LoadBMP("Characters\\ZabonM\\positZBN2+.bmp");
    tab[22].CODar=SDL_LoadBMP("Characters\\ZabonM\\positZBNar.bmp");
    tab[22].CODav=SDL_LoadBMP("Characters\\ZabonM\\positZBNav.bmp");
    tab[22].CODb=SDL_LoadBMP("Characters\\ZabonM\\positZBNb.bmp");
    tab[22].CODe=SDL_LoadBMP("Characters\\ZabonM\\positZBNe.bmp");
    tab[22].rCOD=SDL_LoadBMP("Characters\\ZabonM\\rpositZBN.bmp");
    tab[22].rCOD1=SDL_LoadBMP("Characters\\ZabonM\\rpositZBN1.bmp");
    tab[22].rCOD2=SDL_LoadBMP("Characters\\ZabonM\\rpositZBN2.bmp");
    tab[22].rCOD22=SDL_LoadBMP("Characters\\ZabonM\\rpositZBN2+.bmp");
    tab[22].rCODar=SDL_LoadBMP("Characters\\ZabonM\\rpositZBNar.bmp");
    tab[22].rCODav=SDL_LoadBMP("Characters\\ZabonM\\rpositZBNav.bmp");
    tab[22].rCODb=SDL_LoadBMP("Characters\\ZabonM\\rpositZBNb.bmp");
    tab[22].rCODe=SDL_LoadBMP("Characters\\ZabonM\\rpositZBNe.bmp");
    tab[22].image=SDL_LoadBMP("Characters\\ZabonM\\photozabonplus.bmp");
    tab[22].attaque=2;
    tab[22].defense=2;
    tab[22].vitesse=2;
    tab[22].resistance=160;
    tab[22].portee=112;
    tab[22].hauteur=40;
    tab[22].fatale=45;

    //GULDO
    sprintf(tab[23].nom, "GULDO");
    tab[23].COD=SDL_LoadBMP("Characters\\Guldo\\positGUL.bmp");
    tab[23].COD1=SDL_LoadBMP("Characters\\Guldo\\positGUL1.bmp");
    tab[23].COD2=SDL_LoadBMP("Characters\\Guldo\\positGUL2.bmp");
    tab[23].COD22=SDL_LoadBMP("Characters\\Guldo\\positGUL2+.bmp");
    tab[23].CODar=SDL_LoadBMP("Characters\\Guldo\\positGULar.bmp");
    tab[23].CODav=SDL_LoadBMP("Characters\\Guldo\\positGULav.bmp");
    tab[23].CODb=SDL_LoadBMP("Characters\\Guldo\\positGULb.bmp");
    tab[23].CODe=SDL_LoadBMP("Characters\\Guldo\\positGULe.bmp");
    tab[23].rCOD=SDL_LoadBMP("Characters\\Guldo\\rpositGUL.bmp");
    tab[23].rCOD1=SDL_LoadBMP("Characters\\Guldo\\rpositGUL1.bmp");
    tab[23].rCOD2=SDL_LoadBMP("Characters\\Guldo\\rpositGUL2.bmp");
    tab[23].rCOD22=SDL_LoadBMP("Characters\\Guldo\\rpositGUL2+.bmp");
    tab[23].rCODar=SDL_LoadBMP("Characters\\Guldo\\rpositGULar.bmp");
    tab[23].rCODav=SDL_LoadBMP("Characters\\Guldo\\rpositGULav.bmp");
    tab[23].rCODb=SDL_LoadBMP("Characters\\Guldo\\rpositGULb.bmp");
    tab[23].rCODe=SDL_LoadBMP("Characters\\Guldo\\rpositGULe.bmp");
    tab[23].image=SDL_LoadBMP("Characters\\Guldo\\photoguldo.bmp");
    tab[23].attaque=1;
    tab[23].defense=1;
    tab[23].vitesse=1;
    tab[23].resistance=100;
    tab[23].portee=72;
    tab[23].hauteur=50;
    tab[23].fatale=25;

    //JEECE
    sprintf(tab[24].nom, "JEECE");
    tab[24].COD=SDL_LoadBMP("Characters\\Jeece\\positJIS.bmp");
    tab[24].COD1=SDL_LoadBMP("Characters\\Jeece\\positJIS1.bmp");
    tab[24].COD2=SDL_LoadBMP("Characters\\Jeece\\positJIS2.bmp");
    tab[24].COD22=SDL_LoadBMP("Characters\\Jeece\\positJIS2+.bmp");
    tab[24].CODar=SDL_LoadBMP("Characters\\Jeece\\positJISar.bmp");
    tab[24].CODav=SDL_LoadBMP("Characters\\Jeece\\positJISav.bmp");
    tab[24].CODb=SDL_LoadBMP("Characters\\Jeece\\positJISb.bmp");
    tab[24].CODe=SDL_LoadBMP("Characters\\Jeece\\positJISe.bmp");
    tab[24].rCOD=SDL_LoadBMP("Characters\\Jeece\\rpositJIS.bmp");
    tab[24].rCOD1=SDL_LoadBMP("Characters\\Jeece\\rpositJIS1.bmp");
    tab[24].rCOD2=SDL_LoadBMP("Characters\\Jeece\\rpositJIS2.bmp");
    tab[24].rCOD22=SDL_LoadBMP("Characters\\Jeece\\rpositJIS2+.bmp");
    tab[24].rCODar=SDL_LoadBMP("Characters\\Jeece\\rpositJISar.bmp");
    tab[24].rCODav=SDL_LoadBMP("Characters\\Jeece\\rpositJISav.bmp");
    tab[24].rCODb=SDL_LoadBMP("Characters\\Jeece\\rpositJISb.bmp");
    tab[24].rCODe=SDL_LoadBMP("Characters\\Jeece\\rpositJISe.bmp");
    tab[24].image=SDL_LoadBMP("Characters\\Jeece\\photojiisu.bmp");
    tab[24].attaque=2;
    tab[24].defense=2;
    tab[24].vitesse=2;
    tab[24].resistance=110;
    tab[24].portee=82;
    tab[24].hauteur=50;
    tab[24].fatale=38;

    //GINYU
    sprintf(tab[25].nom, "GINYU");
    tab[25].COD=SDL_LoadBMP("Characters\\Ginyu\\positGIN.bmp");
    tab[25].COD1=SDL_LoadBMP("Characters\\Ginyu\\positGIN1.bmp");
    tab[25].COD2=SDL_LoadBMP("Characters\\Ginyu\\positGIN2.bmp");
    tab[25].COD22=SDL_LoadBMP("Characters\\Ginyu\\positGIN2+.bmp");
    tab[25].CODar=SDL_LoadBMP("Characters\\Ginyu\\positGINar.bmp");
    tab[25].CODav=SDL_LoadBMP("Characters\\Ginyu\\positGINav.bmp");
    tab[25].CODb=SDL_LoadBMP("Characters\\Ginyu\\positGINb.bmp");
    tab[25].CODe=SDL_LoadBMP("Characters\\Ginyu\\positGINe.bmp");
    tab[25].rCOD=SDL_LoadBMP("Characters\\Ginyu\\rpositGIN.bmp");
    tab[25].rCOD1=SDL_LoadBMP("Characters\\Ginyu\\rpositGIN1.bmp");
    tab[25].rCOD2=SDL_LoadBMP("Characters\\Ginyu\\rpositGIN2.bmp");
    tab[25].rCOD22=SDL_LoadBMP("Characters\\Ginyu\\rpositGIN2+.bmp");
    tab[25].rCODar=SDL_LoadBMP("Characters\\Ginyu\\rpositGINar.bmp");
    tab[25].rCODav=SDL_LoadBMP("Characters\\Ginyu\\rpositGINav.bmp");
    tab[25].rCODb=SDL_LoadBMP("Characters\\Ginyu\\rpositGINb.bmp");
    tab[25].rCODe=SDL_LoadBMP("Characters\\Ginyu\\rpositGINe.bmp");
    tab[25].image=SDL_LoadBMP("Characters\\Ginyu\\photoginyu.bmp");
    tab[25].attaque=3;
    tab[25].defense=3;
    tab[25].vitesse=2;
    tab[25].resistance=150;
    tab[25].portee=102;
    tab[25].hauteur=30;
    tab[25].fatale=60;

    //BURTER
    sprintf(tab[26].nom, "BURTER");
    tab[26].COD=SDL_LoadBMP("Characters\\Burter\\positBAT.bmp");
    tab[26].COD1=SDL_LoadBMP("Characters\\Burter\\positBAT1.bmp");
    tab[26].COD2=SDL_LoadBMP("Characters\\Burter\\positBAT2.bmp");
    tab[26].COD22=SDL_LoadBMP("Characters\\Burter\\positBAT2+.bmp");
    tab[26].CODar=SDL_LoadBMP("Characters\\Burter\\positBATar.bmp");
    tab[26].CODav=SDL_LoadBMP("Characters\\Burter\\positBATav.bmp");
    tab[26].CODb=SDL_LoadBMP("Characters\\Burter\\positBATb.bmp");
    tab[26].CODe=SDL_LoadBMP("Characters\\Burter\\positBATe.bmp");
    tab[26].rCOD=SDL_LoadBMP("Characters\\Burter\\rpositBAT.bmp");
    tab[26].rCOD1=SDL_LoadBMP("Characters\\Burter\\rpositBAT1.bmp");
    tab[26].rCOD2=SDL_LoadBMP("Characters\\Burter\\rpositBAT2.bmp");
    tab[26].rCOD22=SDL_LoadBMP("Characters\\Burter\\rpositBAT2+.bmp");
    tab[26].rCODar=SDL_LoadBMP("Characters\\Burter\\rpositBATar.bmp");
    tab[26].rCODav=SDL_LoadBMP("Characters\\Burter\\rpositBATav.bmp");
    tab[26].rCODb=SDL_LoadBMP("Characters\\Burter\\rpositBATb.bmp");
    tab[26].rCODe=SDL_LoadBMP("Characters\\Burter\\rpositBATe.bmp");
    tab[26].image=SDL_LoadBMP("Characters\\Burter\\photobaata.bmp");
    tab[26].attaque=2;
    tab[26].defense=2;
    tab[26].vitesse=3;
    tab[26].resistance=100;
    tab[26].portee=102;
    tab[26].hauteur=30;
    tab[26].fatale=26;

    //RECOOME
    sprintf(tab[27].nom, "RECOOME");
    tab[27].COD=SDL_LoadBMP("Characters\\Recoome\\positRCM.bmp");
    tab[27].COD1=SDL_LoadBMP("Characters\\Recoome\\positRCM1.bmp");
    tab[27].COD2=SDL_LoadBMP("Characters\\Recoome\\positRCM2.bmp");
    tab[27].COD22=SDL_LoadBMP("Characters\\Recoome\\positRCM2+.bmp");
    tab[27].CODar=SDL_LoadBMP("Characters\\Recoome\\positRCMar.bmp");
    tab[27].CODav=SDL_LoadBMP("Characters\\Recoome\\positRCMav.bmp");
    tab[27].CODb=SDL_LoadBMP("Characters\\Recoome\\positRCMb.bmp");
    tab[27].CODe=SDL_LoadBMP("Characters\\Recoome\\positRCMe.bmp");
    tab[27].rCOD=SDL_LoadBMP("Characters\\Recoome\\rpositRCM.bmp");
    tab[27].rCOD1=SDL_LoadBMP("Characters\\Recoome\\rpositRCM1.bmp");
    tab[27].rCOD2=SDL_LoadBMP("Characters\\Recoome\\rpositRCM2.bmp");
    tab[27].rCOD22=SDL_LoadBMP("Characters\\Recoome\\rpositRCM2+.bmp");
    tab[27].rCODar=SDL_LoadBMP("Characters\\Recoome\\rpositRCMar.bmp");
    tab[27].rCODav=SDL_LoadBMP("Characters\\Recoome\\rpositRCMav.bmp");
    tab[27].rCODb=SDL_LoadBMP("Characters\\Recoome\\rpositRCMb.bmp");
    tab[27].rCODe=SDL_LoadBMP("Characters\\Recoome\\rpositRCMe.bmp");
    tab[27].image=SDL_LoadBMP("Characters\\Recoome\\photorecoome.bmp");
    tab[27].attaque=2;
    tab[27].defense=2;
    tab[27].vitesse=2;
    tab[27].resistance=160;
    tab[27].portee=108;
    tab[27].hauteur=30;
    tab[27].fatale=55;

    //CELL
    sprintf(tab[28].nom, "CELL");
    tab[28].COD=SDL_LoadBMP("Characters\\Cell\\positCEL.bmp");
    tab[28].COD1=SDL_LoadBMP("Characters\\Cell\\positCEL1.bmp");
    tab[28].COD2=SDL_LoadBMP("Characters\\Cell\\positCEL2.bmp");
    tab[28].COD22=SDL_LoadBMP("Characters\\Cell\\positCEL2+.bmp");
    tab[28].CODar=SDL_LoadBMP("Characters\\Cell\\positCELar.bmp");
    tab[28].CODav=SDL_LoadBMP("Characters\\Cell\\positCELav.bmp");
    tab[28].CODb=SDL_LoadBMP("Characters\\Cell\\positCELb.bmp");
    tab[28].CODe=SDL_LoadBMP("Characters\\Cell\\positCELe.bmp");
    tab[28].rCOD=SDL_LoadBMP("Characters\\Cell\\rpositCEL.bmp");
    tab[28].rCOD1=SDL_LoadBMP("Characters\\Cell\\rpositCEL1.bmp");
    tab[28].rCOD2=SDL_LoadBMP("Characters\\Cell\\rpositCEL2.bmp");
    tab[28].rCOD22=SDL_LoadBMP("Characters\\Cell\\rpositCEL2+.bmp");
    tab[28].rCODar=SDL_LoadBMP("Characters\\Cell\\rpositCELar.bmp");
    tab[28].rCODav=SDL_LoadBMP("Characters\\Cell\\rpositCELav.bmp");
    tab[28].rCODb=SDL_LoadBMP("Characters\\Cell\\rpositCELb.bmp");
    tab[28].rCODe=SDL_LoadBMP("Characters\\Cell\\rpositCELe.bmp");
    tab[28].image=SDL_LoadBMP("Characters\\Cell\\photocell.bmp");
    tab[28].attaque=5;
    tab[28].defense=5;
    tab[28].vitesse=6;
    tab[28].resistance=300;
    tab[28].portee=110;
    tab[28].hauteur=14;
    tab[28].fatale=85;

    //CELL
    sprintf(tab[29].nom, "BROLY");
    tab[29].COD=SDL_LoadBMP("Characters\\Broly\\positBRL.bmp");
    tab[29].COD1=SDL_LoadBMP("Characters\\Broly\\positBRL1.bmp");
    tab[29].COD2=SDL_LoadBMP("Characters\\Broly\\positBRL2.bmp");
    tab[29].COD22=SDL_LoadBMP("Characters\\Broly\\positBRL2+.bmp");
    tab[29].CODar=SDL_LoadBMP("Characters\\Broly\\positBRLar.bmp");
    tab[29].CODav=SDL_LoadBMP("Characters\\Broly\\positBRLav.bmp");
    tab[29].CODb=SDL_LoadBMP("Characters\\Broly\\positBRLb.bmp");
    tab[29].CODe=SDL_LoadBMP("Characters\\Broly\\positBRLe.bmp");
    tab[29].rCOD=SDL_LoadBMP("Characters\\Broly\\rpositBRL.bmp");
    tab[29].rCOD1=SDL_LoadBMP("Characters\\Broly\\rpositBRL1.bmp");
    tab[29].rCOD2=SDL_LoadBMP("Characters\\Broly\\rpositBRL2.bmp");
    tab[29].rCOD22=SDL_LoadBMP("Characters\\Broly\\rpositBRL2+.bmp");
    tab[29].rCODar=SDL_LoadBMP("Characters\\Broly\\rpositBRLar.bmp");
    tab[29].rCODav=SDL_LoadBMP("Characters\\Broly\\rpositBRLav.bmp");
    tab[29].rCODb=SDL_LoadBMP("Characters\\Broly\\rpositBRLb.bmp");
    tab[29].rCODe=SDL_LoadBMP("Characters\\Broly\\rpositBRLe.bmp");
    tab[29].image=SDL_LoadBMP("Characters\\Broly\\photobroly.bmp");
    tab[29].attaque=5;
    tab[29].defense=5;
    tab[29].vitesse=5;
    tab[29].resistance=220;
    tab[29].portee=110;
    tab[29].hauteur=19;
    tab[29].fatale=97;

    //FREEZER 1
    sprintf(tab[30].nom, "FREEZER");
    tab[30].COD=SDL_LoadBMP("Characters\\Freezer1\\positBOS.bmp");
    tab[30].COD1=SDL_LoadBMP("Characters\\Freezer1\\positBOS1.bmp");
    tab[30].COD2=SDL_LoadBMP("Characters\\Freezer1\\positBOS2.bmp");
    tab[30].COD22=SDL_LoadBMP("Characters\\Freezer1\\positBOS2+.bmp");
    tab[30].CODar=SDL_LoadBMP("Characters\\Freezer1\\positBOSar.bmp");
    tab[30].CODav=SDL_LoadBMP("Characters\\Freezer1\\positBOSav.bmp");
    tab[30].CODb=SDL_LoadBMP("Characters\\Freezer1\\positBOSb.bmp");
    tab[30].CODe=SDL_LoadBMP("Characters\\Freezer1\\positBOSe.bmp");
    tab[30].rCOD=SDL_LoadBMP("Characters\\Freezer1\\rpositBOS.bmp");
    tab[30].rCOD1=SDL_LoadBMP("Characters\\Freezer1\\rpositBOS1.bmp");
    tab[30].rCOD2=SDL_LoadBMP("Characters\\Freezer1\\rpositBOS2.bmp");
    tab[30].rCOD22=SDL_LoadBMP("Characters\\Freezer1\\rpositBOS2+.bmp");
    tab[30].rCODar=SDL_LoadBMP("Characters\\Freezer1\\rpositBOSar.bmp");
    tab[30].rCODav=SDL_LoadBMP("Characters\\Freezer1\\rpositBOSav.bmp");
    tab[30].rCODb=SDL_LoadBMP("Characters\\Freezer1\\rpositBOSb.bmp");
    tab[30].rCODe=SDL_LoadBMP("Characters\\Freezer1\\rpositBOSe.bmp");
    tab[30].image=SDL_LoadBMP("Characters\\Freezer1\\photofreezer2.bmp");
    tab[30].attaque=3;
    tab[30].defense=3;
    tab[30].vitesse=3;
    tab[30].resistance=160;
    tab[30].portee=122;
    tab[30].hauteur=20;
    tab[30].fatale=60;

    //FREEZER 2
    sprintf(tab[31].nom, "FREEZER");
    tab[31].COD=SDL_LoadBMP("Characters\\Freezer2\\positKOS.bmp");
    tab[31].COD1=SDL_LoadBMP("Characters\\Freezer2\\positKOS1.bmp");
    tab[31].COD2=SDL_LoadBMP("Characters\\Freezer2\\positKOS2.bmp");
    tab[31].COD22=SDL_LoadBMP("Characters\\Freezer2\\positKOS2+.bmp");
    tab[31].CODar=SDL_LoadBMP("Characters\\Freezer2\\positKOSar.bmp");
    tab[31].CODav=SDL_LoadBMP("Characters\\Freezer2\\positKOSav.bmp");
    tab[31].CODb=SDL_LoadBMP("Characters\\Freezer2\\positKOSb.bmp");
    tab[31].CODe=SDL_LoadBMP("Characters\\Freezer2\\positKOSe.bmp");
    tab[31].rCOD=SDL_LoadBMP("Characters\\Freezer2\\rpositKOS.bmp");
    tab[31].rCOD1=SDL_LoadBMP("Characters\\Freezer2\\rpositKOS1.bmp");
    tab[31].rCOD2=SDL_LoadBMP("Characters\\Freezer2\\rpositKOS2.bmp");
    tab[31].rCOD22=SDL_LoadBMP("Characters\\Freezer2\\rpositKOS2+.bmp");
    tab[31].rCODar=SDL_LoadBMP("Characters\\Freezer2\\rpositKOSar.bmp");
    tab[31].rCODav=SDL_LoadBMP("Characters\\Freezer2\\rpositKOSav.bmp");
    tab[31].rCODb=SDL_LoadBMP("Characters\\Freezer2\\rpositKOSb.bmp");
    tab[31].rCODe=SDL_LoadBMP("Characters\\Freezer2\\rpositKOSe.bmp");
    tab[31].image=SDL_LoadBMP("Characters\\Freezer2\\photofreezer3.bmp");
    tab[31].attaque=3;
    tab[31].defense=4;
    tab[31].vitesse=3;
    tab[31].resistance=180;
    tab[31].portee=122;
    tab[31].hauteur=20;
    tab[31].fatale=65;

    //FREEZER 2
    sprintf(tab[32].nom, "FREEZER");
    tab[32].COD=SDL_LoadBMP("Characters\\Freezer3\\positFRZ.bmp");
    tab[32].COD1=SDL_LoadBMP("Characters\\Freezer3\\positFRZ1.bmp");
    tab[32].COD2=SDL_LoadBMP("Characters\\Freezer3\\positFRZ2.bmp");
    tab[32].COD22=SDL_LoadBMP("Characters\\Freezer3\\positFRZ2+.bmp");
    tab[32].CODar=SDL_LoadBMP("Characters\\Freezer3\\positFRZar.bmp");
    tab[32].CODav=SDL_LoadBMP("Characters\\Freezer3\\positFRZav.bmp");
    tab[32].CODb=SDL_LoadBMP("Characters\\Freezer3\\positFRZb.bmp");
    tab[32].CODe=SDL_LoadBMP("Characters\\Freezer3\\positFRZe.bmp");
    tab[32].rCOD=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZ.bmp");
    tab[32].rCOD1=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZ1.bmp");
    tab[32].rCOD2=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZ2.bmp");
    tab[32].rCOD22=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZ2+.bmp");
    tab[32].rCODar=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZar.bmp");
    tab[32].rCODav=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZav.bmp");
    tab[32].rCODb=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZb.bmp");
    tab[32].rCODe=SDL_LoadBMP("Characters\\Freezer3\\rpositFRZe.bmp");
    tab[32].image=SDL_LoadBMP("Characters\\Freezer3\\photofreezer.bmp");
    tab[32].attaque=4;
    tab[32].defense=4;
    tab[32].vitesse=4;
    tab[32].resistance=200;
    tab[32].portee=90;
    tab[32].hauteur=8;
    tab[32].fatale=70;

    //FREEZER M
    sprintf(tab[33].nom, "FREEZER");
    tab[33].COD=SDL_LoadBMP("Characters\\FreezerM\\positFRE.bmp");
    tab[33].COD1=SDL_LoadBMP("Characters\\FreezerM\\positFRE1.bmp");
    tab[33].COD2=SDL_LoadBMP("Characters\\FreezerM\\positFRE2.bmp");
    tab[33].COD22=SDL_LoadBMP("Characters\\FreezerM\\positFRE2+.bmp");
    tab[33].CODar=SDL_LoadBMP("Characters\\FreezerM\\positFREar.bmp");
    tab[33].CODav=SDL_LoadBMP("Characters\\FreezerM\\positFREav.bmp");
    tab[33].CODb=SDL_LoadBMP("Characters\\FreezerM\\positFREb.bmp");
    tab[33].CODe=SDL_LoadBMP("Characters\\FreezerM\\positFREe.bmp");
    tab[33].rCOD=SDL_LoadBMP("Characters\\FreezerM\\rpositFRE.bmp");
    tab[33].rCOD1=SDL_LoadBMP("Characters\\FreezerM\\rpositFRE1.bmp");
    tab[33].rCOD2=SDL_LoadBMP("Characters\\FreezerM\\rpositFRE2.bmp");
    tab[33].rCOD22=SDL_LoadBMP("Characters\\FreezerM\\rpositFRE2+.bmp");
    tab[33].rCODar=SDL_LoadBMP("Characters\\FreezerM\\rpositFREar.bmp");
    tab[33].rCODav=SDL_LoadBMP("Characters\\FreezerM\\rpositFREav.bmp");
    tab[33].rCODb=SDL_LoadBMP("Characters\\FreezerM\\rpositFREb.bmp");
    tab[33].rCODe=SDL_LoadBMP("Characters\\FreezerM\\rpositFREe.bmp");
    tab[33].image=SDL_LoadBMP("Characters\\FreezerM\\photofreezer.bmp");
    tab[33].attaque=5;
    tab[33].defense=4;
    tab[33].vitesse=4;
    tab[33].resistance=200;
    tab[33].portee=101;
    tab[33].hauteur=8;
    tab[33].fatale=70;

    for(i=0; i<nbpers; i++)
    {
        tab[i].vitesse*=3;
    }
}
void Chargement_environnement(SDL_Surface *screen)
{
    SDL_Surface *fond=NULL, *barre=NULL;
    SDL_Rect pfond, pbarre;
    pfond.x=0;
    pfond.y=0;
    pbarre.x=100;
    pbarre.y=400;
    int tempsactuel=0, tempsprecedent=0;

    //Gérons le son
    FMOD_SYSTEM *systeme;
    FMOD_System_Create(&systeme);
    FMOD_System_Init(systeme, 2, FMOD_INIT_NORMAL, NULL);

    FMOD_SOUND *song = NULL;
    FMOD_CHANNEL *canal = NULL;
    FMOD_System_CreateSound(systeme, "Sons/just.wav", FMOD_LOOP_NORMAL, 0, &song);
    FMOD_System_PlaySound(systeme, song, NULL, 0, &canal);
    FMOD_Sound_SetLoopCount(song, -1);
    //Fin

    barre=SDL_LoadBMP("Data\\loader.bmp");
    fond=IMG_Load("Data\\palais.jpg");

    SDL_BlitSurface(fond, NULL, screen, &pfond);
    SDL_Flip(screen);
    SDL_Event chargement_en_cours;
    while(tempsactuel<10000)
    {
        SDL_PollEvent(&chargement_en_cours);
        tempsactuel=SDL_GetTicks();
        if(tempsactuel-tempsprecedent>8)
        {
            pbarre.x++;
            SDL_BlitSurface(barre, NULL, screen, &pbarre);
            SDL_Flip(screen);
            tempsprecedent=tempsactuel;
        }
        else
        {
            SDL_Delay(8-(tempsactuel-tempsprecedent));
        }
    }

    //Arrêter
    FMOD_Sound_Release(song);
    FMOD_System_Close(systeme);
    FMOD_System_Release(systeme);
    //Stop
    SDL_FreeSurface(fond);
    SDL_FreeSurface(barre);
}
int menu_principal(SDL_Surface *screen)
{
    SDL_Surface *princ=NULL;
    SDL_Rect pprinc;

    int boucler=1;
    pprinc.x=0;
    pprinc.y=0;

    //Gérons le son
    FMOD_SYSTEM *systeme;
    FMOD_System_Create(&systeme);
    FMOD_System_Init(systeme, 2, FMOD_INIT_NORMAL, NULL);

    FMOD_SOUND *song = NULL;
    FMOD_SOUND *survol = NULL;
    FMOD_CHANNEL *canal = NULL;
    FMOD_CHANNEL *chaine = NULL;
    FMOD_System_CreateSound(systeme, "Sons/dbzkaisong.wav", FMOD_LOOP_NORMAL, 0, &song);
    FMOD_System_PlaySound(systeme, song, NULL, 0, &canal);
    FMOD_Sound_SetLoopCount(song, -1);
    //Fin

    princ=IMG_Load("Data\\planete.jpg");

    SDL_BlitSurface(princ, NULL, screen, &pprinc);
    SDL_Flip(screen);
    SDL_Event principal;

    while(boucler)
    {
        SDL_WaitEvent(&principal);
        switch (principal.type)
        {
            case SDL_QUIT:
                return 5;
            break;
            case SDL_MOUSEMOTION:
                if(principal.motion.x>30&&principal.motion.x<230&&principal.motion.y>380&&principal.motion.y<435)
                {
                    FMOD_System_CreateSound(systeme, "Sons/over.wav", FMOD_CREATESAMPLE, 0, &survol);
                    FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                }
                if(principal.motion.x>275&&principal.motion.x<470&&principal.motion.y>380&&principal.motion.y<435)
                {
                    FMOD_System_CreateSound(systeme, "Sons/over.wav", FMOD_CREATESAMPLE, 0, &survol);
                    FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                }
                if(principal.motion.x>515&&principal.motion.x<715&&principal.motion.y>380&&principal.motion.y<435)
                {
                    FMOD_System_CreateSound(systeme, "Sons/over.wav", FMOD_CREATESAMPLE, 0, &survol);
                    FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                }
                if(principal.motion.x>765&&principal.motion.x<960&&principal.motion.y>380&&principal.motion.y<435)
                {
                    FMOD_System_CreateSound(systeme, "Sons/over.wav", FMOD_CREATESAMPLE, 0, &survol);
                    FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                }
                if(principal.motion.x>1020&&principal.motion.x<1215&&principal.motion.y>380&&principal.motion.y<435)
                {
                    FMOD_System_CreateSound(systeme, "Sons/over.wav", FMOD_CREATESAMPLE, 0, &survol);
                    FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                }
            break;
            case SDL_MOUSEBUTTONDOWN:
                switch(principal.button.button)
                {
                    case SDL_BUTTON_LEFT:
                        if(principal.button.x>30&&principal.button.x<230&&principal.button.y>380&&principal.button.y<435)
                        {
                            FMOD_System_CreateSound(systeme, "Sons/click1.wav", FMOD_CREATESAMPLE, 0, &survol);
                            FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                            return 1;
                        }
                        if(principal.button.x>275&&principal.button.x<470&&principal.button.y>380&&principal.button.y<435)
                        {
                            FMOD_System_CreateSound(systeme, "Sons/click1.wav", FMOD_CREATESAMPLE, 0, &survol);
                            FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                            return 2;
                        }
                        if(principal.button.x>515&&principal.button.x<715&&principal.button.y>380&&principal.button.y<435)
                        {
                            FMOD_System_CreateSound(systeme, "Sons/click1.wav", FMOD_CREATESAMPLE, 0, &survol);
                            FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                            return 3;
                        }
                        if(principal.button.x>765&&principal.button.x<960&&principal.button.y>380&&principal.button.y<435)
                        {
                            FMOD_System_CreateSound(systeme, "Sons/click1.wav", FMOD_CREATESAMPLE, 0, &survol);
                            FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                            return 4;
                        }
                        if(principal.button.x>1020&&principal.button.x<1215&&principal.button.y>380&&principal.button.y<435)
                        {
                            FMOD_System_CreateSound(systeme, "Sons/click1.wav", FMOD_CREATESAMPLE, 0, &survol);
                            FMOD_System_PlaySound(systeme, survol, NULL, 0, &chaine);
                            return 5;
                        }
                    break;
                }
                break;
                case SDL_KEYDOWN:
                switch(principal.key.keysym.sym)
                {
                    case SDLK_1:
                        return 1;
                    break;
                    case SDLK_2:
                        return 2;
                    break;
                    case SDLK_3:
                        return 3;
                    break;
                    case SDLK_4:
                        return 4;
                    break;
                    case SDLK_5:
                        return 5;
                    break;
                    case SDLK_ESCAPE:
                        return 5;
                    break;
                }
                break;
        }
    }
    //Arrêter
    FMOD_Sound_Release(song);
    FMOD_System_Close(systeme);
    FMOD_System_Release(systeme);
    //Stop
    SDL_FreeSurface(princ);
}

void JouerSonCourt(FMOD_SYSTEM *sys, FMOD_SOUND *son, char *nom, FMOD_CHANNEL *channel)
{
    FMOD_System_CreateSound(sys, nom, FMOD_CREATESAMPLE, 0, &son);
    FMOD_System_PlaySound(sys, son, NULL, 0, &channel);
}

void duel(SDL_Surface *screen)
{
    TTF_Init();
    TTF_Font *police=NULL;
    TTF_Font *style=NULL;
    SDL_Surface *background=NULL, *joueur1=NULL, *joueur2=NULL, *nom1=NULL, *nom2=NULL, *nbre1=NULL, *nbre2=NULL, *chrono=NULL, *ki1=NULL, *ki2=NULL, *lance=NULL;
    SDL_Surface *combo1=NULL, *combo2=NULL;
    SDL_Rect pback, pjoueur1, pjoueur2, pfot1, pfot2, pnom1, pnom2, pnbre1, pnbre2, pchrono, pki1, pki2, pmil, plance1, plance2;
    SDL_Color orange={0, 0, 0}, noire={0, 0, 0}, verte={0, 200, 0};

    person Tabperso[nbpers];
    char gr1[10], gr2[10], tiempo[10], ga1[10], ga2[10], noma[30], nomb[30];


    pback.x=0;
    pback.y=0;
    pfot1.x=5;
    pfot1.y=5;
    pfot2.x=1190;
    pfot2.y=5;
    pnom1.x=125;
    pnom1.y=80;
    pnom2.x=1080;
    pnom2.y=80;
    pnbre1.x=5;
    pnbre1.y=110;
    pnbre2.x=1190;
    pnbre2.y=110;
    pchrono.x=648;
    pchrono.y=50;
    pki1.x=65;
    pki1.y=110;
    pki2.x=1250;
    pki2.y=110;
    pmil.x=screen->w/2;
    pmil.y=screen->h/2;
    police=TTF_OpenFont("Data\\segoeprb.ttf", 16);
    style=TTF_OpenFont("Data\\arial.ttf", 20);
    int continuer=1, perso_choix=1, k=234, l=123, alpha=1, tempsactuel=0, tempsprecedent=0, ausol1=1, ausol2=1, direct1=1, direct2=1, effectue=0;
    int mirror1=0, mirror2=0, power1=5, quickly=1, compteur=300, tactuel=0, tprecedent=0, constante=5, a1=0, a2=0, b1=0, b2=0, sang1, sang2, action1=0, action2=0;
    int higher1, higher2, fait1=0, fait2=0, genki1=0, genki2=0;
    float aura1=0, aura2=0, bonus=0;
    int intermediaire;

    charger_tableau_personnage(Tabperso);

    FMOD_SYSTEM *systeme;
    FMOD_System_Create(&systeme);
    FMOD_System_Init(systeme, 2, FMOD_INIT_NORMAL, NULL);

    FMOD_SOUND *song = NULL;
    FMOD_SOUND *survol = NULL;
    FMOD_CHANNEL *canal = NULL;
    FMOD_CHANNEL *chaine = NULL;


    SDL_Event fight;

    recommencer:

    alpha=1;
    k=234;
    l=123;
    perso_choix=1;
    background=IMG_Load("Data\\choose.jpg");
    SDL_BlitSurface(background, NULL, screen, &pback);
    SDL_Flip(screen);


    while(continuer==1)
    {
        SDL_PollEvent(&fight);
        switch(fight.type)
        {
            case SDL_QUIT:
                continuer=0;
            break;
            case SDL_KEYDOWN:
                if(alpha==0)
                {
                    switch(fight.key.keysym.sym)
                    {
                        case SDLK_ESCAPE:
                            continuer=0;
                        break;
                        //Reglages des touches du premier joueur
                        case SDLK_h:
                            if(aura1>=50)
                            {
                                    switch (k)
                                    {
                                        case 1:
                                            if(sang1<=95)
                                            {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(700);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(500);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(500);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(500);
                                                sang1+=35;
                                            }
                                            else
                                            {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(700);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(500);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(500);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\colere3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(500);
                                                sang1=130;
                                            }
                                            aura1-=50;
                                        break;
                                        case 2:
                                            k=13;
                                            pjoueur1.y=180;
                                            higher1=pjoueur1.y;
                                            /*
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\Xsangohan.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(1000);
                                            Tabperso[k].attaque=2;
                                            Tabperso[k].defense=2;
                                            Tabperso[k].vitesse=6;
                                            aura1-=50;
                                            */
                                        break;
                                        case 3:
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\explo1.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(700);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\explo2.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\explo3.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\explo4.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\explo5.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\explo_bleu.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            if(mirror1==0)
                                            {
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=25;
                                                    pjoueur2.x+=100;
                                                }
                                                else
                                                {
                                                    sang2-=25-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                            else if(mirror1==1)
                                            {
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    sang2-=25;
                                                    pjoueur2.x-=100;
                                                }
                                                else
                                                {
                                                    sang2-=25-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                            aura1-=50;
                                        break;
                                        case 21:
                                            k=22;
                                            sang1+=40;
                                            aura1-=50;
                                        break;
                                        case 25:
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\shintenshin1.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(700);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\shintenshin2.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\shintenshin3.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\shintenshin4.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            intermediaire=k;
                                            k=l;
                                            l=intermediaire;
                                            intermediaire=sang1;
                                            sang1=sang2;
                                            sang2=intermediaire;
                                            intermediaire=aura1;
                                            aura1=aura2;
                                            aura2=intermediaire;
                                        break;
                                        case 20:
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\onemute1.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(700);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\onemute2.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\onemute3.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\onemute4.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\onemute5.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            k=30;
                                            sang1+=20;
                                            aura1-=50;
                                        break;
                                        case 30:
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\onemute5.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\twomute1.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(700);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\twomute2.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\twomute3.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\twomute4.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            k=31;
                                            sang1+=20;
                                            aura1-=50;
                                        break;
                                        case 31:
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\twomute4.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\psycho4.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(700);
                                            SDL_FreeSurface(combo1);
                                            combo1=IMG_Load("Data\\explo_red.jpg");
                                            SDL_BlitSurface(combo1, NULL, screen, &pback);
                                            SDL_Flip(screen);
                                            SDL_Delay(500);
                                            k=32;
                                            sang1+=20;
                                            aura1-=50;
                                        break;
                                        case 32:
                                            k=33;
                                            sang1-=30;
                                            aura1-=50;
                                        break;
                                }
                                //aura1-=50;
                            }

                            if(k==0)
                            {
                                genki1=1;
                                if(mirror1==0)
                                {
                                    joueur1=SDL_LoadBMP("Characters\\Sangoku\\positSGKnature.bmp");
                                    if(bonus<65)
                                        bonus+=0.25;
                                    else
                                    {
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\genkidama1.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(1000);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\genkidama2.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\genkidama3.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\genkidama4.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\explo_red.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        aura1=0;
                                        joueur2=Tabperso[l].rCODe;
                                        sang2-=bonus;
                                        pjoueur2.x+=300;
                                        bonus=0;
                                    }

                                }
                                else if(mirror1==1)
                                {
                                    joueur1=SDL_LoadBMP("Characters\\Sangoku\\rpositSGKnature.bmp");
                                    if(bonus<65)
                                        bonus+=0.25;
                                    else
                                    {
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\rgenkidama1.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(1000);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\rgenkidama2.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\rgenkidama3.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\rgenkidama4.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        SDL_FreeSurface(combo1);
                                        combo1=IMG_Load("Data\\explo_red.jpg");
                                        SDL_BlitSurface(combo1, NULL, screen, &pback);
                                        SDL_Flip(screen);
                                        SDL_Delay(600);
                                        aura1=0;
                                        joueur2=Tabperso[l].CODe;
                                        sang2-=Tabperso[k].fatale;
                                        pjoueur2.x-=300;
                                        bonus=0;
                                    }
                                }
                            }
                        break;
                        case SDLK_u:
                            if(aura1>=100)
                            {
                                switch (k)
                                {
                                    case 0:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(800);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x+=200;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(800);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x-=200;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 1:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\makankosappo1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\makankosappo2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\makankosappo3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\makankosappo4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x+=60;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\makankosappo1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rmakankosappo2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rmakankosappo3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rmakankosappo4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x-=60;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 2:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\masenko1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\masenko2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\masenko3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\masenko4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x+=120;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rmasenko1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rmasenko2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rmasenko3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rmasenko4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x-=120;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 3:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==0)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\finalflash1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\finalflash2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\finalflash3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\finalflash4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_blue.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x+=180;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==0)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rfinalflash1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rfinalflash2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rfinalflash3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rfinalflash4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_blue.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x-=180;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 4:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x+=20;
                                                        if(l==13){l=2;higher2=300;pjoueur2.y=300;sang2=Tabperso[2].resistance-Tabperso[13].resistance+sang2;}
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kienzan4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x-=20;
                                                        if(l==13){l=2;higher2=300;pjoueur2.y=300;sang2=Tabperso[2].resistance-Tabperso[13].resistance+sang2;}
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 5:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==0)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\waveyam1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\waveyam2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\waveyam3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\waveyam4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x+=80;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==0)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rwaveyam1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rwaveyam2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rwaveyam3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rwaveyam4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x-=80;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 6:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kikoho1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kikoho2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kikoho3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kikoho4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x+=100;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\kikoho1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rkikoho2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rkikoho3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rkikoho4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x-=100;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 7:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\psycho1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\psycho2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\psycho3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x+=10;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rpsycho1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rpsycho2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rpsycho3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x-=10;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 8:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\ball2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\ball3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\ball4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x+=100;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\ball2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\ball3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\ball4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x-=100;
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 9:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_bleu.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(ausol2==1)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x+=1;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\degat4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_bleu.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(ausol2==1)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    sang2-=Tabperso[k].fatale;
                                                    pjoueur2.x-=1;
                                                }
                                            }
                                        }
                                    break;
                                    case 10:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\vague1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\vague2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\vague3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_bleu.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x+=100;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\vague1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\vague2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\vague3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_bleu.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x-=100;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                    case 11:
                                        if(mirror1==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>150&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\laser1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\laser2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\laser3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_violet.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].rCODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].rCODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x+=5;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror1==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=150&&ausol1==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\laser1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\laser2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\laser3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_violet.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura1=0;
                                                if(joueur2!=Tabperso[l].CODb||Tabperso[k].attaque>Tabperso[l].defense)
                                                {
                                                    joueur2=Tabperso[l].CODe;
                                                    if(ausol2==1)
                                                    {
                                                        sang2-=Tabperso[k].fatale;
                                                        pjoueur2.x-=5;
                                                    }
                                                }
                                                else
                                                {
                                                    sang2-=Tabperso[k].fatale-(1+(Tabperso[l].defense-Tabperso[k].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                }
                            }
                        break;
                        case SDLK_RSHIFT:
                            if(aura2>=100)
                            {
                                switch (l)
                                {
                                    case 0:
                                        if(mirror2==0)
                                        {
                                           if(pjoueur2.x-pjoueur1.x>350&&ausol2==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(800);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\rhame4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura2=0;
                                                if(joueur1!=Tabperso[k].CODb||Tabperso[l].attaque>Tabperso[k].defense)
                                                {
                                                    joueur1=Tabperso[k].CODe;
                                                    sang1-=Tabperso[l].fatale;
                                                    pjoueur1.x-=200;
                                                }
                                                else
                                                {
                                                    sang1-=Tabperso[l].fatale-(1+(Tabperso[k].defense-Tabperso[l].attaque))*constante;
                                                }
                                            }
                                        }
                                        if(mirror2==1)
                                        {
                                           if(pjoueur1.x-pjoueur2.x>=350&&ausol2==1)
                                           {
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\concentration2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(800);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame1.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(1000);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame2.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame3.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\hame4.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                SDL_FreeSurface(combo1);
                                                combo1=IMG_Load("Data\\explo_red.jpg");
                                                SDL_BlitSurface(combo1, NULL, screen, &pback);
                                                SDL_Flip(screen);
                                                SDL_Delay(600);
                                                aura2=0;
                                                if(joueur1!=Tabperso[k].rCODb||Tabperso[l].attaque>Tabperso[k].defense)
                                                {
                                                    joueur1=Tabperso[k].rCODe;
                                                    sang1-=Tabperso[l].fatale;
                                                    pjoueur1.x+=200;
                                                }
                                                else
                                                {
                                                    sang1-=Tabperso[l].fatale-(1+(Tabperso[k].defense-Tabperso[l].attaque))*constante;
                                                }
                                            }
                                        }
                                    break;
                                }
                            }
                        break;
                        case SDLK_d:
                            if(action1==0)
                            {
                                if(pjoueur1.x+50<pjoueur2.x)
                                {
                                    mirror1=0;
                                    mirror2=0;
                                    joueur1=Tabperso[k].CODav;
                                    pjoueur1.x+=Tabperso[k].vitesse;
                                }
                                else if(ausol1==0||mirror1==1)
                                {
                                    mirror1=1;
                                    mirror2=1;
                                    joueur1=Tabperso[k].rCODar;
                                    if(pjoueur1.x+joueur1->w<screen->w)
                                        pjoueur1.x+=Tabperso[k].vitesse;
                                }
                            }
                        break;
                        case SDLK_a:
                            if(action1==0)
                            {
                                if(pjoueur1.x>0&&pjoueur1.x+50<pjoueur2.x)
                                {
                                    mirror1=0;
                                    mirror2=0;
                                    joueur1=Tabperso[k].CODar;
                                    pjoueur1.x-=Tabperso[k].vitesse;
                                }
                                else if(ausol1==0||mirror1==1)
                                {
                                    mirror1=1;
                                    mirror2=1;
                                    joueur1=Tabperso[k].rCODav;
                                    pjoueur1.x-=Tabperso[k].vitesse;
                                }
                            }
                        break;
                        case SDLK_w:
                            if(action1==0&&pjoueur1.x>0)
                            {
                                if(mirror1==0)
                                {
                                    joueur1=Tabperso[k].CODar;
                                }
                                else
                                {
                                    joueur1=Tabperso[k].rCODar;
                                }
                                ausol1=0;
                                direct1=1;
                            }
                        break;
                        case SDLK_s:
                            if(action1==0)
                            {
                                if(mirror1==0)
                                {
                                    joueur1=Tabperso[k].CODb;
                                }
                                else
                                {
                                    joueur1=Tabperso[k].rCODb;
                                }
                            }
                        break;
                        case SDLK_t:
                            if(action1==0)
                            {
                                if(aura1<=100){aura1+=0.25;}
                                if(mirror1==0)
                                {
                                    joueur1=Tabperso[k].COD1;
                                    if(pjoueur1.x+Tabperso[k].portee>=pjoueur2.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                    {
                                        if(joueur2!=Tabperso[l].rCODb)
                                        {
                                            if(aura1<=100){aura1+=0.25;}
                                            if(pjoueur2.x+joueur2->w<screen->w){pjoueur2.x+=power1;}
                                            joueur2=Tabperso[l].rCODe;
                                            sang2-=Tabperso[k].attaque;
                                        }
                                        else if(Tabperso[k].attaque>Tabperso[l].defense)
                                        {
                                            if(pjoueur2.x+joueur2->w<screen->w){pjoueur2.x+=power1+(Tabperso[k].attaque-Tabperso[l].defense);}
                                        }
                                    }
                                }
                                if(mirror1==1)
                                {
                                    joueur1=Tabperso[k].rCOD1;
                                    if(pjoueur2.x+Tabperso[k].portee>=pjoueur1.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                    {
                                        if(joueur2!=Tabperso[l].CODb)
                                        {
                                            if(aura1<=100){aura1+=0.25;}
                                            pjoueur2.x-=power1;
                                            joueur2=Tabperso[l].CODe;
                                            sang2-=Tabperso[k].attaque;
                                        }
                                        else if(Tabperso[k].attaque>Tabperso[l].defense)
                                        {
                                            pjoueur2.x-=power1+(Tabperso[k].attaque-Tabperso[l].defense);
                                        }
                                    }
                                }
                            }
                        break;
                        case SDLK_y:
                            if(action1==0)
                            {
                                if(aura1<=100){aura1+=0.25;}
                                if(mirror1==0)
                                {
                                    joueur1=Tabperso[k].COD2;
                                    if(pjoueur1.x+Tabperso[k].portee>=pjoueur2.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                    {
                                        if(joueur2!=Tabperso[l].rCODb)
                                        {
                                            if(aura1<=100){aura1+=0.25;}
                                            if(pjoueur2.x+joueur2->w<screen->w){pjoueur2.x+=power1;}
                                            joueur2=Tabperso[l].rCODe;
                                            sang2-=Tabperso[k].attaque;
                                        }
                                        else if(Tabperso[k].attaque>Tabperso[l].defense)
                                        {
                                            if(pjoueur2.x+joueur2->w<screen->w){pjoueur2.x+=power1+(Tabperso[k].attaque-Tabperso[l].defense);}
                                        }
                                    }
                                }
                                if(mirror1==1)
                                {
                                    joueur1=Tabperso[k].rCOD2;
                                    if(pjoueur2.x+Tabperso[k].portee>=pjoueur1.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                    {
                                        if(joueur2!=Tabperso[l].CODb)
                                        {
                                            if(aura1<=100){aura1+=0.25;}
                                            pjoueur2.x-=power1;
                                            joueur2=Tabperso[l].CODe;
                                            sang2-=Tabperso[k].attaque;
                                        }
                                        else if(Tabperso[k].attaque>Tabperso[l].defense)
                                        {
                                            pjoueur2.x-=power1+(Tabperso[k].attaque-Tabperso[l].defense);
                                        }
                                    }
                                }
                            }
                        break;
                        case SDLK_g:
                            if(action1==0)
                            {
                                if(aura1<=100){aura1+=0.25;}
                                if(mirror1==0)
                                {
                                    joueur1=Tabperso[k].COD22;
                                    if(pjoueur1.x+Tabperso[k].portee>=pjoueur2.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                    {
                                        if(joueur2!=Tabperso[l].rCODb)
                                        {
                                            if(aura1<=100){aura1+=0.25;}
                                            if(pjoueur2.x+joueur2->w<screen->w){pjoueur2.x+=power1;}
                                            joueur2=Tabperso[l].rCODe;
                                            sang2-=Tabperso[k].attaque;
                                        }
                                        else if(Tabperso[k].attaque>Tabperso[l].defense)
                                        {
                                            if(pjoueur2.x+joueur2->w<screen->w){pjoueur2.x+=power1+(Tabperso[k].attaque-Tabperso[l].defense);}
                                        }
                                    }
                                }
                                if(mirror1==1)
                                {
                                    joueur1=Tabperso[k].rCOD22;
                                    if(pjoueur2.x+Tabperso[k].portee>=pjoueur1.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                    {
                                        if(joueur2!=Tabperso[l].CODb)
                                        {
                                            if(aura1<=100){aura1+=0.25;}
                                            pjoueur2.x-=power1;
                                            joueur2=Tabperso[l].CODe;
                                            sang2-=Tabperso[k].attaque;
                                        }
                                        else if(Tabperso[k].attaque>Tabperso[l].defense)
                                        {
                                            pjoueur2.x-=power1+(Tabperso[k].attaque-Tabperso[l].defense);
                                        }
                                    }
                                }
                            }
                        break;
                        case SDLK_LEFT:
                            if(pjoueur1.x+50<pjoueur2.x)
                            {
                                mirror2=0;
                                mirror1=0;
                                joueur2=Tabperso[l].rCODav;
                                pjoueur2.x-=Tabperso[l].vitesse;
                            }
                            else if(ausol2==0||mirror2==1)
                            {
                                mirror2=1;
                                mirror1=1;
                                joueur2=Tabperso[l].CODar;
                                pjoueur2.x-=Tabperso[l].vitesse;
                            }
                        break;
                        case SDLK_RIGHT:
                            if(pjoueur2.x+joueur2->w<screen->w&&pjoueur1.x+50<pjoueur2.x)
                            {
                                mirror2=0;
                                mirror1=0;
                                joueur2=Tabperso[l].rCODar;
                                pjoueur2.x+=Tabperso[l].vitesse;
                            }
                            else if(ausol2==0||mirror2==1)
                            {
                                mirror2=1;
                                mirror1=1;
                                joueur2=Tabperso[l].CODav;
                                pjoueur2.x+=Tabperso[l].vitesse;
                            }
                        break;
                        //Reglages des touches du deuxieme joueur
                        case SDLK_UP:
                            if(mirror2==0&&pjoueur2.x+joueur2->w<screen->w)
                            {
                                joueur2=Tabperso[l].rCODar;
                            }
                            else
                            {
                                joueur2=Tabperso[l].CODar;
                            }
                            ausol2=0;
                            direct2=1;
                        break;
                        case SDLK_DOWN:
                            if(mirror2==0)
                            {
                                joueur2=Tabperso[l].rCODb;
                            }
                            else
                            {
                                joueur2=Tabperso[l].CODb;
                            }
                        break;
                        case SDLK_o:
                            if(aura2<=100){aura2+=0.25;}
                            if(mirror2==0)
                            {
                                joueur2=Tabperso[l].rCOD1;
                                if(pjoueur1.x+Tabperso[l].portee>=pjoueur2.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                {
                                    if(joueur1!=Tabperso[k].CODb)
                                    {
                                        if(aura2<=100){aura2+=0.25;}
                                        pjoueur1.x-=power1;
                                        joueur1=Tabperso[k].CODe;
                                        sang1-=Tabperso[l].attaque;
                                    }
                                    else if(Tabperso[l].attaque>Tabperso[k].defense)
                                    {
                                        pjoueur1.x-=power1+(Tabperso[l].attaque-Tabperso[k].defense);
                                    }
                                }
                            }
                            if(mirror2==1)
                            {
                                joueur2=Tabperso[l].COD1;
                                if(pjoueur2.x+Tabperso[l].portee>=pjoueur1.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                {
                                    if(joueur1!=Tabperso[k].rCODb)
                                    {
                                        if(aura2<=100){aura2+=0.25;}
                                        if(pjoueur1.x+joueur1->w<screen->w){pjoueur1.x+=power1;}
                                        joueur1=Tabperso[k].rCODe;
                                        sang1-=Tabperso[l].attaque;
                                    }
                                    else if(Tabperso[l].attaque>Tabperso[k].defense)
                                    {
                                        if(pjoueur1.x+joueur1->w<screen->w){pjoueur1.x+=power1+(Tabperso[l].attaque-Tabperso[k].defense);}
                                    }
                                }
                            }
                        break;
                        case SDLK_p:
                            if(aura2<=100){aura2+=0.25;}
                            if(mirror2==0)
                            {
                                joueur2=Tabperso[l].rCOD2;
                                if(pjoueur1.x+Tabperso[l].portee>=pjoueur2.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                {
                                    if(joueur1!=Tabperso[k].CODb)
                                    {
                                        if(aura2<=100){aura2+=0.25;}
                                        pjoueur1.x-=power1;
                                        joueur1=Tabperso[k].CODe;
                                        sang1-=Tabperso[l].attaque;
                                    }
                                    else if(Tabperso[l].attaque>Tabperso[k].defense)
                                    {
                                        pjoueur1.x-=power1+(Tabperso[l].attaque-Tabperso[k].defense);
                                    }
                                }
                            }
                            if(mirror2==1)
                            {
                                joueur2=Tabperso[l].COD2;
                                if(pjoueur2.x+Tabperso[l].portee>=pjoueur1.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                {
                                    if(joueur1!=Tabperso[k].rCODb)
                                    {
                                        if(aura2<=100){aura2+=0.25;}
                                        if(pjoueur1.x+joueur1->w<screen->w){pjoueur1.x+=power1;}
                                        joueur1=Tabperso[k].rCODe;
                                        sang1-=Tabperso[l].attaque;
                                    }
                                    else if(Tabperso[l].attaque>Tabperso[k].defense)
                                    {
                                        if(pjoueur1.x+joueur1->w<screen->w){pjoueur1.x+=power1+(Tabperso[l].attaque-Tabperso[k].defense);}
                                    }
                                }
                            }
                        break;
                        case SDLK_l:
                            if(aura2<=100){aura2+=0.25;}
                            if(mirror2==0)
                            {
                                joueur2=Tabperso[l].rCOD22;
                                if(pjoueur1.x+Tabperso[k].portee>=pjoueur2.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                {
                                    if(joueur1!=Tabperso[k].CODb)
                                    {
                                        if(aura2<=100){aura2+=0.25;}
                                        pjoueur1.x-=power1;
                                        joueur1=Tabperso[k].CODe;
                                        sang1-=Tabperso[l].attaque;
                                    }
                                    else if(Tabperso[l].attaque>Tabperso[k].defense)
                                    {
                                        pjoueur1.x-=power1+(Tabperso[l].attaque-Tabperso[k].defense);
                                    }
                                }
                            }
                            if(mirror2==1)
                            {
                                joueur2=Tabperso[l].COD22;
                                if(pjoueur2.x+Tabperso[l].portee>=pjoueur1.x&&pjoueur1.y+joueur1->h/2>pjoueur2.y)
                                {
                                    if(joueur1!=Tabperso[k].rCODb)
                                    {
                                        if(aura2<=100){aura2+=0.25;}
                                        if(pjoueur1.x+joueur1->w<screen->w){pjoueur1.x+=power1;}
                                        joueur1=Tabperso[k].rCODe;
                                        sang1-=Tabperso[l].attaque;
                                    }
                                    else if(Tabperso[l].attaque>Tabperso[k].defense)
                                    {
                                        if(pjoueur1.x+joueur1->w<screen->w){pjoueur1.x+=power1+(Tabperso[l].attaque-Tabperso[k].defense);}
                                    }
                                }
                            }
                        break;
                    }
                }
            break;
            case SDL_MOUSEBUTTONUP:
                if(perso_choix==1)
                {
                    switch(fight.button.button)
                    {
                        case SDL_BUTTON_LEFT:
                            if(fight.button.x<100&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=0;
                            }
                            else if(fight.button.x<200&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/over.wav", chaine);
                                k=1;
                            }
                            else if(fight.button.x<300&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=2;
                            }
                            else if(fight.button.x<400&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=3;
                            }
                            else if(fight.button.x<500&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=4;
                            }
                            else if(fight.button.x<600&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=5;
                            }
                            else if(fight.button.x<700&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=6;
                            }
                            else if(fight.button.x<800&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=7;
                            }
                            else if(fight.button.x<900&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=8;
                            }
                            else if(fight.button.x<1000&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=9;
                            }
                            else if(fight.button.x<1100&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=10;
                            }
                            else if(fight.button.x<1200&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=11;
                            }
                            else if(fight.button.x<1280&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=12;
                            }
                            else if(fight.button.x<100&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=18;
                            }
                            else if(fight.button.x<200&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=19;
                            }
                            else if(fight.button.x<300&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=20;//FREEZER
                            }
                            else if(fight.button.x<400&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=21;//ZABON
                            }
                            else if(fight.button.x<500&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=23;//GULDO
                            }
                            else if(fight.button.x<600&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=24;//JEECE
                            }
                            else if(fight.button.x<700&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=25;//GINYU
                            }
                            else if(fight.button.x<800&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=26;//BURTER
                            }
                            else if(fight.button.x<900&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                k=27;//RECOOME
                                k=29;//Essai Broly
                            }
                        break;
                        case SDL_BUTTON_RIGHT:
                            if(fight.button.x<100&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=0;
                            }
                            else if(fight.button.x<200&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=1;
                            }
                            else if(fight.button.x<300&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=2;
                            }
                            else if(fight.button.x<400&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=3;
                            }
                            else if(fight.button.x<500&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=4;
                            }
                            else if(fight.button.x<600&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=5;
                            }
                            else if(fight.button.x<700&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=6;
                            }
                            else if(fight.button.x<800&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=7;
                            }
                            else if(fight.button.x<900&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=8;
                            }
                            else if(fight.button.x<1000&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=9;
                            }
                            else if(fight.button.x<1100&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=10;
                            }
                            else if(fight.button.x<1200&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=11;
                            }
                            else if(fight.button.x<1280&&fight.button.y<90)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=12;
                            }
                            else if(fight.button.x<100&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=18;
                            }
                            else if(fight.button.x<200&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=19;
                            }
                            else if(fight.button.x<300&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=20;//FREEZER
                            }
                            else if(fight.button.x<400&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=21;//ZABON
                            }
                            else if(fight.button.x<500&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=23;//GULDO
                            }
                            else if(fight.button.x<600&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=24;//JEECE
                            }
                            else if(fight.button.x<700&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=25;//GINYU
                            }
                            else if(fight.button.x<800&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=26;//BURTER
                            }
                            else if(fight.button.x<900&&fight.button.y<180)
                            {
                                JouerSonCourt(systeme, survol, "Sons/click2.wav", chaine);
                                l=27;//RECOOME
                                l=28;//Cell test
                            }
                        break;
                    }
                }
            break;
        }
        //Gestion des initialisations des elements des joueurs necessaires au debut du jeu
        if(k!=234&&l!=123&&alpha==1&&k!=l)
        {
            pjoueur1.x=150;
            pjoueur1.y=300;
            pjoueur2.x=1000;
            pjoueur2.y=300;
            if(k==13||k==14){pjoueur1.y=180;}
            if(l==13||l==14){pjoueur2.y=180;pjoueur2.x=900;}
            if(k==29||k==28){pjoueur1.y=270;}
            if(l==29||l==28){pjoueur2.y=270;}
            joueur1=Tabperso[k].COD;
            joueur2=Tabperso[l].rCOD;
            sang1=Tabperso[k].resistance;
            sang2=Tabperso[l].resistance;
            higher1=pjoueur1.y;
            higher2=pjoueur2.y;
            background=IMG_Load("Data\\rochers.jpg");
            perso_choix=0;
            alpha=0;
            mirror1=0;
            mirror2=0;
            compteur=300;
            tactuel=0;
            tprecedent=0;
            a1=0;
            a2=0;
            b1=0;
            b2=0;
            aura1=0;
            aura2=0;
            ausol1=1;
            ausol2=1;
            direct1=1;
            direct2=1;
            ki1=0;
            ki2=0;
            power1+=Tabperso[k].attaque;
        }
        if(alpha==0)
        {
            //Debut du saut des personnages
            if(ausol1==0)
            {
                if(direct1==1)
                {
                    if(pjoueur1.y>Tabperso[k].hauteur)
                    {
                        pjoueur1.y-=Tabperso[k].vitesse+4;
                    }
                    else
                    {
                        direct1=0;
                    }
                }
                else
                {
                    if(pjoueur1.y<higher1)
                    {
                        pjoueur1.y+=15;
                    }
                    else
                    {
                        ausol1=1;
                        if(mirror1==0)
                        {
                            joueur1=Tabperso[k].COD;
                        }
                        else
                        {
                            joueur1=Tabperso[k].rCOD;
                        }
                    }
                }
            }

            if(ausol2==0)
            {
                if(direct2==1)
                {
                    if(pjoueur2.y>Tabperso[l].hauteur)
                    {
                        pjoueur2.y-=Tabperso[l].vitesse+4;
                    }
                    else
                    {
                        direct2=0;
                    }
                }
                else
                {
                    if(pjoueur2.y<higher2)
                    {
                        pjoueur2.y+=15;
                    }
                    else
                    {
                        ausol2=1;
                        if(mirror2==0)
                        {
                            joueur2=Tabperso[l].rCOD;
                        }
                        else
                        {
                            joueur2=Tabperso[l].COD;
                        }
                    }
                }
            }
            //Fin du saut des personnages

            //Gestion des décors du combat
            /*
            if(pjoueur1.x+joueur1->w>=screen->w||pjoueur2.x+joueur2->w>=screen->w)
            {
                background=IMG_Load("Data\\rochers3.jpg");
                pjoueur1.x=100;
                pjoueur2.x=400;
            }
            */

            if(sang1>0&&sang2>0&&compteur>0)
            {
                //Gestion des noms des joueurs
                SDL_FreeSurface(nom1);
                nom1=TTF_RenderText_Blended(police, Tabperso[k].nom, noire);
                SDL_FreeSurface(nom2);
                nom2=TTF_RenderText_Blended(police, Tabperso[l].nom, noire);
                //Gestion des points de vie des joueurs
                sprintf(gr1, "%d", sang1);
                sprintf(gr2, "%d", sang2);
                SDL_FreeSurface(nbre1);
                nbre1=TTF_RenderText_Blended(style, gr1, orange);
                SDL_FreeSurface(nbre2);
                nbre2=TTF_RenderText_Blended(style, gr2, orange);
                //Gestion des points d'energie des joueurs
                sprintf(ga1, "%.0f", aura1);
                sprintf(ga2, "%.0f", aura2);
                SDL_FreeSurface(ki1);
                ki1=TTF_RenderText_Blended(style, ga1, noire);
                SDL_FreeSurface(ki2);
                ki2=TTF_RenderText_Blended(style, ga2, noire);
                //Gestion du chronometre decroissant du jeu
                tactuel=SDL_GetTicks();
                if(tactuel-tprecedent>1000)
                {
                    sprintf(tiempo, "%d", compteur);
                    SDL_FreeSurface(chrono);
                    chrono=TTF_RenderText_Blended(style, tiempo, noire);
                    compteur--;
                    tprecedent=tactuel;
                }
                //Gestion de la fluidite des mouvements des joueurs
                a1=SDL_GetTicks();
                if(a1-a2>250)
                {
                    if(joueur1!=Tabperso[k].CODav&&joueur1!=Tabperso[k].rCODav&&joueur1!=Tabperso[k].CODar&&joueur1!=Tabperso[k].rCODar&&joueur1!=Tabperso[k].CODb&&joueur1!=Tabperso[k].rCODb)
                    {
                        if(mirror1==0)
                        {
                            joueur1=Tabperso[k].COD;
                        }
                        else if(mirror1==1)
                        {
                            joueur1=Tabperso[k].rCOD;
                        }
                        if(genki1==1)
                        {
                            joueur1=SDL_LoadBMP("Characters\\Sangoku\\positSGKnature.bmp");
                            genki1=0;
                        }
                    }
                    a2=a1;
                }
                b1=SDL_GetTicks();
                if(b1-b2>250)
                {
                    if(joueur2!=Tabperso[l].CODav&&joueur2!=Tabperso[l].rCODav&&joueur2!=Tabperso[l].CODar&&joueur2!=Tabperso[l].rCODar&&joueur2!=Tabperso[l].rCODb&&joueur2!=Tabperso[l].CODb)
                    {
                        if(mirror2==0)
                        {
                            joueur2=Tabperso[l].rCOD;
                        }
                        else if(mirror2==1)
                        {
                            joueur2=Tabperso[l].COD;
                        }
                        if(genki1==2)
                        {
                            joueur2=SDL_LoadBMP("Characters\\Sangoku\\positSGKnature.bmp");
                            genki2=0;
                        }
                    }
                    b2=b1;
                }
                //Gestion de la portee des attaques du gros joueur qui veut embrouiller mes algorithmes
                //Travail pas encore fini, problèmes au niveau des miroirs
                if(k==13||k==14)
                {
                    if(mirror1==0&&fait1==0)
                    {
                        Tabperso[l].portee+=120;
                        fait1=1;
                    }
                    else if(mirror1==1)
                    {
                        fait1=0;
                    }
                }
                if(l==13||l==14)
                {
                    if(mirror1==0&&fait2==0)
                    {
                        Tabperso[l].portee-=120;
                        fait2=1;
                    }
                    else if(mirror1==1)
                    {
                        Tabperso[l].portee+=120;
                        fait2=0;
                    }
                }

                //Blittage des surfaces ou affichage du jeu proprement suivant un frame per second
                tempsactuel=SDL_GetTicks();
                if(tempsactuel-tempsprecedent>fps)
                {


                    SDL_BlitSurface(background, NULL, screen, &pback);
                    SDL_BlitSurface(Tabperso[k].image, NULL, screen, &pfot1);
                    SDL_BlitSurface(Tabperso[l].image, NULL, screen, &pfot2);
                    SDL_BlitSurface(nom1, NULL, screen, &pnom1);
                    SDL_BlitSurface(nom2, NULL, screen, &pnom2);
                    SDL_BlitSurface(nbre1, NULL, screen, &pnbre1);
                    SDL_BlitSurface(nbre2, NULL, screen, &pnbre2);
                    SDL_BlitSurface(ki1, NULL, screen, &pki1);
                    SDL_BlitSurface(ki2, NULL, screen, &pki2);
                    SDL_BlitSurface(chrono, NULL, screen, &pchrono);
                    SDL_SetColorKey(joueur1, SDL_SRCCOLORKEY, SDL_MapRGB(joueur1->format, 255, 255, 255));
                    SDL_SetColorKey(joueur2, SDL_SRCCOLORKEY, SDL_MapRGB(joueur2->format, 255, 255, 255));
                    SDL_BlitSurface(joueur2, NULL, screen, &pjoueur2);
                    SDL_BlitSurface(joueur1, NULL, screen, &pjoueur1);

                    //SDL_FreeSurface(joueur1);
                    //SDL_FreeSurface(joueur2);
                    /*
                    SDL_FreeSurface(nom1);
                    SDL_FreeSurface(nom2);
                    SDL_FreeSurface(nbre1);
                    SDL_FreeSurface(nbre2);
                    SDL_FreeSurface(background);
                    SDL_FreeSurface(chrono);
                    */
                    /*
                    if(action1==1)
                    {
                        SDL_SetColorKey(lance, SDL_SRCCOLORKEY, SDL_MapRGB(lance->format, 255, 255, 255));
                        SDL_BlitSurface(lance, NULL, screen, &plance1);
                    }
                    */
                    tempsprecedent=tempsactuel;
                }
                else
                {
                    SDL_Delay(fps-(tempsactuel-tempsprecedent));
                }
                SDL_Flip(screen);
            }
            //Gestion des resultats des combats (victoires, defaites, match nuls)
            else
            {
                if(sang1>sang2)
                {
                    sprintf(noma, "%s est le vainqueur de ce combat", Tabperso[k].nom);
                    SDL_FreeSurface(nom1);
                    nom1=TTF_RenderText_Blended(police, noma, orange);
                    background=IMG_Load("Data\\ki_rouge.PNG");
                    SDL_BlitSurface(background, NULL, screen, &pback);
                    SDL_BlitSurface(nom1, NULL, screen, &pmil);
                    SDL_BlitSurface(Tabperso[k].image, NULL, screen, &pnbre1);
                    SDL_Flip(screen);
                    SDL_Delay(2000);
                }
                else if(sang1<sang2)
                {
                    sprintf(noma, "%s est le vainqueur de ce combat", Tabperso[l].nom);
                    SDL_FreeSurface(nom1);
                    nom1=TTF_RenderText_Blended(police, noma, orange);
                    background=IMG_Load("Data\\showone.jpg");
                    SDL_BlitSurface(background, NULL, screen, &pback);
                    SDL_BlitSurface(nom1, NULL, screen, &pmil);
                    SDL_BlitSurface(Tabperso[l].image, NULL, screen, &pnbre1);
                    SDL_Flip(screen);
                    SDL_Delay(2000);
                }
                else if(sang1==sang2)
                {
                    sprintf(noma, "%s et %s sont tous les deux perdants dans ce combat", Tabperso[k].nom, Tabperso[l].nom);
                    SDL_FreeSurface(nom1);
                    nom1=TTF_RenderText_Blended(police, noma, orange);
                    background=IMG_Load("Data\\showone.jpg");
                    SDL_BlitSurface(background, NULL, screen, &pback);
                    SDL_BlitSurface(nom1, NULL, screen, &pmil);
                    SDL_BlitSurface(Tabperso[k].image, NULL, screen, &pnbre1);
                    SDL_BlitSurface(Tabperso[l].image, NULL, screen, &pnbre2);
                    SDL_Flip(screen);
                    SDL_Delay(2000);
                }
                goto recommencer;
            }

        }
    }
    //Arrêter
    FMOD_Sound_Release(song);
    FMOD_System_Close(systeme);
    FMOD_System_Release(systeme);
    //Stop
    SDL_FreeSurface(background);
    SDL_FreeSurface(joueur1);
    SDL_FreeSurface(joueur2);
    TTF_CloseFont(police);
    TTF_Quit();
}
void combattre_linteligence_artificielle(SDL_Surface *screen)
{

}
