#include<stdio.h>
typedef struct
{
    char code[10];
    char libelle[30];
    int prix;
    float quantite;
} PRODUIT;
int main()
{
    PRODUIT P,maxproduit;
    int N,i;


        printf("saisir les 5 produit:\n");


    for(i=1;i<=5;i++)
    {
        printf("saisir le code:\n");
        scanf("%s",P.code);
         printf("saisir le libelle:\n");
        scanf("%s",P.libelle);
        do{
        printf("saisir le prix:\n");
        scanf("%d",&P.prix);
        }while(P.prix<=0);
        if(i==1)
        {
            maxproduit=P;
        }
        else
        {
            if(P.prix > maxproduit.prix)
            {
                maxproduit=P;
            }
        }
        do{
        printf("saisir la quantite:\n");
        scanf("%f",&P.quantite);
        }while(P.quantite<=0);
        }


    for(i=1;i<=5;i++)
    {
        printf("le code est de: %s\n",P.code);
        printf("le Libelle est de: %s\n",P.libelle);
        printf("le prix est de: %d\n",P.prix);
        printf("la quantite est de: %f\n",P.quantite);

    }


        //affichons les produits


    printf("le prix le plus cher est de: %s\n",maxproduit.code);
    printf("le prix le plus cher est de: %s\n",maxproduit.libelle);
    printf("le prix le plus cher est de: %d\n",maxproduit.prix);
    printf("le prix le plus cher est de: %f\n",maxproduit.quantite);

}
