#include<stdio.h>
#include<string.h>
typedef struct
{
char code[20],fonction[20],prenom[40],nom[50];
float salaire;
int nbre;
}Employe;
int main()
{
    Employe e;
    int i,Gaye,nbrc;
    Gaye=0;
    for(i=1;i<=3;i++)
    {
        printf("--------------EMPLOYE %d-------------\n",i);
        printf("Entrer votre nom:");
        scanf("%s",e.nom);
         printf("Entrer votre prenom:");
        scanf("%s",e.prenom);
         printf("Entrer votre code:");
        scanf("%s",e.code);
         printf("Entrer votre fonction:");
        scanf("%s",e.fonction);
         do{
             printf("Entrer votre salaire:");
        scanf("%f",&e.salaire);
         }while(e.salaire<=0);
           do{
             printf("Vous avez combien d'enfants:");
        scanf("%d",&e.nbre);
         }while(e.salaire<0);
         nbrc=strlen(e.prenom);
         if(nbrc>5 && (e.prenom[nbrc-1]=='E' || e.prenom[nbrc-1]=='e'))
         {
             printf("Nom: %s\n Prenom: %s\n",e.nom,e.prenom);
             printf(" Code: %s\n Fonction: %s\n Salaire: %.2f\n Nombre d'enfants: %d\n",e.code,e.fonction,e.salaire,e.nbre);
         }
         strupr(e.nom);
         if(strcmp(e.nom,"GAYE")==0)
         {
             Gaye++;
         }
    }
    printf("Il y'a %d employes qui ont portent le nom GAYE",Gaye);

}
