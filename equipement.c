#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"equipement.h"

Equipement enregistrerEquipement(){
Equipement E;
    printf("CODE : \n");
    scanf("%d",&E.code);
    printf("MODELE \n");
    scanf("%s",E.modele);

    return E;
}
int rechercherequipement(Equipement equipement[],int e,int code)
  {
    for (int i=0;i<e;i++) {
      if (code==equipement[i].code)
      {
        return i;
      }
    }
    return -1;
   }
void afficherEquipement(Equipement E)
{
printf("\n" );
printf("MODELE :%s \n",E.modele);
printf("CODE : %d \n",E.code);
}
void verifierEtatEquipement( Equipement *E){
    int choix;
    printf("avez vous des equipements endommagés? \n");
    printf("taper 1 si oui \n taper 2 sinon \n");
    scanf("%d",&choix);
    switch(choix){
        case 1:
        printf("entrez le nombre d'equipements endommagés \n");
        scanf("%d",&E->degat);
        break;
        case 2:
        system("exit");
        break;
    }



/*int rechercher_Equipement(int code_equipement, Equipement *a,Equipement t )
{
 for (int i = 0; i < t.nombre; i++)
 {
   if (code_equipement==a->code)
   {
     return 1;
   }
 }
 return -1;
}
*/
}
void modifierEquipement(Equipement e[],int t)
{

      printf("Entrez les information suivant:\n");
      printf("---------------------------------\n" );
      printf("CODE : \n");
      scanf("%d",&e[t].code);
      printf("MODELE \n");
      scanf("%s",e[t].modele);
}
/*void modifierEquipement(Equipement *E,Equipement eq){
    Equipement *tab;
    E->code=eq.code;
    strcpy(E->modele,eq.modele);
    tab=(Equipement*)realloc(tab,E->nombre*sizeof(Equipement));
}
*/
void affichertabEquipement(Equipement E[],int taille)
{
  for(int i=0;i<taille;i++)
  {
      printf("CODE :%d \n",E[i].code);
      printf("MODELE :%s \n",E[i].modele);
      printf("---------------------------------\n" );
    }
}
