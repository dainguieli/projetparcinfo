#ifndef _EQUIPEMENT_
#define _EQUIPEMENT_

struct Equipement{
    char modele[12];
    int code;
    int nombre;
    int degat;

};
typedef struct Equipement Equipement;

Equipement enregistrerEquipement();

//int rechercher_Equipement(int code_equipement, Equipement t[]);
void afficherEquipement(Equipement E);
int rechercherequipement(Equipement etudiant[],int e,int code);
void verifierEtatEquipement(Equipement *E);
void modifierEquipement(Equipement e[],int t);
void affichertabEquipement(Equipement E[],int taille);
#endif
