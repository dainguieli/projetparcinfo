#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"etudiant.h"

Etudiant creerEtudiant()
{

    Etudiant e;
    printf("Entrez les information suivant:\n");
    printf("---------------------------------\n" );
    printf("Date JOUR / MOIS / ANNEE\n");
      printf("---------------------------------\n" );
    printf("JOUR:\n" );
    scanf("%d",&e.date.jour );
    printf("MOIS:\n" );
    scanf("%d",&e.date.mois );
    printf("ANNEE:\n" );
    scanf("%d",&e.date.annee );
      printf("---------------------------------\n" );
    printf("MATRICULE : ");
    scanf("%s",&e.matricule);
    printf("NOM : ");
    scanf("%s",e.nom);
    printf("PRENOM : ");
    scanf("%s",e.prenom);
    printf("CONTACT : ");
    scanf("%d",&e.contact);

    return e;
}

int rechercherEtudiant(Etudiant etudiant[],int t,char matricule[]) {
 	for (int i=0;i<t;i++) {
		if (strcmp(matricule,etudiant[i].matricule)==0) {
			return i;
		}
 	}
	return -1;
 }

void modifierEtudiant(Etudiant e[],int t)
{

      printf("Entrez les information suivant:\n");
      printf("---------------------------------\n" );
      printf("Date JOUR / MOIS / ANNEE\n");
        printf("---------------------------------\n" );
      printf("JOUR:\n" );
      scanf("%d",&e[t].date.jour );
      printf("MOIS:\n" );
      scanf("%d",&e[t].date.mois );
      printf("ANNEE:\n" );
      scanf("%d",&e[t].date.annee );
        printf("---------------------------------\n" );
      printf("MATRICULE : ");
      scanf("%s",&e[t].matricule);
      printf("NOM : ");
      scanf("%s",e[t].nom);
      printf("PRENOM : ");
      scanf("%s",e[t].prenom);
      printf("CONTACT : ");
      scanf("%d",&e[t].contact);
}

void afficherEtudiant(Etudiant e)
 {

  printf("INSCRIT LE %d/%d/%d\n",e.date.jour,e.date.mois,e.date.annee );
  printf("==============================\n");
 	printf("Matricule: %s\n",e.matricule);
  printf("==============================\n");
 	printf("Nom: %s\n",e.nom);
 	printf("Prenom: %s\n",e.prenom);
 	printf("Contact: %s\n",e.contact);
  printf("==============================\n");

}

void affichertabEtudiant(Etudiant tab[],int p){
     for(int i=0;i<p;i++){
         printf("%s",tab[i].matricule);
         printf("%s",tab[i].nom);
         printf("%s",tab[i].prenom);
         printf("%d",tab[i].contact);
     }
 }
