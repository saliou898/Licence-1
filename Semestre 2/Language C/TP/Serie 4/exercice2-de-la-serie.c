#include<stdio.h>
#include<ctype.h>
typedef struct
{
    char nom[30];
    char prenom[50];
    int age;
} PERSONNE;
int main()
{
    int N,i,somage;
    float moyenage;
    PERSONNE P;
    do{
        printf("entrer le nombre de personne:");
        scanf("%d",&N);
    }while(N<=0);
    somage=0;
    for(i=1;i<N;i++)
    {
        printf("personne:",i);
        printf("entrer le nom:");
        scanf("%s",P.nom);
        printf("entrer le prenom:");
        scanf("%s",P.prenom);

        do{
             printf("entrer l'age:");
        scanf("%s",P.age);
        }while(P.age<=0);
        somage=somage+P.age;

     //AFFICHAGE DES PERSONNE
     printf("le nom est de : %s",P.nom);
     printf("le prenom est de : %s",P.prenom);
     printf("L'AGE est de :%d\n",P.age);


        // Transformation du nom en majuscules
        for (int j = 0; P.nom[j]; j++)
        {
            P.nom[j] = toupper(P.nom[j]);
        }

        // Transformation de l'initiale du prénom en majuscule
        P.prenom[0] = toupper(P.prenom[0]);

        printf("Nom : %s | Prénom : %s | Âge : %d\n",P.nom,P.prenom,P.age);


    }


    // calculons la moyen d'age//
    moyenage=somage/N;
    printf("la moyenne d'age est de :%f\n",moyenage);

}
