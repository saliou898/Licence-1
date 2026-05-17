#include<stdio.h>
#include<string.h>
typedef struct
{
char nom[7];
int coef;
float note;
}Matiere;
int main()
{
   Matiere m;
   int i,som,N,nbrc;
   float moy;
   do{
    printf("Combien de matieres:");
    scanf("%d",&N);
   }while(N<=0);
   int somcoef=0;
   som=0;
   for(i=1;i<=N;i++)
   {
     do{
        printf("Entrer le nom de la matiere:");
     scanf("%s",m.nom);
     nbrc=strlen(m.nom);
     }while(nbrc>7);
     fflush(stdin);
     do{
        printf("Le coefficient:");
        scanf("%d",&m.coef);
     }while(m.coef<1 || m.coef>6);
      do{
        printf("Votre note:");
        scanf("%f",&m.note);
     }while(m.note<0 || m.note>20);
     som+=(m.note*m.coef);
     somcoef+=m.coef;
     if(m.coef>=2)
     {
         printf("Nom: %s\n coef: %d\n note: %.2f\n",m.nom,m.coef,m.note);
     }

   }
   moy=som/somcoef;
   printf("La moyenne des notes est %.2f",moy);

   return 0;
}
