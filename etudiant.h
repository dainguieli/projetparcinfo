#ifndef __ETUDIANT__
#define __ETUDIANT__

struct Date{

	int jour;
	int mois;
	int annee;
};
typedef struct Date Date;
struct Etudiant{

	char matricule[10];
	char nom[10];
	char prenom[10];
	char contact[10];
  Date date;
};
typedef struct Etudiant Etudiant;

Etudiant creerEtudiant();
int rechercherEtudiant(Etudiant etudiant[],int t,char matricule[]);
void modifierEtudiant(Etudiant e[],int t);
void afficherEtudiant(Etudiant e);
void affichertabEtudiant(Etudiant tab[],int p);


#endif
