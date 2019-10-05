#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"equipement.h"
#include"etudiant.h"


#define TAILLE 3
      int EtudiantMenu();
int main(int argc, char const *argv[])
{
              char mat[10];
              int code;
                            Equipement *tab;
                            Equipement Eq;
                            FILE *f;

                        f=fopen("Efrei.txt","r+");
                         printf("ENREGISTEREMENT DES EQUIPEMENT\n" );
                         printf("=================================================\n" );
                         printf("combien d'equipements voulez-vous enregistrer \n");
                         scanf("%d",&Eq.nombre);
                         int r=Eq.nombre;
                        Equipement equip[Eq.nombre];

                         tab=(Equipement*)malloc(Eq.nombre*sizeof(Equipement));
                        for(int i=0;i<Eq.nombre;i++){
                            equip[i] = enregistrerEquipement();
                        }
                  while(1)
                  {
                        //ENREGISTERE ETUDIANT
                         int choix=EtudiantMenu();
                         int entre=0;
                         Etudiant listeEtudiant[TAILLE];
                         switch (choix)
                         {
                           case 1:
                           if(entre < TAILLE)
                           {

                               listeEtudiant[entre] = creerEtudiant();
                               entre++;

                           }
                           break;
                           case 2:

                               printf("Entrer le matricule de l etudiant a rechercher  \n: ");
                               scanf("%s",mat);
                               int tvs = rechercherEtudiant(listeEtudiant,TAILLE,mat);
                               if(tvs != -1)
                                 afficherEtudiant(listeEtudiant[tvs]);
                               else
                                 printf("Invalide");
                          break;
                         case 3:
                         printf("Entrer le matricule de l etudiant a modifier  \n: ");
                         scanf("%s",mat);
                         int tva = rechercherEtudiant(listeEtudiant,TAILLE,mat);
                        if(tva != -1)
                           modifierEtudiant(listeEtudiant,tva);
                         else
                           printf("Invalide");
                        break;
                        case 4:
                            printf("Entrer le code  de l equipement a recherche  \n: ");
                            scanf("%d",&code);
                            int a=5;
                           int tv=rechercherequipement(equip,r,code);
                           if(tva != -1)
                             afficherEquipement(equip[tv]);
                            else
                              printf("Invalide");
                            break;


                         case 5:
                         printf("Entrer le code  de l equipement a afficher  \n: ");
                         scanf("%d",&code);

                        int tvv=rechercherequipement(equip,r,code);
                        if(tvv != -1)
                        modifierEquipement(equip, tv);
                         else
                           printf("Invalide");

                         break;
                         case 6:
                         affichertabEtudiant(listeEtudiant,TAILLE);
                         break;
                         case 7:
                         verifierEtatEquipement(equip);
                         break;
                         case 8:
                         affichertabEquipement(equip,r);
                         break;
                        }


               }
                fclose;
    return 0;
}
int EtudiantMenu()
{
    int choix = 0;
    printf("\n************ Menu Etudiant *****************\n");
    printf("taper 1 pour creer etudiant \n");
    printf("taper 2 pour rechercher etudiant \n");
    printf("taper 3 pour modifier etudiant \n");
    printf("taper 4 pour rechercher equipement \n");
    printf("taper 5 pour modifier equipement \n");
    printf("taper 6 pour afficher tableau etudiant\n" );
    printf("taper 7 pour verifier equipement \n");
    printf("taper 8 pour tableau equipement \n");
    printf("faites votre choix \n");
    scanf("%d",&choix);
    return choix;
}
